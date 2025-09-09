// Generated using https://github.com/a2x/cs2-dumper
// 2025-09-09 05:55:39.126756800 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x7188F0;
            pub const AnimationSystem_001: usize = 0x710810;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x1BEB120;
            pub const EmptyWorldService001_Client: usize = 0x1BA6230;
            pub const GameClientExports001: usize = 0x1BE7F10;
            pub const LegacyGameUI001: usize = 0x1C066A0;
            pub const Source2Client002: usize = 0x1E2D410;
            pub const Source2ClientConfig001: usize = 0x1DC8B70;
            pub const Source2ClientPrediction001: usize = 0x1BF23C0;
            pub const Source2ClientUI001: usize = 0x1C04B90;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x5E8220;
            pub const BugService001: usize = 0x896930;
            pub const ClientServerEngineLoopService_001: usize = 0x8D8010;
            pub const EngineGameUI001: usize = 0x5E5FB0;
            pub const EngineServiceMgr001: usize = 0x8D7950;
            pub const GameEventSystemClientV001: usize = 0x8D7C20;
            pub const GameEventSystemServerV001: usize = 0x8D7D40;
            pub const GameResourceServiceClientV001: usize = 0x5E8320;
            pub const GameResourceServiceServerV001: usize = 0x5E8380;
            pub const GameUIService_001: usize = 0x896D60;
            pub const HostStateMgr001: usize = 0x5E8BC0;
            pub const INETSUPPORT_001: usize = 0x5E15C0;
            pub const InputService_001: usize = 0x897050;
            pub const KeyValueCache001: usize = 0x5E8C70;
            pub const MapListService_001: usize = 0x8D5FD0;
            pub const NetworkClientService_001: usize = 0x8D6160;
            pub const NetworkP2PService_001: usize = 0x8D6480;
            pub const NetworkServerService_001: usize = 0x8D6610;
            pub const NetworkService_001: usize = 0x5E84F0;
            pub const RenderService_001: usize = 0x8D6870;
            pub const ScreenshotService001: usize = 0x8D6B20;
            pub const SimpleEngineLoopService_001: usize = 0x5E8CD0;
            pub const SoundService_001: usize = 0x5E8530;
            pub const Source2EngineToClient001: usize = 0x5E56E0;
            pub const Source2EngineToClientStringTable001: usize = 0x5E5740;
            pub const Source2EngineToServer001: usize = 0x5E57B8;
            pub const Source2EngineToServerStringTable001: usize = 0x5E57E0;
            pub const SplitScreenService_001: usize = 0x5E8830;
            pub const StatsService_001: usize = 0x8D6F20;
            pub const ToolService_001: usize = 0x5E89F0;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x5E6040;
            pub const VProfService_001: usize = 0x5E8A30;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x21CB50;
            pub const VFileSystem017: usize = 0x21C7F0;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x138E30;
            pub const GameModelInfo001: usize = 0x138E70;
            pub const GameSystem2HostHook: usize = 0x138EB0;
            pub const HostUtils001: usize = 0x138EE0;
            pub const PredictionDiffManager001: usize = 0x1390D0;
            pub const SaveRestoreDataVersion001: usize = 0x139200;
            pub const SinglePlayerSharedMemory001: usize = 0x139230;
            pub const Source2Host001: usize = 0x1392A0;
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
            pub const Localize_001: usize = 0x47BD0;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x1B5EE0;
            pub const MATCHFRAMEWORK_001: usize = 0x1BE0F0;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x144500;
            pub const MaterialUtils_001: usize = 0x139280;
            pub const PostProcessingSystem_001: usize = 0x139190;
            pub const TextLayout_001: usize = 0x139210;
            pub const VMaterialSystem2_001: usize = 0x143B70;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x1CA550;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0x1266D0;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x25F210;
            pub const NetworkMessagesVersion001: usize = 0x2972C0;
            pub const NetworkSystemVersion001: usize = 0x288B20;
            pub const SerializedEntitiesVersion001: usize = 0x288C30;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x508AD0;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x2B79C0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x290280;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x59E050;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x1F7A00;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x42C4F0;
            pub const RenderUtils_001: usize = 0x42CDE8;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x42C590;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x7DB60;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x7A190;
            pub const SceneFileCache002: usize = 0x7A2E0;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x61E9C0;
            pub const SceneSystem_002: usize = 0x841820;
            pub const SceneUtils_001: usize = 0x61F1F0;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x79700;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x1708120;
            pub const EntitySubclassUtilsV001: usize = 0x16B0FA0;
            pub const NavGameTest001: usize = 0x17B0C50;
            pub const ServerToolsInfo_001: usize = 0x1760F18;
            pub const Source2GameClients001: usize = 0x175C8D0;
            pub const Source2GameDirector001: usize = 0x18BA0D0;
            pub const Source2GameEntities001: usize = 0x1760620;
            pub const Source2Server001: usize = 0x1760490;
            pub const Source2ServerConfig001: usize = 0x198D6C8;
            pub const customnavsystem001: usize = 0x1690918;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x3DF150;
            pub const SoundOpSystemEdit001: usize = 0x3DF040;
            pub const SoundSystem001: usize = 0x3DEB70;
            pub const VMixEditTool001: usize = 0x485EE79B;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x251270;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0xFFFFFFFF8BB0BEDA;
            pub const IVALIDATE001: usize = 0x15348D8;
            pub const SteamClient006: usize = 0x1532000;
            pub const SteamClient007: usize = 0x1532008;
            pub const SteamClient008: usize = 0x1532010;
            pub const SteamClient009: usize = 0x1532018;
            pub const SteamClient010: usize = 0x1532020;
            pub const SteamClient011: usize = 0x1532028;
            pub const SteamClient012: usize = 0x1532030;
            pub const SteamClient013: usize = 0x1532038;
            pub const SteamClient014: usize = 0x1532040;
            pub const SteamClient015: usize = 0x1532048;
            pub const SteamClient016: usize = 0x1532050;
            pub const SteamClient017: usize = 0x1532058;
            pub const SteamClient018: usize = 0x1532060;
            pub const SteamClient019: usize = 0x1532068;
            pub const SteamClient020: usize = 0x1532070;
            pub const SteamClient021: usize = 0x1532078;
            pub const SteamClient022: usize = 0x1532080;
            pub const p2pvoice002: usize = 0x14E2D2F;
            pub const p2pvoicesingleton002: usize = 0x150F0F0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x38E690;
            pub const VEngineCvar007: usize = 0x399480;
            pub const VProcessUtils002: usize = 0x38E520;
            pub const VStringTokenSystem001: usize = 0x3C0240;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x315B0;
        }
        // Module: vconcomm.dll
        pub mod vconcomm_dll {
            pub const VConComm001: usize = 0x375C0;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x3DD000;
            pub const VPhysics2_Interface_001: usize = 0x3DD040;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x13C280;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0x6E990;
            pub const VEngineCvar002: usize = 0x6D070;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x1F0FA0;
        }
    }
}
