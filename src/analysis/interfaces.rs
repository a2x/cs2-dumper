use std::collections::BTreeMap;

use log::debug;

use memflow::prelude::v1::*;

use pelite::pattern;
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

            let mut save = [0; 2];

            if !view
                .scanner()
                .finds_code(pattern!("4c8b0d${'} 4c8bd2 4c8bd9"), &mut save)
            {
                return None;
            }

            read_interfaces(process, module, module.base + save[1])
                .ok()
                .filter(|ifaces| !ifaces.is_empty())
                .map(|ifaces| Ok((module.name.to_string(), ifaces)))
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

        let value = (reg.create_fn.address() - module.base) as u32;

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
