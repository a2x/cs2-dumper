// Generated using https://github.com/a2x/cs2-dumper
// 2026-03-26 05:30:26.200384300 UTC

pub const cs2_dumper = struct {
    pub const interfaces = struct {
        // Module: animationsystem.dll
        pub const animationsystem_dll = struct {
            pub const AnimationSystemUtils_001: usize = 0x7F25B8;
            pub const AnimationSystem_001: usize = 0x7EA4D0;
        };
        // Module: client.dll
        pub const client_dll = struct {
            pub const ClientToolsInfo_001: usize = 0x2062F90;
            pub const EmptyWorldService001_Client: usize = 0x201CE60;
            pub const GameClientExports001: usize = 0x205FC70;
            pub const LegacyGameUI001: usize = 0x207D4D0;
            pub const Source2Client002: usize = 0x2309DD0;
            pub const Source2ClientConfig001: usize = 0x228DF00;
            pub const Source2ClientPrediction001: usize = 0x206A8F0;
            pub const Source2ClientUI001: usize = 0x207BD60;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const BenchmarkService001: usize = 0x614930;
            pub const BugService001: usize = 0x8C9E10;
            pub const ClientServerEngineLoopService_001: usize = 0x90B4B0;
            pub const EngineGameUI001: usize = 0x6122E0;
            pub const EngineServiceMgr001: usize = 0x90AD60;
            pub const GameEventSystemClientV001: usize = 0x90B040;
            pub const GameEventSystemServerV001: usize = 0x90B170;
            pub const GameResourceServiceClientV001: usize = 0x614A30;
            pub const GameResourceServiceServerV001: usize = 0x614A90;
            pub const GameUIService_001: usize = 0x8CA240;
            pub const HostStateMgr001: usize = 0x6152B0;
            pub const INETSUPPORT_001: usize = 0x60D8E0;
            pub const InputService_001: usize = 0x8CA530;
            pub const KeyValueCache001: usize = 0x615360;
            pub const MapListService_001: usize = 0x9093A0;
            pub const NetworkClientService_001: usize = 0x909530;
            pub const NetworkP2PService_001: usize = 0x909870;
            pub const NetworkServerService_001: usize = 0x909A20;
            pub const NetworkService_001: usize = 0x614C00;
            pub const RenderService_001: usize = 0x909C90;
            pub const ScreenshotService001: usize = 0x909F50;
            pub const SimpleEngineLoopService_001: usize = 0x6153C0;
            pub const SoundService_001: usize = 0x614C40;
            pub const Source2EngineToClient001: usize = 0x611BE0;
            pub const Source2EngineToClientStringTable001: usize = 0x611C40;
            pub const Source2EngineToServer001: usize = 0x611CB8;
            pub const Source2EngineToServerStringTable001: usize = 0x611CE0;
            pub const SplitScreenService_001: usize = 0x614F20;
            pub const StatsService_001: usize = 0x90A310;
            pub const ToolService_001: usize = 0x6150E0;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x612370;
            pub const VProfService_001: usize = 0x615120;
        };
        // Module: filesystem_stdio.dll
        pub const filesystem_stdio_dll = struct {
            pub const VAsyncFileSystem2_001: usize = 0x214970;
            pub const VFileSystem017: usize = 0x214730;
        };
        // Module: host.dll
        pub const host_dll = struct {
            pub const DebugDrawQueueManager001: usize = 0x139020;
            pub const GameModelInfo001: usize = 0x139060;
            pub const GameSystem2HostHook: usize = 0x1390A0;
            pub const HostUtils001: usize = 0x1467E0;
            pub const PredictionDiffManager001: usize = 0x1391B0;
            pub const SaveRestoreDataVersion001: usize = 0x1392E0;
            pub const SinglePlayerSharedMemory001: usize = 0x139310;
            pub const Source2Host001: usize = 0x139380;
        };
        // Module: imemanager.dll
        pub const imemanager_dll = struct {
            pub const IMEManager001: usize = 0x36AA0;
        };
        // Module: inputsystem.dll
        pub const inputsystem_dll = struct {
            pub const InputStackSystemVersion001: usize = 0x43DD0;
            pub const InputSystemVersion001: usize = 0x45AD0;
        };
        // Module: localize.dll
        pub const localize_dll = struct {
            pub const Localize_001: usize = 0x57E20;
        };
        // Module: matchmaking.dll
        pub const matchmaking_dll = struct {
            pub const GameTypes001: usize = 0x1B8000;
            pub const MATCHFRAMEWORK_001: usize = 0x1C02B0;
        };
        // Module: materialsystem2.dll
        pub const materialsystem2_dll = struct {
            pub const FontManager_001: usize = 0x164570;
            pub const MaterialUtils_001: usize = 0x14C5C0;
            pub const PostProcessingSystem_001: usize = 0x14C4D0;
            pub const TextLayout_001: usize = 0x14C550;
            pub const VMaterialSystem2_001: usize = 0x163E80;
        };
        // Module: meshsystem.dll
        pub const meshsystem_dll = struct {
            pub const MeshSystem001: usize = 0x1506A0;
        };
        // Module: navsystem.dll
        pub const navsystem_dll = struct {
            pub const NavSystem001: usize = 0x1269E0;
        };
        // Module: networksystem.dll
        pub const networksystem_dll = struct {
            pub const FlattenedSerializersVersion001: usize = 0x27B7C0;
            pub const NetworkMessagesVersion001: usize = 0x2A3950;
            pub const NetworkSystemVersion001: usize = 0x294F80;
            pub const SerializedEntitiesVersion001: usize = 0x295070;
        };
        // Module: panorama.dll
        pub const panorama_dll = struct {
            pub const PanoramaUIEngine001: usize = 0x507CB0;
        };
        // Module: panorama_text_pango.dll
        pub const panorama_text_pango_dll = struct {
            pub const PanoramaTextServices001: usize = 0x2B89C0;
        };
        // Module: panoramauiclient.dll
        pub const panoramauiclient_dll = struct {
            pub const PanoramaUIClient001: usize = 0x295380;
        };
        // Module: particles.dll
        pub const particles_dll = struct {
            pub const ParticleSystemMgr003: usize = 0x520E70;
        };
        // Module: pulse_system.dll
        pub const pulse_system_dll = struct {
            pub const IPulseSystem_001: usize = 0x1F2670;
        };
        // Module: rendersystemdx11.dll
        pub const rendersystemdx11_dll = struct {
            pub const RenderDeviceMgr001: usize = 0x432D30;
            pub const RenderUtils_001: usize = 0x433628;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x432DD0;
        };
        // Module: resourcesystem.dll
        pub const resourcesystem_dll = struct {
            pub const ResourceSystem013: usize = 0x81FE0;
        };
        // Module: scenefilecache.dll
        pub const scenefilecache_dll = struct {
            pub const ResponseRulesCache001: usize = 0xDB190;
            pub const SceneFileCache002: usize = 0xDB2C0;
        };
        // Module: scenesystem.dll
        pub const scenesystem_dll = struct {
            pub const RenderingPipelines_001: usize = 0x65BAD0;
            pub const SceneSystem_002: usize = 0x8CFEE0;
            pub const SceneUtils_001: usize = 0x65C9E0;
        };
        // Module: schemasystem.dll
        pub const schemasystem_dll = struct {
            pub const SchemaSystem_001: usize = 0x76730;
        };
        // Module: server.dll
        pub const server_dll = struct {
            pub const EmptyWorldService001_Server: usize = 0x1B78A90;
            pub const EntitySubclassUtilsV001: usize = 0x1B24160;
            pub const NavGameTest001: usize = 0x1C226D8;
            pub const ServerToolsInfo_001: usize = 0x1BD3978;
            pub const Source2GameClients001: usize = 0x1BD09F0;
            pub const Source2GameDirector001: usize = 0x1D628D0;
            pub const Source2GameEntities001: usize = 0x1BD3080;
            pub const Source2Server001: usize = 0x1BD2EE0;
            pub const Source2ServerConfig001: usize = 0x1E57B18;
            pub const customnavsystem001: usize = 0x1B02F58;
        };
        // Module: soundsystem.dll
        pub const soundsystem_dll = struct {
            pub const SoundOpSystem001: usize = 0x4F3AA0;
            pub const SoundOpSystemEdit001: usize = 0x4F3980;
            pub const SoundSystem001: usize = 0x4F3470;
            pub const VMixEditTool001: usize = 0x59472FF;
        };
        // Module: steamaudio.dll
        pub const steamaudio_dll = struct {
            pub const SteamAudio001: usize = 0x25C440;
        };
        // Module: steamclient64.dll
        pub const steamclient64_dll = struct {
            pub const IVALIDATE001: usize = 0x16998B8;
            pub const SteamClient006: usize = 0x1696D50;
            pub const SteamClient007: usize = 0x1696D58;
            pub const SteamClient008: usize = 0x1696D60;
            pub const SteamClient009: usize = 0x1696D68;
            pub const SteamClient010: usize = 0x1696D70;
            pub const SteamClient011: usize = 0x1696D78;
            pub const SteamClient012: usize = 0x1696D80;
            pub const SteamClient013: usize = 0x1696D88;
            pub const SteamClient014: usize = 0x1696D90;
            pub const SteamClient015: usize = 0x1696D98;
            pub const SteamClient016: usize = 0x1696DA0;
            pub const SteamClient017: usize = 0x1696DA8;
            pub const SteamClient018: usize = 0x1696DB0;
            pub const SteamClient019: usize = 0x1696DB8;
            pub const SteamClient020: usize = 0x1696DC0;
            pub const SteamClient021: usize = 0x1696DC8;
            pub const SteamClient022: usize = 0x1696DD0;
            pub const SteamClient023: usize = 0x1696DD8;
            pub const p2pvoice002: usize = 0x14E5DEF;
            pub const p2pvoicesingleton002: usize = 0x16720F0;
        };
        // Module: tier0.dll
        pub const tier0_dll = struct {
            pub const TestScriptMgr001: usize = 0x398620;
            pub const VEngineCvar007: usize = 0x3A33B0;
            pub const VProcessUtils002: usize = 0x3985C0;
            pub const VStringTokenSystem001: usize = 0x3CA090;
        };
        // Module: v8system.dll
        pub const v8system_dll = struct {
            pub const Source2V8System001: usize = 0x316B0;
        };
        // Module: vphysics2.dll
        pub const vphysics2_dll = struct {
            pub const VPhysics2_Handle_Interface_001: usize = 0x4000E0;
            pub const VPhysics2_Interface_001: usize = 0x400120;
        };
        // Module: vscript.dll
        pub const vscript_dll = struct {
            pub const VScriptManager010: usize = 0x13B390;
        };
        // Module: vstdlib_s64.dll
        pub const vstdlib_s64_dll = struct {
            pub const IVALIDATE001: usize = 0x6F990;
            pub const VEngineCvar002: usize = 0x6E070;
        };
        // Module: worldrenderer.dll
        pub const worldrenderer_dll = struct {
            pub const WorldRendererMgr001: usize = 0x214A00;
        };
    };
};
