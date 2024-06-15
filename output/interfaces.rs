// Generated using https://github.com/a2x/cs2-dumper
// 2024-06-15 01:33:56.502397707 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: libanimationsystem.so
        pub mod libanimationsystem_so {
            pub const AnimationSystemUtils_001: usize = 0x1A5100;
            pub const AnimationSystem_001: usize = 0x1A4EF0;
        }
        // Module: libclient.so
        pub mod libclient_so {
            pub const ClientToolsInfo_001: usize = 0xDCB820;
            pub const EmptyWorldService001_Client: usize = 0xAA9D70;
            pub const GameClientExports001: usize = 0xDCB400;
            pub const LegacyGameUI001: usize = 0xFAC1B0;
            pub const Source2Client002: usize = 0xDCB460;
            pub const Source2ClientConfig001: usize = 0xA94C50;
            pub const Source2ClientPrediction001: usize = 0xE60F40;
            pub const Source2ClientUI001: usize = 0xF640D0;
        }
        // Module: libengine2.so
        pub mod libengine2_so {
            pub const BenchmarkService001: usize = 0x217CE0;
            pub const BugService001: usize = 0x213EF0;
            pub const ClientServerEngineLoopService_001: usize = 0x1E47A0;
            pub const EngineGameUI001: usize = 0x3A69D0;
            pub const EngineServiceMgr001: usize = 0x1D3A30;
            pub const GameEventSystemClientV001: usize = 0x1D8D10;
            pub const GameEventSystemServerV001: usize = 0x1D8D20;
            pub const GameResourceServiceClientV001: usize = 0x219640;
            pub const GameResourceServiceServerV001: usize = 0x219650;
            pub const GameUIService_001: usize = 0x221210;
            pub const HostStateMgr001: usize = 0x1DF2F0;
            pub const INETSUPPORT_001: usize = 0x370BD0;
            pub const InputService_001: usize = 0x2258B0;
            pub const KeyValueCache001: usize = 0x1E1C40;
            pub const MapListService_001: usize = 0x239E70;
            pub const NetworkClientService_001: usize = 0x25CB80;
            pub const NetworkP2PService_001: usize = 0x271E70;
            pub const NetworkServerService_001: usize = 0x23DF20;
            pub const NetworkService_001: usize = 0x23D640;
            pub const RenderService_001: usize = 0x276F90;
            pub const ScreenshotService001: usize = 0x279AD0;
            pub const SimpleEngineLoopService_001: usize = 0x1F9FE0;
            pub const SoundService_001: usize = 0x27DCD0;
            pub const Source2EngineToClient001: usize = 0x2F7AB0;
            pub const Source2EngineToClientStringTable001: usize = 0x2CE2A0;
            pub const Source2EngineToServer001: usize = 0x31E3F0;
            pub const Source2EngineToServerStringTable001: usize = 0x300C80;
            pub const SplitScreenService_001: usize = 0x2852F0;
            pub const StatsService_001: usize = 0x288E20;
            pub const ToolService_001: usize = 0x28DF50;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x3A6450;
            pub const VProfService_001: usize = 0x28F7D0;
        }
        // Module: libfilesystem_stdio.so
        pub mod libfilesystem_stdio_so {
            pub const VAsyncFileSystem2_001: usize = 0x7D990;
            pub const VFileSystem017: usize = 0x7D980;
        }
        // Module: libhost.so
        pub mod libhost_so {
            pub const DebugDrawQueueManager001: usize = 0xC5690;
            pub const GameModelInfo001: usize = 0xC0690;
            pub const GameSystem2HostHook: usize = 0xC0DD0;
            pub const HostUtils001: usize = 0xC1250;
            pub const PredictionDiffManager001: usize = 0xC21D0;
            pub const SaveRestoreDataVersion001: usize = 0xC41D0;
            pub const SinglePlayerSharedMemory001: usize = 0xC4490;
            pub const Source2Host001: usize = 0xC4BF0;
        }
        // Module: libinputsystem.so
        pub mod libinputsystem_so {
            pub const InputStackSystemVersion001: usize = 0x11860;
            pub const InputSystemVersion001: usize = 0x12D50;
        }
        // Module: liblocalize.so
        pub mod liblocalize_so {
            pub const Localize_001: usize = 0x1DBB0;
        }
        // Module: libmatchmaking.so
        pub mod libmatchmaking_so {
            pub const GameTypes001: usize = 0xF57E0;
            pub const MATCHFRAMEWORK_001: usize = 0x1CA5D0;
        }
        // Module: libmaterialsystem2.so
        pub mod libmaterialsystem2_so {
            pub const FontManager_001: usize = 0x7B1E0;
            pub const MaterialUtils_001: usize = 0x65BB0;
            pub const PostProcessingSystem_001: usize = 0x8A6A0;
            pub const TextLayout_001: usize = 0x87C30;
            pub const VMaterialSystem2_001: usize = 0x2C800;
        }
        // Module: libmeshsystem.so
        pub mod libmeshsystem_so {
            pub const MeshSystem001: usize = 0x97530;
        }
        // Module: libnetworksystem.so
        pub mod libnetworksystem_so {
            pub const FlattenedSerializersVersion001: usize = 0x163840;
            pub const NetworkMessagesVersion001: usize = 0x18AB70;
            pub const NetworkSystemVersion001: usize = 0x1B4C70;
            pub const SerializedEntitiesVersion001: usize = 0x1CD7C0;
        }
        // Module: libpanorama.so
        pub mod libpanorama_so {
            pub const PanoramaUIEngine001: usize = 0x230A10;
        }
        // Module: libpanorama_text_pango.so
        pub mod libpanorama_text_pango_so {
            pub const PanoramaTextServices001: usize = 0xBBAD0;
        }
        // Module: libpanoramauiclient.so
        pub mod libpanoramauiclient_so {
            pub const PanoramaUIClient001: usize = 0x109990;
        }
        // Module: libparticles.so
        pub mod libparticles_so {
            pub const ParticleSystemMgr003: usize = 0x20C940;
        }
        // Module: libpulse_system.so
        pub mod libpulse_system_so {
            pub const IPulseSystem_001: usize = 0x3F270;
        }
        // Module: librendersystemvulkan.so
        pub mod librendersystemvulkan_so {
            pub const RenderDeviceMgr001: usize = 0x147920;
            pub const RenderUtils_001: usize = 0xCB4C0;
        }
        // Module: libresourcesystem.so
        pub mod libresourcesystem_so {
            pub const ResourceSystem013: usize = 0x30E70;
        }
        // Module: libscenefilecache.so
        pub mod libscenefilecache_so {
            pub const ResponseRulesCache001: usize = 0x89070;
            pub const SceneFileCache002: usize = 0x85D30;
        }
        // Module: libscenesystem.so
        pub mod libscenesystem_so {
            pub const RenderingPipelines_001: usize = 0x137330;
            pub const SceneSystem_002: usize = 0x17AC60;
            pub const SceneUtils_001: usize = 0x1F5330;
        }
        // Module: libschemasystem.so
        pub mod libschemasystem_so {
            pub const SchemaSystem_001: usize = 0x202A0;
        }
        // Module: libserver.so
        pub mod libserver_so {
            pub const EmptyWorldService001_Server: usize = 0xBCFAB0;
            pub const EntitySubclassUtilsV001: usize = 0x8DA4A0;
            pub const NavGameTest001: usize = 0x1118320;
            pub const ServerToolsInfo_001: usize = 0xEE5390;
            pub const Source2GameClients001: usize = 0xEE5330;
            pub const Source2GameDirector001: usize = 0x738950;
            pub const Source2GameEntities001: usize = 0xEE5320;
            pub const Source2Server001: usize = 0xEE5030;
            pub const Source2ServerConfig001: usize = 0xB6D100;
            pub const customnavsystem001: usize = 0x866200;
        }
        // Module: libsoundsystem.so
        pub mod libsoundsystem_so {
            pub const SoundOpSystem001: usize = 0x16C900;
            pub const SoundOpSystemEdit001: usize = 0xB59E0;
            pub const SoundSystem001: usize = 0x1DAE40;
            pub const VMixEditTool001: usize = 0x20DF30;
        }
        // Module: libsteamaudio.so
        pub mod libsteamaudio_so {
            pub const SteamAudio001: usize = 0x9EF00;
        }
        // Module: libtier0.so
        pub mod libtier0_so {
            pub const TestScriptMgr001: usize = 0x1C88B0;
            pub const VEngineCvar007: usize = 0xF2080;
            pub const VProcessUtils002: usize = 0x1A5650;
            pub const VStringTokenSystem001: usize = 0x1F7BC0;
        }
        // Module: libv8system.so
        pub mod libv8system_so {
            pub const Source2V8System001: usize = 0x1B6F0;
        }
        // Module: libvphysics2.so
        pub mod libvphysics2_so {
            pub const VPhysics2_Handle_Interface_001: usize = 0xC4A60;
            pub const VPhysics2_Interface_001: usize = 0xC4650;
        }
        // Module: libvscript.so
        pub mod libvscript_so {
            pub const VScriptManager010: usize = 0x262D0;
        }
        // Module: libworldrenderer.so
        pub mod libworldrenderer_so {
            pub const WorldRendererMgr001: usize = 0xAEC80;
        }
        // Module: steamclient.so
        pub mod steamclient_so {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x11DC0E0;
            pub const IVALIDATE001: usize = 0x11D7BB0;
            pub const SteamClient006: usize = 0xE6BD40;
            pub const SteamClient007: usize = 0xE6BD50;
            pub const SteamClient008: usize = 0xE6BD60;
            pub const SteamClient009: usize = 0xE6BD70;
            pub const SteamClient010: usize = 0xE6BD80;
            pub const SteamClient011: usize = 0xE6BD90;
            pub const SteamClient012: usize = 0xE6BDA0;
            pub const SteamClient013: usize = 0xE6BDB0;
            pub const SteamClient014: usize = 0xE6BDC0;
            pub const SteamClient015: usize = 0xE6BDD0;
            pub const SteamClient016: usize = 0xE6BE00;
            pub const SteamClient017: usize = 0xE6BE30;
            pub const SteamClient018: usize = 0xE6BE60;
            pub const SteamClient019: usize = 0xE6BE90;
            pub const SteamClient020: usize = 0xE6BEC0;
            pub const SteamClient021: usize = 0xE6BEF0;
            pub const p2pvoice002: usize = 0x18306E0;
            pub const p2pvoicesingleton002: usize = 0x1828D70;
        }
    }
}
