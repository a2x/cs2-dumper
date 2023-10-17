/*
 * https://github.com/a2x/cs2-dumper
 * 2023-10-17 02:04:51.725351400 UTC
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod AnimationsystemDll {
    pub const AnimationSystemUtils_001: usize = 0x64670;
    pub const AnimationSystem_001: usize = 0x5F1D0;
}

pub mod ClientDll {
    pub const LegacyGameUI001: usize = 0x88F360;
    pub const Source2ClientUI001: usize = 0x87DE00;
    pub const Source2ClientPrediction001: usize = 0x79B660;
    pub const ClientToolsInfo_001: usize = 0x727570;
    pub const Source2Client002: usize = 0x727590;
    pub const GameClientExports001: usize = 0x727580;
    pub const EmptyWorldService001_Client: usize = 0x48B1E0;
    pub const Source2ClientConfig001: usize = 0x4721F0;
}

pub mod Engine2Dll {
    pub const SimpleEngineLoopService_001: usize = 0x1E1C70;
    pub const ClientServerEngineLoopService_001: usize = 0x1D7940;
    pub const KeyValueCache001: usize = 0x1D3F80;
    pub const HostStateMgr001: usize = 0x1D1990;
    pub const GameEventSystemServerV001: usize = 0x1CD050;
    pub const GameEventSystemClientV001: usize = 0x1CD040;
    pub const EngineServiceMgr001: usize = 0x1C8D30;
    pub const VProfService_001: usize = 0x1B6810;
    pub const ToolService_001: usize = 0x1B5560;
    pub const StatsService_001: usize = 0x1B07E0;
    pub const SplitScreenService_001: usize = 0x1ADA50;
    pub const SoundService_001: usize = 0x1A85A0;
    pub const ScreenshotService001: usize = 0x1A4470;
    pub const RenderService_001: usize = 0x1A17D0;
    pub const NetworkService_001: usize = 0x1A12E0;
    pub const NetworkServerService_001: usize = 0x19C380;
    pub const NetworkP2PService_001: usize = 0x197D90;
    pub const NetworkClientService_001: usize = 0x1919C0;
    pub const MapListService_001: usize = 0x18A990;
    pub const InputService_001: usize = 0x1787D0;
    pub const GameUIService_001: usize = 0x173290;
    pub const GameResourceServiceServerV001: usize = 0x170FF0;
    pub const GameResourceServiceClientV001: usize = 0x170FE0;
    pub const BugService001: usize = 0x16A010;
    pub const BenchmarkService001: usize = 0x1687E0;
    pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x1163C0;
    pub const EngineGameUI001: usize = 0x115750;
    pub const INETSUPPORT_001: usize = 0xE59D0;
    pub const Source2EngineToServerStringTable001: usize = 0xA0B50;
    pub const Source2EngineToServer001: usize = 0x8AA40;
    pub const Source2EngineToClientStringTable001: usize = 0x83760;
    pub const Source2EngineToClient001: usize = 0x5A1B0;
}

pub mod FilesystemStdioDll {
    pub const VAsyncFileSystem2_001: usize = 0x66D30;
    pub const VFileSystem017: usize = 0x66D20;
}

pub mod HostDll {
    pub const Source2Host001: usize = 0x18E10;
    pub const SinglePlayerSharedMemory001: usize = 0x18A90;
    pub const SaveRestoreDataVersion001: usize = 0x18A80;
    pub const PredictionDiffManager001: usize = 0x16E20;
    pub const HostUtils001: usize = 0x12550;
    pub const GameSystem2HostHook: usize = 0x11DA0;
    pub const GameModelInfo001: usize = 0x11CC0;
    pub const DebugDrawQueueManager001: usize = 0x11710;
}

pub mod ImemanagerDll {
    pub const IMEManager001: usize = 0xC470;
}

pub mod InputsystemDll {
    pub const InputSystemVersion001: usize = 0x28D0;
    pub const InputStackSystemVersion001: usize = 0x16F0;
}

pub mod LocalizeDll {
    pub const Localize_001: usize = 0x3830;
}

pub mod MatchmakingDll {
    pub const GameTypes001: usize = 0x50270;
    pub const MATCHFRAMEWORK_001: usize = 0x101030;
}

pub mod Materialsystem2Dll {
    pub const MaterialUtils_001: usize = 0x4DB80;
    pub const TextLayout_001: usize = 0x4A2D0;
    pub const PostProcessingSystem_001: usize = 0x42A50;
    pub const FontManager_001: usize = 0x378F0;
    pub const VMaterialSystem2_001: usize = 0x25EB0;
}

pub mod MeshsystemDll {
    pub const MeshSystem001: usize = 0x7270;
}

pub mod NavsystemDll {
    pub const NavSystem001: usize = 0x76F0;
}

pub mod NetworksystemDll {
    pub const SerializedEntitiesVersion001: usize = 0xD1A60;
    pub const NetworkSystemVersion001: usize = 0xBBF70;
    pub const NetworkMessagesVersion001: usize = 0x9C010;
    pub const FlattenedSerializersVersion001: usize = 0x7B890;
}

pub mod PanoramaDll {
    pub const PanoramaUIEngine001: usize = 0x57EE0;
}

pub mod PanoramaTextPangoDll {
    pub const PanoramaTextServices001: usize = 0x4CBD0;
}

pub mod PanoramauiclientDll {
    pub const PanoramaUIClient001: usize = 0x12780;
}

pub mod ParticlesDll {
    pub const ParticleSystemMgr003: usize = 0x52D20;
}

pub mod PulseSystemDll {
    pub const IPulseSystem_001: usize = 0x5B80;
}

pub mod Rendersystemdx11Dll {
    pub const RenderUtils_001: usize = 0x52C90;
    pub const VRenderDeviceMgrBackdoor001: usize = 0x4A3A0;
    pub const RenderDeviceMgr001: usize = 0x4A390;
}

pub mod ResourcesystemDll {
    pub const ResourceSystem013: usize = 0x10650;
}

pub mod ScenefilecacheDll {
    pub const SceneFileCache002: usize = 0x68E0;
    pub const ResponseRulesCache001: usize = 0x3190;
}

pub mod ScenesystemDll {
    pub const SceneUtils_001: usize = 0x13D030;
    pub const SceneSystem_002: usize = 0xCAE10;
    pub const RenderingPipelines_001: usize = 0x8EED0;
}

pub mod SchemasystemDll {
    pub const SchemaSystem_001: usize = 0xA930;
}

pub mod ServerDll {
    pub const NavGameTest001: usize = 0xA2C470;
    pub const ServerToolsInfo_001: usize = 0x830DE0;
    pub const Source2GameClients001: usize = 0x830DF0;
    pub const Source2GameEntities001: usize = 0x830E00;
    pub const Source2Server001: usize = 0x830E10;
    pub const EmptyWorldService001_Server: usize = 0x5878B0;
    pub const Source2ServerConfig001: usize = 0x5678B0;
    pub const EntitySubclassUtilsV001: usize = 0x2C8210;
    pub const customnavsystem001: usize = 0x244DB0;
    pub const Source2GameDirector001: usize = 0x13EAB0;
}

pub mod SoundsystemDll {
    pub const SoundOpSystem001: usize = 0x156160;
    pub const SoundOpSystemEdit001: usize = 0x8B540;
    pub const VMixEditTool001: usize = 0x71740;
    pub const SoundSystem001: usize = 0x46540;
}

pub mod SteamaudioDll {
    pub const SteamAudio001: usize = 0x12EE0;
}

pub mod Steamclient64Dll {
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

pub mod Tier0Dll {
    pub const VStringTokenSystem001: usize = 0x18C390;
    pub const TestScriptMgr001: usize = 0x13F6F0;
    pub const VProcessUtils002: usize = 0x12F870;
    pub const VEngineCvar007: usize = 0x61C50;
}

pub mod V8SystemDll {
    pub const Source2V8System001: usize = 0x1670;
}

pub mod ValveAviDll {
    pub const VAvi001: usize = 0x2F90;
}

pub mod ValveWmfDll {
    pub const VMediaFoundation001: usize = 0x12D0;
}

pub mod Vphysics2Dll {
    pub const VPhysics2_Handle_Interface_001: usize = 0x5FA50;
    pub const VPhysics2_Interface_001: usize = 0x5B7F0;
}

pub mod VscriptDll {
    pub const VScriptManager010: usize = 0x31DA0;
}

pub mod VstdlibS64Dll {
    pub const IVALIDATE001: usize = 0x24FF0;
    pub const VEngineCvar002: usize = 0x5750;
}

pub mod WorldrendererDll {
    pub const WorldRendererMgr001: usize = 0x21530;
}