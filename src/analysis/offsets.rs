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
        .try_into()
        .map_or_else(|_| result.to_umem() as u32, |v| v);

    debug!("found offset: {} at {:#X}", signature.name, value);

    Ok(Offset {
        name: signature.name.clone(),
        value,
    })
}
