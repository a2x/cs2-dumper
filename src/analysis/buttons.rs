use log::debug;

use memflow::prelude::v1::*;

use pelite::pattern;
use pelite::pe64::{Pe, PeView};

use serde::{Deserialize, Serialize};

use crate::error::{Error, Result};
use crate::source2::KeyboardKey;

/// Represents a key button.
#[derive(Debug, Deserialize, Serialize)]
pub struct Button {
    pub name: String,
    pub value: u32,
}

pub fn buttons(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<Vec<Button>> {
    let module = process.module_by_name("client.dll")?;
    let buf = process.read_raw(module.base, module.size as _)?;

    let view = PeView::from_bytes(&buf)?;

    let mut save = [0; 2];

    if !view
        .scanner()
        .finds_code(pattern!("488b15${'} 4885d2 74? 0f1f40"), &mut save)
    {
        return Err(Error::Other("unable to find button list signature"));
    }

    read_buttons(process, &module, module.base + save[1])
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

    // Sort buttons by name.
    buttons.sort_unstable_by(|a, b| a.name.cmp(&b.name));

    Ok(buttons)
}
