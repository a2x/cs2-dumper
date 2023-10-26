/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 26 Oct 2023 06:38:24 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod animationsystem_dll { // animationsystem.dll
    pub const AnimationSystemUtils_001: usize = 0x64670;
    pub const AnimationSystem_001: usize = 0x5F1D0;
}

pub mod client_dll { // client.dll
    pub const LegacyGameUI001: usize = 0x892500;
    pub const Source2ClientUI001: usize = 0x881220;
    pub const Source2ClientPrediction001: usize = 0x79EB10;
    pub const ClientToolsInfo_001: usize = 0x72AA20;
    pub const Source2Client002: usize = 0x72AA40;
    pub const GameClientExports001: usize = 0x72AA30;
    pub const EmptyWorldService001_Client: usize = 0x48C470;
    pub const Source2ClientConfig001: usize = 0x473480;
}

pub mod engine2_dll { // engine2.dll
    pub const SimpleEngineLoopService_001: usize = 0x1E2480;
    pub const ClientServerEngineLoopService_001: usize = 0x1D8150;
    pub const KeyValueCache001: usize = 0x1D4790;
    pub const HostStateMgr001: usize = 0x1D21A0;
    pub const GameEventSystemServerV001: usize = 0x1CD860;
    pub const GameEventSystemClientV001: usize = 0x1CD850;
    pub const EngineServiceMgr001: usize = 0x1C9540;
    pub const VProfService_001: usize = 0x1B6FD0;
    pub const ToolService_001: usize = 0x1B5D20;
    pub const StatsService_001: usize = 0x1B0FA0;
    pub const SplitScreenService_001: usize = 0x1AE210;
    pub const SoundService_001: usize = 0x1A8D60;
    pub const ScreenshotService001: usize = 0x1A4C30;
    pub const RenderService_001: usize = 0x1A1F90;
    pub const NetworkService_001: usize = 0x1A1AA0;
    pub const NetworkServerService_001: usize = 0x19CB40;
    pub const NetworkP2PService_001: usize = 0x198550;
    pub const NetworkClientService_001: usize = 0x192180;
    pub const MapListService_001: usize = 0x18B150;
    pub const InputService_001: usize = 0x178FD0;
    pub const GameUIService_001: usize = 0x1737F0;
    pub const GameResourceServiceServerV001: usize = 0x171550;
    pub const GameResourceServiceClientV001: usize = 0x171540;
    pub const BugService001: usize = 0x16A570;
    pub const BenchmarkService001: usize = 0x168D40;
    pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x116920;
    pub const EngineGameUI001: usize = 0x115CB0;
    pub const INETSUPPORT_001: usize = 0xE5EC0;
    pub const Source2EngineToServerStringTable001: usize = 0xA1030;
    pub const Source2EngineToServer001: usize = 0x8AEC0;
    pub const Source2EngineToClientStringTable001: usize = 0x83BE0;
    pub const Source2EngineToClient001: usize = 0x5A620;
}

pub mod filesystem_stdio_dll { // filesystem_stdio.dll
    pub const VAsyncFileSystem2_001: usize = 0x66D30;
    pub const VFileSystem017: usize = 0x66D20;
}

pub mod host_dll { // host.dll
    pub const Source2Host001: usize = 0x18E10;
    pub const SinglePlayerSharedMemory001: usize = 0x18A90;
    pub const SaveRestoreDataVersion001: usize = 0x18A80;
    pub const PredictionDiffManager001: usize = 0x16E20;
    pub const HostUtils001: usize = 0x12550;
    pub const GameSystem2HostHook: usize = 0x11DA0;
    pub const GameModelInfo001: usize = 0x11CC0;
    pub const DebugDrawQueueManager001: usize = 0x11710;
}

pub mod imemanager_dll { // imemanager.dll
    pub const IMEManager001: usize = 0xC470;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const InputSystemVersion001: usize = 0x28D0;
    pub const InputStackSystemVersion001: usize = 0x16F0;
}

pub mod localize_dll { // localize.dll
    pub const Localize_001: usize = 0x3830;
}

pub mod matchmaking_dll { // matchmaking.dll
    pub const GameTypes001: usize = 0x50270;
    pub const MATCHFRAMEWORK_001: usize = 0x101030;
}

pub mod materialsystem2_dll { // materialsystem2.dll
    pub const MaterialUtils_001: usize = 0x4DB90;
    pub const TextLayout_001: usize = 0x4A2E0;
    pub const PostProcessingSystem_001: usize = 0x42A60;
    pub const FontManager_001: usize = 0x37900;
    pub const VMaterialSystem2_001: usize = 0x25EC0;
}

pub mod meshsystem_dll { // meshsystem.dll
    pub const MeshSystem001: usize = 0x7270;
}

pub mod navsystem_dll { // navsystem.dll
    pub const NavSystem001: usize = 0x76F0;
}

pub mod networksystem_dll { // networksystem.dll
    pub const SerializedEntitiesVersion001: usize = 0xD1AE0;
    pub const NetworkSystemVersion001: usize = 0xBBFA0;
    pub const NetworkMessagesVersion001: usize = 0x9C040;
    pub const FlattenedSerializersVersion001: usize = 0x7B8A0;
}

pub mod panorama_dll { // panorama.dll
    pub const PanoramaUIEngine001: usize = 0x57EE0;
}

pub mod panorama_text_pango_dll { // panorama_text_pango.dll
    pub const PanoramaTextServices001: usize = 0x4CBD0;
}

pub mod panoramauiclient_dll { // panoramauiclient.dll
    pub const PanoramaUIClient001: usize = 0x12780;
}

pub mod particles_dll { // particles.dll
    pub const ParticleSystemMgr003: usize = 0x52D20;
}

pub mod pulse_system_dll { // pulse_system.dll
    pub const IPulseSystem_001: usize = 0x5B80;
}

pub mod rendersystemdx11_dll { // rendersystemdx11.dll
    pub const RenderUtils_001: usize = 0x52FD0;
    pub const VRenderDeviceMgrBackdoor001: usize = 0x4A4F0;
    pub const RenderDeviceMgr001: usize = 0x4A4E0;
}

pub mod resourcesystem_dll { // resourcesystem.dll
    pub const ResourceSystem013: usize = 0x10650;
}

pub mod scenefilecache_dll { // scenefilecache.dll
    pub const SceneFileCache002: usize = 0x68E0;
    pub const ResponseRulesCache001: usize = 0x3190;
}

pub mod scenesystem_dll { // scenesystem.dll
    pub const SceneUtils_001: usize = 0x13D030;
    pub const SceneSystem_002: usize = 0xCAE10;
    pub const RenderingPipelines_001: usize = 0x8EED0;
}

pub mod schemasystem_dll { // schemasystem.dll
    pub const SchemaSystem_001: usize = 0xA930;
}

pub mod server_dll { // server.dll
    pub const NavGameTest001: usize = 0xA2D610;
    pub const ServerToolsInfo_001: usize = 0x831EE0;
    pub const Source2GameClients001: usize = 0x831EF0;
    pub const Source2GameEntities001: usize = 0x831F00;
    pub const Source2Server001: usize = 0x831F10;
    pub const EmptyWorldService001_Server: usize = 0x588530;
    pub const Source2ServerConfig001: usize = 0x568530;
    pub const EntitySubclassUtilsV001: usize = 0x2C87D0;
    pub const customnavsystem001: usize = 0x2451B0;
    pub const Source2GameDirector001: usize = 0x13F130;
}

pub mod soundsystem_dll { // soundsystem.dll
    pub const SoundOpSystem001: usize = 0x1567E0;
    pub const SoundOpSystemEdit001: usize = 0x8BBC0;
    pub const VMixEditTool001: usize = 0x71740;
    pub const SoundSystem001: usize = 0x46540;
}

pub mod steamaudio_dll { // steamaudio.dll
    pub const SteamAudio001: usize = 0x12EE0;
}

pub mod steamclient64_dll { // steamclient64.dll
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

pub mod tier0_dll { // tier0.dll
    pub const VStringTokenSystem001: usize = 0x18C060;
    pub const TestScriptMgr001: usize = 0x13F3C0;
    pub const VProcessUtils002: usize = 0x12F540;
    pub const VEngineCvar007: usize = 0x61920;
}

pub mod v8system_dll { // v8system.dll
    pub const Source2V8System001: usize = 0x1670;
}

pub mod valve_avi_dll { // valve_avi.dll
    pub const VAvi001: usize = 0x2F90;
}

pub mod valve_wmf_dll { // valve_wmf.dll
    pub const VMediaFoundation001: usize = 0x12D0;
}

pub mod vphysics2_dll { // vphysics2.dll
    pub const VPhysics2_Handle_Interface_001: usize = 0x61120;
    pub const VPhysics2_Interface_001: usize = 0x5C740;
}

pub mod vscript_dll { // vscript.dll
    pub const VScriptManager010: usize = 0x31DA0;
}

pub mod vstdlib_s64_dll { // vstdlib_s64.dll
    pub const IVALIDATE001: usize = 0x24FF0;
    pub const VEngineCvar002: usize = 0x5750;
}

pub mod worldrenderer_dll { // worldrenderer.dll
    pub const WorldRendererMgr001: usize = 0x21530;
}