// Generated using https://github.com/a2x/cs2-dumper
// 2024-05-25 01:48:22.657979400 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x79E00;
            pub const AnimationSystem_001: usize = 0x748F0;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x757C20;
            pub const EmptyWorldService001_Client: usize = 0x4A10F0;
            pub const GameClientExports001: usize = 0x757C30;
            pub const LegacyGameUI001: usize = 0x8E1400;
            pub const Source2Client002: usize = 0x757C40;
            pub const Source2ClientConfig001: usize = 0x484E50;
            pub const Source2ClientPrediction001: usize = 0x7D4890;
            pub const Source2ClientUI001: usize = 0x8C7CC0;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x17BE20;
            pub const BugService001: usize = 0x17CF70;
            pub const ClientServerEngineLoopService_001: usize = 0x1F0F80;
            pub const EngineGameUI001: usize = 0x126C20;
            pub const EngineServiceMgr001: usize = 0x1E0200;
            pub const GameEventSystemClientV001: usize = 0x1E5370;
            pub const GameEventSystemServerV001: usize = 0x1E5380;
            pub const GameResourceServiceClientV001: usize = 0x1845F0;
            pub const GameResourceServiceServerV001: usize = 0x184600;
            pub const GameUIService_001: usize = 0x186FA0;
            pub const HostStateMgr001: usize = 0x1E9B30;
            pub const INETSUPPORT_001: usize = 0xF5B90;
            pub const InputService_001: usize = 0x18CB20;
            pub const KeyValueCache001: usize = 0x1EC350;
            pub const MapListService_001: usize = 0x19FCD0;
            pub const NetworkClientService_001: usize = 0x1A6F20;
            pub const NetworkP2PService_001: usize = 0x1AD750;
            pub const NetworkServerService_001: usize = 0x1B1C80;
            pub const NetworkService_001: usize = 0x1B6EC0;
            pub const RenderService_001: usize = 0x1B73B0;
            pub const ScreenshotService001: usize = 0x1B9D60;
            pub const SimpleEngineLoopService_001: usize = 0x1FDAD0;
            pub const SoundService_001: usize = 0x1BDFA0;
            pub const Source2EngineToClient001: usize = 0x66BF0;
            pub const Source2EngineToClientStringTable001: usize = 0x8F9D0;
            pub const Source2EngineToServer001: usize = 0x97060;
            pub const Source2EngineToServerStringTable001: usize = 0xAE6C0;
            pub const SplitScreenService_001: usize = 0x1C49B0;
            pub const StatsService_001: usize = 0x1C7700;
            pub const ToolService_001: usize = 0x1CC180;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x1278A0;
            pub const VProfService_001: usize = 0x1CD5B0;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x67490;
            pub const VFileSystem017: usize = 0x67480;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x15170;
            pub const GameModelInfo001: usize = 0x15720;
            pub const GameSystem2HostHook: usize = 0x15800;
            pub const HostUtils001: usize = 0x15FB0;
            pub const PredictionDiffManager001: usize = 0x1AB00;
            pub const SaveRestoreDataVersion001: usize = 0x1C500;
            pub const SinglePlayerSharedMemory001: usize = 0x1C510;
            pub const Source2Host001: usize = 0x1C8A0;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0xC470;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x1850;
            pub const InputSystemVersion001: usize = 0x2A40;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x3AE0;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x53910;
            pub const MATCHFRAMEWORK_001: usize = 0x105780;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x38430;
            pub const MaterialUtils_001: usize = 0x4E380;
            pub const PostProcessingSystem_001: usize = 0x43330;
            pub const TextLayout_001: usize = 0x4AA40;
            pub const VMaterialSystem2_001: usize = 0x26760;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0xAA20;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0xC430;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x7ED50;
            pub const NetworkMessagesVersion001: usize = 0x9F7F0;
            pub const NetworkSystemVersion001: usize = 0xC0650;
            pub const SerializedEntitiesVersion001: usize = 0xD6790;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x611C0;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x4CBD0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x122B0;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x5C6D0;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x3EC0;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x4FAA0;
            pub const RenderUtils_001: usize = 0x596B0;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x4FAB0;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x10C30;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x3320;
            pub const SceneFileCache002: usize = 0x6BE0;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x9C390;
            pub const SceneSystem_002: usize = 0xD3550;
            pub const SceneUtils_001: usize = 0x14B530;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0xAB40;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x583880;
            pub const EntitySubclassUtilsV001: usize = 0x2BA190;
            pub const NavGameTest001: usize = 0xA64790;
            pub const ServerToolsInfo_001: usize = 0x857970;
            pub const Source2GameClients001: usize = 0x857980;
            pub const Source2GameDirector001: usize = 0x1223F0;
            pub const Source2GameEntities001: usize = 0x857990;
            pub const Source2Server001: usize = 0x8579A0;
            pub const Source2ServerConfig001: usize = 0x56FC60;
            pub const customnavsystem001: usize = 0x2286C0;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x17F6A0;
            pub const SoundOpSystemEdit001: usize = 0x9CD60;
            pub const SoundSystem001: usize = 0x49730;
            pub const VMixEditTool001: usize = 0x7A170;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x64A70;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x86CD70;
            pub const IVALIDATE001: usize = 0x871150;
            pub const SteamClient006: usize = 0x6691F0;
            pub const SteamClient007: usize = 0x669200;
            pub const SteamClient008: usize = 0x669210;
            pub const SteamClient009: usize = 0x669220;
            pub const SteamClient010: usize = 0x669230;
            pub const SteamClient011: usize = 0x669240;
            pub const SteamClient012: usize = 0x669250;
            pub const SteamClient013: usize = 0x669260;
            pub const SteamClient014: usize = 0x669270;
            pub const SteamClient015: usize = 0x669280;
            pub const SteamClient016: usize = 0x669290;
            pub const SteamClient017: usize = 0x6692A0;
            pub const SteamClient018: usize = 0x6692B0;
            pub const SteamClient019: usize = 0x6692C0;
            pub const SteamClient020: usize = 0x6692D0;
            pub const SteamClient021: usize = 0x6692E0;
            pub const p2pvoice002: usize = 0xDAB90;
            pub const p2pvoicesingleton002: usize = 0xD7600;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x149BF0;
            pub const VEngineCvar007: usize = 0x63C70;
            pub const VProcessUtils002: usize = 0x13A650;
            pub const VStringTokenSystem001: usize = 0x19E580;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x1AE0;
        }
        // Module: valve_avi.dll
        pub mod valve_avi_dll {
            pub const VAvi001: usize = 0x2F90;
        }
        // Module: valve_wmf.dll
        pub mod valve_wmf_dll {
            pub const VMediaFoundation001: usize = 0x12D0;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x60C80;
            pub const VPhysics2_Interface_001: usize = 0x5C030;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x32210;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0x24DE0;
            pub const VEngineCvar002: usize = 0x57A0;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x22FD0;
        }
    }
}
