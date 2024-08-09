// Generated using https://github.com/a2x/cs2-dumper
// 2024-08-09 07:37:31.728976200 UTC

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
            pub const ClientToolsInfo_001: usize = 0x17C74E0;
            pub const EmptyWorldService001_Client: usize = 0x1784D30;
            pub const GameClientExports001: usize = 0x17C4198;
            pub const LegacyGameUI001: usize = 0x17E3B10;
            pub const Source2Client002: usize = 0x19BF7C0;
            pub const Source2ClientConfig001: usize = 0x19605D0;
            pub const Source2ClientPrediction001: usize = 0x17CF550;
            pub const Source2ClientUI001: usize = 0x17E2630;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x5345F0;
            pub const BugService001: usize = 0x5B0060;
            pub const ClientServerEngineLoopService_001: usize = 0x535260;
            pub const EngineGameUI001: usize = 0x5325A0;
            pub const EngineServiceMgr001: usize = 0x5F1110;
            pub const GameEventSystemClientV001: usize = 0x5F1430;
            pub const GameEventSystemServerV001: usize = 0x5F1570;
            pub const GameResourceServiceClientV001: usize = 0x5346F0;
            pub const GameResourceServiceServerV001: usize = 0x534750;
            pub const GameUIService_001: usize = 0x5B0360;
            pub const HostStateMgr001: usize = 0x535150;
            pub const INETSUPPORT_001: usize = 0x52DEE0;
            pub const InputService_001: usize = 0x5B0670;
            pub const KeyValueCache001: usize = 0x535200;
            pub const MapListService_001: usize = 0x5EF610;
            pub const NetworkClientService_001: usize = 0x5EF7A0;
            pub const NetworkP2PService_001: usize = 0x5349E0;
            pub const NetworkServerService_001: usize = 0x5EFB30;
            pub const NetworkService_001: usize = 0x534B30;
            pub const RenderService_001: usize = 0x5EFD90;
            pub const ScreenshotService001: usize = 0x5F0050;
            pub const SimpleEngineLoopService_001: usize = 0x535370;
            pub const SoundService_001: usize = 0x5F0230;
            pub const Source2EngineToClient001: usize = 0x531C80;
            pub const Source2EngineToClientStringTable001: usize = 0x531CE0;
            pub const Source2EngineToServer001: usize = 0x531D78;
            pub const Source2EngineToServerStringTable001: usize = 0x531DA0;
            pub const SplitScreenService_001: usize = 0x534D70;
            pub const StatsService_001: usize = 0x5F0700;
            pub const ToolService_001: usize = 0x534F80;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x532630;
            pub const VProfService_001: usize = 0x534FC0;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x20D5A0;
            pub const VFileSystem017: usize = 0x2128A0;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x135FA0;
            pub const GameModelInfo001: usize = 0x135FE0;
            pub const GameSystem2HostHook: usize = 0x136020;
            pub const HostUtils001: usize = 0x136050;
            pub const PredictionDiffManager001: usize = 0x1362A0;
            pub const SaveRestoreDataVersion001: usize = 0x1363D0;
            pub const SinglePlayerSharedMemory001: usize = 0x136400;
            pub const Source2Host001: usize = 0x136470;
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
            pub const GameTypes001: usize = 0x1A41A0;
            pub const MATCHFRAMEWORK_001: usize = 0x1AC370;
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
            pub const MeshSystem001: usize = 0x144A30;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0xC04E0;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x23D490;
            pub const NetworkMessagesVersion001: usize = 0x26F480;
            pub const NetworkSystemVersion001: usize = 0x267220;
            pub const SerializedEntitiesVersion001: usize = 0x267310;
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
            pub const ParticleSystemMgr003: usize = 0x5BC750;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x14D450;
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
            pub const RenderingPipelines_001: usize = 0x54CF90;
            pub const SceneSystem_002: usize = 0x598940;
            pub const SceneUtils_001: usize = 0x54D770;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x5C710;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x130B5F0;
            pub const EntitySubclassUtilsV001: usize = 0x12BE180;
            pub const NavGameTest001: usize = 0x13A9478;
            pub const ServerToolsInfo_001: usize = 0x135EC08;
            pub const Source2GameClients001: usize = 0x135A080;
            pub const Source2GameDirector001: usize = 0x1488850;
            pub const Source2GameEntities001: usize = 0x135EBD0;
            pub const Source2Server001: usize = 0x135EA40;
            pub const Source2ServerConfig001: usize = 0x15415D8;
            pub const customnavsystem001: usize = 0x12A3A18;
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
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x65ACBD2A;
            pub const IVALIDATE001: usize = 0x14EDA30;
            pub const SteamClient006: usize = 0x14EB270;
            pub const SteamClient007: usize = 0x14EB278;
            pub const SteamClient008: usize = 0x14EB280;
            pub const SteamClient009: usize = 0x14EB288;
            pub const SteamClient010: usize = 0x14EB290;
            pub const SteamClient011: usize = 0x14EB298;
            pub const SteamClient012: usize = 0x14EB2A0;
            pub const SteamClient013: usize = 0x14EB2A8;
            pub const SteamClient014: usize = 0x14EB2B0;
            pub const SteamClient015: usize = 0x14EB2B8;
            pub const SteamClient016: usize = 0x14EB2C0;
            pub const SteamClient017: usize = 0x14EB2C8;
            pub const SteamClient018: usize = 0x14EB2D0;
            pub const SteamClient019: usize = 0x14EB2D8;
            pub const SteamClient020: usize = 0x14EB2E0;
            pub const SteamClient021: usize = 0x14EB2E8;
            pub const p2pvoice002: usize = 0x14E5C5F;
            pub const p2pvoicesingleton002: usize = 0x14C90E0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x36DA30;
            pub const VEngineCvar007: usize = 0x37C590;
            pub const VProcessUtils002: usize = 0x36D940;
            pub const VStringTokenSystem001: usize = 0x394ED0;
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
            pub const IVALIDATE001: usize = 0xA5B40;
            pub const VEngineCvar002: usize = 0x63070;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x15FF70;
        }
    }
}
