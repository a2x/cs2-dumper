// Generated using https://github.com/a2x/cs2-dumper
// 2024-05-09 23:28:33.765194600 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x73600;
            pub const AnimationSystem_001: usize = 0x6E180;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x735800;
            pub const EmptyWorldService001_Client: usize = 0x482D10;
            pub const GameClientExports001: usize = 0x735810;
            pub const LegacyGameUI001: usize = 0x8B35B0;
            pub const Source2Client002: usize = 0x735820;
            pub const Source2ClientConfig001: usize = 0x46E050;
            pub const Source2ClientPrediction001: usize = 0x7B2060;
            pub const Source2ClientUI001: usize = 0x8A2AF0;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x177910;
            pub const BugService001: usize = 0x179170;
            pub const ClientServerEngineLoopService_001: usize = 0x1EC960;
            pub const EngineGameUI001: usize = 0x121E60;
            pub const EngineServiceMgr001: usize = 0x1DBF80;
            pub const GameEventSystemClientV001: usize = 0x1E0B70;
            pub const GameEventSystemServerV001: usize = 0x1E0B80;
            pub const GameResourceServiceClientV001: usize = 0x180330;
            pub const GameResourceServiceServerV001: usize = 0x180340;
            pub const GameUIService_001: usize = 0x182CE0;
            pub const HostStateMgr001: usize = 0x1E5550;
            pub const INETSUPPORT_001: usize = 0xF0AF0;
            pub const InputService_001: usize = 0x188850;
            pub const KeyValueCache001: usize = 0x1E7D70;
            pub const MapListService_001: usize = 0x19B720;
            pub const NetworkClientService_001: usize = 0x1A28E0;
            pub const NetworkP2PService_001: usize = 0x1A92A0;
            pub const NetworkServerService_001: usize = 0x1AD7F0;
            pub const NetworkService_001: usize = 0x1B2A10;
            pub const RenderService_001: usize = 0x1B2F00;
            pub const ScreenshotService001: usize = 0x1B5880;
            pub const SimpleEngineLoopService_001: usize = 0x1F92D0;
            pub const SoundService_001: usize = 0x1B9E80;
            pub const Source2EngineToClient001: usize = 0x61D70;
            pub const Source2EngineToClientStringTable001: usize = 0x8AF00;
            pub const Source2EngineToServer001: usize = 0x92500;
            pub const Source2EngineToServerStringTable001: usize = 0xA9AA0;
            pub const SplitScreenService_001: usize = 0x1C0710;
            pub const StatsService_001: usize = 0x1C33F0;
            pub const ToolService_001: usize = 0x1C8040;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x122AD0;
            pub const VProfService_001: usize = 0x1C93C0;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x67510;
            pub const VFileSystem017: usize = 0x67500;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x11AC0;
            pub const GameModelInfo001: usize = 0x12070;
            pub const GameSystem2HostHook: usize = 0x12150;
            pub const HostUtils001: usize = 0x12900;
            pub const PredictionDiffManager001: usize = 0x17320;
            pub const SaveRestoreDataVersion001: usize = 0x19040;
            pub const SinglePlayerSharedMemory001: usize = 0x19050;
            pub const Source2Host001: usize = 0x193D0;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0xC470;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x1850;
            pub const InputSystemVersion001: usize = 0x2A40;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x3830;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x538F0;
            pub const MATCHFRAMEWORK_001: usize = 0x105780;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x376D0;
            pub const MaterialUtils_001: usize = 0x4D790;
            pub const PostProcessingSystem_001: usize = 0x426D0;
            pub const TextLayout_001: usize = 0x49E50;
            pub const VMaterialSystem2_001: usize = 0x25BA0;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x7440;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0x8E30;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x7E5E0;
            pub const NetworkMessagesVersion001: usize = 0x9EC60;
            pub const NetworkSystemVersion001: usize = 0xBE9E0;
            pub const SerializedEntitiesVersion001: usize = 0xD4C00;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x5D8B0;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x4CBD0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x11FF0;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x590C0;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x44C0;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x4D310;
            pub const RenderUtils_001: usize = 0x55BB0;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x4D320;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x10840;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x31A0;
            pub const SceneFileCache002: usize = 0x6A60;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x85D30;
            pub const SceneSystem_002: usize = 0xBC6D0;
            pub const SceneUtils_001: usize = 0x12EE40;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0xAA50;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x56E680;
            pub const EntitySubclassUtilsV001: usize = 0x2AC320;
            pub const NavGameTest001: usize = 0xA42880;
            pub const ServerToolsInfo_001: usize = 0x82E390;
            pub const Source2GameClients001: usize = 0x82E3A0;
            pub const Source2GameDirector001: usize = 0x11E010;
            pub const Source2GameEntities001: usize = 0x82E3B0;
            pub const Source2Server001: usize = 0x82E3C0;
            pub const Source2ServerConfig001: usize = 0x562930;
            pub const customnavsystem001: usize = 0x227EF0;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x16A5B0;
            pub const SoundOpSystemEdit001: usize = 0x969C0;
            pub const SoundSystem001: usize = 0x48290;
            pub const VMixEditTool001: usize = 0x75BA0;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x5AA40;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x86CBF0;
            pub const IVALIDATE001: usize = 0x870FD0;
            pub const SteamClient006: usize = 0x669070;
            pub const SteamClient007: usize = 0x669080;
            pub const SteamClient008: usize = 0x669090;
            pub const SteamClient009: usize = 0x6690A0;
            pub const SteamClient010: usize = 0x6690B0;
            pub const SteamClient011: usize = 0x6690C0;
            pub const SteamClient012: usize = 0x6690D0;
            pub const SteamClient013: usize = 0x6690E0;
            pub const SteamClient014: usize = 0x6690F0;
            pub const SteamClient015: usize = 0x669100;
            pub const SteamClient016: usize = 0x669110;
            pub const SteamClient017: usize = 0x669120;
            pub const SteamClient018: usize = 0x669130;
            pub const SteamClient019: usize = 0x669140;
            pub const SteamClient020: usize = 0x669150;
            pub const SteamClient021: usize = 0x669160;
            pub const p2pvoice002: usize = 0xDAB90;
            pub const p2pvoicesingleton002: usize = 0xD7600;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x142960;
            pub const VEngineCvar007: usize = 0x62E40;
            pub const VProcessUtils002: usize = 0x133E00;
            pub const VStringTokenSystem001: usize = 0x1953B0;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x1950;
        }
        // Module: valve_avi.dll
        pub mod valve_avi_dll {
            pub const VAvi001: usize = 0x2F90;
        }
        // Module: valve_wmf.dll
        pub mod valve_wmf_dll {
            pub const VMediaFoundation001: usize = 0x12D0;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x5BC00;
            pub const VPhysics2_Interface_001: usize = 0x57080;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x32000;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0x24DE0;
            pub const VEngineCvar002: usize = 0x57A0;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x203A0;
        }
    }
}
