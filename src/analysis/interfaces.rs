use std::collections::BTreeMap;

use log::debug;

use memflow::prelude::v1::*;

use pelite::pe64::exports::Export;
use pelite::pe64::{Pe, PeView};

use serde::{Deserialize, Serialize};

use crate::error::Result;
use crate::source2::InterfaceReg;

pub type InterfaceMap = BTreeMap<String, Vec<Interface>>;

#[derive(Debug, Deserialize, Serialize)]
pub struct Interface {
    pub name: String,
    pub value: u32,
}

pub fn interfaces(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<InterfaceMap> {
    process
        .module_list()?
        .iter()
        .filter_map(|module| {
            let buf = process.read_raw(module.base, module.size as _).ok()?;

            let view = PeView::from_bytes(&buf).ok()?;

            let ci_export = view
                .exports()
                .ok()?
                .by()
                .ok()?
                .name("CreateInterface")
                .ok()?;

            if let Export::Symbol(symbol) = ci_export {
                let list_addr = process
                    .read_addr64_rip(module.base + symbol)
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
) -> Result<Vec<Interface>> {
    let mut ifaces = Vec::new();

    let mut cur_reg = Pointer64::<InterfaceReg>::from(process.read_addr64(list_addr)?);

    while !cur_reg.is_null() {
        let reg = cur_reg.read(process)?;
        let name = reg.name.read_string(process)?.to_string();
        let instance = process.read_addr64_rip(reg.create_fn.address())?;

        let value = (instance - module.base) as u32;

        debug!(
            "found interface: {} @ {:#X} ({} + {:#X})",
            name,
            value as u64 + module.base.to_umem(),
            module.name,
            value
        );

        ifaces.push(Interface { name, value });

        cur_reg = reg.next;
    }

    ifaces.sort_unstable_by(|a, b| a.name.cmp(&b.name));

    Ok(ifaces)
}
