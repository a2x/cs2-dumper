use std::collections::BTreeMap;

use anyhow::Result;

use log::debug;

use memflow::prelude::v1::*;

use pelite::pe64::exports::Export;
use pelite::pe64::{Pe, PeView};

use crate::mem::read_addr64_rip;
use crate::source2::InterfaceReg;

pub type InterfaceMap = BTreeMap<String, BTreeMap<String, imem>>;

pub fn interfaces(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<InterfaceMap> {
    process
        .module_list()?
        .iter()
        .filter_map(|module| {
            if module.name.to_string() == "crashhandler64.dll" {
                return None;
            }

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
                let list_addr = read_addr64_rip(process, module.base + symbol)
                    .data_part()
                    .ok()?;

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
    process: &mut IntoProcessInstanceArcBox<'_>,
    module: &ModuleInfo,
    list_addr: Address,
) -> Result<BTreeMap<String, imem>> {
    let mut ifaces = BTreeMap::new();

    let mut cur_reg = Pointer64::<InterfaceReg>::from(process.read_addr64(list_addr).data_part()?);

    while !cur_reg.is_null() {
        let reg = process.read_ptr(cur_reg).data_part()?;
        let name = process.read_utf8(reg.name.address(), 128).data_part()?;
        let instance = read_addr64_rip(process, reg.create_fn.address())?;
        let value = instance - module.base;

        debug!(
            "found interface: {} at {:#X} ({} + {:#X})",
            name,
            value as u64 + module.base.to_umem(),
            module.name,
            value
        );

        ifaces.insert(name, value);

        cur_reg = reg.next;
    }

    Ok(ifaces)
}
