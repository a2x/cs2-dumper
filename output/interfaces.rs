// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x7C2B30;
            pub const AnimationSystem_001: usize = 0x7BAA50;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x1BD47A0;
            pub const EmptyWorldService001_Client: usize = 0x1B8FC10;
            pub const GameClientExports001: usize = 0x1BD1480;
            pub const LegacyGameUI001: usize = 0x1BEFD30;
            pub const Source2Client002: usize = 0x1E18D00;
            pub const Source2ClientConfig001: usize = 0x1DB44E0;
            pub const Source2ClientPrediction001: usize = 0x1BDBA40;
            pub const Source2ClientUI001: usize = 0x1BEE1D0;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x5F55F0;
            pub const BugService001: usize = 0x8A9A70;
            pub const ClientServerEngineLoopService_001: usize = 0x8EB180;
            pub const EngineGameUI001: usize = 0x5F32D0;
            pub const EngineServiceMgr001: usize = 0x8EAA80;
            pub const GameEventSystemClientV001: usize = 0x8EAD50;
            pub const GameEventSystemServerV001: usize = 0x8EAE70;
            pub const GameResourceServiceClientV001: usize = 0x5F56F0;
            pub const GameResourceServiceServerV001: usize = 0x5F5750;
            pub const GameUIService_001: usize = 0x8A9EA0;
            pub const HostStateMgr001: usize = 0x5F5FB0;
            pub const INETSUPPORT_001: usize = 0x5EE860;
            pub const InputService_001: usize = 0x8AA190;
            pub const KeyValueCache001: usize = 0x5F6060;
            pub const MapListService_001: usize = 0x8E9100;
            pub const NetworkClientService_001: usize = 0x8E9290;
            pub const NetworkP2PService_001: usize = 0x8E95B0;
            pub const NetworkServerService_001: usize = 0x8E9740;
            pub const NetworkService_001: usize = 0x5F58C0;
            pub const RenderService_001: usize = 0x8E99A0;
            pub const ScreenshotService001: usize = 0x8E9C50;
            pub const SimpleEngineLoopService_001: usize = 0x5F60C0;
            pub const SoundService_001: usize = 0x5F5900;
            pub const Source2EngineToClient001: usize = 0x5F2960;
            pub const Source2EngineToClientStringTable001: usize = 0x5F29C0;
            pub const Source2EngineToServer001: usize = 0x5F2A38;
            pub const Source2EngineToServerStringTable001: usize = 0x5F2A60;
            pub const SplitScreenService_001: usize = 0x5F5C00;
            pub const StatsService_001: usize = 0x8EA050;
            pub const ToolService_001: usize = 0x5F5DC0;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x5F3360;
            pub const VProfService_001: usize = 0x5F5E00;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x215AE0;
            pub const VFileSystem017: usize = 0x2106C0;
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
            pub const FlattenedSerializersVersion001: usize = 0x2632D0;
            pub const NetworkMessagesVersion001: usize = 0x28B1D0;
            pub const NetworkSystemVersion001: usize = 0x27C9B0;
            pub const SerializedEntitiesVersion001: usize = 0x27CAC0;
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
            pub const ParticleSystemMgr003: usize = 0x555680;
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
            pub const SceneSystem_002: usize = 0x83E7D0;
            pub const SceneUtils_001: usize = 0x61C440;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x756F0;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x1726D50;
            pub const EntitySubclassUtilsV001: usize = 0x16D3350;
            pub const NavGameTest001: usize = 0x17CF9A0;
            pub const ServerToolsInfo_001: usize = 0x177EF28;
            pub const Source2GameClients001: usize = 0x177A870;
            pub const Source2GameDirector001: usize = 0x18D9AF0;
            pub const Source2GameEntities001: usize = 0x177E630;
            pub const Source2Server001: usize = 0x177E490;
            pub const Source2ServerConfig001: usize = 0x19AD8E8;
            pub const customnavsystem001: usize = 0x16B2D38;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x3EB490;
            pub const SoundOpSystemEdit001: usize = 0x3EB370;
            pub const SoundSystem001: usize = 0x3EAE50;
            pub const VMixEditTool001: usize = 0x485ED80B;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x257550;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0xFFFFFFFF8BB1D4EA;
            pub const IVALIDATE001: usize = 0x1551558;
            pub const SteamClient006: usize = 0x154EB30;
            pub const SteamClient007: usize = 0x154EB38;
            pub const SteamClient008: usize = 0x154EB40;
            pub const SteamClient009: usize = 0x154EB48;
            pub const SteamClient010: usize = 0x154EB50;
            pub const SteamClient011: usize = 0x154EB58;
            pub const SteamClient012: usize = 0x154EB60;
            pub const SteamClient013: usize = 0x154EB68;
            pub const SteamClient014: usize = 0x154EB70;
            pub const SteamClient015: usize = 0x154EB78;
            pub const SteamClient016: usize = 0x154EB80;
            pub const SteamClient017: usize = 0x154EB88;
            pub const SteamClient018: usize = 0x154EB90;
            pub const SteamClient019: usize = 0x154EB98;
            pub const SteamClient020: usize = 0x154EBA0;
            pub const SteamClient021: usize = 0x154EBA8;
            pub const SteamClient022: usize = 0x154EBB0;
            pub const SteamClient023: usize = 0x154EBB8;
            pub const p2pvoice002: usize = 0x14E1B7F;
            pub const p2pvoicesingleton002: usize = 0x152B0F0;
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
        // Module: vconcomm.dll
        pub mod vconcomm_dll {
            pub const VConComm001: usize = 0x375C0;
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
