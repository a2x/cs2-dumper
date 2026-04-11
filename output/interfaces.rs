// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-11 10:20:28.886370999 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: libanimationsystem.so
        pub mod libanimationsystem_so {
            pub const AnimationSystemUtils_001: usize = 0x4BC260;
            pub const AnimationSystem_001: usize = 0x4ABBE0;
        }
        // Module: libclient.so
        pub mod libclient_so {
            pub const ClientToolsInfo_001: usize = 0x1743120;
            pub const EmptyWorldService001_Client: usize = 0x1284DF0;
            pub const GameClientExports001: usize = 0x17429B0;
            pub const LegacyGameUI001: usize = 0x19B8B70;
            pub const Source2Client002: usize = 0x1742A70;
            pub const Source2ClientConfig001: usize = 0x122CF20;
            pub const Source2ClientPrediction001: usize = 0x17BF8E0;
            pub const Source2ClientUI001: usize = 0x1958E40;
        }
        // Module: libengine2.so
        pub mod libengine2_so {
            pub const BenchmarkService001: usize = 0x56F7C0;
            pub const BugService001: usize = 0x56F650;
            pub const ClientServerEngineLoopService_001: usize = 0x53D460;
            pub const EngineGameUI001: usize = 0x749F80;
            pub const EngineServiceMgr001: usize = 0x514C00;
            pub const GameEventSystemClientV001: usize = 0x514FD0;
            pub const GameEventSystemServerV001: usize = 0x514FE0;
            pub const GameResourceServiceClientV001: usize = 0x578B30;
            pub const GameResourceServiceServerV001: usize = 0x578B40;
            pub const GameUIService_001: usize = 0x582080;
            pub const HostStateMgr001: usize = 0x529180;
            pub const INETSUPPORT_001: usize = 0x702FA0;
            pub const InputService_001: usize = 0x5825E0;
            pub const KeyValueCache001: usize = 0x5340F0;
            pub const MapListService_001: usize = 0x596D70;
            pub const NetworkClientService_001: usize = 0x5C8650;
            pub const NetworkP2PService_001: usize = 0x5DD290;
            pub const NetworkServerService_001: usize = 0x5A0880;
            pub const NetworkService_001: usize = 0x5A05E0;
            pub const RenderService_001: usize = 0x5DD350;
            pub const ScreenshotService001: usize = 0x5E7570;
            pub const SimpleEngineLoopService_001: usize = 0x54EA70;
            pub const SoundService_001: usize = 0x5E7870;
            pub const Source2EngineToClient001: usize = 0x67E110;
            pub const Source2EngineToClientStringTable001: usize = 0x63FB70;
            pub const Source2EngineToServer001: usize = 0x6B0260;
            pub const Source2EngineToServerStringTable001: usize = 0x688480;
            pub const SplitScreenService_001: usize = 0x5F2050;
            pub const StatsService_001: usize = 0x5F2170;
            pub const ToolService_001: usize = 0x5FA140;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x749EA0;
            pub const VProfService_001: usize = 0x5FAA40;
        }
        // Module: libfilesystem_stdio.so
        pub mod libfilesystem_stdio_so {
            pub const VAsyncFileSystem2_001: usize = 0x2A6F10;
            pub const VFileSystem017: usize = 0x2A6F00;
        }
        // Module: libhost.so
        pub mod libhost_so {
            pub const DebugDrawQueueManager001: usize = 0x2AD060;
            pub const GameModelInfo001: usize = 0x2AC9C0;
            pub const GameSystem2HostHook: usize = 0x2ACA40;
            pub const HostUtils001: usize = 0x2ACC20;
            pub const PredictionDiffManager001: usize = 0x2ACCA0;
            pub const SaveRestoreDataVersion001: usize = 0x2ACF00;
            pub const SinglePlayerSharedMemory001: usize = 0x2ACF10;
            pub const Source2Host001: usize = 0x2ACF70;
        }
        // Module: libinputsystem.so
        pub mod libinputsystem_so {
            pub const InputStackSystemVersion001: usize = 0x5EBC0;
            pub const InputSystemVersion001: usize = 0x5EE90;
        }
        // Module: liblocalize.so
        pub mod liblocalize_so {
            pub const Localize_001: usize = 0x5D4B0;
        }
        // Module: libmatchmaking.so
        pub mod libmatchmaking_so {
            pub const GameTypes001: usize = 0x303B40;
            pub const MATCHFRAMEWORK_001: usize = 0x3544A0;
        }
        // Module: libmaterialsystem2.so
        pub mod libmaterialsystem2_so {
            pub const FontManager_001: usize = 0xE7EB0;
            pub const MaterialUtils_001: usize = 0xCFEB0;
            pub const PostProcessingSystem_001: usize = 0xFC7B0;
            pub const TextLayout_001: usize = 0xF4D90;
            pub const VMaterialSystem2_001: usize = 0x94CA0;
        }
        // Module: libmeshsystem.so
        pub mod libmeshsystem_so {
            pub const MeshSystem001: usize = 0x784A0;
        }
        // Module: libnetworksystem.so
        pub mod libnetworksystem_so {
            pub const FlattenedSerializersVersion001: usize = 0x37A090;
            pub const NetworkMessagesVersion001: usize = 0x3A6650;
            pub const NetworkSystemVersion001: usize = 0x3D2500;
            pub const SerializedEntitiesVersion001: usize = 0x3EFA90;
        }
        // Module: libpanorama.so
        pub mod libpanorama_so {
            pub const PanoramaUIEngine001: usize = 0x4E01F0;
        }
        // Module: libpanorama_text_pango.so
        pub mod libpanorama_text_pango_so {
            pub const PanoramaTextServices001: usize = 0x2C5C70;
        }
        // Module: libpanoramauiclient.so
        pub mod libpanoramauiclient_so {
            pub const PanoramaUIClient001: usize = 0x45C0F0;
        }
        // Module: libparticles.so
        pub mod libparticles_so {
            pub const ParticleSystemMgr003: usize = 0x253090;
        }
        // Module: libpulse_system.so
        pub mod libpulse_system_so {
            pub const IPulseSystem_001: usize = 0xD87E0;
        }
        // Module: librendersystemvulkan.so
        pub mod librendersystemvulkan_so {
            pub const RenderDeviceMgr001: usize = 0x643360;
            pub const RenderUtils_001: usize = 0x5B19B0;
        }
        // Module: libresourcesystem.so
        pub mod libresourcesystem_so {
            pub const ResourceSystem013: usize = 0x6F9F0;
        }
        // Module: libscenefilecache.so
        pub mod libscenefilecache_so {
            pub const ResponseRulesCache001: usize = 0x1DD800;
            pub const SceneFileCache002: usize = 0x1DD130;
        }
        // Module: libscenesystem.so
        pub mod libscenesystem_so {
            pub const RenderingPipelines_001: usize = 0x3CAC50;
            pub const SceneSystem_002: usize = 0x4004A0;
            pub const SceneUtils_001: usize = 0x4B15A0;
        }
        // Module: libschemasystem.so
        pub mod libschemasystem_so {
            pub const SchemaSystem_001: usize = 0x5FA80;
        }
        // Module: libserver.so
        pub mod libserver_so {
            pub const EmptyWorldService001_Server: usize = 0x1248E50;
            pub const EntitySubclassUtilsV001: usize = 0xDB59C0;
            pub const NavGameTest001: usize = 0x1A12BE0;
            pub const ServerToolsInfo_001: usize = 0x16F6650;
            pub const Source2GameClients001: usize = 0x16F6640;
            pub const Source2GameDirector001: usize = 0xA3C170;
            pub const Source2GameEntities001: usize = 0x16F65B0;
            pub const Source2Server001: usize = 0x16F6360;
            pub const Source2ServerConfig001: usize = 0x118B3D0;
            pub const customnavsystem001: usize = 0xC5A660;
        }
        // Module: libsoundsystem.so
        pub mod libsoundsystem_so {
            pub const SoundOpSystem001: usize = 0x2810F0;
            pub const SoundOpSystemEdit001: usize = 0x1F8E00;
            pub const SoundSystem001: usize = 0x2F4110;
            pub const VMixEditTool001: usize = 0x32E0F0;
        }
        // Module: libsteamaudio.so
        pub mod libsteamaudio_so {
            pub const SteamAudio001: usize = 0x2D9D30;
        }
        // Module: libtier0.so
        pub mod libtier0_so {
            pub const TestScriptMgr001: usize = 0x2B9700;
            pub const VEngineCvar007: usize = 0x1D2E70;
            pub const VProcessUtils002: usize = 0x2A6790;
            pub const VStringTokenSystem001: usize = 0x2DA760;
        }
        // Module: libv8system.so
        pub mod libv8system_so {
            pub const Source2V8System001: usize = 0x5DEF0;
        }
        // Module: libvphysics2.so
        pub mod libvphysics2_so {
            pub const VPhysics2_Handle_Interface_001: usize = 0xB26E0;
            pub const VPhysics2_Interface_001: usize = 0xA7920;
        }
        // Module: libvscript.so
        pub mod libvscript_so {
            pub const VScriptManager010: usize = 0xEB110;
        }
        // Module: libworldrenderer.so
        pub mod libworldrenderer_so {
            pub const WorldRendererMgr001: usize = 0x29CE00;
        }
        // Module: steamclient.so
        pub mod steamclient_so {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x151C0D0;
            pub const IVALIDATE001: usize = 0x1517DF0;
            pub const SteamClient006: usize = 0x11BACB0;
            pub const SteamClient007: usize = 0x11BACC0;
            pub const SteamClient008: usize = 0x11BACD0;
            pub const SteamClient009: usize = 0x11BACE0;
            pub const SteamClient010: usize = 0x11BACF0;
            pub const SteamClient011: usize = 0x11BAD00;
            pub const SteamClient012: usize = 0x11BAD10;
            pub const SteamClient013: usize = 0x11BAD20;
            pub const SteamClient014: usize = 0x11BAD30;
            pub const SteamClient015: usize = 0x11BAD40;
            pub const SteamClient016: usize = 0x11BAD50;
            pub const SteamClient017: usize = 0x11BAD60;
            pub const SteamClient018: usize = 0x11BAD70;
            pub const SteamClient019: usize = 0x11BAD80;
            pub const SteamClient020: usize = 0x11BAD90;
            pub const SteamClient021: usize = 0x11BADA0;
            pub const SteamClient022: usize = 0x11BADB0;
            pub const SteamClient023: usize = 0x11BADC0;
            pub const p2pvoice002: usize = 0x1D9FD20;
            pub const p2pvoicesingleton002: usize = 0x1D984F0;
        }
    }
}
