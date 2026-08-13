// Generated using https://github.com/a2x/cs2-dumper
// 2026-08-13 10:16:20.233550200 UTC

pub const cs2_dumper = struct {
    pub const interfaces = struct {
        // Module: animationsystem.dll
        pub const animationsystem_dll = struct {
            pub const AnimationSystemUtils_001: usize = 0x837F10;
            pub const AnimationSystem_001: usize = 0x82FE30;
        };
        // Module: client.dll
        pub const client_dll = struct {
            pub const ClientBugBugServic001_Client: usize = 0x2098810;
            pub const ClientToolsInfo_001: usize = 0x20987E0;
            pub const EmptyWorldService001_Client: usize = 0x20744E0;
            pub const GameClientExports001: usize = 0x2095480;
            pub const LegacyGameUI001: usize = 0x20A8D60;
            pub const Source2Client002: usize = 0x23A38D0;
            pub const Source2ClientConfig001: usize = 0x2310C40;
            pub const Source2ClientPrediction001: usize = 0x23A9020;
            pub const Source2ClientUI001: usize = 0x20A7280;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const BenchmarkService001: usize = 0x615320;
            pub const BugBugService001: usize = 0x615420;
            pub const BugService001: usize = 0x8CDCB0;
            pub const ClientServerEngineLoopService_001: usize = 0x90F3B0;
            pub const ClientServerSharedHandleSystem001: usize = 0x90E980;
            pub const EngineGameUI001: usize = 0x612C70;
            pub const EngineServiceMgr001: usize = 0x90EC90;
            pub const GameEventSystemClientV001: usize = 0x90EF70;
            pub const GameEventSystemServerV001: usize = 0x90F0A0;
            pub const GameResourceServiceClientV001: usize = 0x615460;
            pub const GameResourceServiceServerV001: usize = 0x6154C0;
            pub const GameUIService_001: usize = 0x8CE100;
            pub const HostStateMgr001: usize = 0x615CA0;
            pub const INETSUPPORT_001: usize = 0x60E960;
            pub const InputService_001: usize = 0x8CE3F0;
            pub const KeyValueCache001: usize = 0x615D50;
            pub const MapListService_001: usize = 0x90D260;
            pub const NetworkClientService_001: usize = 0x90D3F0;
            pub const NetworkP2PService_001: usize = 0x90D730;
            pub const NetworkServerService_001: usize = 0x90D8E0;
            pub const NetworkService_001: usize = 0x615630;
            pub const RenderService_001: usize = 0x90DB50;
            pub const ScreenshotService001: usize = 0x90DE10;
            pub const SimpleEngineLoopService_001: usize = 0x615DB0;
            pub const SoundService_001: usize = 0x615670;
            pub const Source2EngineToClient001: usize = 0x6125A0;
            pub const Source2EngineToClientStringTable001: usize = 0x612600;
            pub const Source2EngineToServer001: usize = 0x612678;
            pub const Source2EngineToServerStringTable001: usize = 0x6126A0;
            pub const SplitScreenService_001: usize = 0x615950;
            pub const StatsService_001: usize = 0x90E1D0;
            pub const ToolService_001: usize = 0x615B10;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x612D00;
            pub const VProfService_001: usize = 0x615B50;
        };
        // Module: filesystem_stdio.dll
        pub const filesystem_stdio_dll = struct {
            pub const VAsyncFileSystem2_001: usize = 0x213600;
            pub const VFileSystem017: usize = 0x2133C0;
        };
        // Module: host.dll
        pub const host_dll = struct {
            pub const DebugDrawQueueManager001: usize = 0x13E0A0;
            pub const GameModelInfo001: usize = 0x13E0E0;
            pub const GameSystem2HostHook: usize = 0x13E120;
            pub const HostUtils001: usize = 0x14DB50;
            pub const PredictionDiffManager001: usize = 0x13E230;
            pub const SaveRestoreDataVersion001: usize = 0x13E360;
            pub const SinglePlayerSharedMemory001: usize = 0x13E390;
            pub const Source2Host001: usize = 0x13E400;
        };
        // Module: imemanager.dll
        pub const imemanager_dll = struct {
            pub const IMEManager001: usize = 0x36AA0;
        };
        // Module: inputsystem.dll
        pub const inputsystem_dll = struct {
            pub const InputStackSystemVersion001: usize = 0x43E90;
            pub const InputSystemVersion001: usize = 0x45BA0;
        };
        // Module: localize.dll
        pub const localize_dll = struct {
            pub const Localize_001: usize = 0x58100;
        };
        // Module: matchmaking.dll
        pub const matchmaking_dll = struct {
            pub const GameTypes001: usize = 0x1ADF80;
            pub const MATCHFRAMEWORK_001: usize = 0x1B6020;
        };
        // Module: materialsystem2.dll
        pub const materialsystem2_dll = struct {
            pub const FontManager_001: usize = 0x15CBB0;
            pub const MaterialUtils_001: usize = 0x144F00;
            pub const PostProcessingSystem_001: usize = 0x144E30;
            pub const TextLayout_001: usize = 0x144E90;
            pub const VMaterialSystem2_001: usize = 0x15C800;
        };
        // Module: meshsystem.dll
        pub const meshsystem_dll = struct {
            pub const MeshSystem001: usize = 0x16BDE0;
        };
        // Module: navsystem.dll
        pub const navsystem_dll = struct {
            pub const NavSystem001: usize = 0x128C20;
        };
        // Module: networksystem.dll
        pub const networksystem_dll = struct {
            pub const FlattenedSerializersVersion001: usize = 0x26C810;
            pub const NetworkMessagesVersion001: usize = 0x294A30;
            pub const NetworkSystemVersion001: usize = 0x285F60;
            pub const SerializedEntitiesVersion001: usize = 0x286050;
        };
        // Module: panorama.dll
        pub const panorama_dll = struct {
            pub const PanoramaUIEngine001: usize = 0x50FD60;
        };
        // Module: panorama_text_pango.dll
        pub const panorama_text_pango_dll = struct {
            pub const PanoramaTextServices001: usize = 0x2B89D0;
        };
        // Module: panoramauiclient.dll
        pub const panoramauiclient_dll = struct {
            pub const PanoramaUIClient001: usize = 0x295210;
        };
        // Module: particles.dll
        pub const particles_dll = struct {
            pub const ParticleSystemMgr003: usize = 0x5FEAC0;
        };
        // Module: pulse_system.dll
        pub const pulse_system_dll = struct {
            pub const IPulseSystem_001: usize = 0x219750;
        };
        // Module: rendersystemdx11.dll
        pub const rendersystemdx11_dll = struct {
            pub const RenderDeviceMgr001: usize = 0x42C550;
            pub const RenderUtils_001: usize = 0x42CE30;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x42C5F0;
        };
        // Module: resourcesystem.dll
        pub const resourcesystem_dll = struct {
            pub const ResourceSystem013: usize = 0x81680;
        };
        // Module: scenefilecache.dll
        pub const scenefilecache_dll = struct {
            pub const ResponseRulesCache001: usize = 0x113450;
            pub const SceneFileCache002: usize = 0x113578;
        };
        // Module: scenesystem.dll
        pub const scenesystem_dll = struct {
            pub const RenderingPipelines_001: usize = 0x667F10;
            pub const SceneSystem_002: usize = 0x911530;
            pub const SceneUtils_001: usize = 0x668DD0;
        };
        // Module: schemasystem.dll
        pub const schemasystem_dll = struct {
            pub const SchemaSystem_001: usize = 0x75730;
        };
        // Module: server.dll
        pub const server_dll = struct {
            pub const EmptyWorldService001_Server: usize = 0x1C3DFB0;
            pub const EntitySubclassUtilsV001: usize = 0x1BEDB10;
            pub const NavGameTest001: usize = 0x1CB10E0;
            pub const ServerToolsInfo_001: usize = 0x1C779A8;
            pub const Source2GameClients001: usize = 0x1C76B90;
            pub const Source2GameDirector001: usize = 0x1DF8380;
            pub const Source2GameEntities001: usize = 0x1C77150;
            pub const Source2Server001: usize = 0x1C76FA0;
            pub const Source2ServerConfig001: usize = 0x1F61528;
            pub const customnavsystem001: usize = 0x1BD1F58;
        };
        // Module: soundsystem.dll
        pub const soundsystem_dll = struct {
            pub const SoundBugBugService001_Client: usize = 0x54BD80;
            pub const SoundOpSystem001: usize = 0x54BC60;
            pub const SoundOpSystemEdit001: usize = 0x54BB70;
            pub const SoundSystem001: usize = 0x54B5D0;
            pub const VMixEditTool001: usize = 0x594945F;
        };
        // Module: steamaudio.dll
        pub const steamaudio_dll = struct {
            pub const SteamAudio001: usize = 0x260610;
        };
        // Module: tier0.dll
        pub const tier0_dll = struct {
            pub const TestScriptMgr001: usize = 0x399800;
            pub const VEngineCvar007: usize = 0x3A44F0;
            pub const VProcessUtils002: usize = 0x3997A0;
            pub const VStringTokenSystem001: usize = 0x3CB1F0;
        };
        // Module: v8system.dll
        pub const v8system_dll = struct {
            pub const Source2V8System001: usize = 0x31770;
        };
        // Module: vconcomm.dll
        pub const vconcomm_dll = struct {
            pub const VConComm001: usize = 0x3B730;
        };
        // Module: vphysics2.dll
        pub const vphysics2_dll = struct {
            pub const VPhysics2_Interface_001: usize = 0x428E90;
        };
        // Module: vscript.dll
        pub const vscript_dll = struct {
            pub const VScriptManager010: usize = 0x13D430;
        };
        // Module: worldrenderer.dll
        pub const worldrenderer_dll = struct {
            pub const WorldRendererMgr001: usize = 0x231DA0;
        };
    };
};
