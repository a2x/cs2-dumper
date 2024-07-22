// Generated using https://github.com/a2x/cs2-dumper
// 2024-07-22 10:50:13.060719885 UTC

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
            pub const ClientToolsInfo_001: usize = 0xDCAE50;
            pub const EmptyWorldService001_Client: usize = 0xAA8F30;
            pub const GameClientExports001: usize = 0xDCAA30;
            pub const LegacyGameUI001: usize = 0xFAF340;
            pub const Source2Client002: usize = 0xDCAA90;
            pub const Source2ClientConfig001: usize = 0xA93D10;
            pub const Source2ClientPrediction001: usize = 0xE60640;
            pub const Source2ClientUI001: usize = 0xF64140;
        }
        // Module: libengine2.so
        pub mod libengine2_so {
            pub const BenchmarkService001: usize = 0x217E20;
            pub const BugService001: usize = 0x214030;
            pub const ClientServerEngineLoopService_001: usize = 0x1E48E0;
            pub const EngineGameUI001: usize = 0x3A6AF0;
            pub const EngineServiceMgr001: usize = 0x1D3B70;
            pub const GameEventSystemClientV001: usize = 0x1D8E50;
            pub const GameEventSystemServerV001: usize = 0x1D8E60;
            pub const GameResourceServiceClientV001: usize = 0x219780;
            pub const GameResourceServiceServerV001: usize = 0x219790;
            pub const GameUIService_001: usize = 0x221350;
            pub const HostStateMgr001: usize = 0x1DF430;
            pub const INETSUPPORT_001: usize = 0x370CE0;
            pub const InputService_001: usize = 0x225A20;
            pub const KeyValueCache001: usize = 0x1E1D80;
            pub const MapListService_001: usize = 0x239FE0;
            pub const NetworkClientService_001: usize = 0x25CCF0;
            pub const NetworkP2PService_001: usize = 0x271FE0;
            pub const NetworkServerService_001: usize = 0x23E090;
            pub const NetworkService_001: usize = 0x23D7B0;
            pub const RenderService_001: usize = 0x277100;
            pub const ScreenshotService001: usize = 0x279C40;
            pub const SimpleEngineLoopService_001: usize = 0x1FA120;
            pub const SoundService_001: usize = 0x27DE40;
            pub const Source2EngineToClient001: usize = 0x2F7BC0;
            pub const Source2EngineToClientStringTable001: usize = 0x2CE430;
            pub const Source2EngineToServer001: usize = 0x31E500;
            pub const Source2EngineToServerStringTable001: usize = 0x300D90;
            pub const SplitScreenService_001: usize = 0x285460;
            pub const StatsService_001: usize = 0x288F90;
            pub const ToolService_001: usize = 0x28E0C0;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x3A6570;
            pub const VProfService_001: usize = 0x28F940;
        }
        // Module: libfilesystem_stdio.so
        pub mod libfilesystem_stdio_so {
            pub const VAsyncFileSystem2_001: usize = 0x7D950;
            pub const VFileSystem017: usize = 0x7D940;
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
            pub const FlattenedSerializersVersion001: usize = 0x163920;
            pub const NetworkMessagesVersion001: usize = 0x18AC50;
            pub const NetworkSystemVersion001: usize = 0x1B4D50;
            pub const SerializedEntitiesVersion001: usize = 0x1CECD0;
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
            pub const ParticleSystemMgr003: usize = 0x20DAA0;
        }
        // Module: libpulse_system.so
        pub mod libpulse_system_so {
            pub const IPulseSystem_001: usize = 0x3F250;
        }
        // Module: librendersystemvulkan.so
        pub mod librendersystemvulkan_so {
            pub const RenderDeviceMgr001: usize = 0x147B90;
            pub const RenderUtils_001: usize = 0xCB510;
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
            pub const EmptyWorldService001_Server: usize = 0xBD0FE0;
            pub const EntitySubclassUtilsV001: usize = 0x8DAFD0;
            pub const NavGameTest001: usize = 0x1119DD0;
            pub const ServerToolsInfo_001: usize = 0xEE6D80;
            pub const Source2GameClients001: usize = 0xEE6D20;
            pub const Source2GameDirector001: usize = 0x738A60;
            pub const Source2GameEntities001: usize = 0xEE6D10;
            pub const Source2Server001: usize = 0xEE6A20;
            pub const Source2ServerConfig001: usize = 0xB6E550;
            pub const customnavsystem001: usize = 0x866340;
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
            pub const TestScriptMgr001: usize = 0x1C8D60;
            pub const VEngineCvar007: usize = 0xF20B0;
            pub const VProcessUtils002: usize = 0x1A5B00;
            pub const VStringTokenSystem001: usize = 0x1F8070;
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
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x11E0130;
            pub const IVALIDATE001: usize = 0x11DBC00;
            pub const SteamClient006: usize = 0xE6D620;
            pub const SteamClient007: usize = 0xE6D630;
            pub const SteamClient008: usize = 0xE6D640;
            pub const SteamClient009: usize = 0xE6D650;
            pub const SteamClient010: usize = 0xE6D660;
            pub const SteamClient011: usize = 0xE6D670;
            pub const SteamClient012: usize = 0xE6D680;
            pub const SteamClient013: usize = 0xE6D690;
            pub const SteamClient014: usize = 0xE6D6A0;
            pub const SteamClient015: usize = 0xE6D6B0;
            pub const SteamClient016: usize = 0xE6D6E0;
            pub const SteamClient017: usize = 0xE6D710;
            pub const SteamClient018: usize = 0xE6D740;
            pub const SteamClient019: usize = 0xE6D770;
            pub const SteamClient020: usize = 0xE6D7A0;
            pub const SteamClient021: usize = 0xE6D7D0;
            pub const p2pvoice002: usize = 0x1834810;
            pub const p2pvoicesingleton002: usize = 0x182CEA0;
        }
    }
}
