use memflow::prelude::v1::*;

use crate::error::{Error, Result};

const ENGINE2_MODULE_NAME: &str = "libengine2.so";
const SOURCE2_ENGINE_TO_CLIENT_INTERFACE: &str = "Source2EngineToClient001";
const MAP_NAME_PTR_OFFSET: usize = 0x148;
#[allow(dead_code)]
const GAME_RULES_PROXY_NAME: &str = "cs_gamerules";
#[allow(dead_code)]
const GAME_RULES_PROXY_PTR_OFFSET: usize = 0x788;
const GAME_PHASE_OFFSET: usize = 0x5C;

pub fn read_map_name(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<String> {
    let (_, _, source2_engine_to_client) = super::resolve_interface_singleton(
        process,
        ENGINE2_MODULE_NAME,
        SOURCE2_ENGINE_TO_CLIENT_INTERFACE,
    )?;
    let map_name_ptr = process.read_addr64(source2_engine_to_client + MAP_NAME_PTR_OFFSET)?;

    if map_name_ptr.is_null() {
        return Err(Error::Other("map name pointer resolved to null"));
    }

    let map_name = process.read_char_string(map_name_ptr)?;

    if map_name.is_empty() {
        return Err(Error::Other("map name string is empty"));
    }

    Ok(map_name)
}

#[allow(dead_code)]
pub fn read_game_rules(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<Address> {
    let proxy = super::read_live_entity_slots(process, 0, 512)?
        .into_iter()
        .find(|slot| slot.designer_name.as_deref() == Some(GAME_RULES_PROXY_NAME))
        .and_then(|slot| slot.entity)
        .ok_or(Error::Other("could not find cs_gamerules proxy entity"))?;
    let game_rules = process.read_addr64(proxy + GAME_RULES_PROXY_PTR_OFFSET)?;

    if game_rules.is_null() {
        return Err(Error::Other(
            "game rules proxy resolved to a null rules pointer",
        ));
    }

    Ok(game_rules)
}

pub fn read_game_phase(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<i32> {
    let game_rules = read_game_rules(process)?;
    let phase: i32 = process.read(game_rules + GAME_PHASE_OFFSET)?;

    Ok(phase)
}

#[cfg(test)]
mod tests {
    use std::fs;
    use std::io;
    use std::os::unix::fs::MetadataExt;

    use procfs::process::all_processes;

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

    #[test]
    fn state_fallbacks_smoke() -> Result<()> {
        let mut process = setup()?;
        let map_name = read_map_name(&mut process)?;
        let game_rules = read_game_rules(&mut process)?;
        let game_phase = read_game_phase(&mut process)?;

        assert!(
            !map_name.is_empty(),
            "map name fallback returned empty string"
        );
        assert!(!game_rules.is_null(), "game rules fallback returned null");
        assert!(
            game_phase >= 0,
            "game phase fallback returned negative value"
        );

        println!("map_name={map_name}");
        println!("game_rules={:#016X}", game_rules.to_umem());
        println!("game_phase={game_phase}");

        Ok(())
    }
}
