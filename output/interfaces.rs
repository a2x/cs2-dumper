// Generated using https://github.com/a2x/cs2-dumper
// 2026-07-10 07:51:31.975811300 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x837ED0;
            pub const AnimationSystem_001: usize = 0x82FDF0;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientBugBugServic001_Client: usize = 0x2093790;
            pub const ClientToolsInfo_001: usize = 0x2093760;
            pub const EmptyWorldService001_Client: usize = 0x206F480;
            pub const GameClientExports001: usize = 0x2090400;
            pub const LegacyGameUI001: usize = 0x20A3D00;
            pub const Source2Client002: usize = 0x239E6D0;
            pub const Source2ClientConfig001: usize = 0x230BA00;
            pub const Source2ClientPrediction001: usize = 0x23A4140;
            pub const Source2ClientUI001: usize = 0x20A2210;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x615320;
            pub const BugBugService001: usize = 0x615420;
            pub const BugService001: usize = 0x8CDCD0;
            pub const ClientServerEngineLoopService_001: usize = 0x90F3D0;
            pub const ClientServerSharedHandleSystem001: usize = 0x90E9A0;
            pub const EngineGameUI001: usize = 0x612C70;
            pub const EngineServiceMgr001: usize = 0x90ECB0;
            pub const GameEventSystemClientV001: usize = 0x90EF90;
            pub const GameEventSystemServerV001: usize = 0x90F0C0;
            pub const GameResourceServiceClientV001: usize = 0x615460;
            pub const GameResourceServiceServerV001: usize = 0x6154C0;
            pub const GameUIService_001: usize = 0x8CE120;
            pub const HostStateMgr001: usize = 0x615CA0;
            pub const INETSUPPORT_001: usize = 0x60E960;
            pub const InputService_001: usize = 0x8CE410;
            pub const KeyValueCache001: usize = 0x615D50;
            pub const MapListService_001: usize = 0x90D280;
            pub const NetworkClientService_001: usize = 0x90D410;
            pub const NetworkP2PService_001: usize = 0x90D750;
            pub const NetworkServerService_001: usize = 0x90D900;
            pub const NetworkService_001: usize = 0x615630;
            pub const RenderService_001: usize = 0x90DB70;
            pub const ScreenshotService001: usize = 0x90DE30;
            pub const SimpleEngineLoopService_001: usize = 0x615DB0;
            pub const SoundService_001: usize = 0x615670;
            pub const Source2EngineToClient001: usize = 0x6125A0;
            pub const Source2EngineToClientStringTable001: usize = 0x612600;
            pub const Source2EngineToServer001: usize = 0x612678;
            pub const Source2EngineToServerStringTable001: usize = 0x6126A0;
            pub const SplitScreenService_001: usize = 0x615950;
            pub const StatsService_001: usize = 0x90E1F0;
            pub const ToolService_001: usize = 0x615B10;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x612D00;
            pub const VProfService_001: usize = 0x615B50;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x211600;
            pub const VFileSystem017: usize = 0x2113C0;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x13E0A0;
            pub const GameModelInfo001: usize = 0x13E0E0;
            pub const GameSystem2HostHook: usize = 0x13E120;
            pub const HostUtils001: usize = 0x14DB50;
            pub const PredictionDiffManager001: usize = 0x13E230;
            pub const SaveRestoreDataVersion001: usize = 0x13E360;
            pub const SinglePlayerSharedMemory001: usize = 0x13E390;
            pub const Source2Host001: usize = 0x13E400;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0x36AA0;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x43E90;
            pub const InputSystemVersion001: usize = 0x45BA0;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x58100;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x1ADF80;
            pub const MATCHFRAMEWORK_001: usize = 0x1B5F00;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x15CBB0;
            pub const MaterialUtils_001: usize = 0x144F00;
            pub const PostProcessingSystem_001: usize = 0x144E30;
            pub const TextLayout_001: usize = 0x144E90;
            pub const VMaterialSystem2_001: usize = 0x15C800;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x16BDE0;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0x128C20;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x26C810;
            pub const NetworkMessagesVersion001: usize = 0x294A30;
            pub const NetworkSystemVersion001: usize = 0x285F60;
            pub const SerializedEntitiesVersion001: usize = 0x286050;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x50FD60;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x2B89D0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x295210;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x5FEAD0;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x219710;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x42C550;
            pub const RenderUtils_001: usize = 0x42CE30;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x42C5F0;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x81680;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x113450;
            pub const SceneFileCache002: usize = 0x113578;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x667F10;
            pub const SceneSystem_002: usize = 0x911530;
            pub const SceneUtils_001: usize = 0x668DD0;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x75730;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x1C36F60;
            pub const EntitySubclassUtilsV001: usize = 0x1BE6B50;
            pub const NavGameTest001: usize = 0x1CAA070;
            pub const ServerToolsInfo_001: usize = 0x1C70928;
            pub const Source2GameClients001: usize = 0x1C6FB10;
            pub const Source2GameDirector001: usize = 0x1DF1240;
            pub const Source2GameEntities001: usize = 0x1C700D0;
            pub const Source2Server001: usize = 0x1C6FF20;
            pub const Source2ServerConfig001: usize = 0x1F5A578;
            pub const customnavsystem001: usize = 0x1BCAFA8;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundBugBugService001_Client: usize = 0x54BD80;
            pub const SoundOpSystem001: usize = 0x54BC60;
            pub const SoundOpSystemEdit001: usize = 0x54BB70;
            pub const SoundSystem001: usize = 0x54B5D0;
            pub const VMixEditTool001: usize = 0x594945F;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x260610;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x399800;
            pub const VEngineCvar007: usize = 0x3A44F0;
            pub const VProcessUtils002: usize = 0x3997A0;
            pub const VStringTokenSystem001: usize = 0x3CB1F0;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x31770;
        }
        // Module: vconcomm.dll
        pub mod vconcomm_dll {
            pub const VConComm001: usize = 0x3B730;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Interface_001: usize = 0x428E90;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x13D430;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x231DA0;
        }
    }
}
