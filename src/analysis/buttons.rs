use std::collections::BTreeMap;

use anyhow::{Result, bail};
use log::debug;
use memflow::prelude::v1::*;
use skidscan_macros::signature;

use crate::mem::{MemoryViewExt, PointerExt};
use crate::source2::KeyButton;

pub type ButtonMap = BTreeMap<String, umem>;

pub fn buttons<P: Process + MemoryView>(process: &mut P) -> Result<ButtonMap> {
    let module = process.module_by_name("libclient.so")?;
    let buf = process
        .read_raw(module.base, module.size as _)
        .data_part()?;

    let list_addr = signature!("48 8D 15 ? ? ? ? 66 44 89 ? ? 48 8D 35")
        .scan(&buf)
        .and_then(|result| process.read_addr64_rip(module.base + result).ok())
        .ok_or_else(|| anyhow::anyhow!("unable to read button list address"))?;

    let list_head = process.read_addr64(list_addr).data_part()?;

    read_buttons(process, &module, list_head)
}

fn read_buttons(
    mem: &mut impl MemoryView,
    module: &ModuleInfo,
    list_head: Address,
) -> Result<ButtonMap> {
    let mut result = ButtonMap::new();
    let mut button_ptr = Pointer64::<KeyButton>::from(list_head);

    while !button_ptr.is_null() {
        let button = mem.read_ptr(button_ptr).data_part()?;
        let name = button.name.read_string(mem)?.to_string();
        let state_addr = button_ptr.address() + offset_of!(KeyButton.state);

        if let Some(state_rva) = state_addr.to_umem().checked_sub(module.base.to_umem()) {
            debug!(
                "found button: {} at {:#X} ({} + {:#X})",
                name,
                state_addr.to_umem(),
                module.name,
                state_rva
            );

            result.insert(name, state_rva);
        }

        button_ptr = button.next;
    }

    if result.is_empty() {
        bail!("no buttons found in {}", module.name);
    }

    Ok(result)
}
