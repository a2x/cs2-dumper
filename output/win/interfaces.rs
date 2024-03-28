// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-27 13:29:16.446880100 UTC

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem {
            pub const ANIMATION_SYSTEM_UTILS_001: usize = 0x72E80;
            pub const ANIMATION_SYSTEM_001: usize = 0x6DA00;
        }
        // Module: client.dll
        pub mod client {
            pub const CLIENT_TOOLS_INFO_001: usize = 0x732F00;
            pub const EMPTY_WORLD_SERVICE001_CLIENT: usize = 0x480850;
            pub const GAME_CLIENT_EXPORTS001: usize = 0x732F10;
            pub const LEGACY_GAME_UI001: usize = 0x8AEE40;
            pub const SOURCE2_CLIENT002: usize = 0x732F20;
            pub const SOURCE2_CLIENT_CONFIG001: usize = 0x46BA90;
            pub const SOURCE2_CLIENT_PREDICTION001: usize = 0x7AF990;
            pub const SOURCE2_CLIENT_UI001: usize = 0x89E460;
        }
        // Module: engine2.dll
        pub mod engine2 {
            pub const BENCHMARK_SERVICE001: usize = 0x177230;
            pub const BUG_SERVICE001: usize = 0x178A90;
            pub const CLIENT_SERVER_ENGINE_LOOP_SERVICE_001: usize = 0x1EAE60;
            pub const ENGINE_GAME_UI001: usize = 0x121E70;
            pub const ENGINE_SERVICE_MGR001: usize = 0x1DBC10;
            pub const GAME_EVENT_SYSTEM_CLIENT_V001: usize = 0x1E02B0;
            pub const GAME_EVENT_SYSTEM_SERVER_V001: usize = 0x1E02C0;
            pub const GAME_RESOURCE_SERVICE_CLIENT_V001: usize = 0x17FC50;
            pub const GAME_RESOURCE_SERVICE_SERVER_V001: usize = 0x17FC60;
            pub const GAME_UI_SERVICE_001: usize = 0x182600;
            pub const HOST_STATE_MGR001: usize = 0x1E4D10;
            pub const INETSUPPORT_001: usize = 0xF0DE0;
            pub const INPUT_SERVICE_001: usize = 0x188120;
            pub const KEY_VALUE_CACHE001: usize = 0x1E7530;
            pub const MAP_LIST_SERVICE_001: usize = 0x19B050;
            pub const NETWORK_CLIENT_SERVICE_001: usize = 0x1A2210;
            pub const NETWORK_P2P_SERVICE_001: usize = 0x1A8F50;
            pub const NETWORK_SERVER_SERVICE_001: usize = 0x1AD4C0;
            pub const NETWORK_SERVICE_001: usize = 0x1B26E0;
            pub const RENDER_SERVICE_001: usize = 0x1B2BD0;
            pub const SCREENSHOT_SERVICE001: usize = 0x1B5590;
            pub const SIMPLE_ENGINE_LOOP_SERVICE_001: usize = 0x1F7050;
            pub const SOUND_SERVICE_001: usize = 0x1B9B90;
            pub const SOURCE2_ENGINE_TO_CLIENT001: usize = 0x61A90;
            pub const SOURCE2_ENGINE_TO_CLIENT_STRING_TABLE001: usize = 0x8AB70;
            pub const SOURCE2_ENGINE_TO_SERVER001: usize = 0x92140;
            pub const SOURCE2_ENGINE_TO_SERVER_STRING_TABLE001: usize = 0xA9830;
            pub const SPLIT_SCREEN_SERVICE_001: usize = 0x1C0430;
            pub const STATS_SERVICE_001: usize = 0x1C3110;
            pub const TOOL_SERVICE_001: usize = 0x1C7D60;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x122AE0;
            pub const V_PROF_SERVICE_001: usize = 0x1C90E0;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio {
            pub const V_ASYNC_FILE_SYSTEM2_001: usize = 0x67960;
            pub const V_FILE_SYSTEM017: usize = 0x67950;
        }
        // Module: host.dll
        pub mod host {
            pub const DEBUG_DRAW_QUEUE_MANAGER001: usize = 0x11AE0;
            pub const GAME_MODEL_INFO001: usize = 0x12090;
            pub const GAME_SYSTEM2_HOST_HOOK: usize = 0x12170;
            pub const HOST_UTILS001: usize = 0x12920;
            pub const PREDICTION_DIFF_MANAGER001: usize = 0x17340;
            pub const SAVE_RESTORE_DATA_VERSION001: usize = 0x19060;
            pub const SINGLE_PLAYER_SHARED_MEMORY001: usize = 0x19070;
            pub const SOURCE2_HOST001: usize = 0x193F0;
        }
        // Module: imemanager.dll
        pub mod imemanager {
            pub const IME_MANAGER001: usize = 0xC470;
        }
        // Module: inputsystem.dll
        pub mod inputsystem {
            pub const INPUT_STACK_SYSTEM_VERSION001: usize = 0x1850;
            pub const INPUT_SYSTEM_VERSION001: usize = 0x2A40;
        }
        // Module: localize.dll
        pub mod localize {
            pub const LOCALIZE_001: usize = 0x3830;
        }
        // Module: matchmaking.dll
        pub mod matchmaking {
            pub const GAME_TYPES001: usize = 0x53800;
            pub const MATCHFRAMEWORK_001: usize = 0x105690;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2 {
            pub const FONT_MANAGER_001: usize = 0x37A80;
            pub const MATERIAL_UTILS_001: usize = 0x4DB40;
            pub const POST_PROCESSING_SYSTEM_001: usize = 0x42A80;
            pub const TEXT_LAYOUT_001: usize = 0x4A200;
            pub const V_MATERIAL_SYSTEM2_001: usize = 0x25F80;
        }
        // Module: meshsystem.dll
        pub mod meshsystem {
            pub const MESH_SYSTEM001: usize = 0x7440;
        }
        // Module: navsystem.dll
        pub mod navsystem {
            pub const NAV_SYSTEM001: usize = 0x8E30;
        }
        // Module: networksystem.dll
        pub mod networksystem {
            pub const FLATTENED_SERIALIZERS_VERSION001: usize = 0x7EF90;
            pub const NETWORK_MESSAGES_VERSION001: usize = 0x9FC90;
            pub const NETWORK_SYSTEM_VERSION001: usize = 0xBFA00;
            pub const SERIALIZED_ENTITIES_VERSION001: usize = 0xD6930;
        }
        // Module: panorama.dll
        pub mod panorama {
            pub const PANORAMA_UI_ENGINE001: usize = 0x5D960;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango {
            pub const PANORAMA_TEXT_SERVICES001: usize = 0x4CBE0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient {
            pub const PANORAMA_UI_CLIENT001: usize = 0x12010;
        }
        // Module: particles.dll
        pub mod particles {
            pub const PARTICLE_SYSTEM_MGR003: usize = 0x591D0;
        }
        // Module: pulse_system.dll
        pub mod pulse_system {
            pub const I_PULSE_SYSTEM_001: usize = 0x44C0;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11 {
            pub const RENDER_DEVICE_MGR001: usize = 0x4C7D0;
            pub const RENDER_UTILS_001: usize = 0x55150;
            pub const V_RENDER_DEVICE_MGR_BACKDOOR001: usize = 0x4C7E0;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem {
            pub const RESOURCE_SYSTEM013: usize = 0x10920;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache {
            pub const RESPONSE_RULES_CACHE001: usize = 0x31A0;
            pub const SCENE_FILE_CACHE002: usize = 0x6A60;
        }
        // Module: scenesystem.dll
        pub mod scenesystem {
            pub const RENDERING_PIPELINES_001: usize = 0x86480;
            pub const SCENE_SYSTEM_002: usize = 0xBD200;
            pub const SCENE_UTILS_001: usize = 0x12FCF0;
        }
        // Module: schemasystem.dll
        pub mod schemasystem {
            pub const SCHEMA_SYSTEM_001: usize = 0xAA50;
        }
        // Module: server.dll
        pub mod server {
            pub const EMPTY_WORLD_SERVICE001_SERVER: usize = 0x572840;
            pub const ENTITY_SUBCLASS_UTILS_V001: usize = 0x2AF7A0;
            pub const NAV_GAME_TEST001: usize = 0xA46F10;
            pub const SERVER_TOOLS_INFO_001: usize = 0x8322D0;
            pub const SOURCE2_GAME_CLIENTS001: usize = 0x8322E0;
            pub const SOURCE2_GAME_DIRECTOR001: usize = 0x11EAB0;
            pub const SOURCE2_GAME_ENTITIES001: usize = 0x8322F0;
            pub const SOURCE2_SERVER001: usize = 0x832300;
            pub const SOURCE2_SERVER_CONFIG001: usize = 0x566BC0;
            pub const CUSTOMNAVSYSTEM001: usize = 0x22C660;
        }
        // Module: soundsystem.dll
        pub mod soundsystem {
            pub const SOUND_OP_SYSTEM001: usize = 0x16A640;
            pub const SOUND_OP_SYSTEM_EDIT001: usize = 0x96A50;
            pub const SOUND_SYSTEM001: usize = 0x48320;
            pub const V_MIX_EDIT_TOOL001: usize = 0x75C30;
        }
        // Module: steamaudio.dll
        pub mod steamaudio {
            pub const STEAM_AUDIO001: usize = 0x5AA70;
        }
        // Module: steamclient64.dll
        pub mod steamclient64 {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x8621C0;
            pub const IVALIDATE001: usize = 0x866250;
            pub const STEAM_CLIENT006: usize = 0x663700;
            pub const STEAM_CLIENT007: usize = 0x663710;
            pub const STEAM_CLIENT008: usize = 0x663720;
            pub const STEAM_CLIENT009: usize = 0x663730;
            pub const STEAM_CLIENT010: usize = 0x663740;
            pub const STEAM_CLIENT011: usize = 0x663750;
            pub const STEAM_CLIENT012: usize = 0x663760;
            pub const STEAM_CLIENT013: usize = 0x663770;
            pub const STEAM_CLIENT014: usize = 0x663780;
            pub const STEAM_CLIENT015: usize = 0x663790;
            pub const STEAM_CLIENT016: usize = 0x6637A0;
            pub const STEAM_CLIENT017: usize = 0x6637B0;
            pub const STEAM_CLIENT018: usize = 0x6637C0;
            pub const STEAM_CLIENT019: usize = 0x6637D0;
            pub const STEAM_CLIENT020: usize = 0x6637E0;
            pub const STEAM_CLIENT021: usize = 0x6637F0;
            pub const P2PVOICE002: usize = 0xD9FD0;
            pub const P2PVOICESINGLETON002: usize = 0xD6A30;
        }
        // Module: tier0.dll
        pub mod tier0 {
            pub const TEST_SCRIPT_MGR001: usize = 0x140790;
            pub const V_ENGINE_CVAR007: usize = 0x63290;
            pub const V_PROCESS_UTILS002: usize = 0x131C70;
            pub const V_STRING_TOKEN_SYSTEM001: usize = 0x190600;
        }
        // Module: v8system.dll
        pub mod v8system {
            pub const SOURCE2_V8_SYSTEM001: usize = 0x1950;
        }
        // Module: valve_avi.dll
        pub mod valve_avi {
            pub const V_AVI001: usize = 0x2F90;
        }
        // Module: valve_wmf.dll
        pub mod valve_wmf {
            pub const V_MEDIA_FOUNDATION001: usize = 0x12D0;
        }
        // Module: vphysics2.dll
        pub mod vphysics2 {
            pub const V_PHYSICS2_HANDLE_INTERFACE_001: usize = 0x5BCB0;
            pub const V_PHYSICS2_INTERFACE_001: usize = 0x57130;
        }
        // Module: vscript.dll
        pub mod vscript {
            pub const V_SCRIPT_MANAGER010: usize = 0x32000;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64 {
            pub const IVALIDATE001: usize = 0x25120;
            pub const V_ENGINE_CVAR002: usize = 0x5760;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer {
            pub const WORLD_RENDERER_MGR001: usize = 0x205E0;
        }
    }
}
