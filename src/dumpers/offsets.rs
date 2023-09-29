use std::fs::File;

use crate::builder::FileBuilderEnum;
use crate::config::{Config, Operation};
use crate::error::{Error, Result};
use crate::remote::Process;

use super::{generate_file, Entries};

pub fn dump_offsets(builders: &mut Vec<FileBuilderEnum>, process: &Process) -> Result<()> {
    let file = File::open("config.json")?;

    let config: Config = serde_json::from_reader(file).map_err(Error::SerdeError)?;

    let mut entries = Entries::new();

    log::info!("Dumping offsets...");

    for signature in config.signatures {
        let module = process.get_module_by_name(&signature.module)?;

        let mut address = process.find_pattern(&signature.module, &signature.pattern)?;

        for operation in signature.operations {
            match operation {
                Operation::Add { value } => {
                    address += value;
                }
                Operation::Dereference { times } => {
                    for _ in 0..times.unwrap_or(1) {
                        address = process.read_memory::<usize>(address)?;
                    }
                }
                Operation::Jmp => {
                    address = process.resolve_jmp(address)?;
                }
                Operation::RipRelative => {
                    address = process.resolve_rip(address)?;
                }
                Operation::Subtract { value } => {
                    address -= value;
                }
            }
        }

        log::info!(
            "  -> Found '{}' @ {:#X} (RVA: {:#X})",
            signature.name,
            address,
            address - module.address()
        );

        entries
            .entry(signature.module.replace(".", "_"))
            .or_default()
            .push((signature.name, address - module.address()));
    }

    for builder in builders.iter_mut() {
        generate_file(builder, "offsets", &entries)?;
    }

    Ok(())
}
