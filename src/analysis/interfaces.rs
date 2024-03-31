use std::collections::BTreeMap;
use std::env;

use log::debug;

use memflow::prelude::v1::*;

use serde::{Deserialize, Serialize};

use skidscan_macros::signature;

use crate::error::Result;
use crate::source_engine::InterfaceReg;

pub type InterfaceMap = BTreeMap<String, Vec<Interface>>;

#[derive(Debug, Deserialize, Serialize)]
pub struct Interface {
    pub name: String,
    pub value: u32,
}

pub fn interfaces(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<InterfaceMap> {
    let sig = match env::consts::OS {
        "linux" => signature!("48 8B 1D ? ? ? ? 48 85 DB 74 ? 49 89 FC"),
        "windows" => signature!("4C 8B 0D ? ? ? ? 4C 8B D2 4C 8B D9"),
        os => panic!("unsupported os: {}", os),
    };

    process
        .module_list()?
        .iter()
        .filter_map(|module| {
            let buf = process.read_raw(module.base, module.size as _).ok()?;

            let list_addr = sig
                .scan(&buf)
                .and_then(|ptr| process.read_addr64_rip(module.base + ptr).ok())?;

            read_interfaces(process, module, list_addr)
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

    let mut reg_ptr = Pointer64::<InterfaceReg>::from(process.read_addr64(list_addr)?);

    while !reg_ptr.is_null() {
        let reg = reg_ptr.read(process)?;
        let name = reg.name.read_string(process)?.to_string();

        let value = (reg.create_fn - module.base) as u32;

        debug!(
            "found interface: {} at {:#X} ({} + {:#X})",
            name,
            value as u64 + module.base.to_umem(),
            module.name,
            value
        );

        ifaces.push(Interface { name, value });

        reg_ptr = reg.next;
    }

    ifaces.sort_unstable_by(|a, b| a.name.cmp(&b.name));

    Ok(ifaces)
}
