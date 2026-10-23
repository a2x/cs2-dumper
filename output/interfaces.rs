// Generated using https://github.com/a2x/cs2-dumper
// 2026-10-23 17:14:58.380890300 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x83F6D8;
            pub const AnimationSystem_001: usize = 0x8375F8;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientBugBugServic001_Client: usize = 0x22356E0;
            pub const ClientToolsInfo_001: usize = 0x22356B0;
            pub const EmptyWorldService001_Client: usize = 0x2219130;
            pub const GameClientExports001: usize = 0x2232358;
            pub const LegacyGameUI001: usize = 0x2242100;
            pub const Source2Client002: usize = 0x25613A0;
            pub const Source2ClientConfig001: usize = 0x24BDFD0;
            pub const Source2ClientPrediction001: usize = 0x25675E0;
            pub const Source2ClientUI001: usize = 0x2240880;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x6BFCC0;
            pub const BugBugService001: usize = 0x6BFDC0;
            pub const BugService001: usize = 0x9790F0;
            pub const ClientServerEngineLoopService_001: usize = 0x9BAAE0;
            pub const ClientServerSharedHandleSystem001: usize = 0x9BA0F0;
            pub const EngineGameUI001: usize = 0x6BD720;
            pub const EngineServiceMgr001: usize = 0x9BA3B0;
            pub const GameEventSystemClientV001: usize = 0x9BA690;
            pub const GameEventSystemServerV001: usize = 0x9BA7C0;
            pub const GameResourceServiceClientV001: usize = 0x6BFE00;
            pub const GameResourceServiceServerV001: usize = 0x6BFE60;
            pub const GameUIService_001: usize = 0x979540;
            pub const HostStateMgr001: usize = 0x6C02A0;
            pub const INETSUPPORT_001: usize = 0x6B8C70;
            pub const InputService_001: usize = 0x979820;
            pub const KeyValueCache001: usize = 0x6C0350;
            pub const MapListService_001: usize = 0x9B8690;
            pub const NetworkClientService_001: usize = 0x9B8820;
            pub const NetworkP2PService_001: usize = 0x9B8B60;
            pub const NetworkServerService_001: usize = 0x9B8D10;
            pub const NetworkService_001: usize = 0x6BFFD0;
            pub const RenderService_001: usize = 0x9B8F80;
            pub const ScreenshotService001: usize = 0x9B9240;
            pub const SimpleEngineLoopService_001: usize = 0x6C03B0;
            pub const SoundService_001: usize = 0x9B93F0;
            pub const Source2EngineToClient001: usize = 0x6BD030;
            pub const Source2EngineToClientStringTable001: usize = 0x6BD090;
            pub const Source2EngineToServer001: usize = 0x6BD108;
            pub const Source2EngineToServerStringTable001: usize = 0x6BD130;
            pub const SplitScreenService_001: usize = 0x6C0010;
            pub const StatsService_001: usize = 0x9B9930;
            pub const ToolService_001: usize = 0x6C0110;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x6BD7B0;
            pub const VProfService_001: usize = 0x6C0150;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x214610;
            pub const VFileSystem017: usize = 0x2143D0;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x13FF70;
            pub const GameModelInfo001: usize = 0x13FFB0;
            pub const GameSystem2HostHook: usize = 0x13FFF0;
            pub const HostUtils001: usize = 0x14F900;
            pub const PredictionDiffManager001: usize = 0x140100;
            pub const SaveRestoreDataVersion001: usize = 0x140230;
            pub const SinglePlayerSharedMemory001: usize = 0x140260;
            pub const Source2Host001: usize = 0x1402D0;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0x37AA0;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x44E90;
            pub const InputSystemVersion001: usize = 0x46BC0;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x59120;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x1B0FD0;
            pub const MATCHFRAMEWORK_001: usize = 0x1B90A0;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x1638E0;
            pub const MaterialUtils_001: usize = 0x14BD30;
            pub const PostProcessingSystem_001: usize = 0x14BC60;
            pub const TextLayout_001: usize = 0x14BCC0;
            pub const VMaterialSystem2_001: usize = 0x163530;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x180AB0;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0x12C000;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x277A50;
            pub const NetworkMessagesVersion001: usize = 0x2A3F30;
            pub const NetworkSystemVersion001: usize = 0x2911A0;
            pub const SerializedEntitiesVersion001: usize = 0x291290;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x5895F0;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x2BA9D0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x270710;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x65ADD0;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x238120;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x4342F0;
            pub const RenderUtils_001: usize = 0x434BD0;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x434390;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x89230;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x11D350;
            pub const SceneFileCache002: usize = 0x11D478;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x6759F0;
            pub const SceneSystem_002: usize = 0x91FB20;
            pub const SceneUtils_001: usize = 0x676750;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x76710;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x1E110C0;
            pub const EntitySubclassUtilsV001: usize = 0x1DC0C60;
            pub const NavGameTest001: usize = 0x1E58D48;
            pub const ServerToolsInfo_001: usize = 0x1E37C48;
            pub const Source2GameClients001: usize = 0x1E37170;
            pub const Source2GameDirector001: usize = 0x1FA1490;
            pub const Source2GameEntities001: usize = 0x1E373F0;
            pub const Source2Server001: usize = 0x1E37230;
            pub const Source2ServerConfig001: usize = 0x211CD98;
            pub const customnavsystem001: usize = 0x1DAE558;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundBugBugService001_Client: usize = 0x532C80;
            pub const SoundOpSystem001: usize = 0x532B60;
            pub const SoundOpSystemEdit001: usize = 0x532A70;
            pub const SoundSystem001: usize = 0x532460;
            pub const VMixEditTool001: usize = 0x5941BFF;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x35C1A0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x3A1960;
            pub const VEngineCvar007: usize = 0x3AC670;
            pub const VProcessUtils002: usize = 0x3A1820;
            pub const VStringTokenSystem001: usize = 0x3D3300;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x34790;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Interface_001: usize = 0x460E60;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x13E430;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x236D40;
        }
    }
}
