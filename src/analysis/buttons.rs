use std::env;

use log::debug;

use memflow::prelude::v1::*;

use serde::{Deserialize, Serialize};

use skidscan_macros::signature;

use crate::error::{Error, Result};
use crate::source_engine::KeyboardKey;

#[derive(Debug, Deserialize, Serialize)]
pub struct Button {
    pub name: String,
    pub value: u32,
}

pub fn buttons(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<Vec<Button>> {
    let (module_name, sig) = match env::consts::OS {
        "linux" => (
            "libclient.so",
            signature!("48 8B 15 ? ? ? ? 48 89 83 ? ? ? ? 48 85 D2"),
        ),
        "windows" => (
            "client.dll",
            signature!("48 8B 15 ? ? ? ? 48 85 D2 74 ? 0F 1F 40"),
        ),
        os => panic!("unsupported os: {}", os),
    };

    let module = process.module_by_name(&module_name)?;
    let buf = process.read_raw(module.base, module.size as _)?;

    let list_addr = sig
        .scan(&buf)
        .and_then(|ptr| process.read_addr64_rip(module.base + ptr).ok())
        .ok_or_else(|| Error::Other("unable to read button list address"))?;

    read_buttons(process, &module, list_addr)
}

fn read_buttons(
    process: &mut IntoProcessInstanceArcBox<'_>,
    module: &ModuleInfo,
    list_addr: Address,
) -> Result<Vec<Button>> {
    let mut buttons = Vec::new();

    let mut key_ptr = Pointer64::<KeyboardKey>::from(process.read_addr64(list_addr)?);

    while !key_ptr.is_null() {
        let key = key_ptr.read(process)?;
        let name = key.name.read_string(process)?.to_string();

        let value =
            ((key_ptr.address() - module.base) + offset_of!(KeyboardKey.state) as i64) as u32;

        debug!(
            "found button: {} at {:#X} ({} + {:#X})",
            name,
            value as u64 + module.base.to_umem(),
            module.name,
            value
        );

        buttons.push(Button { name, value });

        key_ptr = key.next;
    }

    buttons.sort_unstable_by(|a, b| a.name.cmp(&b.name));

    Ok(buttons)
}
