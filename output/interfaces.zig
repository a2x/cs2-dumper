// Generated using https://github.com/a2x/cs2-dumper
// 2026-09-29 08:54:33.699279 UTC

pub const cs2_dumper = struct {
    pub const interfaces = struct {
        // Module: animationsystem.dll
        pub const animationsystem_dll = struct {
            pub const AnimationSystemUtils_001: usize = 0x83F6D8;
            pub const AnimationSystem_001: usize = 0x8375F8;
        };
        // Module: client.dll
        pub const client_dll = struct {
            pub const ClientBugBugServic001_Client: usize = 0x222F8D0;
            pub const ClientToolsInfo_001: usize = 0x222F8A0;
            pub const EmptyWorldService001_Client: usize = 0x2213360;
            pub const GameClientExports001: usize = 0x222C548;
            pub const LegacyGameUI001: usize = 0x223C1E0;
            pub const Source2Client002: usize = 0x2559E40;
            pub const Source2ClientConfig001: usize = 0x24B6CF0;
            pub const Source2ClientPrediction001: usize = 0x25605E0;
            pub const Source2ClientUI001: usize = 0x223AA60;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const BenchmarkService001: usize = 0x622E80;
            pub const BugBugService001: usize = 0x622F80;
            pub const BugService001: usize = 0x8DB9F0;
            pub const ClientServerEngineLoopService_001: usize = 0x91D030;
            pub const ClientServerSharedHandleSystem001: usize = 0x91C640;
            pub const EngineGameUI001: usize = 0x6208E0;
            pub const EngineServiceMgr001: usize = 0x91C900;
            pub const GameEventSystemClientV001: usize = 0x91CBE0;
            pub const GameEventSystemServerV001: usize = 0x91CD10;
            pub const GameResourceServiceClientV001: usize = 0x622FC0;
            pub const GameResourceServiceServerV001: usize = 0x623020;
            pub const GameUIService_001: usize = 0x8DBE40;
            pub const HostStateMgr001: usize = 0x623740;
            pub const INETSUPPORT_001: usize = 0x61BE30;
            pub const InputService_001: usize = 0x8DC120;
            pub const KeyValueCache001: usize = 0x6237F0;
            pub const MapListService_001: usize = 0x91AF90;
            pub const NetworkClientService_001: usize = 0x91B120;
            pub const NetworkP2PService_001: usize = 0x91B460;
            pub const NetworkServerService_001: usize = 0x91B610;
            pub const NetworkService_001: usize = 0x623190;
            pub const RenderService_001: usize = 0x91B880;
            pub const ScreenshotService001: usize = 0x91BB40;
            pub const SimpleEngineLoopService_001: usize = 0x623850;
            pub const SoundService_001: usize = 0x6231D0;
            pub const Source2EngineToClient001: usize = 0x6201F0;
            pub const Source2EngineToClientStringTable001: usize = 0x620250;
            pub const Source2EngineToServer001: usize = 0x6202C8;
            pub const Source2EngineToServerStringTable001: usize = 0x6202F0;
            pub const SplitScreenService_001: usize = 0x6234B0;
            pub const StatsService_001: usize = 0x91BE80;
            pub const ToolService_001: usize = 0x6235B0;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x620970;
            pub const VProfService_001: usize = 0x6235F0;
        };
        // Module: filesystem_stdio.dll
        pub const filesystem_stdio_dll = struct {
            pub const VAsyncFileSystem2_001: usize = 0x214610;
            pub const VFileSystem017: usize = 0x2143D0;
        };
        // Module: host.dll
        pub const host_dll = struct {
            pub const DebugDrawQueueManager001: usize = 0x13FF70;
            pub const GameModelInfo001: usize = 0x13FFB0;
            pub const GameSystem2HostHook: usize = 0x13FFF0;
            pub const HostUtils001: usize = 0x14F900;
            pub const PredictionDiffManager001: usize = 0x140100;
            pub const SaveRestoreDataVersion001: usize = 0x140230;
            pub const SinglePlayerSharedMemory001: usize = 0x140260;
            pub const Source2Host001: usize = 0x1402D0;
        };
        // Module: imemanager.dll
        pub const imemanager_dll = struct {
            pub const IMEManager001: usize = 0x37AA0;
        };
        // Module: inputsystem.dll
        pub const inputsystem_dll = struct {
            pub const InputStackSystemVersion001: usize = 0x44E90;
            pub const InputSystemVersion001: usize = 0x46BC0;
        };
        // Module: localize.dll
        pub const localize_dll = struct {
            pub const Localize_001: usize = 0x59120;
        };
        // Module: matchmaking.dll
        pub const matchmaking_dll = struct {
            pub const GameTypes001: usize = 0x1B0FD0;
            pub const MATCHFRAMEWORK_001: usize = 0x1B90A0;
        };
        // Module: materialsystem2.dll
        pub const materialsystem2_dll = struct {
            pub const FontManager_001: usize = 0x163AE0;
            pub const MaterialUtils_001: usize = 0x14BF30;
            pub const PostProcessingSystem_001: usize = 0x14BE60;
            pub const TextLayout_001: usize = 0x14BEC0;
            pub const VMaterialSystem2_001: usize = 0x163730;
        };
        // Module: meshsystem.dll
        pub const meshsystem_dll = struct {
            pub const MeshSystem001: usize = 0x180AB0;
        };
        // Module: navsystem.dll
        pub const navsystem_dll = struct {
            pub const NavSystem001: usize = 0x12C000;
        };
        // Module: networksystem.dll
        pub const networksystem_dll = struct {
            pub const FlattenedSerializersVersion001: usize = 0x277A50;
            pub const NetworkMessagesVersion001: usize = 0x2A3F10;
            pub const NetworkSystemVersion001: usize = 0x2911A0;
            pub const SerializedEntitiesVersion001: usize = 0x291290;
        };
        // Module: panorama.dll
        pub const panorama_dll = struct {
            pub const PanoramaUIEngine001: usize = 0x587160;
        };
        // Module: panorama_text_pango.dll
        pub const panorama_text_pango_dll = struct {
            pub const PanoramaTextServices001: usize = 0x2BA9D0;
        };
        // Module: panoramauiclient.dll
        pub const panoramauiclient_dll = struct {
            pub const PanoramaUIClient001: usize = 0x26F090;
        };
        // Module: particles.dll
        pub const particles_dll = struct {
            pub const ParticleSystemMgr003: usize = 0x65AEF0;
        };
        // Module: pulse_system.dll
        pub const pulse_system_dll = struct {
            pub const IPulseSystem_001: usize = 0x238120;
        };
        // Module: rendersystemdx11.dll
        pub const rendersystemdx11_dll = struct {
            pub const RenderDeviceMgr001: usize = 0x4344D0;
            pub const RenderUtils_001: usize = 0x434DB0;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x434570;
        };
        // Module: resourcesystem.dll
        pub const resourcesystem_dll = struct {
            pub const ResourceSystem013: usize = 0x892A0;
        };
        // Module: scenefilecache.dll
        pub const scenefilecache_dll = struct {
            pub const ResponseRulesCache001: usize = 0x11D350;
            pub const SceneFileCache002: usize = 0x11D478;
        };
        // Module: scenesystem.dll
        pub const scenesystem_dll = struct {
            pub const RenderingPipelines_001: usize = 0x675C00;
            pub const SceneSystem_002: usize = 0x91FCE0;
            pub const SceneUtils_001: usize = 0x676960;
        };
        // Module: schemasystem.dll
        pub const schemasystem_dll = struct {
            pub const SchemaSystem_001: usize = 0x76710;
        };
        // Module: server.dll
        pub const server_dll = struct {
            pub const EmptyWorldService001_Server: usize = 0x1E0C290;
            pub const EntitySubclassUtilsV001: usize = 0x1DBBBF0;
            pub const NavGameTest001: usize = 0x1E53F50;
            pub const ServerToolsInfo_001: usize = 0x1E32E58;
            pub const Source2GameClients001: usize = 0x1E32380;
            pub const Source2GameDirector001: usize = 0x1F9C730;
            pub const Source2GameEntities001: usize = 0x1E32600;
            pub const Source2Server001: usize = 0x1E32440;
            pub const Source2ServerConfig001: usize = 0x2117F38;
            pub const customnavsystem001: usize = 0x1DA9508;
        };
        // Module: soundsystem.dll
        pub const soundsystem_dll = struct {
            pub const SoundBugBugService001_Client: usize = 0x535BA0;
            pub const SoundOpSystem001: usize = 0x535A80;
            pub const SoundOpSystemEdit001: usize = 0x535990;
            pub const SoundSystem001: usize = 0x535340;
            pub const VMixEditTool001: usize = 0x5943D7F;
        };
        // Module: steamaudio.dll
        pub const steamaudio_dll = struct {
            pub const SteamAudio001: usize = 0x35C1A0;
        };
        // Module: tier0.dll
        pub const tier0_dll = struct {
            pub const TestScriptMgr001: usize = 0x3A1960;
            pub const VEngineCvar007: usize = 0x3AC670;
            pub const VProcessUtils002: usize = 0x3A1820;
            pub const VStringTokenSystem001: usize = 0x3D3300;
        };
        // Module: v8system.dll
        pub const v8system_dll = struct {
            pub const Source2V8System001: usize = 0x34790;
        };
        // Module: vphysics2.dll
        pub const vphysics2_dll = struct {
            pub const VPhysics2_Interface_001: usize = 0x460E70;
        };
        // Module: vscript.dll
        pub const vscript_dll = struct {
            pub const VScriptManager010: usize = 0x13E430;
        };
        // Module: worldrenderer.dll
        pub const worldrenderer_dll = struct {
            pub const WorldRendererMgr001: usize = 0x236F60;
        };
    };
};
