use clap::ValueEnum;
use memflow::prelude::v1::*;

use crate::error::{Error, Result};

#[derive(Clone, Copy, Debug, Eq, PartialEq, ValueEnum)]
pub enum RootKind {
    Pointer,
    BuildNumber,
    GameEntitySystem,
    ViewRender,
    GlobalVars,
}

pub struct RootVerification {
    pub resolved_address: Option<Address>,
    pub summary: String,
}

pub fn verify_root_address(
    process: &mut IntoProcessInstanceArcBox<'_>,
    kind: RootKind,
    global_address: Address,
) -> Result<RootVerification> {
    match kind {
        RootKind::Pointer => verify_pointer(process, global_address),
        RootKind::BuildNumber => verify_build_number(process, global_address),
        RootKind::GameEntitySystem => verify_game_entity_system(process, global_address),
        RootKind::ViewRender => verify_view_render(process, global_address),
        RootKind::GlobalVars => verify_global_vars(process, global_address),
    }
}

fn verify_pointer(
    process: &mut IntoProcessInstanceArcBox<'_>,
    global_address: Address,
) -> Result<RootVerification> {
    let value = process.read_addr64(global_address)?;

    if value.is_null() {
        return Err(Error::Other("candidate pointer resolved to null"));
    }

    Ok(RootVerification {
        resolved_address: Some(value),
        summary: format!("pointer={:#016X}", value.to_umem()),
    })
}

fn verify_build_number(
    process: &mut IntoProcessInstanceArcBox<'_>,
    global_address: Address,
) -> Result<RootVerification> {
    let value: u32 = process.read(global_address)?;

    if value < 1_000_000 {
        return Err(Error::Other("candidate build number is implausibly low"));
    }

    Ok(RootVerification {
        resolved_address: None,
        summary: format!("build_number={value} (0x{value:X})"),
    })
}

fn verify_game_entity_system(
    process: &mut IntoProcessInstanceArcBox<'_>,
    global_address: Address,
) -> Result<RootVerification> {
    let entity_system = super::read_game_entity_system_from_global(process, global_address)?;
    let slots = super::read_live_entity_slots_from_system(process, entity_system, 0, 128)?;
    let controllers = slots
        .iter()
        .filter(|slot| {
            slot.entity.is_some() && slot.designer_name.as_deref() == Some("cs_player_controller")
        })
        .count();

    if controllers == 0 {
        return Err(Error::Other(
            "candidate entity system did not expose live player controllers",
        ));
    }

    Ok(RootVerification {
        resolved_address: Some(entity_system),
        summary: format!(
            "entity_system={:#016X} controllers_in_first_128={controllers}",
            entity_system.to_umem()
        ),
    })
}

fn verify_view_render(
    process: &mut IntoProcessInstanceArcBox<'_>,
    global_address: Address,
) -> Result<RootVerification> {
    let camera = super::read_local_view_render_camera_from_global(process, global_address)?;

    if !(camera.horizontal_fov.is_finite()
        && camera.horizontal_fov > 60.0
        && camera.horizontal_fov < 140.0)
    {
        return Err(Error::Other(
            "candidate view render reported implausible horizontal fov",
        ));
    }

    if !(camera.aspect.is_finite() && camera.aspect > 1.0 && camera.aspect < 3.0) {
        return Err(Error::Other(
            "candidate view render reported implausible aspect",
        ));
    }

    Ok(RootVerification {
        resolved_address: Some(camera.view_render),
        summary: format!(
            "view_render={:#016X} origin={:?} fov_h={} aspect={}",
            camera.view_render.to_umem(),
            camera.camera_origin,
            camera.horizontal_fov,
            camera.aspect
        ),
    })
}

fn verify_global_vars(
    process: &mut IntoProcessInstanceArcBox<'_>,
    global_address: Address,
) -> Result<RootVerification> {
    let global_vars = process.read_addr64(global_address)?;

    if global_vars.is_null() {
        return Err(Error::Other("candidate global vars resolved to null"));
    }

    for offset in [0x1C8usize, 0x230usize] {
        let Ok(map_name_ptr) = process.read_addr64(global_vars + offset) else {
            continue;
        };

        if map_name_ptr.is_null() {
            continue;
        }

        let Ok(map_name) = process.read_char_string(map_name_ptr) else {
            continue;
        };

        if is_plausible_map_name(&map_name) {
            return Ok(RootVerification {
                resolved_address: Some(global_vars),
                summary: format!(
                    "global_vars={:#016X} map_name_offset={:#X} map_name={}",
                    global_vars.to_umem(),
                    offset,
                    map_name
                ),
            });
        }
    }

    Err(Error::Other(
        "candidate global vars did not expose a plausible map name string",
    ))
}

fn is_plausible_map_name(value: &str) -> bool {
    !value.is_empty()
        && value.len() <= 128
        && value
            .bytes()
            .all(|byte| byte.is_ascii_alphanumeric() || matches!(byte, b'_' | b'/' | b'-'))
}

#[cfg(test)]
mod tests {
    use std::fs;
    use std::io;
    use std::os::unix::fs::MetadataExt;

    use procfs::process::all_processes;
    use serde_json::Value;

    use super::*;

    fn env_pid() -> Option<Pid> {
        std::env::var("CS2_PID").ok()?.parse().ok()
    }

    fn resolve_pid(name: &str) -> Result<Pid> {
        let current_uid = unsafe { libc::geteuid() };

        all_processes()?
            .filter_map(|proc| proc.ok())
            .find_map(|proc| {
                let cmdline = proc.cmdline().ok()?;
                let first = cmdline.first()?;
                let process_name = first.rsplit('/').next().unwrap_or(first);
                let metadata = fs::metadata(format!("/proc/{}", proc.pid())).ok()?;
                let owner_uid = metadata.uid();

                (process_name == name && owner_uid == current_uid)
                    .then(|| proc.pid().try_into().ok())
                    .flatten()
            })
            .ok_or_else(|| {
                io::Error::new(
                    io::ErrorKind::NotFound,
                    format!("could not find process: {name}"),
                )
                .into()
            })
    }

    fn setup() -> Result<IntoProcessInstanceArcBox<'static>> {
        let os = memflow_native::create_os(&OsArgs::default(), LibArc::default())?;

        if let Some(pid) = env_pid() {
            return Ok(os.into_process_by_pid(pid)?);
        }

        let pid = resolve_pid("cs2")?;

        Ok(os.into_process_by_pid(pid)?)
    }

    fn generated_offset(module_name: &str, offset_name: &str) -> Result<usize> {
        let content = fs::read_to_string("output/offsets.json")?;
        let value: Value = serde_json::from_str(&content)?;
        let offsets = value
            .get(module_name)
            .and_then(Value::as_array)
            .ok_or(Error::Other("module not found in output/offsets.json"))?;

        offsets
            .iter()
            .find_map(|offset| {
                (offset.get("name")?.as_str()? == offset_name)
                    .then(|| offset.get("value")?.as_u64())
                    .flatten()
            })
            .map(|value| value as usize)
            .ok_or(Error::Other("offset not found in output/offsets.json"))
    }

    #[test]
    fn semantic_root_verifiers_smoke() -> Result<()> {
        let mut process = setup()?;

        let client = process.module_by_name("libclient.so")?;
        let entity_global = client.base + generated_offset("libclient.so", "dwGameEntitySystem")?;
        let view_render_global = client.base + generated_offset("libclient.so", "dwViewRender")?;

        let entity_system =
            verify_root_address(&mut process, RootKind::GameEntitySystem, entity_global)?;
        let view_render =
            verify_root_address(&mut process, RootKind::ViewRender, view_render_global)?;

        println!("entity_system: {}", entity_system.summary);
        println!("view_render: {}", view_render.summary);

        Ok(())
    }
}
