use std::collections::BTreeMap;
use std::mem;
use std::str::FromStr;

use log::{debug, error};

use memflow::prelude::v1::*;

use serde::{Deserialize, Serialize};

use crate::config::{Operation, Signature, CONFIG};
use crate::error::{Error, Result};

pub type OffsetMap = BTreeMap<String, Vec<Offset>>;

#[derive(Deserialize, Serialize)]
pub struct Offset {
    pub name: String,
    pub value: u32,
}

pub fn offsets(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<OffsetMap> {
    let mut map = BTreeMap::new();

    for (module_name, sigs) in CONFIG.signatures.iter().flatten() {
        let module = process.module_by_name(module_name)?;

        let mut offsets: Vec<_> = sigs
            .iter()
            .filter_map(|sig| match read_offset(process, &module, sig) {
                Ok(offset) => Some(offset),
                Err(err) => {
                    error!("{}", err);

                    None
                }
            })
            .collect();

        if !offsets.is_empty() {
            offsets.sort_unstable_by(|a, b| a.name.cmp(&b.name));

            map.insert(module_name.to_string(), offsets);
        }
    }

    Ok(map)
}

fn read_offset(
    process: &mut IntoProcessInstanceArcBox<'_>,
    module: &ModuleInfo,
    signature: &Signature,
) -> Result<Offset> {
    let buf = process.read_raw(module.base, module.size as _)?;

    let addr = skidscan::Signature::from_str(&signature.pattern)?
        .scan(&buf)
        .ok_or_else(|| Error::SignatureNotFound(signature.name.clone()))?;

    let mut result = module.base + addr;

    for op in &signature.operations {
        result = match op {
            Operation::Add { value } => result + *value,
            Operation::Rip { offset, len } => {
                let offset: i32 = process.read(result + offset.unwrap_or(0x3))?;

                (result + offset) + len.unwrap_or(7)
            }
            Operation::Read => process.read_addr64(result)?,
            Operation::Slice { start, end } => {
                let buf = process.read_raw(result + *start, end - start)?;

                let mut bytes = [0; mem::size_of::<usize>()];

                bytes[..buf.len()].copy_from_slice(&buf);

                usize::from_le_bytes(bytes).into()
            }
            Operation::Sub { value } => result - *value,
        };
    }

    let value = (result - module.base)
        .try_into().unwrap_or_else(|_| result.to_umem() as u32);

    debug!("found offset: {} at {:#X}", signature.name, value);

    Ok(Offset {
        name: signature.name.clone(),
        value,
    })
}

#[cfg(test)]
mod tests {
    use std::fs;

    use serde_json::Value;

    use super::*;

    fn setup() -> Result<IntoProcessInstanceArcBox<'static>> {
        let os = memflow_native::create_os(&OsArgs::default(), LibArc::default())
            .map_err(|e| {
                println!("create_os failed: {:?}", e);
                e
            })?;

        let process = os.into_process_by_name("cs2")
            .map_err(|e| {
                println!("into_process_by_name failed: {:?}", e);
                e
            })?;

        Ok(process)
    }

    fn get_offset_value(module_name: &str, offset_name: &str) -> Option<u64> {
        let content = fs::read_to_string("output/offsets.json").ok()?;
        let value: Value = serde_json::from_str(&content).ok()?;

        let offsets = value.get(module_name)?.as_array()?;

        offsets.iter().find_map(|offset| {
            if offset.get("name")?.as_str()? == offset_name {
                offset.get("value")?.as_u64()
            } else {
                None
            }
        })
    }

    #[test]
    fn window_size() -> Result<()> {
        let mut process = setup()?;

        let engine_base = process.module_by_name("libengine2.so")?.base;

        let window_width_offset = get_offset_value("libengine2.so", "dwWindowWidth").unwrap();
        let window_height_offset = get_offset_value("libengine2.so", "dwWindowHeight").unwrap();

        // The game stores window width/height as u32 in libengine2.so on Linux
        let window_width = process.read::<u32>(Address::from(engine_base + window_width_offset)).data_part()?;
        let window_height = process.read::<u32>(Address::from(engine_base + window_height_offset)).data_part()?;

        println!("window size: {}x{}", window_width, window_height);

        // Verify dwNetworkGameClient mapping is correct by reading its pointer/vtable base
        let network_game_client_offset = get_offset_value("libengine2.so", "dwNetworkGameClient").unwrap();
        let network_game_client: u64 = process.read(Address::from(engine_base + network_game_client_offset)).data_part()?;
        println!("dwNetworkGameClient pointer: {:#X}", network_game_client);

        if network_game_client != 0 {
            let vtable: u64 = process.read(Address::from(network_game_client)).data_part().unwrap_or(0);
            println!("CNetworkGameClient vtable base: {:#X}", vtable);
        }

        Ok(())
    }
}

