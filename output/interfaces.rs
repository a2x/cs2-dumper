// Generated using https://github.com/a2x/cs2-dumper
// 2025-07-16 05:17:05.277202900 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x60FE28;
            pub const AnimationSystem_001: usize = 0x607D50;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x1850ED0;
            pub const EmptyWorldService001_Client: usize = 0x180D0F0;
            pub const GameClientExports001: usize = 0x184DB88;
            pub const LegacyGameUI001: usize = 0x186E1F0;
            pub const Source2Client002: usize = 0x1A67A10;
            pub const Source2ClientConfig001: usize = 0x1A00610;
            pub const Source2ClientPrediction001: usize = 0x1858F50;
            pub const Source2ClientUI001: usize = 0x186C720;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x546D30;
            pub const BugService001: usize = 0x5DFD10;
            pub const ClientServerEngineLoopService_001: usize = 0x547A70;
            pub const EngineGameUI001: usize = 0x544B90;
            pub const EngineServiceMgr001: usize = 0x620BF0;
            pub const GameEventSystemClientV001: usize = 0x620F10;
            pub const GameEventSystemServerV001: usize = 0x621050;
            pub const GameResourceServiceClientV001: usize = 0x546E30;
            pub const GameResourceServiceServerV001: usize = 0x546E90;
            pub const GameUIService_001: usize = 0x5E0010;
            pub const HostStateMgr001: usize = 0x547960;
            pub const INETSUPPORT_001: usize = 0x540060;
            pub const InputService_001: usize = 0x5E0320;
            pub const KeyValueCache001: usize = 0x547A10;
            pub const MapListService_001: usize = 0x61F370;
            pub const NetworkClientService_001: usize = 0x61F500;
            pub const NetworkP2PService_001: usize = 0x547140;
            pub const NetworkServerService_001: usize = 0x61F890;
            pub const NetworkService_001: usize = 0x547290;
            pub const RenderService_001: usize = 0x61FAF0;
            pub const ScreenshotService001: usize = 0x61FD90;
            pub const SimpleEngineLoopService_001: usize = 0x547B80;
            pub const SoundService_001: usize = 0x5472D0;
            pub const Source2EngineToClient001: usize = 0x544210;
            pub const Source2EngineToClientStringTable001: usize = 0x544270;
            pub const Source2EngineToServer001: usize = 0x544308;
            pub const Source2EngineToServerStringTable001: usize = 0x544330;
            pub const SplitScreenService_001: usize = 0x5475D0;
            pub const StatsService_001: usize = 0x6201C0;
            pub const ToolService_001: usize = 0x547790;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x544C20;
            pub const VProfService_001: usize = 0x5477D0;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x20C590;
            pub const VFileSystem017: usize = 0x211840;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x136FE0;
            pub const GameModelInfo001: usize = 0x137020;
            pub const GameSystem2HostHook: usize = 0x137060;
            pub const HostUtils001: usize = 0x137090;
            pub const PredictionDiffManager001: usize = 0x1372E0;
            pub const SaveRestoreDataVersion001: usize = 0x137410;
            pub const SinglePlayerSharedMemory001: usize = 0x137440;
            pub const Source2Host001: usize = 0x1374B0;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0x2EA50;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x36B70;
            pub const InputSystemVersion001: usize = 0x387E0;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x3AAD0;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x1A52E0;
            pub const MATCHFRAMEWORK_001: usize = 0x1AD510;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x114330;
            pub const MaterialUtils_001: usize = 0x10F4C0;
            pub const PostProcessingSystem_001: usize = 0x10F3D0;
            pub const TextLayout_001: usize = 0x10F450;
            pub const VMaterialSystem2_001: usize = 0x113910;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x19D610;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0xFB730;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x244570;
            pub const NetworkMessagesVersion001: usize = 0x2765E0;
            pub const NetworkSystemVersion001: usize = 0x26E300;
            pub const SerializedEntitiesVersion001: usize = 0x26E3F0;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x4E9250;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x2B38E0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x28D840;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x629C30;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x17D9A0;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x3EE1F0;
            pub const RenderUtils_001: usize = 0x3EEA58;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x3EE290;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x72A40;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x720F0;
            pub const SceneFileCache002: usize = 0x72260;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x5CEB30;
            pub const SceneSystem_002: usize = 0x7AE000;
            pub const SceneUtils_001: usize = 0x5CF380;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x616E0;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x1370BB0;
            pub const EntitySubclassUtilsV001: usize = 0x1321180;
            pub const NavGameTest001: usize = 0x140FBD8;
            pub const ServerToolsInfo_001: usize = 0x13C5578;
            pub const Source2GameClients001: usize = 0x13BF440;
            pub const Source2GameDirector001: usize = 0x14F31A0;
            pub const Source2GameEntities001: usize = 0x13C54A0;
            pub const Source2Server001: usize = 0x13C5310;
            pub const Source2ServerConfig001: usize = 0x15BDC68;
            pub const customnavsystem001: usize = 0x13058F8;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x3A1C50;
            pub const SoundOpSystemEdit001: usize = 0x3A1B20;
            pub const SoundSystem001: usize = 0x3A15F0;
            pub const VMixEditTool001: usize = 0x48289D0A;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x2139F0;
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
            pub const TestScriptMgr001: usize = 0x37EA80;
            pub const VEngineCvar007: usize = 0x38D4E0;
            pub const VProcessUtils002: usize = 0x37E990;
            pub const VStringTokenSystem001: usize = 0x3A5F00;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x2C480;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x391F70;
            pub const VPhysics2_Interface_001: usize = 0x391FB0;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x128600;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0x6E990;
            pub const VEngineCvar002: usize = 0x6D070;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x161D80;
        }
    }
}
