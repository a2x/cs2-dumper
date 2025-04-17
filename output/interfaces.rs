// Generated using https://github.com/a2x/cs2-dumper
// 2025-04-17 03:43:32.736005207 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: libanimationsystem.so
        pub mod libanimationsystem_so {
            pub const AnimationSystemUtils_001: usize = 0x1B4F70;
            pub const AnimationSystem_001: usize = 0x1B4D60;
        }
        // Module: libclient.so
        pub mod libclient_so {
            pub const ClientToolsInfo_001: usize = 0xE07700;
            pub const EmptyWorldService001_Client: usize = 0xACE190;
            pub const GameClientExports001: usize = 0xE072D0;
            pub const LegacyGameUI001: usize = 0xFEB240;
            pub const Source2Client002: usize = 0xE07330;
            pub const Source2ClientConfig001: usize = 0xAB8A50;
            pub const Source2ClientPrediction001: usize = 0xE973C0;
            pub const Source2ClientUI001: usize = 0xF72320;
        }
        // Module: libengine2.so
        pub mod libengine2_so {
            pub const BenchmarkService001: usize = 0x222F80;
            pub const BugService001: usize = 0x21F140;
            pub const ClientServerEngineLoopService_001: usize = 0x1EE5A0;
            pub const EngineGameUI001: usize = 0x3BDA60;
            pub const EngineServiceMgr001: usize = 0x1DE710;
            pub const GameEventSystemClientV001: usize = 0x1E3AC0;
            pub const GameEventSystemServerV001: usize = 0x1E3AD0;
            pub const GameResourceServiceClientV001: usize = 0x2248D0;
            pub const GameResourceServiceServerV001: usize = 0x2248E0;
            pub const GameUIService_001: usize = 0x22CB10;
            pub const HostStateMgr001: usize = 0x1E90E0;
            pub const INETSUPPORT_001: usize = 0x387040;
            pub const InputService_001: usize = 0x231200;
            pub const KeyValueCache001: usize = 0x1EBA30;
            pub const MapListService_001: usize = 0x246190;
            pub const NetworkClientService_001: usize = 0x268E30;
            pub const NetworkP2PService_001: usize = 0x27E170;
            pub const NetworkServerService_001: usize = 0x24A240;
            pub const NetworkService_001: usize = 0x249960;
            pub const RenderService_001: usize = 0x283350;
            pub const ScreenshotService001: usize = 0x285ED0;
            pub const SimpleEngineLoopService_001: usize = 0x204D10;
            pub const SoundService_001: usize = 0x28A260;
            pub const Source2EngineToClient001: usize = 0x30B7F0;
            pub const Source2EngineToClientStringTable001: usize = 0x2DE2B0;
            pub const Source2EngineToServer001: usize = 0x332A00;
            pub const Source2EngineToServerStringTable001: usize = 0x314E80;
            pub const SplitScreenService_001: usize = 0x291B50;
            pub const StatsService_001: usize = 0x295510;
            pub const ToolService_001: usize = 0x29A170;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x3BD4B0;
            pub const VProfService_001: usize = 0x29B9F0;
        }
        // Module: libfilesystem_stdio.so
        pub mod libfilesystem_stdio_so {
            pub const VAsyncFileSystem2_001: usize = 0x7DB90;
            pub const VFileSystem017: usize = 0x7DB80;
        }
        // Module: libhost.so
        pub mod libhost_so {
            pub const DebugDrawQueueManager001: usize = 0xC5150;
            pub const GameModelInfo001: usize = 0xC0160;
            pub const GameSystem2HostHook: usize = 0xC0890;
            pub const HostUtils001: usize = 0xC0D10;
            pub const PredictionDiffManager001: usize = 0xC1C90;
            pub const SaveRestoreDataVersion001: usize = 0xC3C90;
            pub const SinglePlayerSharedMemory001: usize = 0xC3F50;
            pub const Source2Host001: usize = 0xC46B0;
        }
        // Module: libinputsystem.so
        pub mod libinputsystem_so {
            pub const InputStackSystemVersion001: usize = 0x11500;
            pub const InputSystemVersion001: usize = 0x129F0;
        }
        // Module: liblocalize.so
        pub mod liblocalize_so {
            pub const Localize_001: usize = 0x1D770;
        }
        // Module: libmatchmaking.so
        pub mod libmatchmaking_so {
            pub const GameTypes001: usize = 0xF4D40;
            pub const MATCHFRAMEWORK_001: usize = 0x1C9D60;
        }
        // Module: libmaterialsystem2.so
        pub mod libmaterialsystem2_so {
            pub const FontManager_001: usize = 0x7DDF0;
            pub const MaterialUtils_001: usize = 0x67C30;
            pub const PostProcessingSystem_001: usize = 0x8D2C0;
            pub const TextLayout_001: usize = 0x8A850;
            pub const VMaterialSystem2_001: usize = 0x2C470;
        }
        // Module: libmeshsystem.so
        pub mod libmeshsystem_so {
            pub const MeshSystem001: usize = 0x97630;
        }
        // Module: libnetworksystem.so
        pub mod libnetworksystem_so {
            pub const FlattenedSerializersVersion001: usize = 0x163810;
            pub const NetworkMessagesVersion001: usize = 0x18C190;
            pub const NetworkSystemVersion001: usize = 0x1B5730;
            pub const SerializedEntitiesVersion001: usize = 0x1CF0F0;
        }
        // Module: libpanorama.so
        pub mod libpanorama_so {
            pub const PanoramaUIEngine001: usize = 0x2353E0;
        }
        // Module: libpanorama_text_pango.so
        pub mod libpanorama_text_pango_so {
            pub const PanoramaTextServices001: usize = 0xBB8E0;
        }
        // Module: libpanoramauiclient.so
        pub mod libpanoramauiclient_so {
            pub const PanoramaUIClient001: usize = 0x10A0A0;
        }
        // Module: libparticles.so
        pub mod libparticles_so {
            pub const ParticleSystemMgr003: usize = 0x212AF0;
        }
        // Module: libpulse_system.so
        pub mod libpulse_system_so {
            pub const IPulseSystem_001: usize = 0x402F0;
        }
        // Module: librendersystemvulkan.so
        pub mod librendersystemvulkan_so {
            pub const RenderDeviceMgr001: usize = 0x14E840;
            pub const RenderUtils_001: usize = 0xCD990;
        }
        // Module: libresourcesystem.so
        pub mod libresourcesystem_so {
            pub const ResourceSystem013: usize = 0x30F40;
        }
        // Module: libscenefilecache.so
        pub mod libscenefilecache_so {
            pub const ResponseRulesCache001: usize = 0x89040;
            pub const SceneFileCache002: usize = 0x85BA0;
        }
        // Module: libscenesystem.so
        pub mod libscenesystem_so {
            pub const RenderingPipelines_001: usize = 0x142630;
            pub const SceneSystem_002: usize = 0x186F60;
            pub const SceneUtils_001: usize = 0x2067E0;
        }
        // Module: libschemasystem.so
        pub mod libschemasystem_so {
            pub const SchemaSystem_001: usize = 0x20FC0;
        }
        // Module: libserver.so
        pub mod libserver_so {
            pub const EmptyWorldService001_Server: usize = 0xBD04C0;
            pub const EntitySubclassUtilsV001: usize = 0x8B9580;
            pub const NavGameTest001: usize = 0x1110EC0;
            pub const ServerToolsInfo_001: usize = 0xEE1450;
            pub const Source2GameClients001: usize = 0xEE13E0;
            pub const Source2GameDirector001: usize = 0x7093B0;
            pub const Source2GameEntities001: usize = 0xEE13D0;
            pub const Source2Server001: usize = 0xEE10D0;
            pub const Source2ServerConfig001: usize = 0xB6CD60;
            pub const customnavsystem001: usize = 0x83BFA0;
        }
        // Module: libsoundsystem.so
        pub mod libsoundsystem_so {
            pub const SoundOpSystem001: usize = 0x176CA0;
            pub const SoundOpSystemEdit001: usize = 0xB6DE0;
            pub const SoundSystem001: usize = 0x1E6000;
            pub const VMixEditTool001: usize = 0x219EC0;
        }
        // Module: libsteamaudio.so
        pub mod libsteamaudio_so {
            pub const SteamAudio001: usize = 0x32410;
        }
        // Module: libtier0.so
        pub mod libtier0_so {
            pub const TestScriptMgr001: usize = 0x1B9BD0;
            pub const VEngineCvar007: usize = 0xF6200;
            pub const VProcessUtils002: usize = 0x1AD3C0;
            pub const VStringTokenSystem001: usize = 0x1DFCE0;
        }
        // Module: libv8system.so
        pub mod libv8system_so {
            pub const Source2V8System001: usize = 0x1B450;
        }
        // Module: libvphysics2.so
        pub mod libvphysics2_so {
            pub const VPhysics2_Handle_Interface_001: usize = 0xC92A0;
            pub const VPhysics2_Interface_001: usize = 0xC8E90;
        }
        // Module: libvscript.so
        pub mod libvscript_so {
            pub const VScriptManager010: usize = 0x25DA0;
        }
        // Module: libworldrenderer.so
        pub mod libworldrenderer_so {
            pub const WorldRendererMgr001: usize = 0xAED00;
        }
        // Module: steamclient.so
        pub mod steamclient_so {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x1455610;
            pub const IVALIDATE001: usize = 0x1451450;
            pub const SteamClient006: usize = 0x111F210;
            pub const SteamClient007: usize = 0x111F220;
            pub const SteamClient008: usize = 0x111F230;
            pub const SteamClient009: usize = 0x111F240;
            pub const SteamClient010: usize = 0x111F250;
            pub const SteamClient011: usize = 0x111F260;
            pub const SteamClient012: usize = 0x111F270;
            pub const SteamClient013: usize = 0x111F280;
            pub const SteamClient014: usize = 0x111F290;
            pub const SteamClient015: usize = 0x111F2A0;
            pub const SteamClient016: usize = 0x111F2B0;
            pub const SteamClient017: usize = 0x111F2C0;
            pub const SteamClient018: usize = 0x111F2D0;
            pub const SteamClient019: usize = 0x111F2E0;
            pub const SteamClient020: usize = 0x111F2F0;
            pub const SteamClient021: usize = 0x111F300;
            pub const SteamClient022: usize = 0x111F310;
            pub const p2pvoice002: usize = 0x1CA47D0;
            pub const p2pvoicesingleton002: usize = 0x1C9CF30;
        }
    }
}
