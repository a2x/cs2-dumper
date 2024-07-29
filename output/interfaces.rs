// Generated using https://github.com/a2x/cs2-dumper
// 2024-07-29 16:04:47.388825300 UTC

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
            pub const ClientToolsInfo_001: usize = 0x181C780;
            pub const EmptyWorldService001_Client: usize = 0x17D9670;
            pub const GameClientExports001: usize = 0x1819438;
            pub const LegacyGameUI001: usize = 0x1839220;
            pub const Source2Client002: usize = 0x1A1A610;
            pub const Source2ClientConfig001: usize = 0x19BB1F0;
            pub const Source2ClientPrediction001: usize = 0x18248D0;
            pub const Source2ClientUI001: usize = 0x1837D50;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x5356C0;
            pub const BugService001: usize = 0x5AC9A0;
            pub const ClientServerEngineLoopService_001: usize = 0x536370;
            pub const EngineGameUI001: usize = 0x533620;
            pub const EngineServiceMgr001: usize = 0x5EDA50;
            pub const GameEventSystemClientV001: usize = 0x5EDD70;
            pub const GameEventSystemServerV001: usize = 0x5EDEC0;
            pub const GameResourceServiceClientV001: usize = 0x5357C0;
            pub const GameResourceServiceServerV001: usize = 0x535820;
            pub const GameUIService_001: usize = 0x5ACCA0;
            pub const HostStateMgr001: usize = 0x536260;
            pub const INETSUPPORT_001: usize = 0x52EF00;
            pub const InputService_001: usize = 0x5ACFB0;
            pub const KeyValueCache001: usize = 0x536310;
            pub const MapListService_001: usize = 0x5EBF50;
            pub const NetworkClientService_001: usize = 0x5EC0E0;
            pub const NetworkP2PService_001: usize = 0x535AB0;
            pub const NetworkServerService_001: usize = 0x5EC470;
            pub const NetworkService_001: usize = 0x535C00;
            pub const RenderService_001: usize = 0x5EC6D0;
            pub const ScreenshotService001: usize = 0x5EC990;
            pub const SimpleEngineLoopService_001: usize = 0x536480;
            pub const SoundService_001: usize = 0x5ECB70;
            pub const Source2EngineToClient001: usize = 0x532CC0;
            pub const Source2EngineToClientStringTable001: usize = 0x532D60;
            pub const Source2EngineToServer001: usize = 0x532DF8;
            pub const Source2EngineToServerStringTable001: usize = 0x532E20;
            pub const SplitScreenService_001: usize = 0x535E40;
            pub const StatsService_001: usize = 0x5ED040;
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
            pub const MeshSystem001: usize = 0x144A30;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0xC04E0;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x240510;
            pub const NetworkMessagesVersion001: usize = 0x272600;
            pub const NetworkSystemVersion001: usize = 0x26A2A0;
            pub const SerializedEntitiesVersion001: usize = 0x26A390;
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
            pub const EmptyWorldService001_Server: usize = 0x1360FC0;
            pub const EntitySubclassUtilsV001: usize = 0x13134D0;
            pub const NavGameTest001: usize = 0x13FF788;
            pub const ServerToolsInfo_001: usize = 0x13B4EA8;
            pub const Source2GameClients001: usize = 0x13B0310;
            pub const Source2GameDirector001: usize = 0x14E46C0;
            pub const Source2GameEntities001: usize = 0x13B4E70;
            pub const Source2Server001: usize = 0x13B4CE0;
            pub const Source2ServerConfig001: usize = 0x159F5A8;
            pub const customnavsystem001: usize = 0x12F8D58;
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
