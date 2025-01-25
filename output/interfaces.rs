// Generated using https://github.com/a2x/cs2-dumper
// 2025-01-25 11:40:13.476421 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x60EDC8;
            pub const AnimationSystem_001: usize = 0x606CF0;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x1865C00;
            pub const EmptyWorldService001_Client: usize = 0x1820F00;
            pub const GameClientExports001: usize = 0x18628B8;
            pub const LegacyGameUI001: usize = 0x1883430;
            pub const Source2Client002: usize = 0x1A7DEE0;
            pub const Source2ClientConfig001: usize = 0x1A14570;
            pub const Source2ClientPrediction001: usize = 0x186DC80;
            pub const Source2ClientUI001: usize = 0x1881800;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x540CB0;
            pub const BugService001: usize = 0x5D9BA0;
            pub const ClientServerEngineLoopService_001: usize = 0x5419D0;
            pub const EngineGameUI001: usize = 0x53EB60;
            pub const EngineServiceMgr001: usize = 0x61AA30;
            pub const GameEventSystemClientV001: usize = 0x61AD30;
            pub const GameEventSystemServerV001: usize = 0x61AE70;
            pub const GameResourceServiceClientV001: usize = 0x540DB0;
            pub const GameResourceServiceServerV001: usize = 0x540E10;
            pub const GameUIService_001: usize = 0x5D9EA0;
            pub const HostStateMgr001: usize = 0x5418C0;
            pub const INETSUPPORT_001: usize = 0x53A060;
            pub const InputService_001: usize = 0x5DA1B0;
            pub const KeyValueCache001: usize = 0x541970;
            pub const MapListService_001: usize = 0x6191B0;
            pub const NetworkClientService_001: usize = 0x619340;
            pub const NetworkP2PService_001: usize = 0x5410C0;
            pub const NetworkServerService_001: usize = 0x6196D0;
            pub const NetworkService_001: usize = 0x541210;
            pub const RenderService_001: usize = 0x619930;
            pub const ScreenshotService001: usize = 0x619BD0;
            pub const SimpleEngineLoopService_001: usize = 0x541AE0;
            pub const SoundService_001: usize = 0x541250;
            pub const Source2EngineToClient001: usize = 0x53E1E0;
            pub const Source2EngineToClientStringTable001: usize = 0x53E240;
            pub const Source2EngineToServer001: usize = 0x53E2D8;
            pub const Source2EngineToServerStringTable001: usize = 0x53E300;
            pub const SplitScreenService_001: usize = 0x541530;
            pub const StatsService_001: usize = 0x61A000;
            pub const ToolService_001: usize = 0x5416F0;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x53EBF0;
            pub const VProfService_001: usize = 0x541730;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x20C590;
            pub const VFileSystem017: usize = 0x211840;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x136FE0;
            pub const GameModelInfo001: usize = 0x137020;
            pub const GameSystem2HostHook: usize = 0x137060;
            pub const HostUtils001: usize = 0x137090;
            pub const PredictionDiffManager001: usize = 0x1372E0;
            pub const SaveRestoreDataVersion001: usize = 0x137410;
            pub const SinglePlayerSharedMemory001: usize = 0x137440;
            pub const Source2Host001: usize = 0x1374B0;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0x2EA50;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x36B70;
            pub const InputSystemVersion001: usize = 0x387E0;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x3AAD0;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x1A41B0;
            pub const MATCHFRAMEWORK_001: usize = 0x1AC380;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x114330;
            pub const MaterialUtils_001: usize = 0x10F4C0;
            pub const PostProcessingSystem_001: usize = 0x10F3D0;
            pub const TextLayout_001: usize = 0x10F450;
            pub const VMaterialSystem2_001: usize = 0x113910;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x19D600;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0xFB730;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x244570;
            pub const NetworkMessagesVersion001: usize = 0x2765E0;
            pub const NetworkSystemVersion001: usize = 0x26E300;
            pub const SerializedEntitiesVersion001: usize = 0x26E3F0;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x4E5260;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x2B38E0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x28A850;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x629CD0;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x17D990;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x3EE1F0;
            pub const RenderUtils_001: usize = 0x3EEA58;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x3EE290;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x72A40;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x720F0;
            pub const SceneFileCache002: usize = 0x72260;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x5CEB10;
            pub const SceneSystem_002: usize = 0x7ADFF0;
            pub const SceneUtils_001: usize = 0x5CF360;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x616E0;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x1378BC0;
            pub const EntitySubclassUtilsV001: usize = 0x13293B0;
            pub const NavGameTest001: usize = 0x1418C08;
            pub const ServerToolsInfo_001: usize = 0x13CE548;
            pub const Source2GameClients001: usize = 0x13C8410;
            pub const Source2GameDirector001: usize = 0x14FC1C0;
            pub const Source2GameEntities001: usize = 0x13CE470;
            pub const Source2Server001: usize = 0x13CE2E0;
            pub const Source2ServerConfig001: usize = 0x15C6AD8;
            pub const customnavsystem001: usize = 0x130DB18;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x39EC40;
            pub const SoundOpSystemEdit001: usize = 0x39EB10;
            pub const SoundSystem001: usize = 0x39E5E0;
            pub const VMixEditTool001: usize = 0x48289C6A;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x2139F0;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0xFFFFFFFF8BAF705A;
            pub const IVALIDATE001: usize = 0x14A3108;
            pub const SteamClient006: usize = 0x14A0860;
            pub const SteamClient007: usize = 0x14A0868;
            pub const SteamClient008: usize = 0x14A0870;
            pub const SteamClient009: usize = 0x14A0878;
            pub const SteamClient010: usize = 0x14A0880;
            pub const SteamClient011: usize = 0x14A0888;
            pub const SteamClient012: usize = 0x14A0890;
            pub const SteamClient013: usize = 0x14A0898;
            pub const SteamClient014: usize = 0x14A08A0;
            pub const SteamClient015: usize = 0x14A08A8;
            pub const SteamClient016: usize = 0x14A08B0;
            pub const SteamClient017: usize = 0x14A08B8;
            pub const SteamClient018: usize = 0x14A08C0;
            pub const SteamClient019: usize = 0x14A08C8;
            pub const SteamClient020: usize = 0x14A08D0;
            pub const SteamClient021: usize = 0x14A08D8;
            pub const p2pvoice002: usize = 0x14E26BF;
            pub const p2pvoicesingleton002: usize = 0x147E0E0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x37EA50;
            pub const VEngineCvar007: usize = 0x38D4B0;
            pub const VProcessUtils002: usize = 0x37E960;
            pub const VStringTokenSystem001: usize = 0x3A5F00;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x2C480;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x391F50;
            pub const VPhysics2_Interface_001: usize = 0x391F90;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x128600;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0x6A990;
            pub const VEngineCvar002: usize = 0x69070;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x161D80;
        }
    }
}
