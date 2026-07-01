// Generated using https://github.com/a2x/cs2-dumper
// 2026-07-01 03:08:20.812145800 UTC

pub const cs2_dumper = struct {
    pub const interfaces = struct {
        // Module: animationsystem.dll
        pub const animationsystem_dll = struct {
            pub const AnimationSystemUtils_001: usize = 0x812190;
            pub const AnimationSystem_001: usize = 0x80A0B0;
        };
        // Module: client.dll
        pub const client_dll = struct {
            pub const ClientToolsInfo_001: usize = 0x20652C0;
            pub const EmptyWorldService001_Client: usize = 0x2028AF0;
            pub const GameClientExports001: usize = 0x2061F60;
            pub const LegacyGameUI001: usize = 0x207D490;
            pub const Source2Client002: usize = 0x233BF90;
            pub const Source2ClientConfig001: usize = 0x22ADDD0;
            pub const Source2ClientPrediction001: usize = 0x2341430;
            pub const Source2ClientUI001: usize = 0x207B9F0;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const BenchmarkService001: usize = 0x6129A0;
            pub const BugService001: usize = 0x8CA9E0;
            pub const ClientServerEngineLoopService_001: usize = 0x90C0E0;
            pub const ClientServerSharedHandleSystem001: usize = 0x90B690;
            pub const EngineGameUI001: usize = 0x6102A0;
            pub const EngineServiceMgr001: usize = 0x90B9C0;
            pub const GameEventSystemClientV001: usize = 0x90BCA0;
            pub const GameEventSystemServerV001: usize = 0x90BDD0;
            pub const GameResourceServiceClientV001: usize = 0x612AA0;
            pub const GameResourceServiceServerV001: usize = 0x612B00;
            pub const GameUIService_001: usize = 0x8CAE10;
            pub const HostStateMgr001: usize = 0x6132E0;
            pub const INETSUPPORT_001: usize = 0x60C040;
            pub const InputService_001: usize = 0x8CB100;
            pub const KeyValueCache001: usize = 0x613390;
            pub const MapListService_001: usize = 0x909F70;
            pub const NetworkClientService_001: usize = 0x90A100;
            pub const NetworkP2PService_001: usize = 0x90A440;
            pub const NetworkServerService_001: usize = 0x90A5F0;
            pub const NetworkService_001: usize = 0x612C70;
            pub const RenderService_001: usize = 0x90A860;
            pub const ScreenshotService001: usize = 0x90AB20;
            pub const SimpleEngineLoopService_001: usize = 0x6133F0;
            pub const SoundService_001: usize = 0x612CB0;
            pub const Source2EngineToClient001: usize = 0x60FBA0;
            pub const Source2EngineToClientStringTable001: usize = 0x60FC00;
            pub const Source2EngineToServer001: usize = 0x60FC78;
            pub const Source2EngineToServerStringTable001: usize = 0x60FCA0;
            pub const SplitScreenService_001: usize = 0x612F90;
            pub const StatsService_001: usize = 0x90AEE0;
            pub const ToolService_001: usize = 0x613150;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x610330;
            pub const VProfService_001: usize = 0x613190;
        };
        // Module: filesystem_stdio.dll
        pub const filesystem_stdio_dll = struct {
            pub const VAsyncFileSystem2_001: usize = 0x2159E0;
            pub const VFileSystem017: usize = 0x2157A0;
        };
        // Module: host.dll
        pub const host_dll = struct {
            pub const DebugDrawQueueManager001: usize = 0x139060;
            pub const GameModelInfo001: usize = 0x1390A0;
            pub const GameSystem2HostHook: usize = 0x1390E0;
            pub const HostUtils001: usize = 0x148AB0;
            pub const PredictionDiffManager001: usize = 0x1391F0;
            pub const SaveRestoreDataVersion001: usize = 0x139320;
            pub const SinglePlayerSharedMemory001: usize = 0x139350;
            pub const Source2Host001: usize = 0x1393C0;
        };
        // Module: imemanager.dll
        pub const imemanager_dll = struct {
            pub const IMEManager001: usize = 0x36B20;
        };
        // Module: inputsystem.dll
        pub const inputsystem_dll = struct {
            pub const InputStackSystemVersion001: usize = 0x40E30;
            pub const InputSystemVersion001: usize = 0x42B50;
        };
        // Module: localize.dll
        pub const localize_dll = struct {
            pub const Localize_001: usize = 0x62180;
        };
        // Module: matchmaking.dll
        pub const matchmaking_dll = struct {
            pub const GameTypes001: usize = 0x1B0F80;
            pub const MATCHFRAMEWORK_001: usize = 0x1B9060;
        };
        // Module: materialsystem2.dll
        pub const materialsystem2_dll = struct {
            pub const FontManager_001: usize = 0x15DE60;
            pub const MaterialUtils_001: usize = 0x145D40;
            pub const PostProcessingSystem_001: usize = 0x145C50;
            pub const TextLayout_001: usize = 0x145CD0;
            pub const VMaterialSystem2_001: usize = 0x15D750;
        };
        // Module: meshsystem.dll
        pub const meshsystem_dll = struct {
            pub const MeshSystem001: usize = 0x150C20;
        };
        // Module: navsystem.dll
        pub const navsystem_dll = struct {
            pub const NavSystem001: usize = 0x122930;
        };
        // Module: networksystem.dll
        pub const networksystem_dll = struct {
            pub const FlattenedSerializersVersion001: usize = 0x26E750;
            pub const NetworkMessagesVersion001: usize = 0x296A60;
            pub const NetworkSystemVersion001: usize = 0x287EA0;
            pub const SerializedEntitiesVersion001: usize = 0x287F90;
        };
        // Module: panorama.dll
        pub const panorama_dll = struct {
            pub const PanoramaUIEngine001: usize = 0x505D20;
        };
        // Module: panorama_text_pango.dll
        pub const panorama_text_pango_dll = struct {
            pub const PanoramaTextServices001: usize = 0x2B8A40;
        };
        // Module: panoramauiclient.dll
        pub const panoramauiclient_dll = struct {
            pub const PanoramaUIClient001: usize = 0x296420;
        };
        // Module: particles.dll
        pub const particles_dll = struct {
            pub const ParticleSystemMgr003: usize = 0x54A3B0;
        };
        // Module: pulse_system.dll
        pub const pulse_system_dll = struct {
            pub const IPulseSystem_001: usize = 0x1F36A0;
        };
        // Module: rendersystemdx11.dll
        pub const rendersystemdx11_dll = struct {
            pub const RenderDeviceMgr001: usize = 0x42B530;
            pub const RenderUtils_001: usize = 0x42BE28;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x42B5D0;
        };
        // Module: resourcesystem.dll
        pub const resourcesystem_dll = struct {
            pub const ResourceSystem013: usize = 0x831E0;
        };
        // Module: scenefilecache.dll
        pub const scenefilecache_dll = struct {
            pub const ResponseRulesCache001: usize = 0xF58F0;
            pub const SceneFileCache002: usize = 0xF5A78;
        };
        // Module: scenesystem.dll
        pub const scenesystem_dll = struct {
            pub const RenderingPipelines_001: usize = 0x663BA0;
            pub const SceneSystem_002: usize = 0x8DB490;
            pub const SceneUtils_001: usize = 0x664AB0;
        };
        // Module: schemasystem.dll
        pub const schemasystem_dll = struct {
            pub const SchemaSystem_001: usize = 0x76800;
        };
        // Module: server.dll
        pub const server_dll = struct {
            pub const EmptyWorldService001_Server: usize = 0x1BF8D40;
            pub const EntitySubclassUtilsV001: usize = 0x1BA4380;
            pub const NavGameTest001: usize = 0x1CA5240;
            pub const ServerToolsInfo_001: usize = 0x1C52238;
            pub const Source2GameClients001: usize = 0x1C50C90;
            pub const Source2GameDirector001: usize = 0x1DEA8E0;
            pub const Source2GameEntities001: usize = 0x1C51940;
            pub const Source2Server001: usize = 0x1C51790;
            pub const Source2ServerConfig001: usize = 0x1F07B78;
            pub const customnavsystem001: usize = 0x1B85668;
        };
        // Module: soundsystem.dll
        pub const soundsystem_dll = struct {
            pub const SoundOpSystem001: usize = 0x5129B0;
            pub const SoundOpSystemEdit001: usize = 0x512870;
            pub const SoundSystem001: usize = 0x512360;
            pub const VMixEditTool001: usize = 0x594879F;
        };
        // Module: steamaudio.dll
        pub const steamaudio_dll = struct {
            pub const SteamAudio001: usize = 0x25E620;
        };
        // Module: tier0.dll
        pub const tier0_dll = struct {
            pub const TestScriptMgr001: usize = 0x39E710;
            pub const VEngineCvar007: usize = 0x3A93B0;
            pub const VProcessUtils002: usize = 0x39E6B0;
            pub const VStringTokenSystem001: usize = 0x3D00B0;
        };
        // Module: v8system.dll
        pub const v8system_dll = struct {
            pub const Source2V8System001: usize = 0x31730;
        };
        // Module: vphysics2.dll
        pub const vphysics2_dll = struct {
            pub const VPhysics2_Interface_001: usize = 0x40DDA0;
        };
        // Module: vscript.dll
        pub const vscript_dll = struct {
            pub const VScriptManager010: usize = 0x13B410;
        };
        // Module: worldrenderer.dll
        pub const worldrenderer_dll = struct {
            pub const WorldRendererMgr001: usize = 0x225C60;
        };
    };
};
