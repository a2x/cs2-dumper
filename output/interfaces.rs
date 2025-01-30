// Generated using https://github.com/a2x/cs2-dumper
// 2025-01-29 12:23:34.043004291 UTC

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
            pub const ClientToolsInfo_001: usize = 0xE2DF60;
            pub const EmptyWorldService001_Client: usize = 0xAEB700;
            pub const GameClientExports001: usize = 0xE2DB30;
            pub const LegacyGameUI001: usize = 0x1010610;
            pub const Source2Client002: usize = 0xE2DB90;
            pub const Source2ClientConfig001: usize = 0xAD5F30;
            pub const Source2ClientPrediction001: usize = 0xEBD950;
            pub const Source2ClientUI001: usize = 0xF98520;
        }
        // Module: libengine2.so
        pub mod libengine2_so {
            pub const BenchmarkService001: usize = 0x222FB0;
            pub const BugService001: usize = 0x21F170;
            pub const ClientServerEngineLoopService_001: usize = 0x1EE5D0;
            pub const EngineGameUI001: usize = 0x3BDB40;
            pub const EngineServiceMgr001: usize = 0x1DE740;
            pub const GameEventSystemClientV001: usize = 0x1E3AF0;
            pub const GameEventSystemServerV001: usize = 0x1E3B00;
            pub const GameResourceServiceClientV001: usize = 0x224900;
            pub const GameResourceServiceServerV001: usize = 0x224910;
            pub const GameUIService_001: usize = 0x22CB40;
            pub const HostStateMgr001: usize = 0x1E9110;
            pub const INETSUPPORT_001: usize = 0x387120;
            pub const InputService_001: usize = 0x231230;
            pub const KeyValueCache001: usize = 0x1EBA60;
            pub const MapListService_001: usize = 0x246460;
            pub const NetworkClientService_001: usize = 0x269100;
            pub const NetworkP2PService_001: usize = 0x27E440;
            pub const NetworkServerService_001: usize = 0x24A510;
            pub const NetworkService_001: usize = 0x249C30;
            pub const RenderService_001: usize = 0x283620;
            pub const ScreenshotService001: usize = 0x2861A0;
            pub const SimpleEngineLoopService_001: usize = 0x204D40;
            pub const SoundService_001: usize = 0x28A450;
            pub const Source2EngineToClient001: usize = 0x30B980;
            pub const Source2EngineToClientStringTable001: usize = 0x2DE440;
            pub const Source2EngineToServer001: usize = 0x332B90;
            pub const Source2EngineToServerStringTable001: usize = 0x315010;
            pub const SplitScreenService_001: usize = 0x291D40;
            pub const StatsService_001: usize = 0x295700;
            pub const ToolService_001: usize = 0x29A360;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x3BD590;
            pub const VProfService_001: usize = 0x29BBE0;
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
            pub const MATCHFRAMEWORK_001: usize = 0x1C9F90;
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
            pub const PanoramaUIEngine001: usize = 0x233D10;
        }
        // Module: libpanorama_text_pango.so
        pub mod libpanorama_text_pango_so {
            pub const PanoramaTextServices001: usize = 0xBB8E0;
        }
        // Module: libpanoramauiclient.so
        pub mod libpanoramauiclient_so {
            pub const PanoramaUIClient001: usize = 0x1095E0;
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
            pub const EmptyWorldService001_Server: usize = 0xBF4E10;
            pub const EntitySubclassUtilsV001: usize = 0x8DE640;
            pub const NavGameTest001: usize = 0x1142450;
            pub const ServerToolsInfo_001: usize = 0xF12E00;
            pub const Source2GameClients001: usize = 0xF12D90;
            pub const Source2GameDirector001: usize = 0x72E350;
            pub const Source2GameEntities001: usize = 0xF12D80;
            pub const Source2Server001: usize = 0xF12A80;
            pub const Source2ServerConfig001: usize = 0xB914D0;
            pub const customnavsystem001: usize = 0x8610C0;
        }
        // Module: libsoundsystem.so
        pub mod libsoundsystem_so {
            pub const SoundOpSystem001: usize = 0x176C80;
            pub const SoundOpSystemEdit001: usize = 0xB6DC0;
            pub const SoundSystem001: usize = 0x1E5FE0;
            pub const VMixEditTool001: usize = 0x219CF0;
        }
        // Module: libsteamaudio.so
        pub mod libsteamaudio_so {
            pub const SteamAudio001: usize = 0x32410;
        }
        // Module: libtier0.so
        pub mod libtier0_so {
            pub const TestScriptMgr001: usize = 0x1B9B90;
            pub const VEngineCvar007: usize = 0xF61C0;
            pub const VProcessUtils002: usize = 0x1AD380;
            pub const VStringTokenSystem001: usize = 0x1DFCA0;
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
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x12500B0;
            pub const IVALIDATE001: usize = 0x124B950;
            pub const SteamClient006: usize = 0xF1AA80;
            pub const SteamClient007: usize = 0xF1AA90;
            pub const SteamClient008: usize = 0xF1AAA0;
            pub const SteamClient009: usize = 0xF1AAB0;
            pub const SteamClient010: usize = 0xF1AAC0;
            pub const SteamClient011: usize = 0xF1AAD0;
            pub const SteamClient012: usize = 0xF1AAE0;
            pub const SteamClient013: usize = 0xF1AAF0;
            pub const SteamClient014: usize = 0xF1AB00;
            pub const SteamClient015: usize = 0xF1AB10;
            pub const SteamClient016: usize = 0xF1AB40;
            pub const SteamClient017: usize = 0xF1AB70;
            pub const SteamClient018: usize = 0xF1ABA0;
            pub const SteamClient019: usize = 0xF1ABD0;
            pub const SteamClient020: usize = 0xF1AC00;
            pub const SteamClient021: usize = 0xF1AC30;
            pub const p2pvoice002: usize = 0x18F1140;
            pub const p2pvoicesingleton002: usize = 0x18E97B0;
        }
    }
}
