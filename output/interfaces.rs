// Generated using https://github.com/a2x/cs2-dumper
// 2026-02-24 01:42:29.356100200 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x7F25B8;
            pub const AnimationSystem_001: usize = 0x7EA4D0;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x205E0A0;
            pub const EmptyWorldService001_Client: usize = 0x2017F50;
            pub const GameClientExports001: usize = 0x205AD80;
            pub const LegacyGameUI001: usize = 0x20785F0;
            pub const Source2Client002: usize = 0x2304E70;
            pub const Source2ClientConfig001: usize = 0x2288EC0;
            pub const Source2ClientPrediction001: usize = 0x2065A00;
            pub const Source2ClientUI001: usize = 0x2076E80;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x613870;
            pub const BugService001: usize = 0x8C8D20;
            pub const ClientServerEngineLoopService_001: usize = 0x90A3C0;
            pub const EngineGameUI001: usize = 0x6112B0;
            pub const EngineServiceMgr001: usize = 0x909C70;
            pub const GameEventSystemClientV001: usize = 0x909F50;
            pub const GameEventSystemServerV001: usize = 0x90A080;
            pub const GameResourceServiceClientV001: usize = 0x613970;
            pub const GameResourceServiceServerV001: usize = 0x6139D0;
            pub const GameUIService_001: usize = 0x8C9150;
            pub const HostStateMgr001: usize = 0x6141F0;
            pub const INETSUPPORT_001: usize = 0x60C8E0;
            pub const InputService_001: usize = 0x8C9440;
            pub const KeyValueCache001: usize = 0x6142A0;
            pub const MapListService_001: usize = 0x9082B0;
            pub const NetworkClientService_001: usize = 0x908440;
            pub const NetworkP2PService_001: usize = 0x908780;
            pub const NetworkServerService_001: usize = 0x908930;
            pub const NetworkService_001: usize = 0x613B40;
            pub const RenderService_001: usize = 0x908BA0;
            pub const ScreenshotService001: usize = 0x908E60;
            pub const SimpleEngineLoopService_001: usize = 0x614300;
            pub const SoundService_001: usize = 0x613B80;
            pub const Source2EngineToClient001: usize = 0x610BD0;
            pub const Source2EngineToClientStringTable001: usize = 0x610C30;
            pub const Source2EngineToServer001: usize = 0x610CA8;
            pub const Source2EngineToServerStringTable001: usize = 0x610CD0;
            pub const SplitScreenService_001: usize = 0x613E60;
            pub const StatsService_001: usize = 0x909220;
            pub const ToolService_001: usize = 0x614020;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x611340;
            pub const VProfService_001: usize = 0x614060;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x214970;
            pub const VFileSystem017: usize = 0x214730;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x139020;
            pub const GameModelInfo001: usize = 0x139060;
            pub const GameSystem2HostHook: usize = 0x1390A0;
            pub const HostUtils001: usize = 0x1467E0;
            pub const PredictionDiffManager001: usize = 0x1391B0;
            pub const SaveRestoreDataVersion001: usize = 0x1392E0;
            pub const SinglePlayerSharedMemory001: usize = 0x139310;
            pub const Source2Host001: usize = 0x139380;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0x36AA0;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x43DD0;
            pub const InputSystemVersion001: usize = 0x45AD0;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x57E20;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x1B8000;
            pub const MATCHFRAMEWORK_001: usize = 0x1C02B0;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x164570;
            pub const MaterialUtils_001: usize = 0x14C5C0;
            pub const PostProcessingSystem_001: usize = 0x14C4D0;
            pub const TextLayout_001: usize = 0x14C550;
            pub const VMaterialSystem2_001: usize = 0x163E80;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x1506A0;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0x1269E0;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x279760;
            pub const NetworkMessagesVersion001: usize = 0x2A1880;
            pub const NetworkSystemVersion001: usize = 0x292F20;
            pub const SerializedEntitiesVersion001: usize = 0x293010;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x507CB0;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x2B89C0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x295380;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x520E70;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x1F2670;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x432D30;
            pub const RenderUtils_001: usize = 0x433628;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x432DD0;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x81FE0;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0xDB190;
            pub const SceneFileCache002: usize = 0xDB2C0;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x65BAC0;
            pub const SceneSystem_002: usize = 0x8CFEA0;
            pub const SceneUtils_001: usize = 0x65C9D0;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x76730;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x1B6EB80;
            pub const EntitySubclassUtilsV001: usize = 0x1B1A0F0;
            pub const NavGameTest001: usize = 0x1C187D8;
            pub const ServerToolsInfo_001: usize = 0x1BC9A78;
            pub const Source2GameClients001: usize = 0x1BC6AF0;
            pub const Source2GameDirector001: usize = 0x1D588E0;
            pub const Source2GameEntities001: usize = 0x1BC9180;
            pub const Source2Server001: usize = 0x1BC8FE0;
            pub const Source2ServerConfig001: usize = 0x1E4D6D8;
            pub const customnavsystem001: usize = 0x1AF8EC8;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x4F3AA0;
            pub const SoundOpSystemEdit001: usize = 0x4F3980;
            pub const SoundSystem001: usize = 0x4F3470;
            pub const VMixEditTool001: usize = 0x59472FF;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x25C440;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const IVALIDATE001: usize = 0x166F0A8;
            pub const SteamClient006: usize = 0x166C5B0;
            pub const SteamClient007: usize = 0x166C5B8;
            pub const SteamClient008: usize = 0x166C5C0;
            pub const SteamClient009: usize = 0x166C5C8;
            pub const SteamClient010: usize = 0x166C5D0;
            pub const SteamClient011: usize = 0x166C5D8;
            pub const SteamClient012: usize = 0x166C5E0;
            pub const SteamClient013: usize = 0x166C5E8;
            pub const SteamClient014: usize = 0x166C5F0;
            pub const SteamClient015: usize = 0x166C5F8;
            pub const SteamClient016: usize = 0x166C600;
            pub const SteamClient017: usize = 0x166C608;
            pub const SteamClient018: usize = 0x166C610;
            pub const SteamClient019: usize = 0x166C618;
            pub const SteamClient020: usize = 0x166C620;
            pub const SteamClient021: usize = 0x166C628;
            pub const SteamClient022: usize = 0x166C630;
            pub const SteamClient023: usize = 0x166C638;
            pub const p2pvoice002: usize = 0x14E4E6F;
            pub const p2pvoicesingleton002: usize = 0x16480F0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x398620;
            pub const VEngineCvar007: usize = 0x3A33B0;
            pub const VProcessUtils002: usize = 0x3985C0;
            pub const VStringTokenSystem001: usize = 0x3CA090;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x316B0;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x400120;
            pub const VPhysics2_Interface_001: usize = 0x400160;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x13B390;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0x6E990;
            pub const VEngineCvar002: usize = 0x6D070;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x214A00;
        }
    }
}
