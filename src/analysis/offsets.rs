use std::collections::BTreeMap;

use log::{debug, error};

use memflow::prelude::v1::*;

use pelite::pattern;
use pelite::pattern::{save_len, Atom};
use pelite::pe64::{Pe, PeView};

use phf::{phf_map, Map};

use crate::error::Result;

pub type OffsetMap = BTreeMap<String, BTreeMap<String, u32>>;

macro_rules! pattern_map {
    ($($module:ident => {
        $($name:expr => $pattern:expr $(=> $callback:expr)?),+ $(,)?
    }),+ $(,)?) => {
        $(
            mod $module {
                use super::*;

                pub(super) const PATTERNS: Map<
                    &'static str,
                    (
                        &'static [Atom],
                        Option<fn(&PeView, &mut BTreeMap<String, u32>, u32)>,
                    ),
                > = phf_map! {
                    $($name => ($pattern, $($callback)?)),+
                };

                pub fn offsets(view: PeView<'_>) -> BTreeMap<String, u32> {
                    let mut map = BTreeMap::new();

                    for (&name, (pat, callback)) in &PATTERNS {
                        let mut save = vec![0; save_len(pat)];

                        if !view.scanner().finds_code(pat, &mut save) {
                            error!("unable to find pattern: {}", name);

                            continue;
                        }

                        let rva = save[1];

                        map.insert(name.to_string(), rva);

                        if let Some(callback) = callback {
                            callback(&view, &mut map, rva);
                        }
                    }

                    for (name, value) in &map {
                        debug!(
                            "found offset: {} @ {:#X} ({}.dll + {:#X})",
                            name,
                            *value as u64 + view.optional_header().ImageBase,
                            stringify!($module),
                            value
                        );
                    }

                    map
                }
            }
        )+
    };
}

pattern_map! {
    client => {
        "dwCSGOInput" => pattern!("488d0d${'} e8${} 488d05${} 48c705[8] 488905${} 488d0d${} 488d05") => Some(|view, map, rva| {
            let mut save = [0; 2];

            if view.scanner().finds_code(pattern!("f2410f108430u4"), &mut save) {
                map.insert("dwViewAngles".to_string(), rva + save[1]);
            }
        }),
        "dwEntityList" => pattern!("488935${'} 4885f6") => None,
        "dwGameEntitySystem" => pattern!("488b1d${'} 48891d") => None,
        "dwGameEntitySystem_getHighestEntityIndex" => pattern!("8b81u2?? 8902 488bc2 c3 cccccccc 48895c24? 48896c24") => None,
        "dwGameRules" => pattern!("48891d${'} ff15${} 84c0") => None,
        "dwGlobalVars" => pattern!("48890d${'} 488941") => None,
        "dwGlowManager" => pattern!("488b05${'} c3 cccccccccccccccc 8b41") => None,
        "dwLocalPlayerController" => pattern!("488905${'} 8b9e") => None,
        "dwPlantedC4" => pattern!("488b15${'} 41ffc0") => None,
        "dwPrediction" => pattern!("488d05${'} c3 cccccccccccccccc 4883ec? 8b0d") => Some(|_view, map, rva| {
            map.insert("dwLocalPlayerPawn".to_string(), rva + 0x148);
        }),
        "dwSensitivity" => pattern!("488b05${'} 488b40? f3410f59f4") => None,
        "dwSensitivity_sensitivity" => pattern!("ff50u1 4c8bc6 488d55? 488bcf e8${} 84c0 0f85${} 4c8d45? 8bd3 488bcf e8${} e9${} f30f1006") => None,
        "dwViewMatrix" => pattern!("488d0d${'} 48c1e006") => None,
        "dwViewRender" => pattern!("488905${'} 488bc8 4885c0") => None,
        "dwWeaponC4" => pattern!("488b15${'} ffc0 8905${} 488bc6 488934ea 488b6c24? c686[5] 80be") => None,
    },
    engine2 => {
        "dwBuildNumber" => pattern!("8905${'} 488d0d${} ff15${}") => None,
        "dwNetworkGameClient" => pattern!("48893d${'} 488d15") => None,
        "dwNetworkGameClient_clientTickCount" => pattern!("8b81u4 c3 cccccccccccccccccc 8b81${} c3 cccccccccccccccccc 83b9") => None,
        "dwNetworkGameClient_deltaTick" => pattern!("8983u4 40b7") => None,
        "dwNetworkGameClient_isBackgroundMap" => pattern!("0fb681u4 c3 cccccccccccccccc 0fb681${} c3 cccccccccccccccc 48895c24") => None,
        "dwNetworkGameClient_localPlayer" => pattern!("4883c0u1 488d0440 8b0cc1") => Some(|_view, map, rva| {
            // .text 48 83 C0 0A | add rax, 0Ah
            // .text 48 8D 04 40 | lea rax, [rax + rax * 2]
            // .text 8B 0C C1    | mov ecx, [rcx + rax * 8]
            map.insert("dwNetworkGameClient_localPlayer".to_string(), (rva + (rva * 2)) * 8);
        }),
        "dwNetworkGameClient_maxClients" => pattern!("8b81u4 c3cccccccccccccccccc 8b81${} ffc0") => None,
        "dwNetworkGameClient_serverTickCount" => pattern!("8b81u4 c3 cccccccccccccccccc 83b9") => None,
        "dwNetworkGameClient_signOnState" => pattern!("448b81u4 488d0d") => None,
        "dwSoundService" => pattern!("488905${'} 4c8d4424? 488d05") => Some(|_view, map, rva| {
            map.insert("dwEngineViewData".to_string(), rva + 0x9C);
        }),
        "dwWindowHeight" => pattern!("8b05${'} 8903") => None,
        "dwWindowWidth" => pattern!("8b05${'} 8907") => None,
    },
    input_system => {
        "dwInputSystem" => pattern!("488905${'} 488d05") => None,
    },
    matchmaking => {
        "dwGameTypes" => pattern!("488d0d${'} 33d2") => Some(|_view, map, rva| {
            map.insert("dwGameTypes_mapName".to_string(), rva + 0x120);
        }),
    },
}

pub fn offsets(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<OffsetMap> {
    let mut map = BTreeMap::new();

    let modules: [(&str, fn(PeView) -> BTreeMap<String, u32>); 4] = [
        ("client.dll", client::offsets),
        ("engine2.dll", engine2::offsets),
        ("inputsystem.dll", input_system::offsets),
        ("matchmaking.dll", matchmaking::offsets),
    ];

    for (module_name, offsets) in &modules {
        let module = process.module_by_name(module_name)?;
        let buf = process.read_raw(module.base, module.size as _)?;

        let view = PeView::from_bytes(&buf)?;

        map.insert(module_name.to_string(), offsets(view));
    }

    Ok(map)
}
