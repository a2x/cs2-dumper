// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-29 23:05:53.220233445 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: libanimationsystem.so
        pub mod libanimationsystem_so {
            pub const AnimationSystemUtils_001: usize = 0x18D410;
            pub const AnimationSystem_001: usize = 0x18D200;
        }
        // Module: libclient.so
        pub mod libclient_so {
            pub const ClientToolsInfo_001: usize = 0xD554B0;
            pub const EmptyWorldService001_Client: usize = 0xA45EC0;
            pub const GameClientExports001: usize = 0xD55150;
            pub const LegacyGameUI001: usize = 0xF22360;
            pub const Source2Client002: usize = 0xD551C0;
            pub const Source2ClientConfig001: usize = 0xA29880;
            pub const Source2ClientPrediction001: usize = 0xDE4BB0;
            pub const Source2ClientUI001: usize = 0xEDE950;
        }
        // Module: libengine2.so
        pub mod libengine2_so {
            pub const BenchmarkService001: usize = 0x1E7A70;
            pub const BugService001: usize = 0x1E3C70;
            pub const ClientServerEngineLoopService_001: usize = 0x1B55C0;
            pub const EngineGameUI001: usize = 0x378510;
            pub const EngineServiceMgr001: usize = 0x1A5530;
            pub const GameEventSystemClientV001: usize = 0x1AA5A0;
            pub const GameEventSystemServerV001: usize = 0x1AA5B0;
            pub const GameResourceServiceClientV001: usize = 0x1E93A0;
            pub const GameResourceServiceServerV001: usize = 0x1E93B0;
            pub const GameUIService_001: usize = 0x1F0EE0;
            pub const HostStateMgr001: usize = 0x1B0120;
            pub const INETSUPPORT_001: usize = 0x342200;
            pub const InputService_001: usize = 0x1F54B0;
            pub const KeyValueCache001: usize = 0x1B2A70;
            pub const MapListService_001: usize = 0x2094B0;
            pub const NetworkClientService_001: usize = 0x22FDF0;
            pub const NetworkP2PService_001: usize = 0x246410;
            pub const NetworkServerService_001: usize = 0x20D560;
            pub const NetworkService_001: usize = 0x20CC80;
            pub const RenderService_001: usize = 0x24B7D0;
            pub const ScreenshotService001: usize = 0x24E3C0;
            pub const SimpleEngineLoopService_001: usize = 0x1CA280;
            pub const SoundService_001: usize = 0x2529E0;
            pub const Source2EngineToClient001: usize = 0x2C9F40;
            pub const Source2EngineToClientStringTable001: usize = 0x2A16A0;
            pub const Source2EngineToServer001: usize = 0x2F0870;
            pub const Source2EngineToServerStringTable001: usize = 0x2D3060;
            pub const SplitScreenService_001: usize = 0x259D60;
            pub const StatsService_001: usize = 0x25D4B0;
            pub const ToolService_001: usize = 0x262730;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x377F90;
            pub const VProfService_001: usize = 0x263EE0;
        }
        // Module: libfilesystem_stdio.so
        pub mod libfilesystem_stdio_so {
            pub const VAsyncFileSystem2_001: usize = 0x80180;
            pub const VFileSystem017: usize = 0x80170;
        }
        // Module: libhost.so
        pub mod libhost_so {
            pub const DebugDrawQueueManager001: usize = 0xC2C70;
            pub const GameModelInfo001: usize = 0xBD8F0;
            pub const GameSystem2HostHook: usize = 0xBE030;
            pub const HostUtils001: usize = 0xBE4B0;
            pub const PredictionDiffManager001: usize = 0xBF440;
            pub const SaveRestoreDataVersion001: usize = 0xC17B0;
            pub const SinglePlayerSharedMemory001: usize = 0xC1A70;
            pub const Source2Host001: usize = 0xC21D0;
        }
        // Module: libinputsystem.so
        pub mod libinputsystem_so {
            pub const InputStackSystemVersion001: usize = 0x11840;
            pub const InputSystemVersion001: usize = 0x12D30;
        }
        // Module: liblocalize.so
        pub mod liblocalize_so {
            pub const Localize_001: usize = 0x1DB00;
        }
        // Module: libmatchmaking.so
        pub mod libmatchmaking_so {
            pub const GameTypes001: usize = 0x130050;
            pub const MATCHFRAMEWORK_001: usize = 0x2045D0;
        }
        // Module: libmaterialsystem2.so
        pub mod libmaterialsystem2_so {
            pub const FontManager_001: usize = 0x7A2D0;
            pub const MaterialUtils_001: usize = 0x64B10;
            pub const PostProcessingSystem_001: usize = 0x89C00;
            pub const TextLayout_001: usize = 0x87190;
            pub const VMaterialSystem2_001: usize = 0x2C750;
        }
        // Module: libmeshsystem.so
        pub mod libmeshsystem_so {
            pub const MeshSystem001: usize = 0x94810;
        }
        // Module: libnetworksystem.so
        pub mod libnetworksystem_so {
            pub const FlattenedSerializersVersion001: usize = 0x159440;
            pub const NetworkMessagesVersion001: usize = 0x180B70;
            pub const NetworkSystemVersion001: usize = 0x1A9CE0;
            pub const SerializedEntitiesVersion001: usize = 0x1C2750;
        }
        // Module: libpanorama.so
        pub mod libpanorama_so {
            pub const PanoramaUIEngine001: usize = 0x220BD0;
        }
        // Module: libpanorama_text_pango.so
        pub mod libpanorama_text_pango_so {
            pub const PanoramaTextServices001: usize = 0xBC530;
        }
        // Module: libpanoramauiclient.so
        pub mod libpanoramauiclient_so {
            pub const PanoramaUIClient001: usize = 0x109AB0;
        }
        // Module: libparticles.so
        pub mod libparticles_so {
            pub const ParticleSystemMgr003: usize = 0x1EBE60;
        }
        // Module: libpulse_system.so
        pub mod libpulse_system_so {
            pub const IPulseSystem_001: usize = 0x357B0;
        }
        // Module: librendersystemvulkan.so
        pub mod librendersystemvulkan_so {
            pub const RenderDeviceMgr001: usize = 0x1854C0;
            pub const RenderUtils_001: usize = 0x101D10;
        }
        // Module: libresourcesystem.so
        pub mod libresourcesystem_so {
            pub const ResourceSystem013: usize = 0x30A90;
        }
        // Module: libscenefilecache.so
        pub mod libscenefilecache_so {
            pub const ResponseRulesCache001: usize = 0x88E40;
            pub const SceneFileCache002: usize = 0x85B10;
        }
        // Module: libscenesystem.so
        pub mod libscenesystem_so {
            pub const RenderingPipelines_001: usize = 0x120E40;
            pub const SceneSystem_002: usize = 0x164320;
            pub const SceneUtils_001: usize = 0x1E0AE0;
        }
        // Module: libschemasystem.so
        pub mod libschemasystem_so {
            pub const SchemaSystem_001: usize = 0x211F0;
        }
        // Module: libserver.so
        pub mod libserver_so {
            pub const EmptyWorldService001_Server: usize = 0xB82750;
            pub const EntitySubclassUtilsV001: usize = 0x85F670;
            pub const NavGameTest001: usize = 0x10974F0;
            pub const ServerToolsInfo_001: usize = 0xE754A0;
            pub const Source2GameClients001: usize = 0xE75430;
            pub const Source2GameDirector001: usize = 0x6C5770;
            pub const Source2GameEntities001: usize = 0xE75420;
            pub const Source2Server001: usize = 0xE75110;
            pub const Source2ServerConfig001: usize = 0xB0ED10;
            pub const customnavsystem001: usize = 0x7F66C0;
        }
        // Module: libsoundsystem.so
        pub mod libsoundsystem_so {
            pub const SoundOpSystem001: usize = 0x155E50;
            pub const SoundOpSystemEdit001: usize = 0xAD350;
            pub const SoundSystem001: usize = 0x1C48F0;
            pub const VMixEditTool001: usize = 0x1F4300;
        }
        // Module: libsteamaudio.so
        pub mod libsteamaudio_so {
            pub const SteamAudio001: usize = 0x31590;
        }
        // Module: libtier0.so
        pub mod libtier0_so {
            pub const TestScriptMgr001: usize = 0x1C1640;
            pub const VEngineCvar007: usize = 0xF1400;
            pub const VProcessUtils002: usize = 0x19F070;
            pub const VStringTokenSystem001: usize = 0x1ED620;
        }
        // Module: libv8system.so
        pub mod libv8system_so {
            pub const Source2V8System001: usize = 0x1B630;
        }
        // Module: libvphysics2.so
        pub mod libvphysics2_so {
            pub const VPhysics2_Handle_Interface_001: usize = 0xC1F10;
            pub const VPhysics2_Interface_001: usize = 0xC1B00;
        }
        // Module: libvscript.so
        pub mod libvscript_so {
            pub const VScriptManager010: usize = 0x26230;
        }
        // Module: libworldrenderer.so
        pub mod libworldrenderer_so {
            pub const WorldRendererMgr001: usize = 0x982B0;
        }
        // Module: steamclient.so
        pub mod steamclient_so {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x11260D0;
            pub const IVALIDATE001: usize = 0x1122650;
            pub const SteamClient006: usize = 0xDDA7A0;
            pub const SteamClient007: usize = 0xDDA7B0;
            pub const SteamClient008: usize = 0xDDA7C0;
            pub const SteamClient009: usize = 0xDDA7D0;
            pub const SteamClient010: usize = 0xDDA7E0;
            pub const SteamClient011: usize = 0xDDA7F0;
            pub const SteamClient012: usize = 0xDDA800;
            pub const SteamClient013: usize = 0xDDA810;
            pub const SteamClient014: usize = 0xDDA820;
            pub const SteamClient015: usize = 0xDDA830;
            pub const SteamClient016: usize = 0xDDA860;
            pub const SteamClient017: usize = 0xDDA890;
            pub const SteamClient018: usize = 0xDDA8C0;
            pub const SteamClient019: usize = 0xDDA8F0;
            pub const SteamClient020: usize = 0xDDA920;
            pub const SteamClient021: usize = 0xDDA950;
            pub const p2pvoice002: usize = 0x174B380;
            pub const p2pvoicesingleton002: usize = 0x17443B0;
        }
    }
}
