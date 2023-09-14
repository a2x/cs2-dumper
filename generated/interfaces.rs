#![allow(non_snake_case, non_upper_case_globals)]

pub mod animationsystem_dll {
    pub const AnimationSystemUtils_001: usize = 0x64a80;
    pub const AnimationSystem_001: usize = 0x5f5e0;
}

pub mod client_dll {
    pub const LegacyGameUI001: usize = 0x8581e0;
    pub const Source2ClientUI001: usize = 0x847020;
    pub const Source2ClientPrediction001: usize = 0x76bcf0;
    pub const ClientToolsInfo_001: usize = 0x6f7720;
    pub const Source2Client002: usize = 0x6f7740;
    pub const GameClientExports001: usize = 0x6f7730;
    pub const EmptyWorldService001_Client: usize = 0x440310;
    pub const Source2ClientConfig001: usize = 0x427550;
}

pub mod engine2_dll {
    pub const SimpleEngineLoopService_001: usize = 0x1e4670;
    pub const ClientServerEngineLoopService_001: usize = 0x1da2d0;
    pub const KeyValueCache001: usize = 0x1d6670;
    pub const HostStateMgr001: usize = 0x1d40b0;
    pub const GameEventSystemServerV001: usize = 0x1cf4d0;
    pub const GameEventSystemClientV001: usize = 0x1cf4c0;
    pub const EngineServiceMgr001: usize = 0x1cadc0;
    pub const VProfService_001: usize = 0x1b8ea0;
    pub const ToolService_001: usize = 0x1b7c00;
    pub const StatsService_001: usize = 0x1b2e80;
    pub const SplitScreenService_001: usize = 0x1b00f0;
    pub const SoundService_001: usize = 0x1aac40;
    pub const ScreenshotService001: usize = 0x1a6b10;
    pub const RenderService_001: usize = 0x1a3e70;
    pub const NetworkService_001: usize = 0x1a3980;
    pub const NetworkServerService_001: usize = 0x19e9b0;
    pub const NetworkP2PService_001: usize = 0x19a3c0;
    pub const NetworkClientService_001: usize = 0x193f90;
    pub const MapListService_001: usize = 0x18cfd0;
    pub const InputService_001: usize = 0x17ad30;
    pub const GameUIService_001: usize = 0x1757f0;
    pub const GameResourceServiceServerV001: usize = 0x173550;
    pub const GameResourceServiceClientV001: usize = 0x173540;
    pub const BugService001: usize = 0x16c570;
    pub const BenchmarkService001: usize = 0x16ad40;
    pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x118410;
    pub const EngineGameUI001: usize = 0x1176d0;
    pub const INETSUPPORT_001: usize = 0xe68b0;
    pub const Source2EngineToServerStringTable001: usize = 0xa1850;
    pub const Source2EngineToServer001: usize = 0x8b2f0;
    pub const Source2EngineToClientStringTable001: usize = 0x83c50;
    pub const Source2EngineToClient001: usize = 0x59980;
}

pub mod filesystem_stdio_dll {
    pub const VAsyncFileSystem2_001: usize = 0x1ef00;
    pub const VFileSystem017: usize = 0x1eef0;
}

pub mod host_dll {
    pub const Source2Host001: usize = 0x18e50;
    pub const SinglePlayerSharedMemory001: usize = 0x18ad0;
    pub const SaveRestoreDataVersion001: usize = 0x18ac0;
    pub const PredictionDiffManager001: usize = 0x16e60;
    pub const HostUtils001: usize = 0x123f0;
    pub const GameSystem2HostHook: usize = 0x11c40;
    pub const GameModelInfo001: usize = 0x11b60;
    pub const DebugDrawQueueManager001: usize = 0x115b0;
}

pub mod imemanager_dll {
    pub const IMEManager001: usize = 0xc470;
}

pub mod inputsystem_dll {
    pub const InputSystemVersion001: usize = 0x28d0;
    pub const InputStackSystemVersion001: usize = 0x16f0;
}

pub mod localize_dll {
    pub const Localize_001: usize = 0x3830;
}

pub mod matchmaking_dll {
    pub const GameTypes001: usize = 0x506a0;
    pub const MATCHFRAMEWORK_001: usize = 0x1015c0;
}

pub mod materialsystem2_dll {
    pub const MaterialUtils_001: usize = 0x4db70;
    pub const TextLayout_001: usize = 0x4a2c0;
    pub const PostProcessingSystem_001: usize = 0x42a60;
    pub const FontManager_001: usize = 0x37840;
    pub const VMaterialSystem2_001: usize = 0x25fb0;
}

pub mod meshsystem_dll {
    pub const MeshSystem001: usize = 0x7130;
}

pub mod navsystem_dll {
    pub const NavSystem001: usize = 0x7590;
}

pub mod networksystem_dll {
    pub const SerializedEntitiesVersion001: usize = 0xd29c0;
    pub const NetworkSystemVersion001: usize = 0xbcd00;
    pub const NetworkMessagesVersion001: usize = 0x9cd30;
    pub const FlattenedSerializersVersion001: usize = 0x7c4e0;
}

pub mod panorama_dll {
    pub const PanoramaUIEngine001: usize = 0x5e810;
}

pub mod panorama_text_pango_dll {
    pub const PanoramaTextServices001: usize = 0x4caa0;
}

pub mod panoramauiclient_dll {
    pub const PanoramaUIClient001: usize = 0x125e0;
}

pub mod particles_dll {
    pub const ParticleSystemMgr003: usize = 0x52b40;
}

pub mod pulse_system_dll {
    pub const IPulseSystem_001: usize = 0x5a20;
}

pub mod rendersystemdx11_dll {
    pub const RenderUtils_001: usize = 0x533d0;
    pub const VRenderDeviceMgrBackdoor001: usize = 0x4aaa0;
    pub const RenderDeviceMgr001: usize = 0x4aa90;
}

pub mod resourcesystem_dll {
    pub const ResourceSystem013: usize = 0x106b0;
}

pub mod scenefilecache_dll {
    pub const SceneFileCache002: usize = 0x68e0;
    pub const ResponseRulesCache001: usize = 0x3190;
}

pub mod scenesystem_dll {
    pub const SceneUtils_001: usize = 0x13bc30;
    pub const SceneSystem_002: usize = 0xc9b50;
    pub const RenderingPipelines_001: usize = 0x8da90;
}

pub mod schemasystem_dll {
    pub const SchemaSystem_001: usize = 0xa810;
}

pub mod server_dll {
    pub const NavGameTest001: usize = 0xa9dff0;
    pub const ServerToolsInfo_001: usize = 0x8a7f30;
    pub const Source2GameClients001: usize = 0x8a7f40;
    pub const Source2GameEntities001: usize = 0x8a7f50;
    pub const Source2Server001: usize = 0x8a7f60;
    pub const EmptyWorldService001_Server: usize = 0x5a6590;
    pub const Source2ServerConfig001: usize = 0x586620;
    pub const EntitySubclassUtilsV001: usize = 0x2e6950;
    pub const customnavsystem001: usize = 0x258760;
    pub const Source2GameDirector001: usize = 0x14d290;
}

pub mod soundsystem_dll {
    pub const SoundOpSystem001: usize = 0x155da0;
    pub const SoundOpSystemEdit001: usize = 0x8b110;
    pub const VMixEditTool001: usize = 0x716e0;
    pub const SoundSystem001: usize = 0x46460;
}

pub mod steamaudio_dll {
    pub const SteamAudio001: usize = 0x12d80;
}

pub mod steamclient64_dll {
    pub const IVALIDATE001: usize = 0x833640;
    pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x82f4c0;
    pub const SteamClient020: usize = 0x62caf0;
    pub const SteamClient019: usize = 0x62cae0;
    pub const SteamClient018: usize = 0x62cad0;
    pub const SteamClient017: usize = 0x62cac0;
    pub const SteamClient016: usize = 0x62cab0;
    pub const SteamClient015: usize = 0x62caa0;
    pub const SteamClient014: usize = 0x62ca90;
    pub const SteamClient013: usize = 0x62ca80;
    pub const SteamClient012: usize = 0x62ca70;
    pub const SteamClient011: usize = 0x62ca60;
    pub const SteamClient010: usize = 0x62ca50;
    pub const SteamClient009: usize = 0x62ca40;
    pub const SteamClient008: usize = 0x62ca30;
    pub const SteamClient007: usize = 0x62ca20;
    pub const SteamClient006: usize = 0x62ca10;
    pub const p2pvoice002: usize = 0xd8ea0;
    pub const p2pvoicesingleton002: usize = 0xd5840;
}

pub mod tier0_dll {
    pub const VStringTokenSystem001: usize = 0x18d100;
    pub const TestScriptMgr001: usize = 0x13f510;
    pub const VProcessUtils002: usize = 0x12f520;
    pub const VEngineCvar007: usize = 0x615f0;
}

pub mod v8system_dll {
    pub const Source2V8System001: usize = 0x1670;
}

pub mod valve_avi_dll {
    pub const VAvi001: usize = 0x2f90;
}

pub mod valve_wmf_dll {
    pub const VMediaFoundation001: usize = 0x12d0;
}

pub mod vphysics2_dll {
    pub const VPhysics2_Handle_Interface_001: usize = 0x5f440;
    pub const VPhysics2_Interface_001: usize = 0x5b1e0;
}

pub mod vscript_dll {
    pub const VScriptManager010: usize = 0x31c40;
}

pub mod vstdlib_s64_dll {
    pub const IVALIDATE001: usize = 0x24ff0;
    pub const VEngineCvar002: usize = 0x5750;
}

pub mod worldrenderer_dll {
    pub const WorldRendererMgr001: usize = 0x21340;
}