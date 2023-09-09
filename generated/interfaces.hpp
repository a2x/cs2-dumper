#pragma once

#include <cstddef>

namespace animationsystem_dll {
    constexpr std::ptrdiff_t AnimationSystemUtils_001 = 0x647c0;
    constexpr std::ptrdiff_t AnimationSystem_001 = 0x5f2c0;
}

namespace client_dll {
    constexpr std::ptrdiff_t LegacyGameUI001 = 0x84bba0;
    constexpr std::ptrdiff_t Source2ClientUI001 = 0x83b070;
    constexpr std::ptrdiff_t Source2ClientPrediction001 = 0x7608b0;
    constexpr std::ptrdiff_t ClientToolsInfo_001 = 0x6ebd70;
    constexpr std::ptrdiff_t Source2Client002 = 0x6ebd90;
    constexpr std::ptrdiff_t GameClientExports001 = 0x6ebd80;
    constexpr std::ptrdiff_t EmptyWorldService001_Client = 0x439cb0;
    constexpr std::ptrdiff_t Source2ClientConfig001 = 0x421090;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t SimpleEngineLoopService_001 = 0x1e2800;
    constexpr std::ptrdiff_t ClientServerEngineLoopService_001 = 0x1d88b0;
    constexpr std::ptrdiff_t KeyValueCache001 = 0x1d4c80;
    constexpr std::ptrdiff_t HostStateMgr001 = 0x1d26c0;
    constexpr std::ptrdiff_t GameEventSystemServerV001 = 0x1ce090;
    constexpr std::ptrdiff_t GameEventSystemClientV001 = 0x1ce080;
    constexpr std::ptrdiff_t EngineServiceMgr001 = 0x1c9980;
    constexpr std::ptrdiff_t VProfService_001 = 0x1b7b30;
    constexpr std::ptrdiff_t ToolService_001 = 0x1b68d0;
    constexpr std::ptrdiff_t StatsService_001 = 0x1b1b60;
    constexpr std::ptrdiff_t SplitScreenService_001 = 0x1aede0;
    constexpr std::ptrdiff_t SoundService_001 = 0x1a9970;
    constexpr std::ptrdiff_t ScreenshotService001 = 0x1a5840;
    constexpr std::ptrdiff_t RenderService_001 = 0x1a2bc0;
    constexpr std::ptrdiff_t NetworkService_001 = 0x1a26d0;
    constexpr std::ptrdiff_t NetworkServerService_001 = 0x19d8e0;
    constexpr std::ptrdiff_t NetworkP2PService_001 = 0x1993d0;
    constexpr std::ptrdiff_t NetworkClientService_001 = 0x193020;
    constexpr std::ptrdiff_t MapListService_001 = 0x18c040;
    constexpr std::ptrdiff_t InputService_001 = 0x179e30;
    constexpr std::ptrdiff_t GameUIService_001 = 0x174910;
    constexpr std::ptrdiff_t GameResourceServiceServerV001 = 0x172690;
    constexpr std::ptrdiff_t GameResourceServiceClientV001 = 0x172680;
    constexpr std::ptrdiff_t BugService001 = 0x16b6b0;
    constexpr std::ptrdiff_t BenchmarkService001 = 0x169e90;
    constexpr std::ptrdiff_t VENGINE_GAMEUIFUNCS_VERSION005 = 0x117640;
    constexpr std::ptrdiff_t EngineGameUI001 = 0x116900;
    constexpr std::ptrdiff_t INETSUPPORT_001 = 0xe6520;
    constexpr std::ptrdiff_t Source2EngineToServerStringTable001 = 0xa1550;
    constexpr std::ptrdiff_t Source2EngineToServer001 = 0x8b000;
    constexpr std::ptrdiff_t Source2EngineToClientStringTable001 = 0x839f0;
    constexpr std::ptrdiff_t Source2EngineToClient001 = 0x59810;
}

namespace filesystem_stdio_dll {
    constexpr std::ptrdiff_t VAsyncFileSystem2_001 = 0x1eed0;
    constexpr std::ptrdiff_t VFileSystem017 = 0x1eec0;
}

namespace host_dll {
    constexpr std::ptrdiff_t Source2Host001 = 0x18e50;
    constexpr std::ptrdiff_t SinglePlayerSharedMemory001 = 0x18ad0;
    constexpr std::ptrdiff_t SaveRestoreDataVersion001 = 0x18ac0;
    constexpr std::ptrdiff_t PredictionDiffManager001 = 0x16e60;
    constexpr std::ptrdiff_t HostUtils001 = 0x123f0;
    constexpr std::ptrdiff_t GameSystem2HostHook = 0x11c40;
    constexpr std::ptrdiff_t GameModelInfo001 = 0x11b60;
    constexpr std::ptrdiff_t DebugDrawQueueManager001 = 0x115b0;
}

namespace imemanager_dll {
    constexpr std::ptrdiff_t IMEManager001 = 0xc470;
}

namespace inputsystem_dll {
    constexpr std::ptrdiff_t InputSystemVersion001 = 0x28d0;
    constexpr std::ptrdiff_t InputStackSystemVersion001 = 0x16f0;
}

namespace localize_dll {
    constexpr std::ptrdiff_t Localize_001 = 0x3830;
}

namespace matchmaking_dll {
    constexpr std::ptrdiff_t GameTypes001 = 0x506a0;
    constexpr std::ptrdiff_t MATCHFRAMEWORK_001 = 0x101570;
}

namespace materialsystem2_dll {
    constexpr std::ptrdiff_t MaterialUtils_001 = 0x4da90;
    constexpr std::ptrdiff_t TextLayout_001 = 0x4a1e0;
    constexpr std::ptrdiff_t PostProcessingSystem_001 = 0x429e0;
    constexpr std::ptrdiff_t FontManager_001 = 0x377c0;
    constexpr std::ptrdiff_t VMaterialSystem2_001 = 0x25f30;
}

namespace meshsystem_dll {
    constexpr std::ptrdiff_t MeshSystem001 = 0x7140;
}

namespace navsystem_dll {
    constexpr std::ptrdiff_t NavSystem001 = 0x7590;
}

namespace networksystem_dll {
    constexpr std::ptrdiff_t SerializedEntitiesVersion001 = 0xd3510;
    constexpr std::ptrdiff_t NetworkSystemVersion001 = 0xbd6e0;
    constexpr std::ptrdiff_t NetworkMessagesVersion001 = 0x9ca30;
    constexpr std::ptrdiff_t FlattenedSerializersVersion001 = 0x7c430;
}

namespace panorama_dll {
    constexpr std::ptrdiff_t PanoramaUIEngine001 = 0x5e7b0;
}

namespace panorama_text_pango_dll {
    constexpr std::ptrdiff_t PanoramaTextServices001 = 0x4caa0;
}

namespace panoramauiclient_dll {
    constexpr std::ptrdiff_t PanoramaUIClient001 = 0x12570;
}

namespace particles_dll {
    constexpr std::ptrdiff_t ParticleSystemMgr003 = 0x4c710;
}

namespace pulse_system_dll {
    constexpr std::ptrdiff_t IPulseSystem_001 = 0x5a20;
}

namespace rendersystemdx11_dll {
    constexpr std::ptrdiff_t RenderUtils_001 = 0x53390;
    constexpr std::ptrdiff_t VRenderDeviceMgrBackdoor001 = 0x4aab0;
    constexpr std::ptrdiff_t RenderDeviceMgr001 = 0x4aaa0;
}

namespace resourcesystem_dll {
    constexpr std::ptrdiff_t ResourceSystem013 = 0x106b0;
}

namespace scenefilecache_dll {
    constexpr std::ptrdiff_t SceneFileCache002 = 0x6970;
    constexpr std::ptrdiff_t ResponseRulesCache001 = 0x3210;
}

namespace scenesystem_dll {
    constexpr std::ptrdiff_t SceneUtils_001 = 0x138e40;
    constexpr std::ptrdiff_t SceneSystem_002 = 0xc6f30;
    constexpr std::ptrdiff_t RenderingPipelines_001 = 0x8b170;
}

namespace schemasystem_dll {
    constexpr std::ptrdiff_t SchemaSystem_001 = 0xa820;
}

namespace server_dll {
    constexpr std::ptrdiff_t NavGameTest001 = 0xa88160;
    constexpr std::ptrdiff_t ServerToolsInfo_001 = 0x89c1d0;
    constexpr std::ptrdiff_t Source2GameClients001 = 0x89c1e0;
    constexpr std::ptrdiff_t Source2GameEntities001 = 0x89c1f0;
    constexpr std::ptrdiff_t Source2Server001 = 0x89c200;
    constexpr std::ptrdiff_t EmptyWorldService001_Server = 0x5a09a0;
    constexpr std::ptrdiff_t Source2ServerConfig001 = 0x580c00;
    constexpr std::ptrdiff_t EntitySubclassUtilsV001 = 0x2e4d50;
    constexpr std::ptrdiff_t customnavsystem001 = 0x258400;
    constexpr std::ptrdiff_t Source2GameDirector001 = 0x14d580;
}

namespace soundsystem_dll {
    constexpr std::ptrdiff_t SoundOpSystem001 = 0x155570;
    constexpr std::ptrdiff_t SoundOpSystemEdit001 = 0x8ab40;
    constexpr std::ptrdiff_t VMixEditTool001 = 0x70f80;
    constexpr std::ptrdiff_t SoundSystem001 = 0x46620;
}

namespace steamaudio_dll {
    constexpr std::ptrdiff_t SteamAudio001 = 0x12cf0;
}

namespace steamclient64_dll {
    constexpr std::ptrdiff_t IVALIDATE001 = 0x82a280;
    constexpr std::ptrdiff_t CLIENTENGINE_INTERFACE_VERSION005 = 0x826000;
    constexpr std::ptrdiff_t SteamClient020 = 0x621de0;
    constexpr std::ptrdiff_t SteamClient019 = 0x621dd0;
    constexpr std::ptrdiff_t SteamClient018 = 0x621dc0;
    constexpr std::ptrdiff_t SteamClient017 = 0x621db0;
    constexpr std::ptrdiff_t SteamClient016 = 0x621da0;
    constexpr std::ptrdiff_t SteamClient015 = 0x621d90;
    constexpr std::ptrdiff_t SteamClient014 = 0x621d80;
    constexpr std::ptrdiff_t SteamClient013 = 0x621d70;
    constexpr std::ptrdiff_t SteamClient012 = 0x621d60;
    constexpr std::ptrdiff_t SteamClient011 = 0x621d50;
    constexpr std::ptrdiff_t SteamClient010 = 0x621d40;
    constexpr std::ptrdiff_t SteamClient009 = 0x621d30;
    constexpr std::ptrdiff_t SteamClient008 = 0x621d20;
    constexpr std::ptrdiff_t SteamClient007 = 0x621d10;
    constexpr std::ptrdiff_t SteamClient006 = 0x621d00;
    constexpr std::ptrdiff_t p2pvoice002 = 0xd8b70;
    constexpr std::ptrdiff_t p2pvoicesingleton002 = 0xd5510;
}

namespace tier0_dll {
    constexpr std::ptrdiff_t VStringTokenSystem001 = 0x18add0;
    constexpr std::ptrdiff_t TestScriptMgr001 = 0x13d3e0;
    constexpr std::ptrdiff_t VProcessUtils002 = 0x12d730;
    constexpr std::ptrdiff_t VEngineCvar007 = 0x5fff0;
}

namespace v8system_dll {
    constexpr std::ptrdiff_t Source2V8System001 = 0x1670;
}

namespace valve_avi_dll {
    constexpr std::ptrdiff_t VAvi001 = 0x2f90;
}

namespace valve_wmf_dll {
    constexpr std::ptrdiff_t VMediaFoundation001 = 0x12d0;
}

namespace vphysics2_dll {
    constexpr std::ptrdiff_t VPhysics2_Handle_Interface_001 = 0x5e7b0;
    constexpr std::ptrdiff_t VPhysics2_Interface_001 = 0x5a550;
}

namespace vscript_dll {
    constexpr std::ptrdiff_t VScriptManager010 = 0x2c880;
}

namespace vstdlib_s64_dll {
    constexpr std::ptrdiff_t IVALIDATE001 = 0x24ff0;
    constexpr std::ptrdiff_t VEngineCvar002 = 0x5750;
}

namespace worldrenderer_dll {
    constexpr std::ptrdiff_t WorldRendererMgr001 = 0x216f0;
}