// Generated using https://github.com/a2x/cs2-dumper
// 2024-12-19 01:46:52.610571900 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x600DC8;
            pub const AnimationSystem_001: usize = 0x5F8CF0;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x185CAB0;
            pub const EmptyWorldService001_Client: usize = 0x1817E10;
            pub const GameClientExports001: usize = 0x1859768;
            pub const LegacyGameUI001: usize = 0x187A2E0;
            pub const Source2Client002: usize = 0x1A5D430;
            pub const Source2ClientConfig001: usize = 0x19FD590;
            pub const Source2ClientPrediction001: usize = 0x1864B60;
            pub const Source2ClientUI001: usize = 0x18786C0;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x538BB0;
            pub const BugService001: usize = 0x5D1940;
            pub const ClientServerEngineLoopService_001: usize = 0x5398D0;
            pub const EngineGameUI001: usize = 0x536B40;
            pub const EngineServiceMgr001: usize = 0x6127A0;
            pub const GameEventSystemClientV001: usize = 0x612AD0;
            pub const GameEventSystemServerV001: usize = 0x612C10;
            pub const GameResourceServiceClientV001: usize = 0x538CB0;
            pub const GameResourceServiceServerV001: usize = 0x538D10;
            pub const GameUIService_001: usize = 0x5D1C40;
            pub const HostStateMgr001: usize = 0x5397C0;
            pub const INETSUPPORT_001: usize = 0x532060;
            pub const InputService_001: usize = 0x5D1F20;
            pub const KeyValueCache001: usize = 0x539870;
            pub const MapListService_001: usize = 0x610F20;
            pub const NetworkClientService_001: usize = 0x6110B0;
            pub const NetworkP2PService_001: usize = 0x538FC0;
            pub const NetworkServerService_001: usize = 0x611440;
            pub const NetworkService_001: usize = 0x539110;
            pub const RenderService_001: usize = 0x6116A0;
            pub const ScreenshotService001: usize = 0x611970;
            pub const SimpleEngineLoopService_001: usize = 0x5399E0;
            pub const SoundService_001: usize = 0x539150;
            pub const Source2EngineToClient001: usize = 0x5361E0;
            pub const Source2EngineToClientStringTable001: usize = 0x536240;
            pub const Source2EngineToServer001: usize = 0x5362D8;
            pub const Source2EngineToServerStringTable001: usize = 0x536300;
            pub const SplitScreenService_001: usize = 0x539430;
            pub const StatsService_001: usize = 0x611D70;
            pub const ToolService_001: usize = 0x5395F0;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x536BD0;
            pub const VProfService_001: usize = 0x539630;
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
            pub const FontManager_001: usize = 0x113330;
            pub const MaterialUtils_001: usize = 0x10E4C0;
            pub const PostProcessingSystem_001: usize = 0x10E3D0;
            pub const TextLayout_001: usize = 0x10E450;
            pub const VMaterialSystem2_001: usize = 0x112910;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x150C20;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0xFA730;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x23F490;
            pub const NetworkMessagesVersion001: usize = 0x2714D0;
            pub const NetworkSystemVersion001: usize = 0x269220;
            pub const SerializedEntitiesVersion001: usize = 0x269310;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x4E4260;
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
            pub const ParticleSystemMgr003: usize = 0x5E2370;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x14A240;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x3EE1F0;
            pub const RenderUtils_001: usize = 0x3EEA58;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x3EE290;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x6AFF0;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x710E0;
            pub const SceneFileCache002: usize = 0x71250;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x5CEB10;
            pub const SceneSystem_002: usize = 0x7ADFE0;
            pub const SceneUtils_001: usize = 0x5CF360;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x5E790;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x1371B10;
            pub const EntitySubclassUtilsV001: usize = 0x13223C0;
            pub const NavGameTest001: usize = 0x1411B78;
            pub const ServerToolsInfo_001: usize = 0x13C7498;
            pub const Source2GameClients001: usize = 0x13C1340;
            pub const Source2GameDirector001: usize = 0x14F5110;
            pub const Source2GameEntities001: usize = 0x13C73C0;
            pub const Source2Server001: usize = 0x13C7230;
            pub const Source2ServerConfig001: usize = 0x15B1DE8;
            pub const customnavsystem001: usize = 0x1306B28;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x39AC40;
            pub const SoundOpSystemEdit001: usize = 0x39AB10;
            pub const SoundSystem001: usize = 0x39A5E0;
            pub const VMixEditTool001: usize = 0x48289BBA;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x2139F0;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0xFFFFFFFF8BAEC35A;
            pub const IVALIDATE001: usize = 0x1494F18;
            pub const SteamClient006: usize = 0x14926E0;
            pub const SteamClient007: usize = 0x14926E8;
            pub const SteamClient008: usize = 0x14926F0;
            pub const SteamClient009: usize = 0x14926F8;
            pub const SteamClient010: usize = 0x1492700;
            pub const SteamClient011: usize = 0x1492708;
            pub const SteamClient012: usize = 0x1492710;
            pub const SteamClient013: usize = 0x1492718;
            pub const SteamClient014: usize = 0x1492720;
            pub const SteamClient015: usize = 0x1492728;
            pub const SteamClient016: usize = 0x1492730;
            pub const SteamClient017: usize = 0x1492738;
            pub const SteamClient018: usize = 0x1492740;
            pub const SteamClient019: usize = 0x1492748;
            pub const SteamClient020: usize = 0x1492750;
            pub const SteamClient021: usize = 0x1492758;
            pub const p2pvoice002: usize = 0x14E24BF;
            pub const p2pvoicesingleton002: usize = 0x14700E0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x37BA50;
            pub const VEngineCvar007: usize = 0x38A4B0;
            pub const VProcessUtils002: usize = 0x37B960;
            pub const VStringTokenSystem001: usize = 0x3A2F00;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x2C470;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x38BF40;
            pub const VPhysics2_Interface_001: usize = 0x38BF80;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x1285F0;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0xABB40;
            pub const VEngineCvar002: usize = 0x69070;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x15F1B0;
        }
    }
}
