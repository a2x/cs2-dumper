#![allow(non_snake_case, non_upper_case_globals)]

pub mod animationsystem_dll {
    pub const AnimationSystemUtils_001: usize = 0x64A80;
    pub const AnimationSystem_001: usize = 0x5F5E0;
}

pub mod client_dll {
    pub const LegacyGameUI001: usize = 0x857650;
    pub const Source2ClientUI001: usize = 0x846490;
    pub const Source2ClientPrediction001: usize = 0x76AFB0;
    pub const ClientToolsInfo_001: usize = 0x6F6A20;
    pub const Source2Client002: usize = 0x6F6A40;
    pub const GameClientExports001: usize = 0x6F6A30;
    pub const EmptyWorldService001_Client: usize = 0x43FA50;
    pub const Source2ClientConfig001: usize = 0x426CA0;
}

pub mod engine2_dll {
    pub const SimpleEngineLoopService_001: usize = 0x1E3BC0;
    pub const ClientServerEngineLoopService_001: usize = 0x1D9810;
    pub const KeyValueCache001: usize = 0x1D5BB0;
    pub const HostStateMgr001: usize = 0x1D35F0;
    pub const GameEventSystemServerV001: usize = 0x1CEA10;
    pub const GameEventSystemClientV001: usize = 0x1CEA00;
    pub const EngineServiceMgr001: usize = 0x1CA320;
    pub const VProfService_001: usize = 0x1B8490;
    pub const ToolService_001: usize = 0x1B71F0;
    pub const StatsService_001: usize = 0x1B2470;
    pub const SplitScreenService_001: usize = 0x1AF6E0;
    pub const SoundService_001: usize = 0x1AA230;
    pub const ScreenshotService001: usize = 0x1A6100;
    pub const RenderService_001: usize = 0x1A3460;
    pub const NetworkService_001: usize = 0x1A2F70;
    pub const NetworkServerService_001: usize = 0x19E000;
    pub const NetworkP2PService_001: usize = 0x199A10;
    pub const NetworkClientService_001: usize = 0x193640;
    pub const MapListService_001: usize = 0x18C680;
    pub const InputService_001: usize = 0x17A3F0;
    pub const GameUIService_001: usize = 0x174EB0;
    pub const GameResourceServiceServerV001: usize = 0x172C10;
    pub const GameResourceServiceClientV001: usize = 0x172C00;
    pub const BugService001: usize = 0x16BC30;
    pub const BenchmarkService001: usize = 0x16A400;
    pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x117B20;
    pub const EngineGameUI001: usize = 0x116DE0;
    pub const INETSUPPORT_001: usize = 0xE6620;
    pub const Source2EngineToServerStringTable001: usize = 0xA1180;
    pub const Source2EngineToServer001: usize = 0x8AF60;
    pub const Source2EngineToClientStringTable001: usize = 0x83910;
    pub const Source2EngineToClient001: usize = 0x596F0;
}

pub mod filesystem_stdio_dll {
    pub const VAsyncFileSystem2_001: usize = 0x1EF00;
    pub const VFileSystem017: usize = 0x1EEF0;
}

pub mod host_dll {
    pub const Source2Host001: usize = 0x18E50;
    pub const SinglePlayerSharedMemory001: usize = 0x18AD0;
    pub const SaveRestoreDataVersion001: usize = 0x18AC0;
    pub const PredictionDiffManager001: usize = 0x16E60;
    pub const HostUtils001: usize = 0x123F0;
    pub const GameSystem2HostHook: usize = 0x11C40;
    pub const GameModelInfo001: usize = 0x11B60;
    pub const DebugDrawQueueManager001: usize = 0x115B0;
}

pub mod imemanager_dll {
    pub const IMEManager001: usize = 0xC470;
}

pub mod inputsystem_dll {
    pub const InputSystemVersion001: usize = 0x28D0;
    pub const InputStackSystemVersion001: usize = 0x16F0;
}

pub mod localize_dll {
    pub const Localize_001: usize = 0x3830;
}

pub mod matchmaking_dll {
    pub const GameTypes001: usize = 0x50680;
    pub const MATCHFRAMEWORK_001: usize = 0x1017B0;
}

pub mod materialsystem2_dll {
    pub const MaterialUtils_001: usize = 0x4DD80;
    pub const TextLayout_001: usize = 0x4A4D0;
    pub const PostProcessingSystem_001: usize = 0x42C70;
    pub const FontManager_001: usize = 0x37A50;
    pub const VMaterialSystem2_001: usize = 0x25FB0;
}

pub mod meshsystem_dll {
    pub const MeshSystem001: usize = 0x7130;
}

pub mod navsystem_dll {
    pub const NavSystem001: usize = 0x7590;
}

pub mod networksystem_dll {
    pub const SerializedEntitiesVersion001: usize = 0xD29C0;
    pub const NetworkSystemVersion001: usize = 0xBCD00;
    pub const NetworkMessagesVersion001: usize = 0x9CD30;
    pub const FlattenedSerializersVersion001: usize = 0x7C4E0;
}

pub mod panorama_dll {
    pub const PanoramaUIEngine001: usize = 0x5E810;
}

pub mod panorama_text_pango_dll {
    pub const PanoramaTextServices001: usize = 0x4CCB0;
}

pub mod panoramauiclient_dll {
    pub const PanoramaUIClient001: usize = 0x125E0;
}

pub mod particles_dll {
    pub const ParticleSystemMgr003: usize = 0x52B40;
}

pub mod pulse_system_dll {
    pub const IPulseSystem_001: usize = 0x5A20;
}

pub mod rendersystemdx11_dll {
    pub const RenderUtils_001: usize = 0x533D0;
    pub const VRenderDeviceMgrBackdoor001: usize = 0x4AAA0;
    pub const RenderDeviceMgr001: usize = 0x4AA90;
}

pub mod resourcesystem_dll {
    pub const ResourceSystem013: usize = 0x106B0;
}

pub mod scenefilecache_dll {
    pub const SceneFileCache002: usize = 0x68E0;
    pub const ResponseRulesCache001: usize = 0x3190;
}

pub mod scenesystem_dll {
    pub const SceneUtils_001: usize = 0x13BE40;
    pub const SceneSystem_002: usize = 0xC9B50;
    pub const RenderingPipelines_001: usize = 0x8DA90;
}

pub mod schemasystem_dll {
    pub const SchemaSystem_001: usize = 0xA810;
}

pub mod server_dll {
    pub const NavGameTest001: usize = 0xA9D750;
    pub const ServerToolsInfo_001: usize = 0x8A7800;
    pub const Source2GameClients001: usize = 0x8A7810;
    pub const Source2GameEntities001: usize = 0x8A7820;
    pub const Source2Server001: usize = 0x8A7830;
    pub const EmptyWorldService001_Server: usize = 0x5A61E0;
    pub const Source2ServerConfig001: usize = 0x586270;
    pub const EntitySubclassUtilsV001: usize = 0x2E6790;
    pub const customnavsystem001: usize = 0x258630;
    pub const Source2GameDirector001: usize = 0x14D1C0;
}

pub mod soundsystem_dll {
    pub const SoundOpSystem001: usize = 0x155F90;
    pub const SoundOpSystemEdit001: usize = 0x8B480;
    pub const VMixEditTool001: usize = 0x716E0;
    pub const SoundSystem001: usize = 0x46460;
}

pub mod steamaudio_dll {
    pub const SteamAudio001: usize = 0x12D80;
}

pub mod steamclient64_dll {
    pub const IVALIDATE001: usize = 0x833640;
    pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x82F4C0;
    pub const SteamClient020: usize = 0x62CAF0;
    pub const SteamClient019: usize = 0x62CAE0;
    pub const SteamClient018: usize = 0x62CAD0;
    pub const SteamClient017: usize = 0x62CAC0;
    pub const SteamClient016: usize = 0x62CAB0;
    pub const SteamClient015: usize = 0x62CAA0;
    pub const SteamClient014: usize = 0x62CA90;
    pub const SteamClient013: usize = 0x62CA80;
    pub const SteamClient012: usize = 0x62CA70;
    pub const SteamClient011: usize = 0x62CA60;
    pub const SteamClient010: usize = 0x62CA50;
    pub const SteamClient009: usize = 0x62CA40;
    pub const SteamClient008: usize = 0x62CA30;
    pub const SteamClient007: usize = 0x62CA20;
    pub const SteamClient006: usize = 0x62CA10;
    pub const p2pvoice002: usize = 0xD8EA0;
    pub const p2pvoicesingleton002: usize = 0xD5840;
}

pub mod tier0_dll {
    pub const VStringTokenSystem001: usize = 0x18D310;
    pub const TestScriptMgr001: usize = 0x13F510;
    pub const VProcessUtils002: usize = 0x12F520;
    pub const VEngineCvar007: usize = 0x615F0;
}

pub mod v8system_dll {
    pub const Source2V8System001: usize = 0x1670;
}

pub mod valve_avi_dll {
    pub const VAvi001: usize = 0x2F90;
}

pub mod valve_wmf_dll {
    pub const VMediaFoundation001: usize = 0x12D0;
}

pub mod vphysics2_dll {
    pub const VPhysics2_Handle_Interface_001: usize = 0x5F440;
    pub const VPhysics2_Interface_001: usize = 0x5B1E0;
}

pub mod vscript_dll {
    pub const VScriptManager010: usize = 0x31C40;
}

pub mod vstdlib_s64_dll {
    pub const IVALIDATE001: usize = 0x24FF0;
    pub const VEngineCvar002: usize = 0x5750;
}

pub mod worldrenderer_dll {
    pub const WorldRendererMgr001: usize = 0x21340;
}