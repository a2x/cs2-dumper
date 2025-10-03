// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-03 00:21:54.899122200 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x7C5830;
            pub const AnimationSystem_001: usize = 0x7BD750;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x1BEAC20;
            pub const EmptyWorldService001_Client: usize = 0x1BA5E80;
            pub const GameClientExports001: usize = 0x1BE7900;
            pub const LegacyGameUI001: usize = 0x1C063D0;
            pub const Source2Client002: usize = 0x1E2DDB0;
            pub const Source2ClientConfig001: usize = 0x1DC77E0;
            pub const Source2ClientPrediction001: usize = 0x1BF1ED0;
            pub const Source2ClientUI001: usize = 0x1C04870;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x5F15A0;
            pub const BugService001: usize = 0x8A5BC0;
            pub const ClientServerEngineLoopService_001: usize = 0x8E71B0;
            pub const EngineGameUI001: usize = 0x5EF2C0;
            pub const EngineServiceMgr001: usize = 0x8E6AB0;
            pub const GameEventSystemClientV001: usize = 0x8E6D80;
            pub const GameEventSystemServerV001: usize = 0x8E6EA0;
            pub const GameResourceServiceClientV001: usize = 0x5F16A0;
            pub const GameResourceServiceServerV001: usize = 0x5F1700;
            pub const GameUIService_001: usize = 0x8A5FF0;
            pub const HostStateMgr001: usize = 0x5F2090;
            pub const INETSUPPORT_001: usize = 0x5EA860;
            pub const InputService_001: usize = 0x8A62E0;
            pub const KeyValueCache001: usize = 0x5F2140;
            pub const MapListService_001: usize = 0x8E5260;
            pub const NetworkClientService_001: usize = 0x8E53F0;
            pub const NetworkP2PService_001: usize = 0x5F1850;
            pub const NetworkServerService_001: usize = 0x8E5770;
            pub const NetworkService_001: usize = 0x5F19A0;
            pub const RenderService_001: usize = 0x8E59D0;
            pub const ScreenshotService001: usize = 0x8E5C80;
            pub const SimpleEngineLoopService_001: usize = 0x5F21A0;
            pub const SoundService_001: usize = 0x5F19E0;
            pub const Source2EngineToClient001: usize = 0x5EE950;
            pub const Source2EngineToClientStringTable001: usize = 0x5EE9B0;
            pub const Source2EngineToServer001: usize = 0x5EEA28;
            pub const Source2EngineToServerStringTable001: usize = 0x5EEA50;
            pub const SplitScreenService_001: usize = 0x5F1CE0;
            pub const StatsService_001: usize = 0x8E6080;
            pub const ToolService_001: usize = 0x5F1EA0;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x5EF350;
            pub const VProfService_001: usize = 0x5F1EE0;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x215AF0;
            pub const VFileSystem017: usize = 0x2106B8;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x138EF0;
            pub const GameModelInfo001: usize = 0x138F30;
            pub const GameSystem2HostHook: usize = 0x138F70;
            pub const HostUtils001: usize = 0x1466E0;
            pub const PredictionDiffManager001: usize = 0x139080;
            pub const SaveRestoreDataVersion001: usize = 0x1391B0;
            pub const SinglePlayerSharedMemory001: usize = 0x1391E0;
            pub const Source2Host001: usize = 0x139250;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0x36AA0;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x43CD0;
            pub const InputSystemVersion001: usize = 0x45A20;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x47BE0;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x1B5EE0;
            pub const MATCHFRAMEWORK_001: usize = 0x1BE0F0;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x169FA0;
            pub const MaterialUtils_001: usize = 0x152430;
            pub const PostProcessingSystem_001: usize = 0x152340;
            pub const TextLayout_001: usize = 0x1523C0;
            pub const VMaterialSystem2_001: usize = 0x169600;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x1C74D0;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0x11F7C0;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x261280;
            pub const NetworkMessagesVersion001: usize = 0x299390;
            pub const NetworkSystemVersion001: usize = 0x28AB60;
            pub const SerializedEntitiesVersion001: usize = 0x28AC70;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x508B20;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x2B79C0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x291200;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x586870;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x1EBC00;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x42FBC0;
            pub const RenderUtils_001: usize = 0x4304B8;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x42FC60;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x7CB40;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x76190;
            pub const SceneFileCache002: usize = 0x762E0;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x615AD0;
            pub const SceneSystem_002: usize = 0x837F40;
            pub const SceneUtils_001: usize = 0x6163D0;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x786F0;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x1708890;
            pub const EntitySubclassUtilsV001: usize = 0x16B4F90;
            pub const NavGameTest001: usize = 0x17AFEB0;
            pub const ServerToolsInfo_001: usize = 0x175FDF8;
            pub const Source2GameClients001: usize = 0x175B7B0;
            pub const Source2GameDirector001: usize = 0x18B9820;
            pub const Source2GameEntities001: usize = 0x175F500;
            pub const Source2Server001: usize = 0x175F360;
            pub const Source2ServerConfig001: usize = 0x198AD08;
            pub const customnavsystem001: usize = 0x1694A98;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x3E4420;
            pub const SoundOpSystemEdit001: usize = 0x3E4300;
            pub const SoundSystem001: usize = 0x3E3E30;
            pub const VMixEditTool001: usize = 0x485EC89B;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x2522B0;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0xFFFFFFFF8BB1AE0A;
            pub const IVALIDATE001: usize = 0x1549E28;
            pub const SteamClient006: usize = 0x15474F0;
            pub const SteamClient007: usize = 0x15474F8;
            pub const SteamClient008: usize = 0x1547500;
            pub const SteamClient009: usize = 0x1547508;
            pub const SteamClient010: usize = 0x1547510;
            pub const SteamClient011: usize = 0x1547518;
            pub const SteamClient012: usize = 0x1547520;
            pub const SteamClient013: usize = 0x1547528;
            pub const SteamClient014: usize = 0x1547530;
            pub const SteamClient015: usize = 0x1547538;
            pub const SteamClient016: usize = 0x1547540;
            pub const SteamClient017: usize = 0x1547548;
            pub const SteamClient018: usize = 0x1547550;
            pub const SteamClient019: usize = 0x1547558;
            pub const SteamClient020: usize = 0x1547560;
            pub const SteamClient021: usize = 0x1547568;
            pub const SteamClient022: usize = 0x1547570;
            pub const p2pvoice002: usize = 0x14E2FDF;
            pub const p2pvoicesingleton002: usize = 0x15240F0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x3906A0;
            pub const VEngineCvar007: usize = 0x39B540;
            pub const VProcessUtils002: usize = 0x390530;
            pub const VStringTokenSystem001: usize = 0x3C23B0;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x315B0;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x3E00E0;
            pub const VPhysics2_Interface_001: usize = 0x3E0120;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x13C280;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0x6E990;
            pub const VEngineCvar002: usize = 0x6D070;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x1FFCF0;
        }
    }
}
