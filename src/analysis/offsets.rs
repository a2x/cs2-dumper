use std::collections::BTreeMap;
use std::mem;
use std::str::FromStr;

use anyhow::Result;
use log::{debug, error};
use memflow::prelude::v1::*;

use crate::config::{CONFIG, Operation, Signature};

pub type OffsetMap = BTreeMap<String, BTreeMap<String, u32>>;

pub fn offsets<P: Process + MemoryView>(process: &mut P) -> Result<OffsetMap> {
    let mut modules = BTreeMap::new();

    for signatures in &CONFIG.signatures {
        for (module_name, module_signatures) in signatures {
            let module = match process.module_by_name(module_name) {
                Ok(module) => module,
                Err(err) => {
                    error!("unable to find module {}: {}", module_name, err);
                    continue;
                }
            };

            let buf = match process.read_raw(module.base, module.size as _).data_part() {
                Ok(buf) => buf,
                Err(err) => {
                    error!("unable to read module {}: {}", module_name, err);
                    continue;
                }
            };

            let mut offsets = BTreeMap::new();

            for signature in module_signatures {
                match read_offset(process, &module, &buf, signature) {
                    Ok(value) => {
                        offsets.insert(signature.name.clone(), value);
                    }
                    Err(err) => error!("{}: {}", signature.name, err),
                }
            }

            if !offsets.is_empty() {
                modules.insert(module_name.clone(), offsets);
            }
        }
    }

    Ok(modules)
}

fn read_offset<P: MemoryView>(
    process: &mut P,
    module: &ModuleInfo,
    module_data: &[u8],
    signature: &Signature,
) -> Result<u32> {
    let scan_offset = skidscan::Signature::from_str(&signature.pattern)
        .map_err(|_| anyhow::anyhow!("invalid signature pattern for {}", signature.name))?
        .scan(module_data)
        .ok_or_else(|| anyhow::anyhow!("signature not found"))?;

    let mut result = module.base + scan_offset;

    for operation in &signature.operations {
        result = match operation {
            Operation::Add { value } => result + *value,
            Operation::Rip { offset, len } => {
                let displacement: i32 = process.read(result + offset.unwrap_or(3)).data_part()?;
                (result + displacement) + len.unwrap_or(7)
            }
            Operation::Read => process.read_addr64(result).data_part()?,
            Operation::Slice { start, end } => {
                let bytes = process.read_raw(result + *start, end - start).data_part()?;
                let mut value = [0; mem::size_of::<usize>()];
                if bytes.len() > value.len() {
                    anyhow::bail!("slice exceeds the native pointer width");
                }
                value[..bytes.len()].copy_from_slice(&bytes);
                Address::from(usize::from_le_bytes(value))
            }
            Operation::Sub { value } => result - *value,
        };
    }

    let value = result
        .to_umem()
        .checked_sub(module.base.to_umem())
        .unwrap_or_else(|| result.to_umem()) as u32;

    debug!(
        "found offset: {} at {:#X} ({} + {:#X})",
        signature.name,
        module.base.to_umem() + value as u64,
        module.name,
        value
    );

    Ok(value)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn linux_signature_patterns_parse() {
        let mut count = 0;

        for module_signatures in &CONFIG.signatures {
            for (module, signatures) in module_signatures {
                for signature in signatures {
                    skidscan::Signature::from_str(&signature.pattern).unwrap_or_else(|err| {
                        panic!(
                            "invalid pattern for {} in {}: {:?}",
                            signature.name, module, err
                        )
                    });
                    count += 1;
                }
            }
        }

        assert!(count > 0, "no Linux signatures configured");
    }
}
