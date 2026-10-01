// Generated using https://github.com/a2x/cs2-dumper
// 2026-10-01 06:22:34.554410 UTC

pub const cs2_dumper = struct {
    pub const interfaces = struct {
        // Module: animationsystem.dll
        pub const animationsystem_dll = struct {
            pub const AnimationSystemUtils_001: usize = 0x83F6D8;
            pub const AnimationSystem_001: usize = 0x8375F8;
        };
        // Module: client.dll
        pub const client_dll = struct {
            pub const ClientBugBugServic001_Client: usize = 0x222F7E0;
            pub const ClientToolsInfo_001: usize = 0x222F7B0;
            pub const EmptyWorldService001_Client: usize = 0x2213230;
            pub const GameClientExports001: usize = 0x222C458;
            pub const LegacyGameUI001: usize = 0x223C0E0;
            pub const Source2Client002: usize = 0x255A3A0;
            pub const Source2ClientConfig001: usize = 0x24B7240;
            pub const Source2ClientPrediction001: usize = 0x25605A0;
            pub const Source2ClientUI001: usize = 0x223A960;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const BenchmarkService001: usize = 0x622C80;
            pub const BugBugService001: usize = 0x622D80;
            pub const BugService001: usize = 0x8DB7F0;
            pub const ClientServerEngineLoopService_001: usize = 0x91CE30;
            pub const ClientServerSharedHandleSystem001: usize = 0x91C440;
            pub const EngineGameUI001: usize = 0x6206E0;
            pub const EngineServiceMgr001: usize = 0x91C700;
            pub const GameEventSystemClientV001: usize = 0x91C9E0;
            pub const GameEventSystemServerV001: usize = 0x91CB10;
            pub const GameResourceServiceClientV001: usize = 0x622DC0;
            pub const GameResourceServiceServerV001: usize = 0x622E20;
            pub const GameUIService_001: usize = 0x8DBC40;
            pub const HostStateMgr001: usize = 0x623540;
            pub const INETSUPPORT_001: usize = 0x61BC30;
            pub const InputService_001: usize = 0x8DBF20;
            pub const KeyValueCache001: usize = 0x6235F0;
            pub const MapListService_001: usize = 0x91AD90;
            pub const NetworkClientService_001: usize = 0x91AF20;
            pub const NetworkP2PService_001: usize = 0x91B260;
            pub const NetworkServerService_001: usize = 0x91B410;
            pub const NetworkService_001: usize = 0x622F90;
            pub const RenderService_001: usize = 0x91B680;
            pub const ScreenshotService001: usize = 0x91B940;
            pub const SimpleEngineLoopService_001: usize = 0x623650;
            pub const SoundService_001: usize = 0x622FD0;
            pub const Source2EngineToClient001: usize = 0x61FFF0;
            pub const Source2EngineToClientStringTable001: usize = 0x620050;
            pub const Source2EngineToServer001: usize = 0x6200C8;
            pub const Source2EngineToServerStringTable001: usize = 0x6200F0;
            pub const SplitScreenService_001: usize = 0x6232B0;
            pub const StatsService_001: usize = 0x91BC80;
            pub const ToolService_001: usize = 0x6233B0;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x620770;
            pub const VProfService_001: usize = 0x6233F0;
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
            pub const FontManager_001: usize = 0x1638E0;
            pub const MaterialUtils_001: usize = 0x14BD30;
            pub const PostProcessingSystem_001: usize = 0x14BC60;
            pub const TextLayout_001: usize = 0x14BCC0;
            pub const VMaterialSystem2_001: usize = 0x163530;
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
            pub const PanoramaUIEngine001: usize = 0x586F60;
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
            pub const ParticleSystemMgr003: usize = 0x65AEB0;
        };
        // Module: pulse_system.dll
        pub const pulse_system_dll = struct {
            pub const IPulseSystem_001: usize = 0x238120;
        };
        // Module: rendersystemdx11.dll
        pub const rendersystemdx11_dll = struct {
            pub const RenderDeviceMgr001: usize = 0x4342F0;
            pub const RenderUtils_001: usize = 0x434BD0;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x434390;
        };
        // Module: resourcesystem.dll
        pub const resourcesystem_dll = struct {
            pub const ResourceSystem013: usize = 0x892B0;
        };
        // Module: scenefilecache.dll
        pub const scenefilecache_dll = struct {
            pub const ResponseRulesCache001: usize = 0x11D350;
            pub const SceneFileCache002: usize = 0x11D478;
        };
        // Module: scenesystem.dll
        pub const scenesystem_dll = struct {
            pub const RenderingPipelines_001: usize = 0x675A00;
            pub const SceneSystem_002: usize = 0x91FB20;
            pub const SceneUtils_001: usize = 0x676760;
        };
        // Module: schemasystem.dll
        pub const schemasystem_dll = struct {
            pub const SchemaSystem_001: usize = 0x76710;
        };
        // Module: server.dll
        pub const server_dll = struct {
            pub const EmptyWorldService001_Server: usize = 0x1E09100;
            pub const EntitySubclassUtilsV001: usize = 0x1DB8BC0;
            pub const NavGameTest001: usize = 0x1E50DC8;
            pub const ServerToolsInfo_001: usize = 0x1E2FCB8;
            pub const Source2GameClients001: usize = 0x1E2F1E0;
            pub const Source2GameDirector001: usize = 0x1F99740;
            pub const Source2GameEntities001: usize = 0x1E2F460;
            pub const Source2Server001: usize = 0x1E2F2A0;
            pub const Source2ServerConfig001: usize = 0x2114CA8;
            pub const customnavsystem001: usize = 0x1DA64F0;
        };
        // Module: soundsystem.dll
        pub const soundsystem_dll = struct {
            pub const SoundBugBugService001_Client: usize = 0x535BB0;
            pub const SoundOpSystem001: usize = 0x535A90;
            pub const SoundOpSystemEdit001: usize = 0x5359A0;
            pub const SoundSystem001: usize = 0x535350;
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
        // Module: vconcomm.dll
        pub const vconcomm_dll = struct {
            pub const VConComm001: usize = 0x3C750;
        };
        // Module: vphysics2.dll
        pub const vphysics2_dll = struct {
            pub const VPhysics2_Interface_001: usize = 0x460E60;
        };
        // Module: vscript.dll
        pub const vscript_dll = struct {
            pub const VScriptManager010: usize = 0x13E430;
        };
        // Module: worldrenderer.dll
        pub const worldrenderer_dll = struct {
            pub const WorldRendererMgr001: usize = 0x236D00;
        };
    };
};
