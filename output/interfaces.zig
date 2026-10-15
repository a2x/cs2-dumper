// Generated using https://github.com/a2x/cs2-dumper
// 2026-10-15 20:28:01.381534584 UTC

pub const cs2_dumper = struct {
    pub const interfaces = struct {
        // Module: libanimationsystem.so
        pub const libanimationsystem_so = struct {
            pub const AnimationSystemUtils_001: usize = 0x3A7FC0;
            pub const AnimationSystem_001: usize = 0x3A7CF0;
        };
        // Module: libclient.so
        pub const libclient_so = struct {
            pub const @"�Qm": usize = 0x4531790;
        };
        // Module: libengine2.so
        pub const libengine2_so = struct {
            pub const BenchmarkService001: usize = 0x3CDC50;
            pub const BugBugService001: usize = 0x3C8540;
            pub const BugService001: usize = 0x3C84D0;
            pub const ClientServerEngineLoopService_001: usize = 0x3841D0;
            pub const ClientServerSharedHandleSystem001: usize = 0x34C290;
            pub const EngineGameUI001: usize = 0x5E6730;
            pub const EngineServiceMgr001: usize = 0x36FE40;
            pub const GameEventSystemClientV001: usize = 0x376030;
            pub const GameEventSystemServerV001: usize = 0x376040;
            pub const GameResourceServiceClientV001: usize = 0x3CFE30;
            pub const GameResourceServiceServerV001: usize = 0x3CFE40;
            pub const GameUIService_001: usize = 0x3DAB70;
            pub const HostStateMgr001: usize = 0x37D270;
            pub const INETSUPPORT_001: usize = 0x59A860;
            pub const InputService_001: usize = 0x3E0080;
            pub const KeyValueCache001: usize = 0x380940;
            pub const MapListService_001: usize = 0x3FD080;
            pub const NetworkClientService_001: usize = 0x422440;
            pub const NetworkP2PService_001: usize = 0x4391F0;
            pub const NetworkServerService_001: usize = 0x403050;
            pub const NetworkService_001: usize = 0x4021E0;
            pub const RenderService_001: usize = 0x43F390;
            pub const ScreenshotService001: usize = 0x442EF0;
            pub const SimpleEngineLoopService_001: usize = 0x3A32F0;
            pub const SoundService_001: usize = 0x448FB0;
            pub const Source2EngineToClient001: usize = 0x4F67E0;
            pub const Source2EngineToClientStringTable001: usize = 0x4B99D0;
            pub const Source2EngineToServer001: usize = 0x5270A0;
            pub const Source2EngineToServerStringTable001: usize = 0x502210;
            pub const SplitScreenService_001: usize = 0x453900;
            pub const StatsService_001: usize = 0x457CF0;
            pub const ToolService_001: usize = 0x45D870;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x5E5EF0;
            pub const VProfService_001: usize = 0x45F310;
        };
        // Module: libfilesystem_stdio.so
        pub const libfilesystem_stdio_so = struct {
            pub const VAsyncFileSystem2_001: usize = 0x11BFF0;
            pub const VFileSystem017: usize = 0x11BFE0;
        };
        // Module: libhost.so
        pub const libhost_so = struct {
            pub const DebugDrawQueueManager001: usize = 0x17B690;
            pub const GameModelInfo001: usize = 0x175150;
            pub const GameSystem2HostHook: usize = 0x1756F0;
            pub const HostUtils001: usize = 0x175C00;
            pub const PredictionDiffManager001: usize = 0x177260;
            pub const SaveRestoreDataVersion001: usize = 0x179DA0;
            pub const SinglePlayerSharedMemory001: usize = 0x17A090;
            pub const Source2Host001: usize = 0x17A8D0;
        };
        // Module: libinputsystem.so
        pub const libinputsystem_so = struct {
            pub const InputStackSystemVersion001: usize = 0x39AB0;
            pub const InputSystemVersion001: usize = 0x3B0E0;
        };
        // Module: liblocalize.so
        pub const liblocalize_so = struct {
            pub const Localize_001: usize = 0x38430;
        };
        // Module: libmatchmaking.so
        pub const libmatchmaking_so = struct {
            pub const GameTypes001: usize = 0x1AB4E0;
            pub const MATCHFRAMEWORK_001: usize = 0x2C0D80;
        };
        // Module: libmaterialsystem2.so
        pub const libmaterialsystem2_so = struct {
            pub const FontManager_001: usize = 0xD0E60;
            pub const MaterialUtils_001: usize = 0xBD7A0;
            pub const PostProcessingSystem_001: usize = 0xE7D90;
            pub const TextLayout_001: usize = 0xE4F40;
            pub const VMaterialSystem2_001: usize = 0x6FE50;
        };
        // Module: libmeshsystem.so
        pub const libmeshsystem_so = struct {
            pub const MeshSystem001: usize = 0x5A310;
        };
        // Module: libnetworksystem.so
        pub const libnetworksystem_so = struct {
            pub const FlattenedSerializersVersion001: usize = 0x258F10;
            pub const NetworkMessagesVersion001: usize = 0x2B1A60;
            pub const NetworkSystemVersion001: usize = 0x2D1ED0;
            pub const SerializedEntitiesVersion001: usize = 0x2F2460;
        };
        // Module: libpanorama.so
        pub const libpanorama_so = struct {
            pub const PanoramaUIEngine001: usize = 0x3799D0;
        };
        // Module: libpanorama_text_pango.so
        pub const libpanorama_text_pango_so = struct {
            pub const PanoramaTextServices001: usize = 0x176B50;
        };
        // Module: libpanoramauiclient.so
        pub const libpanoramauiclient_so = struct {
            pub const PanoramaUIClient001: usize = 0x1A5220;
        };
        // Module: libparticles.so
        pub const libparticles_so = struct {
            pub const ParticleSystemMgr003: usize = 0x2D1300;
        };
        // Module: libpulse_system.so
        pub const libpulse_system_so = struct {
            pub const IPulseSystem_001: usize = 0xB8AE0;
        };
        // Module: librendersystemvulkan.so
        pub const librendersystemvulkan_so = struct {
            pub const RenderDeviceMgr001: usize = 0x56FC30;
            pub const RenderUtils_001: usize = 0x4B6280;
        };
        // Module: libresourcesystem.so
        pub const libresourcesystem_so = struct {
            pub const ResourceSystem013: usize = 0x50D90;
        };
        // Module: libscenefilecache.so
        pub const libscenefilecache_so = struct {
            pub const ResponseRulesCache001: usize = 0x152CC0;
            pub const SceneFileCache002: usize = 0x150CD0;
        };
        // Module: libscenesystem.so
        pub const libscenesystem_so = struct {
            pub const RenderingPipelines_001: usize = 0x255860;
            pub const SceneSystem_002: usize = 0x292580;
            pub const SceneUtils_001: usize = 0x388440;
        };
        // Module: libschemasystem.so
        pub const libschemasystem_so = struct {
            pub const SchemaSystem_001: usize = 0x3A0E0;
        };
        // Module: libserver.so
        pub const libserver_so = struct {
            pub const EmptyWorldService001_Server: usize = 0x13FAA10;
            pub const EntitySubclassUtilsV001: usize = 0xEC9280;
            pub const NavGameTest001: usize = 0x1D56360;
            pub const ServerToolsInfo_001: usize = 0x198C300;
            pub const Source2GameClients001: usize = 0x198C2F0;
            pub const Source2GameDirector001: usize = 0xACC440;
            pub const Source2GameEntities001: usize = 0x198C280;
            pub const Source2Server001: usize = 0x198C000;
            pub const Source2ServerConfig001: usize = 0x133E080;
            pub const customnavsystem001: usize = 0xD12EC0;
        };
        // Module: libsoundsystem.so
        pub const libsoundsystem_so = struct {
            pub const SoundBugBugService001_Client: usize = 0x3FD110;
            pub const SoundOpSystem001: usize = 0x2F3F30;
            pub const SoundOpSystemEdit001: usize = 0x1B3890;
            pub const SoundSystem001: usize = 0x38F830;
            pub const VMixEditTool001: usize = 0x3CD1B0;
        };
        // Module: libsteamaudio.so
        pub const libsteamaudio_so = struct {
            pub const SteamAudio001: usize = 0x1CAC80;
        };
        // Module: libtier0.so
        pub const libtier0_so = struct {
            pub const TestScriptMgr001: usize = 0x24ACD0;
            pub const VEngineCvar007: usize = 0x156560;
            pub const VProcessUtils002: usize = 0x237270;
            pub const VStringTokenSystem001: usize = 0x279610;
        };
        // Module: libv8system.so
        pub const libv8system_so = struct {
            pub const Source2V8System001: usize = 0x383D0;
        };
        // Module: libvphysics2.so
        pub const libvphysics2_so = struct {
            pub const VPhysics2_Interface_001: usize = 0x8B5D0;
        };
        // Module: libvscript.so
        pub const libvscript_so = struct {
            pub const VScriptManager010: usize = 0x638E0;
        };
        // Module: libworldrenderer.so
        pub const libworldrenderer_so = struct {
            pub const WorldRendererMgr001: usize = 0x181370;
        };
        // Module: steamclient.so
        pub const steamclient_so = struct {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x1617740;
            pub const IVALIDATE001: usize = 0x1613110;
            pub const SteamClient006: usize = 0x12A2230;
            pub const SteamClient007: usize = 0x12A2240;
            pub const SteamClient008: usize = 0x12A2250;
            pub const SteamClient009: usize = 0x12A2260;
            pub const SteamClient010: usize = 0x12A2270;
            pub const SteamClient011: usize = 0x12A2280;
            pub const SteamClient012: usize = 0x12A2290;
            pub const SteamClient013: usize = 0x12A22A0;
            pub const SteamClient014: usize = 0x12A22B0;
            pub const SteamClient015: usize = 0x12A22C0;
            pub const SteamClient016: usize = 0x12A22F0;
            pub const SteamClient017: usize = 0x12A2320;
            pub const SteamClient018: usize = 0x12A2350;
            pub const SteamClient019: usize = 0x12A2380;
            pub const SteamClient020: usize = 0x12A23B0;
            pub const SteamClient021: usize = 0x12A23E0;
            pub const SteamClient022: usize = 0x12A2410;
            pub const SteamClient023: usize = 0x12A2440;
            pub const p2pvoice002: usize = 0x1EF4770;
            pub const p2pvoicesingleton002: usize = 0x1EECEA0;
        };
    };
};
