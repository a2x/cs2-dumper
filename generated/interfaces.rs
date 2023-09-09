#![allow(non_snake_case, non_upper_case_globals)]

pub mod animationsystem_dll {
    pub const AnimationSystemUtils_001: usize = 0x647c0;
    pub const AnimationSystem_001: usize = 0x5f2c0;
}

pub mod client_dll {
    pub const LegacyGameUI001: usize = 0x84bba0;
    pub const Source2ClientUI001: usize = 0x83b070;
    pub const Source2ClientPrediction001: usize = 0x7608b0;
    pub const ClientToolsInfo_001: usize = 0x6ebd70;
    pub const Source2Client002: usize = 0x6ebd90;
    pub const GameClientExports001: usize = 0x6ebd80;
    pub const EmptyWorldService001_Client: usize = 0x439cb0;
    pub const Source2ClientConfig001: usize = 0x421090;
}

pub mod engine2_dll {
    pub const SimpleEngineLoopService_001: usize = 0x1e2800;
    pub const ClientServerEngineLoopService_001: usize = 0x1d88b0;
    pub const KeyValueCache001: usize = 0x1d4c80;
    pub const HostStateMgr001: usize = 0x1d26c0;
    pub const GameEventSystemServerV001: usize = 0x1ce090;
    pub const GameEventSystemClientV001: usize = 0x1ce080;
    pub const EngineServiceMgr001: usize = 0x1c9980;
    pub const VProfService_001: usize = 0x1b7b30;
    pub const ToolService_001: usize = 0x1b68d0;
    pub const StatsService_001: usize = 0x1b1b60;
    pub const SplitScreenService_001: usize = 0x1aede0;
    pub const SoundService_001: usize = 0x1a9970;
    pub const ScreenshotService001: usize = 0x1a5840;
    pub const RenderService_001: usize = 0x1a2bc0;
    pub const NetworkService_001: usize = 0x1a26d0;
    pub const NetworkServerService_001: usize = 0x19d8e0;
    pub const NetworkP2PService_001: usize = 0x1993d0;
    pub const NetworkClientService_001: usize = 0x193020;
    pub const MapListService_001: usize = 0x18c040;
    pub const InputService_001: usize = 0x179e30;
    pub const GameUIService_001: usize = 0x174910;
    pub const GameResourceServiceServerV001: usize = 0x172690;
    pub const GameResourceServiceClientV001: usize = 0x172680;
    pub const BugService001: usize = 0x16b6b0;
    pub const BenchmarkService001: usize = 0x169e90;
    pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x117640;
    pub const EngineGameUI001: usize = 0x116900;
    pub const INETSUPPORT_001: usize = 0xe6520;
    pub const Source2EngineToServerStringTable001: usize = 0xa1550;
    pub const Source2EngineToServer001: usize = 0x8b000;
    pub const Source2EngineToClientStringTable001: usize = 0x839f0;
    pub const Source2EngineToClient001: usize = 0x59810;
}

pub mod filesystem_stdio_dll {
    pub const VAsyncFileSystem2_001: usize = 0x1eed0;
    pub const VFileSystem017: usize = 0x1eec0;
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
    pub const MATCHFRAMEWORK_001: usize = 0x101570;
}

pub mod materialsystem2_dll {
    pub const MaterialUtils_001: usize = 0x4da90;
    pub const TextLayout_001: usize = 0x4a1e0;
    pub const PostProcessingSystem_001: usize = 0x429e0;
    pub const FontManager_001: usize = 0x377c0;
    pub const VMaterialSystem2_001: usize = 0x25f30;
}

pub mod meshsystem_dll {
    pub const MeshSystem001: usize = 0x7140;
}

pub mod navsystem_dll {
    pub const NavSystem001: usize = 0x7590;
}

pub mod networksystem_dll {
    pub const SerializedEntitiesVersion001: usize = 0xd3510;
    pub const NetworkSystemVersion001: usize = 0xbd6e0;
    pub const NetworkMessagesVersion001: usize = 0x9ca30;
    pub const FlattenedSerializersVersion001: usize = 0x7c430;
}

pub mod panorama_dll {
    pub const PanoramaUIEngine001: usize = 0x5e7b0;
}

pub mod panorama_text_pango_dll {
    pub const PanoramaTextServices001: usize = 0x4caa0;
}

pub mod panoramauiclient_dll {
    pub const PanoramaUIClient001: usize = 0x12570;
}

pub mod particles_dll {
    pub const ParticleSystemMgr003: usize = 0x4c710;
}

pub mod pulse_system_dll {
    pub const IPulseSystem_001: usize = 0x5a20;
}

pub mod rendersystemdx11_dll {
    pub const RenderUtils_001: usize = 0x53390;
    pub const VRenderDeviceMgrBackdoor001: usize = 0x4aab0;
    pub const RenderDeviceMgr001: usize = 0x4aaa0;
}

pub mod resourcesystem_dll {
    pub const ResourceSystem013: usize = 0x106b0;
}

pub mod scenefilecache_dll {
    pub const SceneFileCache002: usize = 0x6970;
    pub const ResponseRulesCache001: usize = 0x3210;
}

pub mod scenesystem_dll {
    pub const SceneUtils_001: usize = 0x138e40;
    pub const SceneSystem_002: usize = 0xc6f30;
    pub const RenderingPipelines_001: usize = 0x8b170;
}

pub mod schemasystem_dll {
    pub const SchemaSystem_001: usize = 0xa820;
}

pub mod server_dll {
    pub const NavGameTest001: usize = 0xa88160;
    pub const ServerToolsInfo_001: usize = 0x89c1d0;
    pub const Source2GameClients001: usize = 0x89c1e0;
    pub const Source2GameEntities001: usize = 0x89c1f0;
    pub const Source2Server001: usize = 0x89c200;
    pub const EmptyWorldService001_Server: usize = 0x5a09a0;
    pub const Source2ServerConfig001: usize = 0x580c00;
    pub const EntitySubclassUtilsV001: usize = 0x2e4d50;
    pub const customnavsystem001: usize = 0x258400;
    pub const Source2GameDirector001: usize = 0x14d580;
}

pub mod soundsystem_dll {
    pub const SoundOpSystem001: usize = 0x155570;
    pub const SoundOpSystemEdit001: usize = 0x8ab40;
    pub const VMixEditTool001: usize = 0x70f80;
    pub const SoundSystem001: usize = 0x46620;
}

pub mod steamaudio_dll {
    pub const SteamAudio001: usize = 0x12cf0;
}

pub mod steamclient64_dll {
    pub const IVALIDATE001: usize = 0x82a280;
    pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x826000;
    pub const SteamClient020: usize = 0x621de0;
    pub const SteamClient019: usize = 0x621dd0;
    pub const SteamClient018: usize = 0x621dc0;
    pub const SteamClient017: usize = 0x621db0;
    pub const SteamClient016: usize = 0x621da0;
    pub const SteamClient015: usize = 0x621d90;
    pub const SteamClient014: usize = 0x621d80;
    pub const SteamClient013: usize = 0x621d70;
    pub const SteamClient012: usize = 0x621d60;
    pub const SteamClient011: usize = 0x621d50;
    pub const SteamClient010: usize = 0x621d40;
    pub const SteamClient009: usize = 0x621d30;
    pub const SteamClient008: usize = 0x621d20;
    pub const SteamClient007: usize = 0x621d10;
    pub const SteamClient006: usize = 0x621d00;
    pub const p2pvoice002: usize = 0xd8b70;
    pub const p2pvoicesingleton002: usize = 0xd5510;
}

pub mod tier0_dll {
    pub const VStringTokenSystem001: usize = 0x18add0;
    pub const TestScriptMgr001: usize = 0x13d3e0;
    pub const VProcessUtils002: usize = 0x12d730;
    pub const VEngineCvar007: usize = 0x5fff0;
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
    pub const VPhysics2_Handle_Interface_001: usize = 0x5e7b0;
    pub const VPhysics2_Interface_001: usize = 0x5a550;
}

pub mod vscript_dll {
    pub const VScriptManager010: usize = 0x2c880;
}

pub mod vstdlib_s64_dll {
    pub const IVALIDATE001: usize = 0x24ff0;
    pub const VEngineCvar002: usize = 0x5750;
}

pub mod worldrenderer_dll {
    pub const WorldRendererMgr001: usize = 0x216f0;
}