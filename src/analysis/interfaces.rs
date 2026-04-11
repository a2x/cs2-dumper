use std::collections::BTreeMap;

use log::debug;

use memflow::prelude::v1::*;

use serde::{Deserialize, Serialize};

use skidscan_macros::signature;

use crate::error::Result;
use crate::source2::InterfaceReg;

pub type InterfaceMap = BTreeMap<String, Vec<Interface>>;

#[derive(Deserialize, Serialize)]
pub struct Interface {
    pub name: String,
    pub value: u32,
}

pub fn interfaces(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<InterfaceMap> {
    process
        .module_list()?
        .iter()
        .filter_map(|module| interfaces_for_module(process, module).transpose())
        .collect()
}

pub fn interfaces_for_module(
    process: &mut IntoProcessInstanceArcBox<'_>,
    module: &ModuleInfo,
) -> Result<Option<(String, Vec<Interface>)>> {
    let buf = match process.read_raw(module.base, module.size as _) {
        Ok(buf) => buf,
        Err(_) => return Ok(None),
    };

    let Some(list_addr) = signature!("48 8B 1D ? ? ? ? 48 85 DB 74 ? 49 89 FC")
        .scan(&buf)
        .and_then(|result| process.read_addr64_rip(module.base + result).ok())
    else {
        return Ok(None);
    };

    let ifaces = read_interfaces(process, module, list_addr)?;
    if ifaces.is_empty() {
        return Ok(None);
    }

    Ok(Some((module.name.to_string(), ifaces)))
}

pub fn resolve_interface_singleton(
    process: &mut IntoProcessInstanceArcBox<'_>,
    module_name: &str,
    interface_name: &str,
) -> Result<(ModuleInfo, u32, Address)> {
    let module = process.module_by_name(module_name)?;
    let (_, entries) = interfaces_for_module(process, &module)?.ok_or(
        crate::error::Error::Other("module does not expose interfaces"),
    )?;

    let entry = entries
        .iter()
        .find(|entry| entry.name == interface_name)
        .ok_or(crate::error::Error::Other("interface not found"))?;

    let create_fn = module.base + entry.value as usize;
    let singleton = process.read_addr64_rip(create_fn)?;

    Ok((module, entry.value, singleton))
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
            "found interface: {} at {:#X} ({} + {:#X})",
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
