// Generated using https://github.com/a2x/cs2-dumper
// 2026-01-22 12:23:57.753951800 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x7F25B8;
            pub const AnimationSystem_001: usize = 0x7EA4D0;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x2059D90;
            pub const EmptyWorldService001_Client: usize = 0x2013D10;
            pub const GameClientExports001: usize = 0x2056A70;
            pub const LegacyGameUI001: usize = 0x2074330;
            pub const Source2Client002: usize = 0x23006F0;
            pub const Source2ClientConfig001: usize = 0x2284610;
            pub const Source2ClientPrediction001: usize = 0x20616E0;
            pub const Source2ClientUI001: usize = 0x2072B60;
        }
        // Module: crashhandler64.dll
        pub mod crashhandler64_dll {
            pub const : usize = 0xFFFF800601000007;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x60C610;
            pub const BugService001: usize = 0x8C1830;
            pub const ClientServerEngineLoopService_001: usize = 0x902ED0;
            pub const EngineGameUI001: usize = 0x60A2B0;
            pub const EngineServiceMgr001: usize = 0x902780;
            pub const GameEventSystemClientV001: usize = 0x902A60;
            pub const GameEventSystemServerV001: usize = 0x902B90;
            pub const GameResourceServiceClientV001: usize = 0x60C710;
            pub const GameResourceServiceServerV001: usize = 0x60C770;
            pub const GameUIService_001: usize = 0x8C1C60;
            pub const HostStateMgr001: usize = 0x60CF90;
            pub const INETSUPPORT_001: usize = 0x6058E0;
            pub const InputService_001: usize = 0x8C1F50;
            pub const KeyValueCache001: usize = 0x60D040;
            pub const MapListService_001: usize = 0x900DC0;
            pub const NetworkClientService_001: usize = 0x900F50;
            pub const NetworkP2PService_001: usize = 0x901290;
            pub const NetworkServerService_001: usize = 0x901440;
            pub const NetworkService_001: usize = 0x60C8E0;
            pub const RenderService_001: usize = 0x9016B0;
            pub const ScreenshotService001: usize = 0x901970;
            pub const SimpleEngineLoopService_001: usize = 0x60D0A0;
            pub const SoundService_001: usize = 0x60C920;
            pub const Source2EngineToClient001: usize = 0x609BD0;
            pub const Source2EngineToClientStringTable001: usize = 0x609C30;
            pub const Source2EngineToServer001: usize = 0x609CA8;
            pub const Source2EngineToServerStringTable001: usize = 0x609CD0;
            pub const SplitScreenService_001: usize = 0x60CC00;
            pub const StatsService_001: usize = 0x901D30;
            pub const ToolService_001: usize = 0x60CDC0;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x60A340;
            pub const VProfService_001: usize = 0x60CE00;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x214970;
            pub const VFileSystem017: usize = 0x214730;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x139020;
            pub const GameModelInfo001: usize = 0x139060;
            pub const GameSystem2HostHook: usize = 0x1390A0;
            pub const HostUtils001: usize = 0x1467E0;
            pub const PredictionDiffManager001: usize = 0x1391B0;
            pub const SaveRestoreDataVersion001: usize = 0x1392E0;
            pub const SinglePlayerSharedMemory001: usize = 0x139310;
            pub const Source2Host001: usize = 0x139380;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0x36AA0;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x43DD0;
            pub const InputSystemVersion001: usize = 0x45AD0;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x55E20;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x1B8000;
            pub const MATCHFRAMEWORK_001: usize = 0x1C02B0;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x165580;
            pub const MaterialUtils_001: usize = 0x14D5C0;
            pub const PostProcessingSystem_001: usize = 0x14D4D0;
            pub const TextLayout_001: usize = 0x14D550;
            pub const VMaterialSystem2_001: usize = 0x164E90;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x14F6A0;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0x1269E0;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x274500;
            pub const NetworkMessagesVersion001: usize = 0x29C420;
            pub const NetworkSystemVersion001: usize = 0x28DCC0;
            pub const SerializedEntitiesVersion001: usize = 0x28DDB0;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x507CB0;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x2B89C0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x295380;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x520EF0;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x1F2670;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x432D30;
            pub const RenderUtils_001: usize = 0x433628;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x432DD0;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x81FF0;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0xDB190;
            pub const SceneFileCache002: usize = 0xDB2C0;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x65BAC0;
            pub const SceneSystem_002: usize = 0x8CFEA0;
            pub const SceneUtils_001: usize = 0x65C9D0;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x76730;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x1B66880;
            pub const EntitySubclassUtilsV001: usize = 0x1B12080;
            pub const NavGameTest001: usize = 0x1C10488;
            pub const ServerToolsInfo_001: usize = 0x1BC1768;
            pub const Source2GameClients001: usize = 0x1BBE7E0;
            pub const Source2GameDirector001: usize = 0x1D50400;
            pub const Source2GameEntities001: usize = 0x1BC0E70;
            pub const Source2Server001: usize = 0x1BC0CD0;
            pub const Source2ServerConfig001: usize = 0x1E458A8;
            pub const customnavsystem001: usize = 0x1AF0E88;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x4F3AA0;
            pub const SoundOpSystemEdit001: usize = 0x4F3980;
            pub const SoundSystem001: usize = 0x4F3470;
            pub const VMixEditTool001: usize = 0x59472DF;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x25C440;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0xFFFFFFFF8BB5193A;
            pub const IVALIDATE001: usize = 0x166F0A8;
            pub const SteamClient006: usize = 0x166C5B0;
            pub const SteamClient007: usize = 0x166C5B8;
            pub const SteamClient008: usize = 0x166C5C0;
            pub const SteamClient009: usize = 0x166C5C8;
            pub const SteamClient010: usize = 0x166C5D0;
            pub const SteamClient011: usize = 0x166C5D8;
            pub const SteamClient012: usize = 0x166C5E0;
            pub const SteamClient013: usize = 0x166C5E8;
            pub const SteamClient014: usize = 0x166C5F0;
            pub const SteamClient015: usize = 0x166C5F8;
            pub const SteamClient016: usize = 0x166C600;
            pub const SteamClient017: usize = 0x166C608;
            pub const SteamClient018: usize = 0x166C610;
            pub const SteamClient019: usize = 0x166C618;
            pub const SteamClient020: usize = 0x166C620;
            pub const SteamClient021: usize = 0x166C628;
            pub const SteamClient022: usize = 0x166C630;
            pub const SteamClient023: usize = 0x166C638;
            pub const p2pvoice002: usize = 0x14E4E6F;
            pub const p2pvoicesingleton002: usize = 0x16480F0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x398620;
            pub const VEngineCvar007: usize = 0x3A33B0;
            pub const VProcessUtils002: usize = 0x3985C0;
            pub const VStringTokenSystem001: usize = 0x3CA090;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x316B0;
        }
        // Module: vconcomm.dll
        pub mod vconcomm_dll {
            pub const VConComm001: usize = 0x39540;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x3FE120;
            pub const VPhysics2_Interface_001: usize = 0x3FE160;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x13B390;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0x6E990;
            pub const VEngineCvar002: usize = 0x6D070;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x2149C0;
        }
    }
}
