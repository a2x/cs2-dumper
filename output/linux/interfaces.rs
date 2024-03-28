// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-28 07:07:08.835893701 UTC

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: libanimationsystem.so
        pub mod libanimationsystem {
            pub const ANIMATION_SYSTEM_UTILS_001: usize = 0x18CA60;
            pub const ANIMATION_SYSTEM_001: usize = 0x18C850;
        }
        // Module: libclient.so
        pub mod libclient {
            pub const CLIENT_TOOLS_INFO_001: usize = 0xD54880;
            pub const EMPTY_WORLD_SERVICE001_CLIENT: usize = 0xA47F30;
            pub const GAME_CLIENT_EXPORTS001: usize = 0xD544D0;
            pub const LEGACY_GAME_UI001: usize = 0xF200B0;
            pub const SOURCE2_CLIENT002: usize = 0xD54540;
            pub const SOURCE2_CLIENT_CONFIG001: usize = 0xA2BB50;
            pub const SOURCE2_CLIENT_PREDICTION001: usize = 0xDE3A80;
            pub const SOURCE2_CLIENT_UI001: usize = 0xEDEAC0;
        }
        // Module: libengine2.so
        pub mod libengine2 {
            pub const BENCHMARK_SERVICE001: usize = 0x1E5FA0;
            pub const BUG_SERVICE001: usize = 0x1E21A0;
            pub const CLIENT_SERVER_ENGINE_LOOP_SERVICE_001: usize = 0x1B3AF0;
            pub const ENGINE_GAME_UI001: usize = 0x375580;
            pub const ENGINE_SERVICE_MGR001: usize = 0x1A3A60;
            pub const GAME_EVENT_SYSTEM_CLIENT_V001: usize = 0x1A8AD0;
            pub const GAME_EVENT_SYSTEM_SERVER_V001: usize = 0x1A8AE0;
            pub const GAME_RESOURCE_SERVICE_CLIENT_V001: usize = 0x1E78D0;
            pub const GAME_RESOURCE_SERVICE_SERVER_V001: usize = 0x1E78E0;
            pub const GAME_UI_SERVICE_001: usize = 0x1EF410;
            pub const HOST_STATE_MGR001: usize = 0x1AE650;
            pub const INETSUPPORT_001: usize = 0x33F2A0;
            pub const INPUT_SERVICE_001: usize = 0x1F39E0;
            pub const KEY_VALUE_CACHE001: usize = 0x1B0FA0;
            pub const MAP_LIST_SERVICE_001: usize = 0x2079E0;
            pub const NETWORK_CLIENT_SERVICE_001: usize = 0x22E320;
            pub const NETWORK_P2P_SERVICE_001: usize = 0x244940;
            pub const NETWORK_SERVER_SERVICE_001: usize = 0x20BA90;
            pub const NETWORK_SERVICE_001: usize = 0x20B1B0;
            pub const RENDER_SERVICE_001: usize = 0x249D00;
            pub const SCREENSHOT_SERVICE001: usize = 0x24C8F0;
            pub const SIMPLE_ENGINE_LOOP_SERVICE_001: usize = 0x1C87B0;
            pub const SOUND_SERVICE_001: usize = 0x250F10;
            pub const SOURCE2_ENGINE_TO_CLIENT001: usize = 0x2C6EE0;
            pub const SOURCE2_ENGINE_TO_CLIENT_STRING_TABLE001: usize = 0x29E6D0;
            pub const SOURCE2_ENGINE_TO_SERVER001: usize = 0x2ED890;
            pub const SOURCE2_ENGINE_TO_SERVER_STRING_TABLE001: usize = 0x2D0000;
            pub const SPLIT_SCREEN_SERVICE_001: usize = 0x258290;
            pub const STATS_SERVICE_001: usize = 0x25B9E0;
            pub const TOOL_SERVICE_001: usize = 0x260C60;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x375000;
            pub const V_PROF_SERVICE_001: usize = 0x262410;
        }
        // Module: libfilesystem_stdio.so
        pub mod libfilesystem_stdio {
            pub const V_ASYNC_FILE_SYSTEM2_001: usize = 0x80180;
            pub const V_FILE_SYSTEM017: usize = 0x80170;
        }
        // Module: libhost.so
        pub mod libhost {
            pub const DEBUG_DRAW_QUEUE_MANAGER001: usize = 0xC2C70;
            pub const GAME_MODEL_INFO001: usize = 0xBD8F0;
            pub const GAME_SYSTEM2_HOST_HOOK: usize = 0xBE030;
            pub const HOST_UTILS001: usize = 0xBE4B0;
            pub const PREDICTION_DIFF_MANAGER001: usize = 0xBF440;
            pub const SAVE_RESTORE_DATA_VERSION001: usize = 0xC17B0;
            pub const SINGLE_PLAYER_SHARED_MEMORY001: usize = 0xC1A70;
            pub const SOURCE2_HOST001: usize = 0xC21D0;
        }
        // Module: libinputsystem.so
        pub mod libinputsystem {
            pub const INPUT_STACK_SYSTEM_VERSION001: usize = 0x11840;
            pub const INPUT_SYSTEM_VERSION001: usize = 0x12D30;
        }
        // Module: liblocalize.so
        pub mod liblocalize {
            pub const LOCALIZE_001: usize = 0x1DB00;
        }
        // Module: libmatchmaking.so
        pub mod libmatchmaking {
            pub const GAME_TYPES001: usize = 0x12FF60;
            pub const MATCHFRAMEWORK_001: usize = 0x204440;
        }
        // Module: libmaterialsystem2.so
        pub mod libmaterialsystem2 {
            pub const FONT_MANAGER_001: usize = 0x7A340;
            pub const MATERIAL_UTILS_001: usize = 0x64B80;
            pub const POST_PROCESSING_SYSTEM_001: usize = 0x89C70;
            pub const TEXT_LAYOUT_001: usize = 0x87200;
            pub const V_MATERIAL_SYSTEM2_001: usize = 0x2C7A0;
        }
        // Module: libmeshsystem.so
        pub mod libmeshsystem {
            pub const MESH_SYSTEM001: usize = 0x94810;
        }
        // Module: libnetworksystem.so
        pub mod libnetworksystem {
            pub const FLATTENED_SERIALIZERS_VERSION001: usize = 0x159460;
            pub const NETWORK_MESSAGES_VERSION001: usize = 0x180B90;
            pub const NETWORK_SYSTEM_VERSION001: usize = 0x1A9CE0;
            pub const SERIALIZED_ENTITIES_VERSION001: usize = 0x1C2750;
        }
        // Module: libpanorama.so
        pub mod libpanorama {
            pub const PANORAMA_UI_ENGINE001: usize = 0x220F80;
        }
        // Module: libpanorama_text_pango.so
        pub mod libpanorama_text_pango {
            pub const PANORAMA_TEXT_SERVICES001: usize = 0xBC4C0;
        }
        // Module: libpanoramauiclient.so
        pub mod libpanoramauiclient {
            pub const PANORAMA_UI_CLIENT001: usize = 0x10AAC0;
        }
        // Module: libparticles.so
        pub mod libparticles {
            pub const PARTICLE_SYSTEM_MGR003: usize = 0x1EBE60;
        }
        // Module: libpulse_system.so
        pub mod libpulse_system {
            pub const I_PULSE_SYSTEM_001: usize = 0x357B0;
        }
        // Module: librendersystemvulkan.so
        pub mod librendersystemvulkan {
            pub const RENDER_DEVICE_MGR001: usize = 0x185100;
            pub const RENDER_UTILS_001: usize = 0x1019A0;
        }
        // Module: libresourcesystem.so
        pub mod libresourcesystem {
            pub const RESOURCE_SYSTEM013: usize = 0x30A90;
        }
        // Module: libscenefilecache.so
        pub mod libscenefilecache {
            pub const RESPONSE_RULES_CACHE001: usize = 0x88E40;
            pub const SCENE_FILE_CACHE002: usize = 0x85B10;
        }
        // Module: libscenesystem.so
        pub mod libscenesystem {
            pub const RENDERING_PIPELINES_001: usize = 0x120E20;
            pub const SCENE_SYSTEM_002: usize = 0x164300;
            pub const SCENE_UTILS_001: usize = 0x1E0A70;
        }
        // Module: libschemasystem.so
        pub mod libschemasystem {
            pub const SCHEMA_SYSTEM_001: usize = 0x211F0;
        }
        // Module: libserver.so
        pub mod libserver {
            pub const EMPTY_WORLD_SERVICE001_SERVER: usize = 0xB83320;
            pub const ENTITY_SUBCLASS_UTILS_V001: usize = 0x8611F0;
            pub const NAV_GAME_TEST001: usize = 0x1094010;
            pub const SERVER_TOOLS_INFO_001: usize = 0xE72080;
            pub const SOURCE2_GAME_CLIENTS001: usize = 0xE72010;
            pub const SOURCE2_GAME_DIRECTOR001: usize = 0x6C41A0;
            pub const SOURCE2_GAME_ENTITIES001: usize = 0xE72000;
            pub const SOURCE2_SERVER001: usize = 0xE71CF0;
            pub const SOURCE2_SERVER_CONFIG001: usize = 0xB0EED0;
            pub const CUSTOMNAVSYSTEM001: usize = 0x7F8230;
        }
        // Module: libsoundsystem.so
        pub mod libsoundsystem {
            pub const SOUND_OP_SYSTEM001: usize = 0x155E80;
            pub const SOUND_OP_SYSTEM_EDIT001: usize = 0xAD350;
            pub const SOUND_SYSTEM001: usize = 0x1C4920;
            pub const V_MIX_EDIT_TOOL001: usize = 0x1F4340;
        }
        // Module: libsteamaudio.so
        pub mod libsteamaudio {
            pub const STEAM_AUDIO001: usize = 0x31590;
        }
        // Module: libtier0.so
        pub mod libtier0 {
            pub const TEST_SCRIPT_MGR001: usize = 0x1BE8F0;
            pub const V_ENGINE_CVAR007: usize = 0xF1370;
            pub const V_PROCESS_UTILS002: usize = 0x19C370;
            pub const V_STRING_TOKEN_SYSTEM001: usize = 0x1EA8D0;
        }
        // Module: libv8system.so
        pub mod libv8system {
            pub const SOURCE2_V8_SYSTEM001: usize = 0x1B630;
        }
        // Module: libvphysics2.so
        pub mod libvphysics2 {
            pub const V_PHYSICS2_HANDLE_INTERFACE_001: usize = 0xC1FD0;
            pub const V_PHYSICS2_INTERFACE_001: usize = 0xC1BC0;
        }
        // Module: libvscript.so
        pub mod libvscript {
            pub const V_SCRIPT_MANAGER010: usize = 0x26230;
        }
        // Module: libworldrenderer.so
        pub mod libworldrenderer {
            pub const WORLD_RENDERER_MGR001: usize = 0x982B0;
        }
        // Module: steamclient.so
        pub mod steamclient {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x11260D0;
            pub const IVALIDATE001: usize = 0x1122650;
            pub const STEAM_CLIENT006: usize = 0xDDA7A0;
            pub const STEAM_CLIENT007: usize = 0xDDA7B0;
            pub const STEAM_CLIENT008: usize = 0xDDA7C0;
            pub const STEAM_CLIENT009: usize = 0xDDA7D0;
            pub const STEAM_CLIENT010: usize = 0xDDA7E0;
            pub const STEAM_CLIENT011: usize = 0xDDA7F0;
            pub const STEAM_CLIENT012: usize = 0xDDA800;
            pub const STEAM_CLIENT013: usize = 0xDDA810;
            pub const STEAM_CLIENT014: usize = 0xDDA820;
            pub const STEAM_CLIENT015: usize = 0xDDA830;
            pub const STEAM_CLIENT016: usize = 0xDDA860;
            pub const STEAM_CLIENT017: usize = 0xDDA890;
            pub const STEAM_CLIENT018: usize = 0xDDA8C0;
            pub const STEAM_CLIENT019: usize = 0xDDA8F0;
            pub const STEAM_CLIENT020: usize = 0xDDA920;
            pub const STEAM_CLIENT021: usize = 0xDDA950;
            pub const P2PVOICE002: usize = 0x174B380;
            pub const P2PVOICESINGLETON002: usize = 0x17443B0;
        }
    }
}
