// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-16 02:29:53.956513739 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: libanimationsystem.so
        pub mod libanimationsystem_so {
            pub const AnimationSystemUtils_001: usize = 0x18CA60;
            pub const AnimationSystem_001: usize = 0x18C850;
        }
        // Module: libclient.so
        pub mod libclient_so {
            pub const ClientToolsInfo_001: usize = 0xD52C40;
            pub const EmptyWorldService001_Client: usize = 0xA46280;
            pub const GameClientExports001: usize = 0xD52890;
            pub const LegacyGameUI001: usize = 0xF1E910;
            pub const Source2Client002: usize = 0xD52900;
            pub const Source2ClientConfig001: usize = 0xA29E00;
            pub const Source2ClientPrediction001: usize = 0xDE1FE0;
            pub const Source2ClientUI001: usize = 0xEDD250;
        }
        // Module: libengine2.so
        pub mod libengine2_so {
            pub const BenchmarkService001: usize = 0x1E5F90;
            pub const BugService001: usize = 0x1E2190;
            pub const ClientServerEngineLoopService_001: usize = 0x1B3AE0;
            pub const EngineGameUI001: usize = 0x3754E0;
            pub const EngineServiceMgr001: usize = 0x1A3A50;
            pub const GameEventSystemClientV001: usize = 0x1A8AC0;
            pub const GameEventSystemServerV001: usize = 0x1A8AD0;
            pub const GameResourceServiceClientV001: usize = 0x1E78C0;
            pub const GameResourceServiceServerV001: usize = 0x1E78D0;
            pub const GameUIService_001: usize = 0x1EF400;
            pub const HostStateMgr001: usize = 0x1AE640;
            pub const INETSUPPORT_001: usize = 0x33F230;
            pub const InputService_001: usize = 0x1F39D0;
            pub const KeyValueCache001: usize = 0x1B0F90;
            pub const MapListService_001: usize = 0x2079D0;
            pub const NetworkClientService_001: usize = 0x22E310;
            pub const NetworkP2PService_001: usize = 0x244930;
            pub const NetworkServerService_001: usize = 0x20BA80;
            pub const NetworkService_001: usize = 0x20B1A0;
            pub const RenderService_001: usize = 0x249CF0;
            pub const ScreenshotService001: usize = 0x24C8E0;
            pub const SimpleEngineLoopService_001: usize = 0x1C87A0;
            pub const SoundService_001: usize = 0x250F00;
            pub const Source2EngineToClient001: usize = 0x2C6EE0;
            pub const Source2EngineToClientStringTable001: usize = 0x29E6D0;
            pub const Source2EngineToServer001: usize = 0x2ED890;
            pub const Source2EngineToServerStringTable001: usize = 0x2D0000;
            pub const SplitScreenService_001: usize = 0x258280;
            pub const StatsService_001: usize = 0x25B9D0;
            pub const ToolService_001: usize = 0x260C50;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x374F60;
            pub const VProfService_001: usize = 0x262400;
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
            pub const GameTypes001: usize = 0x12FF60;
            pub const MATCHFRAMEWORK_001: usize = 0x204440;
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
            pub const RenderDeviceMgr001: usize = 0x1854A0;
            pub const RenderUtils_001: usize = 0x101CF0;
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
            pub const EmptyWorldService001_Server: usize = 0xB83B50;
            pub const EntitySubclassUtilsV001: usize = 0x861A20;
            pub const NavGameTest001: usize = 0x1094AC0;
            pub const ServerToolsInfo_001: usize = 0xE72AB0;
            pub const Source2GameClients001: usize = 0xE72A40;
            pub const Source2GameDirector001: usize = 0x6C49D0;
            pub const Source2GameEntities001: usize = 0xE72A30;
            pub const Source2Server001: usize = 0xE72720;
            pub const Source2ServerConfig001: usize = 0xB0F700;
            pub const customnavsystem001: usize = 0x7F8A60;
        }
        // Module: libsoundsystem.so
        pub mod libsoundsystem_so {
            pub const SoundOpSystem001: usize = 0x155E80;
            pub const SoundOpSystemEdit001: usize = 0xAD350;
            pub const SoundSystem001: usize = 0x1C4920;
            pub const VMixEditTool001: usize = 0x1F4340;
        }
        // Module: libsteamaudio.so
        pub mod libsteamaudio_so {
            pub const SteamAudio001: usize = 0x31590;
        }
        // Module: libtier0.so
        pub mod libtier0_so {
            pub const TestScriptMgr001: usize = 0x1C02F0;
            pub const VEngineCvar007: usize = 0xF13A0;
            pub const VProcessUtils002: usize = 0x19DD20;
            pub const VStringTokenSystem001: usize = 0x1EC2D0;
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
