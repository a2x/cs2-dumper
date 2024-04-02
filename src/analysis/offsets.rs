use std::collections::BTreeMap;

use log::debug;

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
                            "found offset: {} at {:#X} ({}.dll + {:#X})",
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
        "dwCSGOInput" => pattern!("4c8b0d${*{'}} 488d045b") => Some(|view, map, rva| {
            let mut save = [0; 2];

            if view.scanner().finds_code(pattern!("498d81u4 4803c7"), &mut save) {
                map.insert("dwViewAngles".to_string(), rva + save[1]);
            }
        }),
        "dwEntityList" => pattern!("488935${'} 4885f6") => None,
        "dwGameEntitySystem" => pattern!("488b1d${'} 48891d") => None,
        "dwGameEntitySystem_getHighestEntityIndex" => pattern!("8b81u2?? 8902 488bc2 c3 cccccccc 48895c24? 48896c24") => None,
        "dwGameRules" => pattern!("48890d${'} 8b0d${} ff15") => None,
        "dwGlobalVars" => pattern!("48890d${'} 488941") => None,
        "dwGlowManager" => pattern!("488b05${'} c3 cccccccccccccccc 8b41") => None,
        "dwLocalPlayerController" => pattern!("488b05${'} 4885c0 74? 8b88") => None,
        "dwPlantedC4" => pattern!("488b15${'} ffc0 488d4c24") => None,
        "dwPrediction" => pattern!("488d05${'} c3 cccccccccccccccc 4883ec? 8b0d") => Some(|_view, map, rva| {
            map.insert("dwLocalPlayerPawn".to_string(), rva + 0x138);
        }),
        "dwSensitivity" => pattern!("488b05${'} 488b40? f3410f59f4") => None,
        "dwSensitivity_sensitivity" => pattern!("ff50u1 4c8bc6 488d55? 488bcf e8${} 84c0 0f85${} 4c8d45? 8bd3 488bcf e8${} e9${} f30f1006") => None,
        "dwViewMatrix" => pattern!("488d0d${'} 48c1e006") => None,
        "dwViewRender" => pattern!("488905${'} 488bc8 4885c0") => None,
    },
    engine2 => {
        "dwBuildNumber" => pattern!("8905${'} 488d0d${} ff15${} e9") => None,
        "dwNetworkGameClient" => pattern!("48893d${'} 488d15") => None,
        "dwNetworkGameClient_deltaTick" => pattern!("8983u4 40b7") => None,
        "dwNetworkGameClient_getLocalPlayer" => pattern!("4883c0u1 488d0440 458b04c7") => Some(|_view, map, rva| {
            // .text 48 83 C0 0A   add rax, 0Ah
            // .text 48 8D 04 40   lea rax, [rax+rax*2]
            // .text 45 8B 04 C7   mov r8d, [r15+rax*8]
            map.insert("dwNetworkGameClient_getLocalPlayer".to_string(), (rva + (rva * 2)) * 8);
        }),
        "dwNetworkGameClient_getMaxClients" => pattern!("8b81u2?? c3cccccccccccccccccc 8b81${} ffc0") => None,
        "dwNetworkGameClient_signOnState" => pattern!("448b81u2?? 488d0d") => None,
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

    for (module_name, callback) in &modules {
        let module = process.module_by_name(module_name)?;
        let buf = process.read_raw(module.base, module.size as _)?;

        let view = PeView::from_bytes(&buf)?;

        map.insert(module_name.to_string(), callback(view));
    }

    Ok(map)
}
