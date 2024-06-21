// Generated using https://github.com/a2x/cs2-dumper
// 2024-06-21 00:09:51.615729800 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x58FFB8;
            pub const AnimationSystem_001: usize = 0x587EE0;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x1812730;
            pub const EmptyWorldService001_Client: usize = 0x17CF650;
            pub const GameClientExports001: usize = 0x180F3F8;
            pub const LegacyGameUI001: usize = 0x182F170;
            pub const Source2Client002: usize = 0x1A100B0;
            pub const Source2ClientConfig001: usize = 0x19B0E00;
            pub const Source2ClientPrediction001: usize = 0x181A870;
            pub const Source2ClientUI001: usize = 0x182DC60;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x5356C0;
            pub const BugService001: usize = 0x5AC9D0;
            pub const ClientServerEngineLoopService_001: usize = 0x536370;
            pub const EngineGameUI001: usize = 0x533620;
            pub const EngineServiceMgr001: usize = 0x5EDA80;
            pub const GameEventSystemClientV001: usize = 0x5EDDA0;
            pub const GameEventSystemServerV001: usize = 0x5EDEF0;
            pub const GameResourceServiceClientV001: usize = 0x5357C0;
            pub const GameResourceServiceServerV001: usize = 0x535820;
            pub const GameUIService_001: usize = 0x5ACCD0;
            pub const HostStateMgr001: usize = 0x536260;
            pub const INETSUPPORT_001: usize = 0x52EF00;
            pub const InputService_001: usize = 0x5ACFE0;
            pub const KeyValueCache001: usize = 0x536310;
            pub const MapListService_001: usize = 0x5EBF80;
            pub const NetworkClientService_001: usize = 0x5EC110;
            pub const NetworkP2PService_001: usize = 0x535AB0;
            pub const NetworkServerService_001: usize = 0x5EC4A0;
            pub const NetworkService_001: usize = 0x535C00;
            pub const RenderService_001: usize = 0x5EC700;
            pub const ScreenshotService001: usize = 0x5EC9C0;
            pub const SimpleEngineLoopService_001: usize = 0x536480;
            pub const SoundService_001: usize = 0x5ECBA0;
            pub const Source2EngineToClient001: usize = 0x532CC0;
            pub const Source2EngineToClientStringTable001: usize = 0x532D60;
            pub const Source2EngineToServer001: usize = 0x532DF8;
            pub const Source2EngineToServerStringTable001: usize = 0x532E20;
            pub const SplitScreenService_001: usize = 0x535E40;
            pub const StatsService_001: usize = 0x5ED070;
            pub const ToolService_001: usize = 0x536050;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x5336B0;
            pub const VProfService_001: usize = 0x536090;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x20D5A0;
            pub const VFileSystem017: usize = 0x2128A0;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x136FC0;
            pub const GameModelInfo001: usize = 0x137000;
            pub const GameSystem2HostHook: usize = 0x137040;
            pub const HostUtils001: usize = 0x137070;
            pub const PredictionDiffManager001: usize = 0x1372C0;
            pub const SaveRestoreDataVersion001: usize = 0x1373F0;
            pub const SinglePlayerSharedMemory001: usize = 0x137420;
            pub const Source2Host001: usize = 0x137490;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0x2E8E0;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x36B80;
            pub const InputSystemVersion001: usize = 0x387F0;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x3BAD0;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x1A41C0;
            pub const MATCHFRAMEWORK_001: usize = 0x1AC3C0;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x10D320;
            pub const MaterialUtils_001: usize = 0x1084F0;
            pub const PostProcessingSystem_001: usize = 0x108400;
            pub const TextLayout_001: usize = 0x108480;
            pub const VMaterialSystem2_001: usize = 0x10C930;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x144A40;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0xC04E0;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x23E500;
            pub const NetworkMessagesVersion001: usize = 0x2705E0;
            pub const NetworkSystemVersion001: usize = 0x268290;
            pub const SerializedEntitiesVersion001: usize = 0x268380;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x4E2260;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x2B38F0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x289860;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x5BA770;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x14D430;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x3ED210;
            pub const RenderUtils_001: usize = 0x3EDA78;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x3ED2A8;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x6AF10;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x6B110;
            pub const SceneFileCache002: usize = 0x6B290;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x54DF90;
            pub const SceneSystem_002: usize = 0x599980;
            pub const SceneUtils_001: usize = 0x54E770;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x5C710;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x135F120;
            pub const EntitySubclassUtilsV001: usize = 0x1311610;
            pub const NavGameTest001: usize = 0x13FD908;
            pub const ServerToolsInfo_001: usize = 0x13B3038;
            pub const Source2GameClients001: usize = 0x13AE4A0;
            pub const Source2GameDirector001: usize = 0x14E2510;
            pub const Source2GameEntities001: usize = 0x13B3000;
            pub const Source2Server001: usize = 0x13B2E70;
            pub const Source2ServerConfig001: usize = 0x159D568;
            pub const customnavsystem001: usize = 0x12F6E98;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x3353A0;
            pub const SoundOpSystemEdit001: usize = 0x335270;
            pub const SoundSystem001: usize = 0x334E40;
            pub const VMixEditTool001: usize = 0x48288DEA;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x255750;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x8BD2F0FF;
            pub const IVALIDATE001: usize = 0x14D3A30;
            pub const SteamClient006: usize = 0x14D1270;
            pub const SteamClient007: usize = 0x14D1278;
            pub const SteamClient008: usize = 0x14D1280;
            pub const SteamClient009: usize = 0x14D1288;
            pub const SteamClient010: usize = 0x14D1290;
            pub const SteamClient011: usize = 0x14D1298;
            pub const SteamClient012: usize = 0x14D12A0;
            pub const SteamClient013: usize = 0x14D12A8;
            pub const SteamClient014: usize = 0x14D12B0;
            pub const SteamClient015: usize = 0x14D12B8;
            pub const SteamClient016: usize = 0x14D12C0;
            pub const SteamClient017: usize = 0x14D12C8;
            pub const SteamClient018: usize = 0x14D12D0;
            pub const SteamClient019: usize = 0x14D12D8;
            pub const SteamClient020: usize = 0x14D12E0;
            pub const SteamClient021: usize = 0x14D12E8;
            pub const p2pvoice002: usize = 0x14E62CF;
            pub const p2pvoicesingleton002: usize = 0x14AF0E0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x36DA10;
            pub const VEngineCvar007: usize = 0x37C550;
            pub const VProcessUtils002: usize = 0x36D920;
            pub const VStringTokenSystem001: usize = 0x394E90;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x2C480;
        }
        // Module: valve_avi.dll
        pub mod valve_avi_dll {
            pub const VAvi001: usize = 0x22320;
        }
        // Module: valve_wmf.dll
        pub mod valve_wmf_dll {
            pub const VMediaFoundation001: usize = 0x1FA20;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x37E500;
            pub const VPhysics2_Interface_001: usize = 0x37E540;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x128600;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0xA7B40;
            pub const VEngineCvar002: usize = 0x65070;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x15FF70;
        }
    }
}
