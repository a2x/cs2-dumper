use std::fs::File;

use crate::builder::FileBuilderEnum;
use crate::config::{Config, Operation::*};
use crate::dumpers::Entry;
use crate::error::{Error, Result};
use crate::mem::Address;
use crate::remote::Process;

use super::{generate_files, Entries};

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn build_number() -> Result<()> {
        let process = Process::new("cs2.exe")?;

        let engine_base = process.get_module_by_name("engine2.dll")?.base();

        let build_number = process.read_memory::<u32>(engine_base + 0x487514)?;

        println!("Build number: {}", build_number);

        Ok(())
    }

    #[test]
    fn global_vars() -> Result<()> {
        let process = Process::new("cs2.exe")?;

        let client_base = process.get_module_by_name("client.dll")?.base();

        let global_vars = process.read_memory::<usize>(client_base + 0x1692EE8)?;

        let current_map_name =
            process.read_string(process.read_memory::<usize>(global_vars + 0x188)?)?;

        println!("Current map name: {}", current_map_name);

        Ok(())
    }

    #[test]
    fn local_player() -> Result<()> {
        let process = Process::new("cs2.exe")?;

        let client_base = process.get_module_by_name("client.dll")?.base();

        let local_player_controller = process.read_memory::<usize>(client_base + 0x17DE508)?;

        let player_name = process.read_string(local_player_controller + 0x610)?;

        println!("Name: {}", player_name);

        Ok(())
    }

    #[test]
    fn window_size() -> Result<()> {
        let process = Process::new("cs2.exe")?;

        let engine_base = process.get_module_by_name("engine2.dll")?.base();

        let window_width = process.read_memory::<u32>(engine_base + 0x538670)?;
        let window_height = process.read_memory::<u32>(engine_base + 0x538674)?;

        println!("Window size: {}x{}", window_width, window_height);

        Ok(())
    }
}

pub fn dump_offsets(builders: &mut Vec<FileBuilderEnum>, process: &Process) -> Result<()> {
    let file = File::open("config.json")?;

    let config: Config = serde_json::from_reader(file).map_err(Error::SerdeError)?;

    let mut entries = Entries::new();

    log::info!("Dumping offsets...");

    for signature in config.signatures {
        let module = process.get_module_by_name(&signature.module)?;

        if let Ok(address) = process.find_pattern(&signature.module, &signature.pattern) {
            let mut address = Address::from(address);

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

            let (name, value) = if address.0 < module.base() {
                log::debug!("  └─ {} @ {:#X}", signature.name, address.0);

                (signature.name, address.0)
            } else {
                log::debug!(
                    "  └─ {} @ {:#X} ({} + {:#X})",
                    signature.name,
                    address,
                    signature.module,
                    address.sub(module.base())
                );

                (signature.name, address.sub(module.base()).0)
            };

            entries
                .entry(signature.module.replace(".", "_"))
                .or_default()
                .push(Entry {
                    name,
                    value,
                    comment: None,
                });
        } else {
            log::error!("Failed to find pattern for {}.", signature.name);
        }
    }

    generate_files(builders, &entries, "offsets")?;

    Ok(())
}
