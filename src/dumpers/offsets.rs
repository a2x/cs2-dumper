use std::fs::File;

use crate::builder::FileBuilderEnum;
use crate::config::{Config, Operation::*};
use crate::dumpers::Entry;
use crate::error::{Error, Result};
use crate::mem::Address;
use crate::remote::Process;

use super::{generate_files, Entries};

pub fn dump_offsets(builders: &mut Vec<FileBuilderEnum>, process: &Process) -> Result<()> {
    let file = File::open("config.json")?;

    let config: Config = serde_json::from_reader(file).map_err(Error::SerdeError)?;

    let mut entries = Entries::new();

    log::info!("Dumping offsets...");

    for signature in config.signatures {
        let module = process.get_module_by_name(&signature.module)?;

        let mut address =
            Address::from(process.find_pattern(&signature.module, &signature.pattern)?);

        for operation in signature.operations {
            match operation {
                Add { value } => address += value,
                Dereference { times, size } => {
                    let times = times.unwrap_or(1);
                    let size = size.unwrap_or(8);

                    for _ in 0..times {
                        process.read_memory_raw(
                            address.0,
                            &mut address.0 as *mut _ as *mut _,
                            size,
                        )?;
                    }
                }
                Jmp { offset, length } => {
                    address = process.resolve_jmp(address.0, offset, length)?.into()
                }
                RipRelative { offset, length } => {
                    address = process.resolve_rip(address.0, offset, length)?.into()
                }
                Slice { start, end } => {
                    let mut result: usize = 0;

                    process.read_memory_raw(
                        address.add(start).0,
                        &mut result as *mut _ as *mut _,
                        end - start,
                    )?;

                    address = result.into();
                }
                Subtract { value } => address -= value,
            }
        }

        let (name, value) = if address.0 < module.address() {
            log::debug!("  └─ {} @ {:#X}", signature.name, address.0);

            (signature.name, address.0)
        } else {
            log::debug!(
                "  └─ {} @ {:#X} ({} + {:#X})",
                signature.name,
                address,
                signature.module,
                address.sub(module.address())
            );

            (signature.name, address.sub(module.address()).0)
        };

        entries
            .entry(signature.module.replace(".", "_"))
            .or_default()
            .push(Entry {
                name,
                value,
                comment: None,
            });
    }

    generate_files(builders, &entries, "offsets")?;

    Ok(())
}
