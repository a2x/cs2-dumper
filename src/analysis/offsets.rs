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

#[cfg(test)]
mod tests {
    use std::ffi::c_char;
    use std::fs;

    use serde_json::Value;

    use super::*;

    fn setup() -> Result<IntoProcessInstanceArcBox<'static>> {
        let os = memflow_native::create_os(&OsArgs::default(), LibArc::default())?;

        let process = os.into_process_by_name("cs2")?;

        Ok(process)
    }

    fn get_class_field_value(module_name: &str, class_name: &str, field_name: &str) -> Option<u64> {
        let content = fs::read_to_string(format!("output/{}.json", module_name)).ok()?;
        let value: Value = serde_json::from_str(&content).ok()?;

        value
            .get(module_name)?
            .get("classes")?
            .get(class_name)?
            .get("fields")?
            .get(field_name)?
            .as_u64()
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
    fn build_number() -> Result<()> {
        let mut process = setup()?;

        let engine_base = process.module_by_name("libengine2.so")?.base;

        let offset = get_offset_value("libengine2.so", "dwBuildNumber").unwrap();

        let build_number: u32 = process.read(engine_base + offset).data_part()?;

        println!("build number: {}", build_number);

        Ok(())
    }

    #[test]
    fn global_vars() -> Result<()> {
        let mut process = setup()?;

        let client_base = process.module_by_name("libclient.so")?.base;

        let offset = get_offset_value("libclient.so", "dwGlobalVars").unwrap();

        let global_vars: u64 = process.read(client_base + offset).data_part()?;

        let cur_map_name = {
            let addr = process
                .read_addr64((global_vars + 0x1C8).into())
                .data_part()?;

            process.read_char_string(addr).data_part()?
        };

        println!("current map name: {}", cur_map_name);

        Ok(())
    }

    #[test]
    fn local_player_controller() -> Result<()> {
        let mut process = setup()?;

        let client_base = process.module_by_name("libclient.so")?.base;

        let local_player_controller_offset =
            get_offset_value("libclient.so", "dwLocalPlayerController").unwrap();

        let player_name_offset =
            get_class_field_value("libclient.so", "CBasePlayerController", "m_iszPlayerName")
                .unwrap();

        let local_player_controller: u64 = process
            .read(client_base + local_player_controller_offset)
            .data_part()?;

        let player_name = process
            .read_char_string((local_player_controller + player_name_offset).into())
            .data_part()?;

        println!("local player name: {}", player_name);

        Ok(())
    }

    #[test]
    fn local_player_pawn() -> Result<()> {
        #[derive(Debug, Pod)]
        #[repr(C)]
        struct Vector3D {
            x: f32,
            y: f32,
            z: f32,
        }

        let mut process = setup()?;

        let client_base = process.module_by_name("libclient.so")?.base;

        let local_player_pawn_offset =
            get_offset_value("libclient.so", "dwLocalPlayerPawn").unwrap();

        let game_scene_node_offset =
            get_class_field_value("libclient.so", "C_BaseEntity", "m_pGameSceneNode").unwrap();

        let vec_abs_origin_offset =
            get_class_field_value("libclient.so", "CGameSceneNode", "m_vecAbsOrigin").unwrap();

        let local_player_pawn: u64 = process
            .read(client_base + local_player_pawn_offset)
            .data_part()?;

        let game_scene_node: u64 = process
            .read((local_player_pawn + game_scene_node_offset).into())
            .data_part()?;

        let vec_abs_origin: Vector3D = process
            .read((game_scene_node + vec_abs_origin_offset).into())
            .data_part()?;

        println!("local player origin: {:?}", vec_abs_origin);

        Ok(())
    }

    #[test]
    fn window_size() -> Result<()> {
        let mut process = setup()?;

        let engine_base = process.module_by_name("libengine2.so")?.base;

        let window_width_offset = get_offset_value("libengine2.so", "dwWindowWidth").unwrap();
        let window_height_offset = get_offset_value("libengine2.so", "dwWindowHeight").unwrap();

        let window_width: u32 = process
            .read(engine_base + window_width_offset)
            .data_part()?;

        let window_height: u32 = process
            .read(engine_base + window_height_offset)
            .data_part()?;

        println!("window size: {}x{}", window_width, window_height);

        Ok(())
    }
}
