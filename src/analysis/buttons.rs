use std::collections::BTreeMap;

use anyhow::{Result, bail};

use log::debug;

use memflow::prelude::v1::*;

use pelite::pe64::Pe;

use super::offsets::OffsetMap;
use crate::source2::KeyButton;

pub type ButtonMap = BTreeMap<String, imem>;

pub fn buttons<P: Process + MemoryView>(
    process: &mut P,
    offsets: &OffsetMap,
) -> Result<ButtonMap> {
    let module = process.module_by_name("client.dll")?;

    let dw_button_system = offsets
        .get("client.dll")
        .and_then(|m| m.get("dwButtonSystem"))
        .ok_or_else(|| anyhow::anyhow!("dwButtonSystem not found in offsets"))?;

    read_buttons(process, &module, module.base + *dw_button_system)
}

fn read_buttons(
    mem: &mut impl MemoryView,
    module: &ModuleInfo,
    list_addr: Address,
) -> Result<ButtonMap> {
    let mut map = ButtonMap::new();

    let mut cur_button = Pointer64::<KeyButton>::from(mem.read_addr64(list_addr).data_part()?);

    while !cur_button.is_null() {
        let button = mem.read_ptr(cur_button).data_part()?;
        let name = mem.read_utf8(button.name.address(), 32).data_part()?;
        let rva = (cur_button.address() - module.base) + offset_of!(KeyButton.state) as imem;

        debug!(
            "found button: {} at {:#X} ({} + {:#X})",
            name,
            cur_button.to_umem() + offset_of!(KeyButton.state) as umem,
            module.name,
            rva
        );

        map.insert(name, rva);

        cur_button = button.next;
    }

    Ok(map)
}
