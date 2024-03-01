use std::fs::File;

use anyhow::Result;

use simplelog::{debug, error, info};

use super::{generate_files, Entries, Entry};

use crate::builder::FileBuilderEnum;
use crate::config::Config;
use crate::config::Operation::*;
use crate::os::Process;

pub fn dump_offsets(
    process: &Process,
    builders: &mut Vec<FileBuilderEnum>,
    file_path: &str,
    indent: usize,
) -> Result<()> {
    let file = File::open("config.json")?;

    let config: Config = serde_json::from_reader(file)?;

    info!("Dumping offsets...");

    let mut entries = Entries::new();

    for signature in config.signatures {
        debug!("Searching for <bright-yellow>{}</>...", signature.name);

        let module = process
            .get_module_by_name(&signature.module)
            .expect(&format!("Failed to find module {}.", signature.module));

        let mut address = match process.find_pattern(&signature.module, &signature.pattern) {
            Some(a) => a,
            None => {
                error!(
                    "Failed to find pattern for <bright-yellow>{}</>.",
                    signature.name
                );

                continue;
            }
        };

        for operation in signature.operations {
            match operation {
                Add { value } => address += value,
                Deref { times, size } => {
                    let times = times.unwrap_or(1);
                    let size = size.unwrap_or(8);

                    for _ in 0..times {
                        process.read_memory_raw(address, &mut address as *mut _ as *mut _, size)?;
                    }
                }
                Jmp { offset, length } => {
                    address = process.resolve_jmp(address, offset, length)?.into();
                }
                Rip { offset, length } => {
                    address = process.resolve_rip(address, offset, length)?.into()
                }
                Slice { start, end } => {
                    let mut result: usize = 0;

                    process.read_memory_raw(
                        address + start,
                        &mut result as *mut _ as *mut _,
                        end - start,
                    )?;

                    address = result.into();
                }
                Sub { value } => address -= value,
            }
        }

        let (name, value) = if address < module.base() {
            debug!(
                "Found <bright-yellow>{}</> @ <bright-blue>{:#X}</>",
                signature.name, address
            );

            (signature.name, address)
        } else {
            debug!(
                "Found <bright-yellow>{}</> @ <bright-magenta>{:#X}</> (<blue>{}</> + <bright-blue>{:#X}</>)",
                signature.name,
                address,
                signature.module,
                address - module.base()
            );

            (signature.name, address - module.base())
        };

        if name == "dwBuildNumber" {
            let build_number = process.read_memory::<u32>(module.base() + value)?;

            debug!("Game build number: <bright-yellow>{}</>", build_number);

            let container = entries.entry("game_info".to_string()).or_default();

            container.comment =
                Some("Some additional information about the game at dump time".to_string());

            container.data.push(Entry {
                name: "buildNumber".to_string(),
                value: build_number as usize,
                comment: Some("Game build number".to_string()),
                indent: Some(indent),
            });
        }

        let container = entries
            .entry(signature.module.replace(".", "_"))
            .or_default();

        container.comment = Some(signature.module);

        container.data.push(Entry {
            name,
            value,
            comment: None,
            indent: Some(indent),
        });
    }

    generate_files(builders, &entries, file_path, "offsets")?;

    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    use core::arch::x86_64::_bittest;

    use serde_json::Value;

    use std::ffi::{c_char, c_void};
    use std::fs;
    use std::mem::offset_of;
    use std::thread::sleep;
    use std::time::Duration;

    fn setup() -> Result<Process> {
        let mut process = Process::new("cs2.exe")?;

        process.initialize()?;

        Ok(process)
    }

    fn get_class_field(module_name: &str, class_name: &str, class_key: &str) -> Option<u64> {
        let content = match fs::read_to_string(format!("generated/{}.json", module_name)) {
            Ok(content) => content,
            Err(e) => {
                eprintln!("Error reading file: {}", e);

                return None;
            }
        };

        let value: Value = match serde_json::from_str(&content) {
            Ok(parsed_value) => parsed_value,
            Err(e) => {
                eprintln!("Error parsing JSON: {}", e);

                return None;
            }
        };

        let class_value = &value[class_name];
        let class_data = &class_value["data"];
        let class_key_value = &class_data[class_key];
        let value = class_key_value["value"].as_u64();

        value
    }

    fn get_offset_value(module_name: &str, offset_name: &str) -> Option<u64> {
        let content = match fs::read_to_string("generated/offsets.json") {
            Ok(content) => content,
            Err(e) => {
                eprintln!("Error reading file: {}", e);

                return None;
            }
        };

        let value: Value = match serde_json::from_str(&content) {
            Ok(parsed_value) => parsed_value,
            Err(e) => {
                eprintln!("Error parsing JSON: {}", e);

                return None;
            }
        };

        let class_value = &value[module_name.replace(".", "_")];
        let class_data = &class_value["data"];
        let class_key_value = &class_data[offset_name];
        let value = class_key_value["value"].as_u64();

        value
    }

    #[test]
    fn build_number() -> Result<()> {
        let process = setup()?;

        let engine_base = process
            .get_module_by_name("engine2.dll")
            .expect("Failed to find engine2.dll")
            .base();

        let build_number_offset = get_offset_value("engine2.dll", "dwBuildNumber")
            .expect("Failed to find dwBuildNumber offset");

        let build_number =
            process.read_memory::<u32>(engine_base + build_number_offset as usize)?;

        println!("Build number: {}", build_number);

        Ok(())
    }

    #[test]
    fn force_buttons() -> Result<()> {
        let process = setup()?;

        let client_base = process
            .get_module_by_name("client.dll")
            .expect("Failed to find client.dll")
            .base();

        const FORCE_BUTTONS: [&str; 8] = [
            "dwForceAttack",
            "dwForceAttack2",
            "dwForceBackward",
            "dwForceCrouch",
            "dwForceForward",
            "dwForceJump",
            "dwForceLeft",
            "dwForceRight",
        ];

        let get_key_state = |value: u32| -> &str {
            match value {
                256 => "Key up",
                65537 => "Key down",
                _ => "Unknown",
            }
        };

        // Sleep for a second, so we're able to test.
        sleep(Duration::from_secs(1));

        for button in &FORCE_BUTTONS {
            let offset = get_offset_value("client.dll", button)
                .expect(&format!("Failed to find {} offset", button));

            let value = process.read_memory::<u32>(client_base + offset as usize)?;

            println!("{}: {}", button, get_key_state(value));
        }

        Ok(())
    }

    #[test]
    fn global_vars() -> Result<()> {
        #[derive(Debug)]
        #[repr(C)]
        struct GlobalVarsBase {
            real_time: f32,                  // 0x0000
            frame_count: i32,                // 0x0004
            frame_time: f32,                 // 0x0008
            absolute_frame_time: f32,        // 0x000C
            max_clients: i32,                // 0x0010
            pad_0: [u8; 0x14],               // 0x0014
            frame_time_2: f32,               // 0x0028
            current_time: f32,               // 0x002C
            current_time_2: f32,             // 0x0030
            pad_1: [u8; 0xC],                // 0x0034
            tick_count: f32,                 // 0x0040
            pad_2: [u8; 0x4],                // 0x0044
            network_channel: *const c_void,  // 0x0048
            pad_3: [u8; 0x130],              // 0x0050
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

        let process = setup()?;

        let client_base = process
            .get_module_by_name("client.dll")
            .expect("Failed to find client.dll")
            .base();

        let global_vars_offset = get_offset_value("client.dll", "dwGlobalVars")
            .expect("Failed to find dwGlobalVars offset");

        let global_vars = process
            .read_memory::<*const GlobalVarsBase>(client_base + global_vars_offset as usize)?;

        let current_map_name = unsafe {
            (*global_vars)
                .current_map_name(&process)
                .unwrap_or_default()
        };

        println!("Current map name: {}", current_map_name);

        Ok(())
    }

    #[test]
    fn is_key_down() -> Result<()> {
        let process = setup()?;

        let input_system_base = process
            .get_module_by_name("inputsystem.dll")
            .expect("Failed to find inputsystem.dll")
            .base();

        let input_system_offset = get_offset_value("inputsystem.dll", "dwInputSystem")
            .expect("Failed to find dwInputSystem offset");

        let input_system = input_system_base + input_system_offset as usize;

        let is_key_down = |key_code: i32| -> bool {
            let key_map_element = process
                .read_memory::<i32>((input_system + 0x4 * (key_code as usize / 32) + 0x12A0).into())
                .unwrap_or(0);

            unsafe { _bittest(&key_map_element, key_code & 0x1F) != 0 }
        };

        // Sleep for a second, so we're able to test.
        sleep(Duration::from_secs(1));

        // See https://www.unknowncheats.me/forum/3855779-post889.html for button codes.
        println!("INSERT key down: {}", is_key_down(73));

        Ok(())
    }

    #[test]
    fn local_player_controller() -> Result<()> {
        let process = setup()?;

        let client_base = process
            .get_module_by_name("client.dll")
            .expect("Failed to find client.dll")
            .base();

        let local_player_controller_offset =
            get_offset_value("client.dll", "dwLocalPlayerController")
                .expect("Failed to find dwLocalPlayerController offset");

        let player_name_offset =
            get_class_field("client.dll", "CBasePlayerController", "m_iszPlayerName")
                .expect("Failed to find m_iszPlayerName offset");

        let local_player_controller =
            process.read_memory::<usize>(client_base + local_player_controller_offset as usize)?;

        let player_name =
            process.read_string((local_player_controller + player_name_offset as usize).into())?;

        println!("Local player name: {}", player_name);

        Ok(())
    }

    #[test]
    fn local_player_pawn() -> Result<()> {
        #[derive(Debug)]
        #[repr(C)]
        struct Vector3D {
            x: f32,
            y: f32,
            z: f32,
        }

        let process = setup()?;

        let client_base = process
            .get_module_by_name("client.dll")
            .expect("Failed to find client.dll")
            .base();

        let local_player_pawn_offset = get_offset_value("client.dll", "dwLocalPlayerPawn")
            .expect("Failed to find dwLocalPlayerPawn offset");

        let game_scene_node_offset =
            get_class_field("client.dll", "C_BaseEntity", "m_pGameSceneNode")
                .expect("Failed to find m_pGameSceneNode offset");

        let absolute_origin_offset =
            get_class_field("client.dll", "CGameSceneNode", "m_vecAbsOrigin")
                .expect("Failed to find m_vecAbsOrigin offset");

        let local_player_pawn =
            process.read_memory::<usize>(client_base + local_player_pawn_offset as usize)?;

        let game_scene_node = process
            .read_memory::<usize>((local_player_pawn + game_scene_node_offset as usize).into())?;

        let absolute_origin = process
            .read_memory::<Vector3D>((game_scene_node + absolute_origin_offset as usize).into())?;

        println!("Local player origin: {:?}", absolute_origin);

        Ok(())
    }

    #[test]
    fn window_size() -> Result<()> {
        let process = setup()?;

        let engine_base = process
            .get_module_by_name("engine2.dll")
            .expect("Failed to find engine2.dll")
            .base();

        let window_width_offset = get_offset_value("engine2.dll", "dwWindowWidth")
            .expect("Failed to find dwWindowWidth offset");

        let window_height_offset = get_offset_value("engine2.dll", "dwWindowHeight")
            .expect("Failed to find dwWindowHeight offset");

        let window_width =
            process.read_memory::<u32>(engine_base + window_width_offset as usize)?;

        let window_height =
            process.read_memory::<u32>(engine_base + window_height_offset as usize)?;

        println!("Window size: {}x{}", window_width, window_height);

        Ok(())
    }
}
