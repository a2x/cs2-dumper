use std::collections::BTreeMap;

use anyhow::Result;
use log::debug;
use memflow::prelude::v1::*;
use skidscan_macros::signature;

use crate::mem::{MemoryViewExt, PointerExt};
use crate::source2::InterfaceReg;

pub type InterfaceMap = BTreeMap<String, BTreeMap<String, umem>>;

pub fn interfaces<P: Process + MemoryView>(process: &mut P) -> Result<InterfaceMap> {
    process
        .module_list()?
        .iter()
        .filter_map(|module| {
            let buf = process.read_raw(module.base, module.size as _).ok()?;
            let list_addr = signature!("48 8B 1D ? ? ? ? 48 85 DB 74 ? 49 89 FC")
                .scan(&buf)
                .and_then(|result| process.read_addr64_rip(module.base + result).ok())?;
            let list_head = process.read_addr64(list_addr).data_part().ok()?;

            read_interfaces(process, module, list_head)
                .ok()
                .filter(|ifaces| !ifaces.is_empty())
                .map(|ifaces| Ok((module.name.to_string(), ifaces)))
        })
        .collect()
}

fn read_interfaces(
    mem: &mut impl MemoryView,
    module: &ModuleInfo,
    list_head: Address,
) -> Result<BTreeMap<String, umem>> {
    let mut result = BTreeMap::new();
    let mut reg_ptr = Pointer64::<InterfaceReg>::from(list_head);

    while !reg_ptr.is_null() {
        let reg = mem.read_ptr(reg_ptr).data_part()?;
        let name = reg.name.read_string(mem)?.to_string();
        let value = reg
            .create_fn
            .address()
            .to_umem()
            .checked_sub(module.base.to_umem());

        if let Some(value) = value {
            debug!(
                "found interface: {} at {:#X} ({} + {:#X})",
                name,
                value + module.base.to_umem(),
                module.name,
                value
            );
            result.insert(name, value);
        }

        reg_ptr = reg.next;
    }

    Ok(result)
}
