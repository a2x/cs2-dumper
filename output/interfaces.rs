// Generated using https://github.com/a2x/cs2-dumper
// 2026-05-24 11:57:56.968428600 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x812190;
            pub const AnimationSystem_001: usize = 0x80A0B0;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x20622C0;
            pub const EmptyWorldService001_Client: usize = 0x2025AF0;
            pub const GameClientExports001: usize = 0x205EF60;
            pub const LegacyGameUI001: usize = 0x207A5F0;
            pub const Source2Client002: usize = 0x2339200;
            pub const Source2ClientConfig001: usize = 0x22AB070;
            pub const Source2ClientPrediction001: usize = 0x2069710;
            pub const Source2ClientUI001: usize = 0x2078B50;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
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
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x2159E0;
            pub const VFileSystem017: usize = 0x2157A0;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x139060;
            pub const GameModelInfo001: usize = 0x1390A0;
            pub const GameSystem2HostHook: usize = 0x1390E0;
            pub const HostUtils001: usize = 0x148AB0;
            pub const PredictionDiffManager001: usize = 0x1391F0;
            pub const SaveRestoreDataVersion001: usize = 0x139320;
            pub const SinglePlayerSharedMemory001: usize = 0x139350;
            pub const Source2Host001: usize = 0x1393C0;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0x36B20;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x40E30;
            pub const InputSystemVersion001: usize = 0x42B50;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x62180;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x1B0F80;
            pub const MATCHFRAMEWORK_001: usize = 0x1B9060;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x15DE60;
            pub const MaterialUtils_001: usize = 0x145D40;
            pub const PostProcessingSystem_001: usize = 0x145C50;
            pub const TextLayout_001: usize = 0x145CD0;
            pub const VMaterialSystem2_001: usize = 0x15D750;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x150C20;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0x122930;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x26E750;
            pub const NetworkMessagesVersion001: usize = 0x296A60;
            pub const NetworkSystemVersion001: usize = 0x287EA0;
            pub const SerializedEntitiesVersion001: usize = 0x287F90;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x505D20;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x2B8A40;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x296420;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x54A370;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x1F36A0;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x42B530;
            pub const RenderUtils_001: usize = 0x42BE28;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x42B5D0;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x831E0;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0xF58F0;
            pub const SceneFileCache002: usize = 0xF5A78;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x663BA0;
            pub const SceneSystem_002: usize = 0x8DB490;
            pub const SceneUtils_001: usize = 0x664AB0;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x76800;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x1BF7D40;
            pub const EntitySubclassUtilsV001: usize = 0x1BA3380;
            pub const NavGameTest001: usize = 0x1CA4240;
            pub const ServerToolsInfo_001: usize = 0x1C51238;
            pub const Source2GameClients001: usize = 0x1C4FC90;
            pub const Source2GameDirector001: usize = 0x1DE98E0;
            pub const Source2GameEntities001: usize = 0x1C50940;
            pub const Source2Server001: usize = 0x1C50790;
            pub const Source2ServerConfig001: usize = 0x1F06B68;
            pub const customnavsystem001: usize = 0x1B84668;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x5129B0;
            pub const SoundOpSystemEdit001: usize = 0x512870;
            pub const SoundSystem001: usize = 0x512360;
            pub const VMixEditTool001: usize = 0x594879F;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x25E620;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const IVALIDATE001: usize = 0x16BE0B8;
            pub const SteamClient006: usize = 0x16BB520;
            pub const SteamClient007: usize = 0x16BB528;
            pub const SteamClient008: usize = 0x16BB530;
            pub const SteamClient009: usize = 0x16BB538;
            pub const SteamClient010: usize = 0x16BB540;
            pub const SteamClient011: usize = 0x16BB548;
            pub const SteamClient012: usize = 0x16BB550;
            pub const SteamClient013: usize = 0x16BB558;
            pub const SteamClient014: usize = 0x16BB560;
            pub const SteamClient015: usize = 0x16BB568;
            pub const SteamClient016: usize = 0x16BB570;
            pub const SteamClient017: usize = 0x16BB578;
            pub const SteamClient018: usize = 0x16BB580;
            pub const SteamClient019: usize = 0x16BB588;
            pub const SteamClient020: usize = 0x16BB590;
            pub const SteamClient021: usize = 0x16BB598;
            pub const SteamClient022: usize = 0x16BB5A0;
            pub const SteamClient023: usize = 0x16BB5A8;
            pub const p2pvoice002: usize = 0x14E627F;
            pub const p2pvoicesingleton002: usize = 0x16960F0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x39E6F0;
            pub const VEngineCvar007: usize = 0x3A93B0;
            pub const VProcessUtils002: usize = 0x39E690;
            pub const VStringTokenSystem001: usize = 0x3D00B0;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x31730;
        }
        // Module: vconcomm.dll
        pub mod vconcomm_dll {
            pub const VConComm001: usize = 0x395C0;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Interface_001: usize = 0x40DDA0;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x13B410;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0x6F990;
            pub const VEngineCvar002: usize = 0x6E070;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x225C60;
        }
    }
}
