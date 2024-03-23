/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:04 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod animationsystem_dll { // animationsystem.dll
    pub const AnimationSystemUtils_001: usize = 0x72E80;
    pub const AnimationSystem_001: usize = 0x6DA00;
}

pub mod client_dll { // client.dll
    pub const LegacyGameUI001: usize = 0x8AEE40;
    pub const Source2ClientUI001: usize = 0x89E460;
    pub const Source2ClientPrediction001: usize = 0x7AF990;
    pub const ClientToolsInfo_001: usize = 0x732F00;
    pub const Source2Client002: usize = 0x732F20;
    pub const GameClientExports001: usize = 0x732F10;
    pub const EmptyWorldService001_Client: usize = 0x480850;
    pub const Source2ClientConfig001: usize = 0x46BA90;
}

pub mod engine2_dll { // engine2.dll
    pub const SimpleEngineLoopService_001: usize = 0x1F7050;
    pub const ClientServerEngineLoopService_001: usize = 0x1EAE60;
    pub const KeyValueCache001: usize = 0x1E7530;
    pub const HostStateMgr001: usize = 0x1E4D10;
    pub const GameEventSystemServerV001: usize = 0x1E02C0;
    pub const GameEventSystemClientV001: usize = 0x1E02B0;
    pub const EngineServiceMgr001: usize = 0x1DBC10;
    pub const VProfService_001: usize = 0x1C90E0;
    pub const ToolService_001: usize = 0x1C7D60;
    pub const StatsService_001: usize = 0x1C3110;
    pub const SplitScreenService_001: usize = 0x1C0430;
    pub const SoundService_001: usize = 0x1B9B90;
    pub const ScreenshotService001: usize = 0x1B5590;
    pub const RenderService_001: usize = 0x1B2BD0;
    pub const NetworkService_001: usize = 0x1B26E0;
    pub const NetworkServerService_001: usize = 0x1AD4C0;
    pub const NetworkP2PService_001: usize = 0x1A8F50;
    pub const NetworkClientService_001: usize = 0x1A2210;
    pub const MapListService_001: usize = 0x19B050;
    pub const InputService_001: usize = 0x188120;
    pub const GameUIService_001: usize = 0x182600;
    pub const GameResourceServiceServerV001: usize = 0x17FC60;
    pub const GameResourceServiceClientV001: usize = 0x17FC50;
    pub const BugService001: usize = 0x178A90;
    pub const BenchmarkService001: usize = 0x177230;
    pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x122AE0;
    pub const EngineGameUI001: usize = 0x121E70;
    pub const INETSUPPORT_001: usize = 0xF0DE0;
    pub const Source2EngineToServerStringTable001: usize = 0xA9830;
    pub const Source2EngineToServer001: usize = 0x92140;
    pub const Source2EngineToClientStringTable001: usize = 0x8AB70;
    pub const Source2EngineToClient001: usize = 0x61A90;
}

pub mod filesystem_stdio_dll { // filesystem_stdio.dll
    pub const VAsyncFileSystem2_001: usize = 0x67960;
    pub const VFileSystem017: usize = 0x67950;
}

pub mod host_dll { // host.dll
    pub const Source2Host001: usize = 0x193F0;
    pub const SinglePlayerSharedMemory001: usize = 0x19070;
    pub const SaveRestoreDataVersion001: usize = 0x19060;
    pub const PredictionDiffManager001: usize = 0x17340;
    pub const HostUtils001: usize = 0x12920;
    pub const GameSystem2HostHook: usize = 0x12170;
    pub const GameModelInfo001: usize = 0x12090;
    pub const DebugDrawQueueManager001: usize = 0x11AE0;
}

pub mod imemanager_dll { // imemanager.dll
    pub const IMEManager001: usize = 0xC470;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const InputSystemVersion001: usize = 0x2A40;
    pub const InputStackSystemVersion001: usize = 0x1850;
}

pub mod localize_dll { // localize.dll
    pub const Localize_001: usize = 0x3830;
}

pub mod matchmaking_dll { // matchmaking.dll
    pub const GameTypes001: usize = 0x53800;
    pub const MATCHFRAMEWORK_001: usize = 0x105690;
}

pub mod materialsystem2_dll { // materialsystem2.dll
    pub const MaterialUtils_001: usize = 0x4DB40;
    pub const TextLayout_001: usize = 0x4A200;
    pub const PostProcessingSystem_001: usize = 0x42A80;
    pub const FontManager_001: usize = 0x37A80;
    pub const VMaterialSystem2_001: usize = 0x25F80;
}

pub mod meshsystem_dll { // meshsystem.dll
    pub const MeshSystem001: usize = 0x7440;
}

pub mod navsystem_dll { // navsystem.dll
    pub const NavSystem001: usize = 0x8E30;
}

pub mod networksystem_dll { // networksystem.dll
    pub const SerializedEntitiesVersion001: usize = 0xD6930;
    pub const NetworkSystemVersion001: usize = 0xBFA00;
    pub const NetworkMessagesVersion001: usize = 0x9FC90;
    pub const FlattenedSerializersVersion001: usize = 0x7EF90;
}

pub mod panorama_dll { // panorama.dll
    pub const PanoramaUIEngine001: usize = 0x5D960;
}

pub mod panorama_text_pango_dll { // panorama_text_pango.dll
    pub const PanoramaTextServices001: usize = 0x4CBE0;
}

pub mod panoramauiclient_dll { // panoramauiclient.dll
    pub const PanoramaUIClient001: usize = 0x12010;
}

pub mod particles_dll { // particles.dll
    pub const ParticleSystemMgr003: usize = 0x591D0;
}

pub mod pulse_system_dll { // pulse_system.dll
    pub const IPulseSystem_001: usize = 0x44C0;
}

pub mod rendersystemdx11_dll { // rendersystemdx11.dll
    pub const RenderUtils_001: usize = 0x55150;
    pub const VRenderDeviceMgrBackdoor001: usize = 0x4C7E0;
    pub const RenderDeviceMgr001: usize = 0x4C7D0;
}

pub mod resourcesystem_dll { // resourcesystem.dll
    pub const ResourceSystem013: usize = 0x10920;
}

pub mod scenefilecache_dll { // scenefilecache.dll
    pub const SceneFileCache002: usize = 0x6A60;
    pub const ResponseRulesCache001: usize = 0x31A0;
}

pub mod scenesystem_dll { // scenesystem.dll
    pub const SceneUtils_001: usize = 0x12FCF0;
    pub const SceneSystem_002: usize = 0xBD200;
    pub const RenderingPipelines_001: usize = 0x86480;
}

pub mod schemasystem_dll { // schemasystem.dll
    pub const SchemaSystem_001: usize = 0xAA50;
}

pub mod server_dll { // server.dll
    pub const NavGameTest001: usize = 0xA46F10;
    pub const ServerToolsInfo_001: usize = 0x8322D0;
    pub const Source2GameClients001: usize = 0x8322E0;
    pub const Source2GameEntities001: usize = 0x8322F0;
    pub const Source2Server001: usize = 0x832300;
    pub const EmptyWorldService001_Server: usize = 0x572840;
    pub const Source2ServerConfig001: usize = 0x566BC0;
    pub const EntitySubclassUtilsV001: usize = 0x2AF7A0;
    pub const customnavsystem001: usize = 0x22C660;
    pub const Source2GameDirector001: usize = 0x11EAB0;
}

pub mod soundsystem_dll { // soundsystem.dll
    pub const SoundOpSystem001: usize = 0x16A640;
    pub const SoundOpSystemEdit001: usize = 0x96A50;
    pub const VMixEditTool001: usize = 0x75C30;
    pub const SoundSystem001: usize = 0x48320;
}

pub mod steamaudio_dll { // steamaudio.dll
    pub const SteamAudio001: usize = 0x5AA70;
}

pub mod steamclient64_dll { // steamclient64.dll
    pub const IVALIDATE001: usize = 0x866250;
    pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x8621C0;
    pub const SteamClient021: usize = 0x6637F0;
    pub const SteamClient020: usize = 0x6637E0;
    pub const SteamClient019: usize = 0x6637D0;
    pub const SteamClient018: usize = 0x6637C0;
    pub const SteamClient017: usize = 0x6637B0;
    pub const SteamClient016: usize = 0x6637A0;
    pub const SteamClient015: usize = 0x663790;
    pub const SteamClient014: usize = 0x663780;
    pub const SteamClient013: usize = 0x663770;
    pub const SteamClient012: usize = 0x663760;
    pub const SteamClient011: usize = 0x663750;
    pub const SteamClient010: usize = 0x663740;
    pub const SteamClient009: usize = 0x663730;
    pub const SteamClient008: usize = 0x663720;
    pub const SteamClient007: usize = 0x663710;
    pub const SteamClient006: usize = 0x663700;
    pub const p2pvoice002: usize = 0xD9FD0;
    pub const p2pvoicesingleton002: usize = 0xD6A30;
}

pub mod tier0_dll { // tier0.dll
    pub const VStringTokenSystem001: usize = 0x190600;
    pub const TestScriptMgr001: usize = 0x140790;
    pub const VProcessUtils002: usize = 0x131C70;
    pub const VEngineCvar007: usize = 0x63290;
}

pub mod v8system_dll { // v8system.dll
    pub const Source2V8System001: usize = 0x1950;
}

pub mod valve_avi_dll { // valve_avi.dll
    pub const VAvi001: usize = 0x2F90;
}

pub mod valve_wmf_dll { // valve_wmf.dll
    pub const VMediaFoundation001: usize = 0x12D0;
}

pub mod vphysics2_dll { // vphysics2.dll
    pub const VPhysics2_Handle_Interface_001: usize = 0x5BCB0;
    pub const VPhysics2_Interface_001: usize = 0x57130;
}

pub mod vscript_dll { // vscript.dll
    pub const VScriptManager010: usize = 0x32000;
}

pub mod vstdlib_s64_dll { // vstdlib_s64.dll
    pub const IVALIDATE001: usize = 0x25120;
    pub const VEngineCvar002: usize = 0x5760;
}

pub mod worldrenderer_dll { // worldrenderer.dll
    pub const WorldRendererMgr001: usize = 0x205E0;
}