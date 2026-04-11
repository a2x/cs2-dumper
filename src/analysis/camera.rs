use memflow::prelude::v1::*;

use crate::error::{Error, Result};

use super::read_live_player_controllers;

const MODULE_NAME: &str = "libclient.so";
const OFFSET_NAME: &str = "dwViewRender";
const VIEW_RENDER_CAMERA_ORIGIN_OFFSET: usize = 0x10;
const VIEW_RENDER_HORIZONTAL_FOV_OFFSET: usize = 0x28;
const VIEW_RENDER_ASPECT_OFFSET: usize = 0x2C;
const VIEW_RENDER_FRUSTUM_RAYS_OFFSET: usize = 0x40;
const LOCAL_VIEW_OFFSET_OFFSET: usize = 0xCD8;
const LOCAL_VIEW_ANGLES_OFFSET: usize = 0x1448;

#[derive(Clone, Copy, Debug, Pod)]
#[repr(C)]
struct Vec3 {
    x: f32,
    y: f32,
    z: f32,
}

#[derive(Clone, Copy, Debug)]
pub struct CameraBasis {
    pub forward: [f32; 3],
    pub right: [f32; 3],
    pub up: [f32; 3],
}

#[derive(Clone, Debug)]
pub struct ViewRenderCamera {
    pub view_render: Address,
    pub camera_origin: [f32; 3],
    pub view_offset: [f32; 3],
    pub vertical_fov: f32,
    pub horizontal_fov: f32,
    pub aspect: f32,
    pub basis: CameraBasis,
    pub view_angles: [f32; 2],
    pub synthetic_view_matrix: [f32; 16],
}

pub fn read_local_view_render_camera(
    process: &mut IntoProcessInstanceArcBox<'_>,
) -> Result<ViewRenderCamera> {
    let players = read_live_player_controllers(process)?;
    let local = players
        .iter()
        .find(|player| player.slot == 1)
        .or_else(|| players.first())
        .ok_or(Error::Other("no live player controllers found"))?;

    let module = process.module_by_name(MODULE_NAME)?;
    let offset = super::resolve_config_offset(process, MODULE_NAME, OFFSET_NAME)?;
    let view_render_global = module.base + offset.value as usize;

    read_view_render_camera_from_global(process, view_render_global, local.pawn.entity)
}

pub fn read_local_view_render_camera_from_global(
    process: &mut IntoProcessInstanceArcBox<'_>,
    view_render_global: Address,
) -> Result<ViewRenderCamera> {
    let players = read_live_player_controllers(process)?;
    let local = players
        .iter()
        .find(|player| player.slot == 1)
        .or_else(|| players.first())
        .ok_or(Error::Other("no live player controllers found"))?;

    read_view_render_camera_from_global(process, view_render_global, local.pawn.entity)
}

#[allow(dead_code)]
pub fn read_view_render_camera(
    process: &mut IntoProcessInstanceArcBox<'_>,
    local_pawn: Address,
) -> Result<ViewRenderCamera> {
    let module = process.module_by_name(MODULE_NAME)?;
    let offset = super::resolve_config_offset(process, MODULE_NAME, OFFSET_NAME)?;
    let view_render_global = module.base + offset.value as usize;

    read_view_render_camera_from_global(process, view_render_global, local_pawn)
}

pub fn read_view_render_camera_from_global(
    process: &mut IntoProcessInstanceArcBox<'_>,
    view_render_global: Address,
    local_pawn: Address,
) -> Result<ViewRenderCamera> {
    let view_render = process.read_addr64(view_render_global)?;

    if view_render.is_null() {
        return Err(Error::Other("dwViewRender resolved to a null pointer"));
    }

    let camera_origin = read_vec3(process, view_render + VIEW_RENDER_CAMERA_ORIGIN_OFFSET)?;
    let horizontal_fov = read_f32(process, view_render + VIEW_RENDER_HORIZONTAL_FOV_OFFSET)?;
    let aspect = read_f32(process, view_render + VIEW_RENDER_ASPECT_OFFSET)?;
    let vertical_fov = vertical_fov_from_horizontal(horizontal_fov, aspect);
    let frustum = read_mat4(process, view_render + VIEW_RENDER_FRUSTUM_RAYS_OFFSET)?;
    let basis = basis_from_frustum_columns(&frustum)?;
    let view_offset = read_vec3(process, local_pawn + LOCAL_VIEW_OFFSET_OFFSET)?;
    let raw_angles = read_vec3(process, local_pawn + LOCAL_VIEW_ANGLES_OFFSET)?;
    let derived_angles = angles_from_forward(basis.forward);
    let view_angles = if raw_angles[0].is_finite()
        && raw_angles[1].is_finite()
        && raw_angles[0].abs() <= 89.5
        && raw_angles[1].abs() <= 180.0
    {
        [raw_angles[0], raw_angles[1]]
    } else {
        derived_angles
    };

    let synthetic_view_matrix = synthetic_view_matrix(
        camera_origin,
        basis,
        vertical_fov.to_radians(),
        horizontal_fov.to_radians(),
    );

    Ok(ViewRenderCamera {
        view_render,
        camera_origin,
        view_offset,
        vertical_fov,
        horizontal_fov,
        aspect,
        basis,
        view_angles,
        synthetic_view_matrix,
    })
}

#[allow(dead_code)]
pub fn w2s(mtx: &[f32; 16], pos: [f32; 3]) -> Option<[f32; 2]> {
    let screen_w = mtx[12] * pos[0] + mtx[13] * pos[1] + mtx[14] * pos[2] + mtx[15];

    if screen_w <= 0.001 || !screen_w.is_finite() {
        return None;
    }

    let screen_x = mtx[0] * pos[0] + mtx[1] * pos[1] + mtx[2] * pos[2] + mtx[3];
    let screen_y = mtx[4] * pos[0] + mtx[5] * pos[1] + mtx[6] * pos[2] + mtx[7];
    let normalized_x = screen_x / screen_w;
    let normalized_y = screen_y / screen_w;

    (normalized_x.is_finite() && normalized_y.is_finite()).then_some([normalized_x, normalized_y])
}

pub fn angles_from_forward(forward: [f32; 3]) -> [f32; 2] {
    let horizontal = forward[0].hypot(forward[1]);
    let pitch = (-forward[2]).atan2(horizontal).to_degrees();
    let yaw = forward[1].atan2(forward[0]).to_degrees();

    [pitch, yaw]
}

fn read_vec3(process: &mut IntoProcessInstanceArcBox<'_>, address: Address) -> Result<[f32; 3]> {
    let bytes = process.read_raw(address, core::mem::size_of::<Vec3>())?;
    let x = f32::from_le_bytes(
        bytes[0..4]
            .try_into()
            .map_err(|_| Error::Other("unable to read vec3.x bytes"))?,
    );
    let y = f32::from_le_bytes(
        bytes[4..8]
            .try_into()
            .map_err(|_| Error::Other("unable to read vec3.y bytes"))?,
    );
    let z = f32::from_le_bytes(
        bytes[8..12]
            .try_into()
            .map_err(|_| Error::Other("unable to read vec3.z bytes"))?,
    );

    Ok([x, y, z])
}

fn read_f32(process: &mut IntoProcessInstanceArcBox<'_>, address: Address) -> Result<f32> {
    let bytes = process.read_raw(address, core::mem::size_of::<f32>())?;
    let bytes: [u8; 4] = bytes
        .as_slice()
        .try_into()
        .map_err(|_| Error::Other("unable to read f32 bytes"))?;

    Ok(f32::from_le_bytes(bytes))
}

fn read_mat4(process: &mut IntoProcessInstanceArcBox<'_>, address: Address) -> Result<[f32; 16]> {
    let bytes = process.read_raw(address, core::mem::size_of::<[f32; 16]>())?;
    let mut value = [0.0; 16];

    for (index, chunk) in bytes.chunks_exact(4).enumerate() {
        value[index] = f32::from_le_bytes(
            chunk
                .try_into()
                .map_err(|_| Error::Other("unable to read mat4 lane bytes"))?,
        );
    }

    Ok(value)
}

fn basis_from_frustum_columns(frustum: &[f32; 16]) -> Result<CameraBasis> {
    let left = [frustum[0], frustum[4], frustum[8]];
    let right = [frustum[1], frustum[5], frustum[9]];
    let bottom = [frustum[2], frustum[6], frustum[10]];
    let top = [frustum[3], frustum[7], frustum[11]];

    let forward = normalize(add(left, right))?;
    let right_axis = normalize(sub(right, left))?;
    let up_axis = normalize(sub(top, bottom))?;

    Ok(CameraBasis {
        forward,
        right: right_axis,
        up: up_axis,
    })
}

fn synthetic_view_matrix(
    camera_origin: [f32; 3],
    basis: CameraBasis,
    vertical_fov_rad: f32,
    horizontal_fov_rad: f32,
) -> [f32; 16] {
    let sx = 1.0 / (horizontal_fov_rad * 0.5).tan();
    let sy = 1.0 / (vertical_fov_rad * 0.5).tan();

    [
        basis.right[0] * sx,
        basis.right[1] * sx,
        basis.right[2] * sx,
        -dot(basis.right, camera_origin) * sx,
        basis.up[0] * sy,
        basis.up[1] * sy,
        basis.up[2] * sy,
        -dot(basis.up, camera_origin) * sy,
        0.0,
        0.0,
        1.0,
        0.0,
        basis.forward[0],
        basis.forward[1],
        basis.forward[2],
        -dot(basis.forward, camera_origin),
    ]
}

fn vertical_fov_from_horizontal(horizontal_fov_deg: f32, aspect: f32) -> f32 {
    let horizontal = horizontal_fov_deg.to_radians();
    let vertical = 2.0 * ((horizontal * 0.5).tan() / aspect).atan();
    vertical.to_degrees()
}

fn add(lhs: [f32; 3], rhs: [f32; 3]) -> [f32; 3] {
    [lhs[0] + rhs[0], lhs[1] + rhs[1], lhs[2] + rhs[2]]
}

fn sub(lhs: [f32; 3], rhs: [f32; 3]) -> [f32; 3] {
    [lhs[0] - rhs[0], lhs[1] - rhs[1], lhs[2] - rhs[2]]
}

fn dot(lhs: [f32; 3], rhs: [f32; 3]) -> f32 {
    lhs[0] * rhs[0] + lhs[1] * rhs[1] + lhs[2] * rhs[2]
}

fn length(value: [f32; 3]) -> f32 {
    dot(value, value).sqrt()
}

fn normalize(value: [f32; 3]) -> Result<[f32; 3]> {
    let length = length(value);

    if !length.is_finite() || length <= 0.0001 {
        return Err(Error::Other(
            "unable to normalize near-zero camera basis vector",
        ));
    }

    Ok([value[0] / length, value[1] / length, value[2] / length])
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::analysis::read_live_player_controllers;
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
    fn view_render_camera_smoke() -> Result<()> {
        let mut process = setup()?;
        let players = read_live_player_controllers(&mut process)?;
        let local = players
            .iter()
            .find(|player| player.slot == 1)
            .or_else(|| players.first())
            .ok_or(Error::Other("no live players found"))?;
        let camera = read_view_render_camera(&mut process, local.pawn.entity)?;

        let expected_camera_origin = add(local.pawn.origin, camera.view_offset);
        let origin_error = sub(camera.camera_origin, expected_camera_origin);
        let expected_angles = angles_from_forward(camera.basis.forward);
        let forward_probe = add(camera.camera_origin, scale(camera.basis.forward, 100.0));
        let clip_center = w2s(&camera.synthetic_view_matrix, forward_probe).ok_or(Error::Other(
            "synthetic view matrix did not project forward probe",
        ))?;

        assert!(
            length(origin_error) < 0.05,
            "camera origin drifted from pawn origin + view offset: {:?}",
            origin_error
        );
        assert!(
            camera.vertical_fov > 60.0 && camera.vertical_fov < 90.0,
            "unexpected vertical fov: {}",
            camera.vertical_fov
        );
        assert!(
            camera.horizontal_fov > 90.0 && camera.horizontal_fov < 120.0,
            "unexpected horizontal fov: {}",
            camera.horizontal_fov
        );
        assert!(
            (camera.aspect - 16.0 / 9.0).abs() < 0.05,
            "unexpected aspect: {}",
            camera.aspect
        );
        assert!(
            angle_diff(camera.view_angles[0], expected_angles[0]).abs() < 1.0,
            "pitch drift: live={} derived={}",
            camera.view_angles[0],
            expected_angles[0]
        );
        assert!(
            angle_diff(camera.view_angles[1], expected_angles[1]).abs() < 1.0,
            "yaw drift: live={} derived={}",
            camera.view_angles[1],
            expected_angles[1]
        );
        assert!(
            clip_center[0].abs() < 0.01 && clip_center[1].abs() < 0.01,
            "forward probe did not project to screen center: {:?}",
            clip_center
        );

        println!(
            "view_render={:#016X} origin={:?} view_offset={:?} fov_v={} fov_h={} aspect={} angles={:?}",
            camera.view_render.to_umem(),
            camera.camera_origin,
            camera.view_offset,
            camera.vertical_fov,
            camera.horizontal_fov,
            camera.aspect,
            camera.view_angles
        );

        Ok(())
    }

    fn scale(value: [f32; 3], factor: f32) -> [f32; 3] {
        [value[0] * factor, value[1] * factor, value[2] * factor]
    }

    fn angle_diff(lhs: f32, rhs: f32) -> f32 {
        let delta = (lhs - rhs + 180.0).rem_euclid(360.0) - 180.0;
        if delta == -180.0 {
            180.0
        } else {
            delta
        }
    }
}
