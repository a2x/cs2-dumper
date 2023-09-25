use std::fs::File;

use crate::builder::FileBuilderEnum;
use crate::config::Config;
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

        if signature.relative {
            address = process.resolve_relative(address)?;
        }

        if signature.levels > 0 {
            for _ in 0..signature.levels {
                address = process.read_memory::<usize>(address)?;
            }
        }

        address += signature.offset as usize;

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
