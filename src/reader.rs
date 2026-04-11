use serde::Serialize;

use memflow::prelude::v1::*;

use crate::analysis;
use crate::error::{Error, Result};

const BONE_IDS: [usize; 13] = [6, 5, 4, 3, 8, 7, 26, 27, 10, 11, 13, 14, 0];
const PAWN_SCENE_NODE_OFFSET: usize = 0x4A8;
const SCENE_NODE_BONE_MATRIX_OFFSET: usize = 0x1E0;
const BONE_STRIDE: usize = 0x40;
const LOCAL_TARGET_INDEX_OFFSET: usize = 0x3ECC;

#[derive(Debug, Default, Clone, Serialize)]
pub struct BoundingBox {
    pub left: f32,
    pub top: f32,
    pub right: f32,
    pub bottom: f32,
}

#[derive(Debug, Default, Clone, Serialize)]
pub struct LocalPlayerState {
    pub score: Option<i32>,
    pub health: Option<i32>,
    pub team_num: Option<i32>,
    pub takes_damage: Option<i32>,
    pub life_state: Option<i32>,
    pub m_h_player_pawn: bool,
    pub shots_fired: Option<i32>,
    pub eye_angles: Option<[f32; 2]>,
    pub origin: Option<[f32; 3]>,
    pub view_origin: Option<[f32; 3]>,
    pub aim_punch_angle: Option<[f32; 2]>,
    pub view_angles: Option<[f32; 2]>,
    pub persona_level: Option<i32>,
    pub xp_trail_level: Option<i32>,
}

#[derive(Debug, Default, Clone, Serialize)]
pub struct EntityState {
    pub pawn_address: u64,
    pub health: Option<i32>,
    pub team_num: Option<i32>,
    pub life_state: Option<i32>,
    pub head_pos: Option<[f32; 3]>,
    pub bones: Option<std::collections::HashMap<usize, [f32; 3]>>,
    pub bbox_2d: Option<BoundingBox>,
    pub head_pos_2d: Option<[f32; 2]>,
    pub is_targeted: bool,
}

#[derive(Debug, Default, Clone, Serialize)]
pub struct GameData {
    pub map_name: Option<String>,
    pub view_matrix: Option<[f32; 16]>,
    pub local_player_state: Option<LocalPlayerState>,
    pub other_players: Vec<EntityState>,
    pub game_phase: Option<i32>,
}

pub fn read_game_data(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<GameData> {
    let players = analysis::read_live_player_controllers(process)?;
    let camera = analysis::read_local_view_render_camera(process)?;
    let local = players
        .iter()
        .find(|player| player.slot == 1)
        .or_else(|| players.first())
        .cloned()
        .ok_or(Error::Other("no live player controllers found"))?;

    let local_life_state = (local.alive != 0).then_some(256).or(Some(0));
    let local_target_index = process
        .read::<i32>(local.pawn.entity + LOCAL_TARGET_INDEX_OFFSET)
        .ok()
        .filter(|index| *index > 0);
    let local_player_state = LocalPlayerState {
        score: Some(local.score as i32),
        health: Some(local.health as i32),
        team_num: Some(local.team as i32),
        takes_damage: None,
        life_state: local_life_state,
        m_h_player_pawn: true,
        shots_fired: None,
        eye_angles: None,
        origin: Some(local.pawn.origin),
        view_origin: Some(camera.camera_origin),
        aim_punch_angle: None,
        view_angles: Some(camera.view_angles),
        persona_level: None,
        xp_trail_level: None,
    };

    let other_players = players
        .into_iter()
        .filter(|player| player.slot != local.slot)
        .map(|player| {
            let mut entity_state = EntityState {
                pawn_address: player.pawn.entity.to_umem(),
                health: Some(player.health as i32),
                team_num: Some(player.team as i32),
                life_state: Some(if player.alive != 0 { 256 } else { 0 }),
                head_pos: None,
                bones: None,
                bbox_2d: None,
                head_pos_2d: None,
                is_targeted: matches!(
                    local_target_index,
                    Some(index) if index as u32 == analysis::handle_to_index(player.pawn.handle)
                ),
            };

            if let Some((bones, head_pos)) = read_bones(process, player.pawn.entity).ok() {
                entity_state.head_pos = head_pos;
                entity_state.bones = Some(bones);

                if let Some(view_matrix) = Some(camera.synthetic_view_matrix) {
                    entity_state.bbox_2d = calculate_bbox_for_entity(
                        entity_state.bones.as_ref().expect("bones just assigned"),
                        &view_matrix,
                    );

                    if let Some(head_pos_3d) = head_pos {
                        if let Some(screen) = analysis::w2s(&view_matrix, head_pos_3d) {
                            let nx = screen[0] * 0.5 + 0.5;
                            let ny = -screen[1] * 0.5 + 0.5;
                            entity_state.head_pos_2d = Some([nx, ny]);
                        }
                    }
                }
            }

            entity_state
        })
        .collect();

    Ok(GameData {
        map_name: analysis::read_map_name(process).ok(),
        view_matrix: Some(camera.synthetic_view_matrix),
        local_player_state: Some(local_player_state),
        other_players,
        game_phase: analysis::read_game_phase(process).ok(),
    })
}

fn calculate_bbox_for_entity(
    bones: &std::collections::HashMap<usize, [f32; 3]>,
    view_matrix: &[f32; 16],
) -> Option<BoundingBox> {
    let mut min_x = f32::MAX;
    let mut min_y = f32::MAX;
    let mut max_x = f32::MIN;
    let mut max_y = f32::MIN;
    let mut found = false;

    for bone_pos_3d in bones.values() {
        if let Some([sx, sy]) = analysis::w2s(view_matrix, *bone_pos_3d) {
            let nx = sx * 0.5 + 0.5;
            let ny = -sy * 0.5 + 0.5;

            min_x = min_x.min(nx);
            min_y = min_y.min(ny);
            max_x = max_x.max(nx);
            max_y = max_y.max(ny);
            found = true;
        }
    }

    found.then_some(BoundingBox {
        left: min_x,
        top: min_y,
        right: max_x,
        bottom: max_y,
    })
}

fn read_bones(
    process: &mut IntoProcessInstanceArcBox<'_>,
    pawn: Address,
) -> Result<(std::collections::HashMap<usize, [f32; 3]>, Option<[f32; 3]>)> {
    let scene_node = process.read_addr64(pawn + PAWN_SCENE_NODE_OFFSET)?;

    if scene_node.is_null() {
        return Err(Error::Other("pawn scene node resolved to null"));
    }

    let bone_matrix = process.read_addr64(scene_node + SCENE_NODE_BONE_MATRIX_OFFSET)?;

    if bone_matrix.is_null() {
        return Err(Error::Other("bone matrix pointer resolved to null"));
    }

    let max_bone = *BONE_IDS
        .iter()
        .max()
        .ok_or(Error::Other("no bone ids configured"))?;
    let total_bytes = max_bone * BONE_STRIDE + 12;
    let buf = process.read_raw(bone_matrix, total_bytes)?;
    let mut bones = std::collections::HashMap::with_capacity(BONE_IDS.len());
    let mut head_pos = None;

    for &bone_id in &BONE_IDS {
        let off = bone_id * BONE_STRIDE;
        let x = f32::from_le_bytes(
            buf[off..off + 4]
                .try_into()
                .map_err(|_| Error::Other("unable to read bone x bytes"))?,
        );
        let y = f32::from_le_bytes(
            buf[off + 4..off + 8]
                .try_into()
                .map_err(|_| Error::Other("unable to read bone y bytes"))?,
        );
        let z = f32::from_le_bytes(
            buf[off + 8..off + 12]
                .try_into()
                .map_err(|_| Error::Other("unable to read bone z bytes"))?,
        );

        if !(x.is_finite() && y.is_finite() && z.is_finite()) {
            return Err(Error::Other("bone data contains non-finite coordinates"));
        }

        let pos = [x, y, z];
        bones.insert(bone_id, pos);

        if bone_id == 6 {
            head_pos = Some(pos);
        }
    }

    Ok((bones, head_pos))
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::error::Result;
    use memflow::prelude::v1::{IntoProcessInstanceArcBox, LibArc, OsArgs, Pid};
    use procfs::process::all_processes;
    use std::fs;
    use std::io;
    use std::os::unix::fs::MetadataExt;

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
    fn game_data_snapshot_smoke() -> Result<()> {
        let mut process = setup()?;
        let game_data = read_game_data(&mut process)?;
        let local = game_data
            .local_player_state
            .as_ref()
            .ok_or(Error::Other("missing local player snapshot"))?;

        assert!(game_data.map_name.is_some(), "missing map name fallback");
        assert!(
            game_data.game_phase.is_some(),
            "missing game phase fallback"
        );
        assert!(
            game_data.view_matrix.is_some(),
            "missing synthetic view matrix"
        );
        assert!(local.origin.is_some(), "missing local origin");
        assert!(local.view_origin.is_some(), "missing view origin");
        assert!(local.view_angles.is_some(), "missing view angles");
        assert!(
            game_data
                .other_players
                .iter()
                .all(|player| player.team_num.is_some()),
            "other player entries should keep basic semantic fields when present"
        );

        println!(
            "local hp={:?} team={:?} origin={:?} angles={:?} game_phase={:?} others={}",
            local.health,
            local.team_num,
            local.origin,
            local.view_angles,
            game_data.game_phase,
            game_data.other_players.len()
        );

        Ok(())
    }

    #[test]
    fn local_bones_smoke() -> Result<()> {
        let mut process = setup()?;
        let players = analysis::read_live_player_controllers(&mut process)?;
        let local = players
            .iter()
            .find(|player| player.slot == 1)
            .or_else(|| players.first())
            .ok_or(Error::Other("no local player available for bone smoke"))?;
        let (bones, head_pos) = read_bones(&mut process, local.pawn.entity)?;
        let head_pos = head_pos.ok_or(Error::Other("missing head position"))?;
        let origin = local.pawn.origin;

        assert!(!bones.is_empty(), "no bones were read");
        assert!(
            (head_pos[0] - origin[0]).abs() < 20.0
                && (head_pos[1] - origin[1]).abs() < 20.0
                && head_pos[2] > origin[2],
            "head position is implausible relative to origin: head={head_pos:?} origin={origin:?}"
        );

        println!(
            "local origin={origin:?} head={head_pos:?} bones={}",
            bones.len()
        );

        Ok(())
    }
}
