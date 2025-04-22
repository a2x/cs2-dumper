use std::collections::BTreeMap;

use anyhow::Result;

use log::debug;

use memflow::prelude::v1::*;

use pelite::pe64::exports::Export;
use pelite::pe64::{Pe, PeView};

use crate::source2::InterfaceReg;

pub type InterfaceMap = BTreeMap<String, BTreeMap<String, umem>>;

pub fn interfaces<P: Process + MemoryView>(process: &mut P) -> Result<InterfaceMap> {
    process
        .module_list()?
        .iter()
        .filter(|module| module.name.as_ref() != "crashandler64.dll")
        .filter_map(|module| {
            let buf = process
                .read_raw(module.base, module.size as _)
                .data_part()
                .ok()?;

            let view = PeView::from_bytes(&buf).ok()?;

            let ci_export = view
                .exports()
                .ok()?
                .by()
                .ok()?
                .name("CreateInterface")
                .ok()?;

            if let Export::Symbol(symbol) = ci_export {
                let list_addr = read_addr64_rip(process, module.base + symbol).ok()?;

                return read_interfaces(process, module, list_addr)
                    .ok()
                    .filter(|ifaces| !ifaces.is_empty())
                    .map(|ifaces| Ok((module.name.to_string(), ifaces)));
            }

            None
        })
        .collect()
}

fn read_interfaces(
    mem: &mut impl MemoryView,
    module: &ModuleInfo,
    list_addr: Address,
) -> Result<BTreeMap<String, umem>> {
    let mut ifaces = BTreeMap::new();

    let mut cur_reg = Pointer64::<InterfaceReg>::from(mem.read_addr64(list_addr).data_part()?);

    while !cur_reg.is_null() {
        let reg = mem.read_ptr(cur_reg).data_part()?;
        let name = mem.read_utf8(reg.name.address(), 128).data_part()?;
        let instance = read_addr64_rip(mem, reg.create_fn.address())?;
        let value = instance.wrapping_sub(module.base).to_umem();

        debug!(
            "found interface: {} at {:#X} ({} + {:#X})",
            name,
            value.wrapping_add(module.base.to_umem()),
            module.name,
            value
        );

        ifaces.insert(name, value);

        cur_reg = reg.next;
    }

    Ok(ifaces)
}

fn read_addr64_rip(mem: &mut impl MemoryView, addr: Address) -> Result<Address> {
    let disp = mem.read::<i32>(addr + 0x3).data_part()?;

    Ok(addr + 0x7 + disp)
}
