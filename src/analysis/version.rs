use std::collections::BTreeMap;
use std::fs;
use std::path::{Path, PathBuf};

use memflow::prelude::v1::*;
use serde::Serialize;

use crate::error::Result;

#[derive(Debug, Clone, Serialize)]
pub struct GameVersionInfo {
    pub steam_build_id: Option<String>,
    pub client_version: Option<String>,
    pub server_version: Option<String>,
    pub patch_version: Option<String>,
    pub source_revision: Option<String>,
    pub version_date: Option<String>,
    pub version_time: Option<String>,
}

pub fn read_game_version(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<GameVersionInfo> {
    let engine = process.module_by_name("libengine2.so")?;
    let engine_path = PathBuf::from(engine.path.as_ref());
    let steam_inf_path = derive_steam_inf_path(&engine_path);
    let appmanifest_path = derive_appmanifest_path(&engine_path);

    let steam_inf = steam_inf_path
        .as_deref()
        .filter(|path| path.is_file())
        .map(parse_key_value_file)
        .transpose()?
        .unwrap_or_default();

    let appmanifest = appmanifest_path
        .as_deref()
        .filter(|path| path.is_file())
        .map(parse_key_value_file)
        .transpose()?
        .unwrap_or_default();

    Ok(GameVersionInfo {
        steam_build_id: appmanifest.get("buildid").cloned(),
        client_version: steam_inf.get("ClientVersion").cloned(),
        server_version: steam_inf.get("ServerVersion").cloned(),
        patch_version: steam_inf.get("PatchVersion").cloned(),
        source_revision: steam_inf.get("SourceRevision").cloned(),
        version_date: steam_inf.get("VersionDate").cloned(),
        version_time: steam_inf.get("VersionTime").cloned(),
    })
}

fn derive_steam_inf_path(engine_path: &Path) -> Option<PathBuf> {
    let game_dir = engine_path.parent()?.parent()?.parent()?;

    Some(game_dir.join("csgo").join("steam.inf"))
}

fn derive_appmanifest_path(engine_path: &Path) -> Option<PathBuf> {
    let steamapps_dir = engine_path.ancestors().find(|path| {
        path.file_name()
            .and_then(|name| name.to_str())
            .is_some_and(|name| name == "steamapps")
    })?;

    Some(steamapps_dir.join("appmanifest_730.acf"))
}

fn parse_key_value_file(path: &Path) -> Result<BTreeMap<String, String>> {
    let content = fs::read_to_string(path)?;
    let mut map = BTreeMap::new();

    for line in content.lines() {
        let line = line.trim();

        if line.is_empty() {
            continue;
        }

        if let Some((key, value)) = line.split_once('=') {
            map.insert(
                key.trim().to_string(),
                value.trim().trim_matches('"').to_string(),
            );

            continue;
        }

        let mut parts = line
            .split('\t')
            .map(str::trim)
            .filter(|part| !part.is_empty())
            .map(|part| part.trim_matches('"'));

        if let (Some(key), Some(value)) = (parts.next(), parts.next()) {
            map.insert(key.to_string(), value.to_string());
        }
    }

    Ok(map)
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
    fn game_version_metadata_smoke() -> Result<()> {
        let mut process = setup()?;
        let version = read_game_version(&mut process)?;

        assert_eq!(version.steam_build_id.as_deref(), Some("22627914"));
        assert_eq!(version.client_version.as_deref(), Some("2000777"));
        assert_eq!(version.server_version.as_deref(), Some("2000777"));
        assert_eq!(version.patch_version.as_deref(), Some("1.41.4.1"));
        assert!(version.source_revision.is_some(), "missing source revision");
        assert!(version.version_date.is_some(), "missing version date");
        assert!(version.version_time.is_some(), "missing version time");

        println!(
            "steam_build_id={:?} client_version={:?} patch_version={:?} source_revision={:?}",
            version.steam_build_id,
            version.client_version,
            version.patch_version,
            version.source_revision
        );

        Ok(())
    }
}
