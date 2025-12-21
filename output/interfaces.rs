// Generated using https://github.com/a2x/cs2-dumper
// 2025-12-21 11:22:37.665735500 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x7C2B70;
            pub const AnimationSystem_001: usize = 0x7BAA90;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x1BE7BB0;
            pub const EmptyWorldService001_Client: usize = 0x1BA2FC0;
            pub const GameClientExports001: usize = 0x1BE4890;
            pub const LegacyGameUI001: usize = 0x1C03130;
            pub const Source2Client002: usize = 0x1E2C570;
            pub const Source2ClientConfig001: usize = 0x1DC5DD0;
            pub const Source2ClientPrediction001: usize = 0x1BEEE40;
            pub const Source2ClientUI001: usize = 0x1C01670;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x5F7630;
            pub const BugService001: usize = 0x8ABC80;
            pub const ClientServerEngineLoopService_001: usize = 0x8ED390;
            pub const EngineGameUI001: usize = 0x5F52F0;
            pub const EngineServiceMgr001: usize = 0x8ECC90;
            pub const GameEventSystemClientV001: usize = 0x8ECF60;
            pub const GameEventSystemServerV001: usize = 0x8ED080;
            pub const GameResourceServiceClientV001: usize = 0x5F7730;
            pub const GameResourceServiceServerV001: usize = 0x5F7790;
            pub const GameUIService_001: usize = 0x8AC0B0;
            pub const HostStateMgr001: usize = 0x5F7FF0;
            pub const INETSUPPORT_001: usize = 0x5F0870;
            pub const InputService_001: usize = 0x8AC3A0;
            pub const KeyValueCache001: usize = 0x5F80A0;
            pub const MapListService_001: usize = 0x8EB310;
            pub const NetworkClientService_001: usize = 0x8EB4A0;
            pub const NetworkP2PService_001: usize = 0x8EB7C0;
            pub const NetworkServerService_001: usize = 0x8EB950;
            pub const NetworkService_001: usize = 0x5F7900;
            pub const RenderService_001: usize = 0x8EBBB0;
            pub const ScreenshotService001: usize = 0x8EBE60;
            pub const SimpleEngineLoopService_001: usize = 0x5F8100;
            pub const SoundService_001: usize = 0x5F7940;
            pub const Source2EngineToClient001: usize = 0x5F4980;
            pub const Source2EngineToClientStringTable001: usize = 0x5F49E0;
            pub const Source2EngineToServer001: usize = 0x5F4A58;
            pub const Source2EngineToServerStringTable001: usize = 0x5F4A80;
            pub const SplitScreenService_001: usize = 0x5F7C40;
            pub const StatsService_001: usize = 0x8EC260;
            pub const ToolService_001: usize = 0x5F7E00;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x5F5380;
            pub const VProfService_001: usize = 0x5F7E40;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x215AE0;
            pub const VFileSystem017: usize = 0x2106C0;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x138F00;
            pub const GameModelInfo001: usize = 0x138F40;
            pub const GameSystem2HostHook: usize = 0x138F80;
            pub const HostUtils001: usize = 0x146700;
            pub const PredictionDiffManager001: usize = 0x139090;
            pub const SaveRestoreDataVersion001: usize = 0x1391C0;
            pub const SinglePlayerSharedMemory001: usize = 0x1391F0;
            pub const Source2Host001: usize = 0x139260;
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
            pub const MATCHFRAMEWORK_001: usize = 0x1BE190;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x163500;
            pub const MaterialUtils_001: usize = 0x14B430;
            pub const PostProcessingSystem_001: usize = 0x14B340;
            pub const TextLayout_001: usize = 0x14B3C0;
            pub const VMaterialSystem2_001: usize = 0x162D70;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x1400E0;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0x120840;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x2632F0;
            pub const NetworkMessagesVersion001: usize = 0x28B240;
            pub const NetworkSystemVersion001: usize = 0x27C9D0;
            pub const SerializedEntitiesVersion001: usize = 0x27CAE0;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x509B20;
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
            pub const ParticleSystemMgr003: usize = 0x555660;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x1F0E30;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x431BC0;
            pub const RenderUtils_001: usize = 0x4324B8;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x431C60;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x7FDD0;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x95740;
            pub const SceneFileCache002: usize = 0x95890;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x61BB40;
            pub const SceneSystem_002: usize = 0x83E790;
            pub const SceneUtils_001: usize = 0x61C440;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x756F0;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x1732FA0;
            pub const EntitySubclassUtilsV001: usize = 0x16DF2E0;
            pub const NavGameTest001: usize = 0x17DBD20;
            pub const ServerToolsInfo_001: usize = 0x178B1A8;
            pub const Source2GameClients001: usize = 0x1786AF0;
            pub const Source2GameDirector001: usize = 0x18E63D0;
            pub const Source2GameEntities001: usize = 0x178A8B0;
            pub const Source2Server001: usize = 0x178A710;
            pub const Source2ServerConfig001: usize = 0x19B8218;
            pub const customnavsystem001: usize = 0x16BEC08;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x3EB4A0;
            pub const SoundOpSystemEdit001: usize = 0x3EB380;
            pub const SoundSystem001: usize = 0x3EAE60;
            pub const VMixEditTool001: usize = 0x485ED80B;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x257570;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0xFFFFFFFF8BB4C25A;
            pub const IVALIDATE001: usize = 0x1665ED8;
            pub const SteamClient006: usize = 0x16633E0;
            pub const SteamClient007: usize = 0x16633E8;
            pub const SteamClient008: usize = 0x16633F0;
            pub const SteamClient009: usize = 0x16633F8;
            pub const SteamClient010: usize = 0x1663400;
            pub const SteamClient011: usize = 0x1663408;
            pub const SteamClient012: usize = 0x1663410;
            pub const SteamClient013: usize = 0x1663418;
            pub const SteamClient014: usize = 0x1663420;
            pub const SteamClient015: usize = 0x1663428;
            pub const SteamClient016: usize = 0x1663430;
            pub const SteamClient017: usize = 0x1663438;
            pub const SteamClient018: usize = 0x1663440;
            pub const SteamClient019: usize = 0x1663448;
            pub const SteamClient020: usize = 0x1663450;
            pub const SteamClient021: usize = 0x1663458;
            pub const SteamClient022: usize = 0x1663460;
            pub const SteamClient023: usize = 0x1663468;
            pub const p2pvoice002: usize = 0x14E4D9F;
            pub const p2pvoicesingleton002: usize = 0x163F0F0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x3975A0;
            pub const VEngineCvar007: usize = 0x3A2440;
            pub const VProcessUtils002: usize = 0x3974E0;
            pub const VStringTokenSystem001: usize = 0x3C9310;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x315F0;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x3E4120;
            pub const VPhysics2_Interface_001: usize = 0x3E4160;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x13B280;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0x6E990;
            pub const VEngineCvar002: usize = 0x6D070;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x1FEC50;
        }
    }
}
