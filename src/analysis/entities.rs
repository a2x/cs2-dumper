use memflow::prelude::v1::*;

use crate::error::{Error, Result};

const MODULE_NAME: &str = "libclient.so";
const OFFSET_NAME: &str = "dwGameEntitySystem";
const ENTITY_HANDLE_INDEX_MASK: u32 = 0x7FFF;
const CHUNK_PTRS_OFFSET: usize = 0x10;
const CHUNK_SIZE: usize = 512;
const SLOT_STRIDE: usize = 0x70;
const ENTITY_IDENTITY_OFFSET: usize = 0x10;
const IDENTITY_DESIGNER_NAME_OFFSET: usize = 0x20;

#[derive(Clone, Debug)]
pub struct LiveEntitySlot {
    pub slot: usize,
    pub chunk_index: usize,
    pub entry_index: usize,
    pub chunk: Option<Address>,
    pub entity: Option<Address>,
    pub identity: Option<Address>,
    pub designer_name: Option<String>,
}

#[allow(dead_code)]
#[derive(Clone, Debug)]
pub struct LivePlayerPawn {
    pub entity: Address,
    pub handle: u32,
    pub origin: [f32; 3],
}

#[allow(dead_code)]
#[derive(Clone, Debug)]
pub struct LivePlayerController {
    pub slot: usize,
    pub entity: Address,
    pub name: String,
    pub team: u32,
    pub alive: u32,
    pub health: u32,
    pub armor: u32,
    pub score: u32,
    pub pawn: LivePlayerPawn,
}

pub fn read_live_entity_slots(
    process: &mut IntoProcessInstanceArcBox<'_>,
    start: usize,
    count: usize,
) -> Result<Vec<LiveEntitySlot>> {
    let entity_system = read_game_entity_system(process)?;

    read_live_entity_slots_from_system(process, entity_system, start, count)
}

pub fn read_live_entity_slots_from_system(
    process: &mut IntoProcessInstanceArcBox<'_>,
    entity_system: Address,
    start: usize,
    count: usize,
) -> Result<Vec<LiveEntitySlot>> {
    if entity_system.is_null() {
        return Err(Error::Other("entity system pointer is null"));
    }

    (start..start.saturating_add(count))
        .map(|slot| read_live_entity_slot(process, entity_system, slot))
        .collect()
}

pub fn read_entity_slots_from_chunk(
    process: &mut IntoProcessInstanceArcBox<'_>,
    chunk: Address,
    start: usize,
    count: usize,
) -> Result<Vec<LiveEntitySlot>> {
    (start..start.saturating_add(count))
        .map(|slot| read_entity_slot(process, Some(chunk), slot))
        .collect()
}

pub fn resolve_handle(
    process: &mut IntoProcessInstanceArcBox<'_>,
    handle: u32,
) -> Result<LiveEntitySlot> {
    let entity_system = read_game_entity_system(process)?;

    read_live_entity_slot(process, entity_system, handle_to_index(handle) as usize)
}

pub fn read_live_player_controllers(
    process: &mut IntoProcessInstanceArcBox<'_>,
) -> Result<Vec<LivePlayerController>> {
    let slots = read_live_entity_slots(process, 0, CHUNK_SIZE)?;
    let mut players = Vec::new();

    for slot in slots {
        if slot.designer_name.as_deref() != Some("cs_player_controller") {
            continue;
        }

        let Some(controller_entity) = slot.entity else {
            continue;
        };

        let player_name_ptr = process.read_addr64(controller_entity + 0x9E0)?;
        let player_name = process.read_char_string(player_name_ptr)?;
        let alive: u32 = process.read(controller_entity + 0xA94)?;
        let health: u32 = process.read(controller_entity + 0xA98)?;
        let armor: u32 = process.read(controller_entity + 0xA9C)?;
        let team: u32 = process.read(controller_entity + 0x9C0)?;
        let score: u32 = process.read(controller_entity + 0xAB4)?;
        let pawn_handle: u32 = process.read(controller_entity + 0xA8C)?;
        let pawn_slot = resolve_handle(process, pawn_handle)?;
        let pawn_entity = pawn_slot.entity.ok_or(Error::Other(
            "player pawn handle did not resolve to an entity",
        ))?;
        let origin: [f32; 3] = process.read(pawn_entity + 0x1540)?;

        players.push(LivePlayerController {
            slot: slot.slot,
            entity: controller_entity,
            name: player_name,
            team,
            alive,
            health,
            armor,
            score,
            pawn: LivePlayerPawn {
                entity: pawn_entity,
                handle: pawn_handle,
                origin,
            },
        });
    }

    Ok(players)
}

pub fn handle_to_index(handle: u32) -> u32 {
    handle & ENTITY_HANDLE_INDEX_MASK
}

pub fn read_game_entity_system(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<Address> {
    let module = process.module_by_name(MODULE_NAME)?;
    let offset = super::resolve_config_offset(process, MODULE_NAME, OFFSET_NAME)?;
    let address = module.base + offset.value as usize;

    read_game_entity_system_from_global(process, address)
}

pub fn read_game_entity_system_from_global(
    process: &mut IntoProcessInstanceArcBox<'_>,
    global_address: Address,
) -> Result<Address> {
    let entity_system = process.read_addr64(global_address)?;

    if entity_system.is_null() {
        return Err(Error::Other(
            "dwGameEntitySystem resolved to a null pointer",
        ));
    }

    Ok(entity_system)
}

fn read_live_entity_slot(
    process: &mut IntoProcessInstanceArcBox<'_>,
    entity_system: Address,
    slot: usize,
) -> Result<LiveEntitySlot> {
    let chunk_index = slot / CHUNK_SIZE;
    let chunk = read_optional_ptr(process, entity_system + CHUNK_PTRS_OFFSET + chunk_index * 8);
    read_entity_slot(process, chunk, slot)
}

fn read_entity_slot(
    process: &mut IntoProcessInstanceArcBox<'_>,
    chunk: Option<Address>,
    slot: usize,
) -> Result<LiveEntitySlot> {
    let chunk_index = slot / CHUNK_SIZE;
    let entry_index = slot % CHUNK_SIZE;
    let entity =
        chunk.and_then(|chunk| read_optional_ptr(process, chunk + entry_index * SLOT_STRIDE));
    let identity =
        entity.and_then(|entity| read_optional_ptr(process, entity + ENTITY_IDENTITY_OFFSET));
    let designer_name =
        identity.and_then(|identity| read_optional_designer_name(process, identity));

    Ok(LiveEntitySlot {
        slot,
        chunk_index,
        entry_index,
        chunk,
        entity,
        identity,
        designer_name,
    })
}

fn read_optional_ptr(
    process: &mut IntoProcessInstanceArcBox<'_>,
    address: Address,
) -> Option<Address> {
    let value = process.read_addr64(address).ok()?;
    (!value.is_null()).then_some(value)
}

fn read_optional_designer_name(
    process: &mut IntoProcessInstanceArcBox<'_>,
    identity: Address,
) -> Option<String> {
    let designer_name_ptr = read_optional_ptr(process, identity + IDENTITY_DESIGNER_NAME_OFFSET)?;
    process.read_char_string(designer_name_ptr).ok()
}

#[cfg(test)]
mod tests {
    use std::fs;
    use std::io;
    use std::os::unix::fs::MetadataExt;

    use super::*;
    use procfs::process::all_processes;

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
    fn entity_system_slots_smoke() -> Result<()> {
        let mut process = setup()?;
        let slots = read_live_entity_slots(&mut process, 0, 128)?;
        let named: Vec<_> = slots
            .iter()
            .filter_map(|slot| slot.designer_name.as_deref().map(|name| (slot.slot, name)))
            .collect();

        assert!(!named.is_empty(), "no named entity slots found");
        assert!(
            named
                .iter()
                .any(|(_, name)| *name == "cs_player_controller"),
            "no controller entity found in first 128 slots"
        );

        for (slot, name) in named.iter().take(12) {
            println!("slot={slot} name={name}");
        }

        Ok(())
    }

    #[test]
    fn local_controller_pawn_chain_smoke() -> Result<()> {
        #[derive(Clone, Copy, Debug, Pod)]
        #[repr(C)]
        struct Vec3 {
            x: f32,
            y: f32,
            z: f32,
        }

        let mut process = setup()?;
        let controller = resolve_handle(&mut process, 0x1)?;
        let controller_entity = controller.entity.ok_or(Error::Other(
            "controller handle did not resolve to an entity",
        ))?;

        let player_name_ptr = process.read_addr64(controller_entity + 0x9E0)?;
        let player_name = process.read_char_string(player_name_ptr)?;
        let alive: u32 = process.read(controller_entity + 0xA94)?;
        let health: u32 = process.read(controller_entity + 0xA98)?;
        let team: u32 = process.read(controller_entity + 0x9C0)?;
        let pawn_handle: u32 = process.read(controller_entity + 0xA8C)?;
        let pawn = resolve_handle(&mut process, pawn_handle)?;
        let pawn_entity = pawn
            .entity
            .ok_or(Error::Other("pawn handle did not resolve to an entity"))?;
        let pawn_origin: Vec3 = process.read(pawn_entity + 0x1540)?;
        let scene_node = process.read_addr64(pawn_entity + 0x4A8)?;
        let scene_origin: Vec3 = process.read(scene_node + 0xD0)?;
        let backref: u32 = process.read(pawn_entity + 0x1558)?;

        assert!(!player_name.is_empty(), "local player name is empty");
        assert_eq!(alive, 1, "unexpected local alive flag");
        assert!(health > 0, "local player health must be positive");
        assert!(matches!(team, 2 | 3), "unexpected local team value: {team}");
        assert_eq!(
            handle_to_index(backref),
            1,
            "pawn backref does not point to slot 1"
        );

        let delta = (
            (pawn_origin.x - scene_origin.x).abs(),
            (pawn_origin.y - scene_origin.y).abs(),
            (pawn_origin.z - scene_origin.z).abs(),
        );

        assert!(
            delta.0 < 5.0 && delta.1 < 5.0 && delta.2 < 5.0,
            "pawn origin and scene origin diverged too much: {delta:?}"
        );

        println!("local player={player_name}");
        println!("health={health} team={team} pawn_handle={pawn_handle:#X}");
        println!(
            "pawn_origin=({}, {}, {})",
            pawn_origin.x, pawn_origin.y, pawn_origin.z
        );
        println!(
            "scene_origin=({}, {}, {})",
            scene_origin.x, scene_origin.y, scene_origin.z
        );

        Ok(())
    }

    #[test]
    fn player_controller_iteration_smoke() -> Result<()> {
        let mut process = setup()?;
        let players = read_live_player_controllers(&mut process)?;

        assert!(!players.is_empty(), "no live player controllers found");
        assert!(
            players.iter().any(|player| player.slot == 1),
            "local controller slot 1 not found in iteration"
        );

        for player in players.iter().take(8) {
            println!(
                "slot={} team={} alive={} hp={} armor={} score={} name={} pawn={:#X} origin={:?}",
                player.slot,
                player.team,
                player.alive,
                player.health,
                player.armor,
                player.score,
                player.name,
                player.pawn.entity.to_umem(),
                player.pawn.origin
            );
        }

        Ok(())
    }
}
