/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 14 Dec 2023 11:58:27 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod animationsystem_dll { // animationsystem.dll
    pub const AnimationSystemUtils_001: usize = 0x64670;
    pub const AnimationSystem_001: usize = 0x5F1D0;
}

pub mod client_dll { // client.dll
    pub const LegacyGameUI001: usize = 0x8A21A0;
    pub const Source2ClientUI001: usize = 0x8913E0;
    pub const Source2ClientPrediction001: usize = 0x7A9770;
    pub const ClientToolsInfo_001: usize = 0x735540;
    pub const Source2Client002: usize = 0x735560;
    pub const GameClientExports001: usize = 0x735550;
    pub const EmptyWorldService001_Client: usize = 0x490940;
    pub const Source2ClientConfig001: usize = 0x477880;
}

pub mod engine2_dll { // engine2.dll
    pub const SimpleEngineLoopService_001: usize = 0x1E65E0;
    pub const ClientServerEngineLoopService_001: usize = 0x1DC0E0;
    pub const KeyValueCache001: usize = 0x1D8720;
    pub const HostStateMgr001: usize = 0x1D5F20;
    pub const GameEventSystemServerV001: usize = 0x1D15C0;
    pub const GameEventSystemClientV001: usize = 0x1D15B0;
    pub const EngineServiceMgr001: usize = 0x1CD280;
    pub const VProfService_001: usize = 0x1BAA30;
    pub const ToolService_001: usize = 0x1B9780;
    pub const StatsService_001: usize = 0x1B4A00;
    pub const SplitScreenService_001: usize = 0x1B1BA0;
    pub const SoundService_001: usize = 0x1AB680;
    pub const ScreenshotService001: usize = 0x1A70F0;
    pub const RenderService_001: usize = 0x1A4450;
    pub const NetworkService_001: usize = 0x1A3F60;
    pub const NetworkServerService_001: usize = 0x19EE10;
    pub const NetworkP2PService_001: usize = 0x19A8C0;
    pub const NetworkClientService_001: usize = 0x194550;
    pub const MapListService_001: usize = 0x18D520;
    pub const InputService_001: usize = 0x17B600;
    pub const GameUIService_001: usize = 0x175D30;
    pub const GameResourceServiceServerV001: usize = 0x173A90;
    pub const GameResourceServiceClientV001: usize = 0x173A80;
    pub const BugService001: usize = 0x16CA20;
    pub const BenchmarkService001: usize = 0x16B1C0;
    pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x1189D0;
    pub const EngineGameUI001: usize = 0x117D60;
    pub const INETSUPPORT_001: usize = 0xE73A0;
    pub const Source2EngineToServerStringTable001: usize = 0xA2820;
    pub const Source2EngineToServer001: usize = 0x8B7D0;
    pub const Source2EngineToClientStringTable001: usize = 0x842A0;
    pub const Source2EngineToClient001: usize = 0x5AA30;
}

pub mod filesystem_stdio_dll { // filesystem_stdio.dll
    pub const VAsyncFileSystem2_001: usize = 0x679D0;
    pub const VFileSystem017: usize = 0x679C0;
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
    pub const GameTypes001: usize = 0x50300;
    pub const MATCHFRAMEWORK_001: usize = 0x1017D0;
}

pub mod materialsystem2_dll { // materialsystem2.dll
    pub const MaterialUtils_001: usize = 0x4DCB0;
    pub const TextLayout_001: usize = 0x4A400;
    pub const PostProcessingSystem_001: usize = 0x42B80;
    pub const FontManager_001: usize = 0x37A20;
    pub const VMaterialSystem2_001: usize = 0x25FC0;
}

pub mod meshsystem_dll { // meshsystem.dll
    pub const MeshSystem001: usize = 0x7270;
}

pub mod navsystem_dll { // navsystem.dll
    pub const NavSystem001: usize = 0x76F0;
}

pub mod networksystem_dll { // networksystem.dll
    pub const SerializedEntitiesVersion001: usize = 0xD1920;
    pub const NetworkSystemVersion001: usize = 0xBC2B0;
    pub const NetworkMessagesVersion001: usize = 0x9CA00;
    pub const FlattenedSerializersVersion001: usize = 0x7C770;
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
    pub const IPulseSystem_001: usize = 0x5B30;
}

pub mod rendersystemdx11_dll { // rendersystemdx11.dll
    pub const RenderUtils_001: usize = 0x53100;
    pub const VRenderDeviceMgrBackdoor001: usize = 0x4A690;
    pub const RenderDeviceMgr001: usize = 0x4A680;
}

pub mod resourcesystem_dll { // resourcesystem.dll
    pub const ResourceSystem013: usize = 0x10650;
}

pub mod scenefilecache_dll { // scenefilecache.dll
    pub const SceneFileCache002: usize = 0x68E0;
    pub const ResponseRulesCache001: usize = 0x3190;
}

pub mod scenesystem_dll { // scenesystem.dll
    pub const SceneUtils_001: usize = 0x13C9E0;
    pub const SceneSystem_002: usize = 0xCAA30;
    pub const RenderingPipelines_001: usize = 0x8E8A0;
}

pub mod schemasystem_dll { // schemasystem.dll
    pub const SchemaSystem_001: usize = 0xA930;
}

pub mod server_dll { // server.dll
    pub const NavGameTest001: usize = 0xA3D210;
    pub const ServerToolsInfo_001: usize = 0x840050;
    pub const Source2GameClients001: usize = 0x840060;
    pub const Source2GameEntities001: usize = 0x840070;
    pub const Source2Server001: usize = 0x840080;
    pub const EmptyWorldService001_Server: usize = 0x5920A0;
    pub const Source2ServerConfig001: usize = 0x571FD0;
    pub const EntitySubclassUtilsV001: usize = 0x2D0880;
    pub const customnavsystem001: usize = 0x24D8C0;
    pub const Source2GameDirector001: usize = 0x145660;
}

pub mod soundsystem_dll { // soundsystem.dll
    pub const SoundOpSystem001: usize = 0x157B00;
    pub const SoundOpSystemEdit001: usize = 0x8CEE0;
    pub const VMixEditTool001: usize = 0x71FF0;
    pub const SoundSystem001: usize = 0x46AE0;
}

pub mod steamaudio_dll { // steamaudio.dll
    pub const SteamAudio001: usize = 0x12EE0;
}

pub mod steamclient64_dll { // steamclient64.dll
    pub const IVALIDATE001: usize = 0x84FE60;
    pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x84BD10;
    pub const SteamClient021: usize = 0x646160;
    pub const SteamClient020: usize = 0x646150;
    pub const SteamClient019: usize = 0x646140;
    pub const SteamClient018: usize = 0x646130;
    pub const SteamClient017: usize = 0x646120;
    pub const SteamClient016: usize = 0x646110;
    pub const SteamClient015: usize = 0x646100;
    pub const SteamClient014: usize = 0x6460F0;
    pub const SteamClient013: usize = 0x6460E0;
    pub const SteamClient012: usize = 0x6460D0;
    pub const SteamClient011: usize = 0x6460C0;
    pub const SteamClient010: usize = 0x6460B0;
    pub const SteamClient009: usize = 0x6460A0;
    pub const SteamClient008: usize = 0x646090;
    pub const SteamClient007: usize = 0x646080;
    pub const SteamClient006: usize = 0x646070;
    pub const p2pvoice002: usize = 0xD97C0;
    pub const p2pvoicesingleton002: usize = 0xD6220;
}

pub mod tier0_dll { // tier0.dll
    pub const VStringTokenSystem001: usize = 0x18C360;
    pub const TestScriptMgr001: usize = 0x13F6C0;
    pub const VProcessUtils002: usize = 0x12F840;
    pub const VEngineCvar007: usize = 0x619D0;
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
    pub const IVALIDATE001: usize = 0x25000;
    pub const VEngineCvar002: usize = 0x5760;
}

pub mod worldrenderer_dll { // worldrenderer.dll
    pub const WorldRendererMgr001: usize = 0x21650;
}