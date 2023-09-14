#pragma once

#include <cstddef>

namespace animationsystem_dll {
    constexpr std::ptrdiff_t AnimationSystemUtils_001 = 0x64a80;
    constexpr std::ptrdiff_t AnimationSystem_001 = 0x5f5e0;
}

namespace client_dll {
    constexpr std::ptrdiff_t LegacyGameUI001 = 0x857800;
    constexpr std::ptrdiff_t Source2ClientUI001 = 0x846640;
    constexpr std::ptrdiff_t Source2ClientPrediction001 = 0x76b370;
    constexpr std::ptrdiff_t ClientToolsInfo_001 = 0x6f6de0;
    constexpr std::ptrdiff_t Source2Client002 = 0x6f6e00;
    constexpr std::ptrdiff_t GameClientExports001 = 0x6f6df0;
    constexpr std::ptrdiff_t EmptyWorldService001_Client = 0x43fe20;
    constexpr std::ptrdiff_t Source2ClientConfig001 = 0x427070;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t SimpleEngineLoopService_001 = 0x1e3560;
    constexpr std::ptrdiff_t ClientServerEngineLoopService_001 = 0x1d9220;
    constexpr std::ptrdiff_t KeyValueCache001 = 0x1d55c0;
    constexpr std::ptrdiff_t HostStateMgr001 = 0x1d3000;
    constexpr std::ptrdiff_t GameEventSystemServerV001 = 0x1ce420;
    constexpr std::ptrdiff_t GameEventSystemClientV001 = 0x1ce410;
    constexpr std::ptrdiff_t EngineServiceMgr001 = 0x1c9d30;
    constexpr std::ptrdiff_t VProfService_001 = 0x1b7ea0;
    constexpr std::ptrdiff_t ToolService_001 = 0x1b6c00;
    constexpr std::ptrdiff_t StatsService_001 = 0x1b1e80;
    constexpr std::ptrdiff_t SplitScreenService_001 = 0x1af0f0;
    constexpr std::ptrdiff_t SoundService_001 = 0x1a9c40;
    constexpr std::ptrdiff_t ScreenshotService001 = 0x1a5b10;
    constexpr std::ptrdiff_t RenderService_001 = 0x1a2e70;
    constexpr std::ptrdiff_t NetworkService_001 = 0x1a2980;
    constexpr std::ptrdiff_t NetworkServerService_001 = 0x19da10;
    constexpr std::ptrdiff_t NetworkP2PService_001 = 0x199420;
    constexpr std::ptrdiff_t NetworkClientService_001 = 0x193050;
    constexpr std::ptrdiff_t MapListService_001 = 0x18c090;
    constexpr std::ptrdiff_t InputService_001 = 0x179e00;
    constexpr std::ptrdiff_t GameUIService_001 = 0x1748c0;
    constexpr std::ptrdiff_t GameResourceServiceServerV001 = 0x172620;
    constexpr std::ptrdiff_t GameResourceServiceClientV001 = 0x172610;
    constexpr std::ptrdiff_t BugService001 = 0x16b640;
    constexpr std::ptrdiff_t BenchmarkService001 = 0x169e10;
    constexpr std::ptrdiff_t VENGINE_GAMEUIFUNCS_VERSION005 = 0x117530;
    constexpr std::ptrdiff_t EngineGameUI001 = 0x1167f0;
    constexpr std::ptrdiff_t INETSUPPORT_001 = 0xe6030;
    constexpr std::ptrdiff_t Source2EngineToServerStringTable001 = 0xa1080;
    constexpr std::ptrdiff_t Source2EngineToServer001 = 0x8ae50;
    constexpr std::ptrdiff_t Source2EngineToClientStringTable001 = 0x83800;
    constexpr std::ptrdiff_t Source2EngineToClient001 = 0x595e0;
}

namespace filesystem_stdio_dll {
    constexpr std::ptrdiff_t VAsyncFileSystem2_001 = 0x1ef00;
    constexpr std::ptrdiff_t VFileSystem017 = 0x1eef0;
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
    constexpr std::ptrdiff_t MATCHFRAMEWORK_001 = 0x1015c0;
}

namespace materialsystem2_dll {
    constexpr std::ptrdiff_t MaterialUtils_001 = 0x4db70;
    constexpr std::ptrdiff_t TextLayout_001 = 0x4a2c0;
    constexpr std::ptrdiff_t PostProcessingSystem_001 = 0x42a60;
    constexpr std::ptrdiff_t FontManager_001 = 0x37840;
    constexpr std::ptrdiff_t VMaterialSystem2_001 = 0x25fb0;
}

namespace meshsystem_dll {
    constexpr std::ptrdiff_t MeshSystem001 = 0x7130;
}

namespace navsystem_dll {
    constexpr std::ptrdiff_t NavSystem001 = 0x7590;
}

namespace networksystem_dll {
    constexpr std::ptrdiff_t SerializedEntitiesVersion001 = 0xd29c0;
    constexpr std::ptrdiff_t NetworkSystemVersion001 = 0xbcd00;
    constexpr std::ptrdiff_t NetworkMessagesVersion001 = 0x9cd30;
    constexpr std::ptrdiff_t FlattenedSerializersVersion001 = 0x7c4e0;
}

namespace panorama_dll {
    constexpr std::ptrdiff_t PanoramaUIEngine001 = 0x5e810;
}

namespace panorama_text_pango_dll {
    constexpr std::ptrdiff_t PanoramaTextServices001 = 0x4caa0;
}

namespace panoramauiclient_dll {
    constexpr std::ptrdiff_t PanoramaUIClient001 = 0x125e0;
}

namespace particles_dll {
    constexpr std::ptrdiff_t ParticleSystemMgr003 = 0x52b40;
}

namespace pulse_system_dll {
    constexpr std::ptrdiff_t IPulseSystem_001 = 0x5a20;
}

namespace rendersystemdx11_dll {
    constexpr std::ptrdiff_t RenderUtils_001 = 0x533d0;
    constexpr std::ptrdiff_t VRenderDeviceMgrBackdoor001 = 0x4aaa0;
    constexpr std::ptrdiff_t RenderDeviceMgr001 = 0x4aa90;
}

namespace resourcesystem_dll {
    constexpr std::ptrdiff_t ResourceSystem013 = 0x106b0;
}

namespace scenefilecache_dll {
    constexpr std::ptrdiff_t SceneFileCache002 = 0x68e0;
    constexpr std::ptrdiff_t ResponseRulesCache001 = 0x3190;
}

namespace scenesystem_dll {
    constexpr std::ptrdiff_t SceneUtils_001 = 0x13bc30;
    constexpr std::ptrdiff_t SceneSystem_002 = 0xc9b50;
    constexpr std::ptrdiff_t RenderingPipelines_001 = 0x8da90;
}

namespace schemasystem_dll {
    constexpr std::ptrdiff_t SchemaSystem_001 = 0xa810;
}

namespace server_dll {
    constexpr std::ptrdiff_t NavGameTest001 = 0xa9d520;
    constexpr std::ptrdiff_t ServerToolsInfo_001 = 0x8a7820;
    constexpr std::ptrdiff_t Source2GameClients001 = 0x8a7830;
    constexpr std::ptrdiff_t Source2GameEntities001 = 0x8a7840;
    constexpr std::ptrdiff_t Source2Server001 = 0x8a7850;
    constexpr std::ptrdiff_t EmptyWorldService001_Server = 0x5a6200;
    constexpr std::ptrdiff_t Source2ServerConfig001 = 0x586290;
    constexpr std::ptrdiff_t EntitySubclassUtilsV001 = 0x2e67b0;
    constexpr std::ptrdiff_t customnavsystem001 = 0x258650;
    constexpr std::ptrdiff_t Source2GameDirector001 = 0x14d1e0;
}

namespace soundsystem_dll {
    constexpr std::ptrdiff_t SoundOpSystem001 = 0x155da0;
    constexpr std::ptrdiff_t SoundOpSystemEdit001 = 0x8b110;
    constexpr std::ptrdiff_t VMixEditTool001 = 0x716e0;
    constexpr std::ptrdiff_t SoundSystem001 = 0x46460;
}

namespace steamaudio_dll {
    constexpr std::ptrdiff_t SteamAudio001 = 0x12d80;
}

namespace steamclient64_dll {
    constexpr std::ptrdiff_t IVALIDATE001 = 0x833640;
    constexpr std::ptrdiff_t CLIENTENGINE_INTERFACE_VERSION005 = 0x82f4c0;
    constexpr std::ptrdiff_t SteamClient020 = 0x62caf0;
    constexpr std::ptrdiff_t SteamClient019 = 0x62cae0;
    constexpr std::ptrdiff_t SteamClient018 = 0x62cad0;
    constexpr std::ptrdiff_t SteamClient017 = 0x62cac0;
    constexpr std::ptrdiff_t SteamClient016 = 0x62cab0;
    constexpr std::ptrdiff_t SteamClient015 = 0x62caa0;
    constexpr std::ptrdiff_t SteamClient014 = 0x62ca90;
    constexpr std::ptrdiff_t SteamClient013 = 0x62ca80;
    constexpr std::ptrdiff_t SteamClient012 = 0x62ca70;
    constexpr std::ptrdiff_t SteamClient011 = 0x62ca60;
    constexpr std::ptrdiff_t SteamClient010 = 0x62ca50;
    constexpr std::ptrdiff_t SteamClient009 = 0x62ca40;
    constexpr std::ptrdiff_t SteamClient008 = 0x62ca30;
    constexpr std::ptrdiff_t SteamClient007 = 0x62ca20;
    constexpr std::ptrdiff_t SteamClient006 = 0x62ca10;
    constexpr std::ptrdiff_t p2pvoice002 = 0xd8ea0;
    constexpr std::ptrdiff_t p2pvoicesingleton002 = 0xd5840;
}

namespace tier0_dll {
    constexpr std::ptrdiff_t VStringTokenSystem001 = 0x18d100;
    constexpr std::ptrdiff_t TestScriptMgr001 = 0x13f510;
    constexpr std::ptrdiff_t VProcessUtils002 = 0x12f520;
    constexpr std::ptrdiff_t VEngineCvar007 = 0x615f0;
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
    constexpr std::ptrdiff_t VPhysics2_Handle_Interface_001 = 0x5f440;
    constexpr std::ptrdiff_t VPhysics2_Interface_001 = 0x5b1e0;
}

namespace vscript_dll {
    constexpr std::ptrdiff_t VScriptManager010 = 0x31c40;
}

namespace vstdlib_s64_dll {
    constexpr std::ptrdiff_t IVALIDATE001 = 0x24ff0;
    constexpr std::ptrdiff_t VEngineCvar002 = 0x5750;
}

namespace worldrenderer_dll {
    constexpr std::ptrdiff_t WorldRendererMgr001 = 0x21340;
}