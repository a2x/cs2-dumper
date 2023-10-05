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

        let mut offset: Option<u32> = None;

        for operation in signature.operations {
            match operation {
                Add { value } => {
                    address += value;
                }
                Dereference { times } => {
                    for _ in 0..times.unwrap_or(1) {
                        address = process.read_memory::<usize>(address.0)?.into();
                    }
                }
                Jmp { offset, length } => {
                    address = process.resolve_jmp(address.0, offset, length)?.into();
                }
                Offset {
                    offset: start_offset,
                } => {
                    offset = Some(process.read_memory::<u32>(address.0 + start_offset)?);
                }
                RipRelative { offset, length } => {
                    address = process.resolve_rip(address.0, offset, length)?.into();
                }
                Subtract { value } => {
                    address -= value;
                }
            }
        }

        let (name, value) = if let Some(offset) = offset {
            log::debug!("  └─ {} @ {:#X}", signature.name, offset);

            (signature.name, offset as usize)
        } else {
            log::debug!(
                "  └─ {} @ {:#X} ({} + {:#X})",
                signature.name,
                address,
                signature.module,
                address - module.address()
            );

            (signature.name, address.0 - module.address())
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
