use std::fs::File;

use anyhow::Result;

use convert_case::{Case, Casing};

use crate::builder::FileBuilderEnum;
use crate::config::{Config, Operation::*};
use crate::dumpers::Entry;
use crate::remote::Process;

use super::{generate_files, Entries};

#[cfg(test)]
mod tests {
    use std::ffi::c_char;
    use std::mem::offset_of;

    use super::*;

    #[test]
    fn build_number() -> Result<()> {
        let process = Process::new("cs2.exe")?;

        let engine_base = process.get_module_by_name("engine2.dll")?.base_address();

        let build_number = process.read_memory::<u32>(engine_base + 0x487514)?;

        println!("Build number: {}", build_number);

        Ok(())
    }

    #[test]
    fn global_vars() -> Result<()> {
        #[derive(Debug)]
        #[repr(C)]
        struct GlobalVarsBase {
            real_time: f32,                  // 0x0000
            frame_count: i32,                // 0x0004
            pad_0: [u8; 0x8],                // 0x0008
            max_clients: i32,                // 0x0010
            interval_per_tick: f32,          // 0x0014
            pad_1: [u8; 0x14],               // 0x0018
            current_time: f32,               // 0x002C
            current_time2: f32,              // 0x0030
            pad_2: [u8; 0xC],                // 0x0034
            tick_count: i32,                 // 0x0040
            interval_per_tick2: f32,         // 0x0044
            pad_3: [u8; 0x138],              // 0x0048
            current_map: *const c_char,      // 0x0180
            current_map_name: *const c_char, // 0x0188
        }

        impl GlobalVarsBase {
            fn current_map(&self, process: &Process) -> Result<String> {
                let name_ptr = process.read_memory::<usize>(
                    (self as *const _ as usize + offset_of!(Self, current_map)).into(),
                )?;

                process.read_string(name_ptr.into())
            }

            fn current_map_name(&self, process: &Process) -> Result<String> {
                let name_ptr = process.read_memory::<usize>(
                    (self as *const _ as usize + offset_of!(Self, current_map_name)).into(),
                )?;

                process.read_string(name_ptr.into())
            }
        }

        let process = Process::new("cs2.exe")?;

        let client_base = process.get_module_by_name("client.dll")?.base_address();

        let global_vars = process.read_memory::<*const GlobalVarsBase>(client_base + 0x1696F40)?;

        let current_map_name = unsafe {
            (*global_vars)
                .current_map_name(&process)
                .unwrap_or_default()
        };

        println!("Current map name: {}", current_map_name);

        Ok(())
    }

    #[test]
    fn local_player() -> Result<()> {
        let process = Process::new("cs2.exe")?;

        let client_base = process.get_module_by_name("client.dll")?.base_address();

        let local_player_controller = process.read_memory::<usize>(client_base + 0x17E27C8)?;

        let player_name = process.read_string((local_player_controller + 0x610).into())?;

        println!("Local player name: {}", player_name);

        Ok(())
    }

    #[test]
    fn window_size() -> Result<()> {
        let process = Process::new("cs2.exe")?;

        let engine_base = process.get_module_by_name("engine2.dll")?.base_address();

        let window_width = process.read_memory::<u32>(engine_base + 0x5386D0)?;
        let window_height = process.read_memory::<u32>(engine_base + 0x5386D4)?;

        println!("Window size: {}x{}", window_width, window_height);

        Ok(())
    }
}

pub fn dump_offsets(builders: &mut Vec<FileBuilderEnum>, process: &Process) -> Result<()> {
    let file = File::open("config.json")?;

    let config: Config = serde_json::from_reader(file)?;

    let mut entries = Entries::new();

    log::info!("Dumping offsets...");

    for signature in config.signatures {
        log::info!("Searching for {}...", signature.name);

        let module = process.get_module_by_name(&signature.module)?;

        let mut addr = match process.find_pattern(&signature.module, &signature.pattern) {
            Ok(a) => a,
            Err(_) => {
                log::error!("Failed to find pattern for {}.", signature.name);

                continue;
            }
        };

        for op in signature.operations {
            match op {
                Add { value } => addr += value,
                Dereference { times, size } => {
                    let times = times.unwrap_or(1);
                    let size = size.unwrap_or(8);

                    for _ in 0..times {
                        process.read_memory_raw(addr, &mut addr.0 as *mut _ as *mut _, size)?;
                    }
                }
                Jmp { offset, length } => addr = process.resolve_jmp(addr, offset, length)?.into(),
                RipRelative { offset, length } => {
                    addr = process.resolve_rip(addr, offset, length)?.into()
                }
                Slice { start, end } => {
                    let mut result: usize = 0;

                    process.read_memory_raw(
                        addr.add(start),
                        &mut result as *mut _ as *mut _,
                        end - start,
                    )?;

                    addr = result.into();
                }
                Subtract { value } => addr -= value,
            }
        }

        let (name, value) = if addr < module.base_address() {
            log::debug!("  └─ {} @ {:#X}", signature.name, addr.0);

            (signature.name, addr.0)
        } else {
            log::debug!(
                "  └─ {} @ {:#X} ({} + {:#X})",
                signature.name,
                addr,
                signature.module,
                addr.sub(module.base_address().0)
            );

            (signature.name, addr.sub(module.base_address().0).0)
        };

        let container = entries
            .entry(
                signature
                    .module
                    .replace(".", "_")
                    .to_case(Case::Snake)
                    .to_case(Case::Pascal),
            )
            .or_default();

        container.comment = Some(signature.module);

        container.data.push(Entry {
            name,
            value,
            comment: None,
        });
    }

    generate_files(builders, &entries, "offsets")?;

    Ok(())
}
