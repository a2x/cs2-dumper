#pragma once

#include <cstddef>

/*
 * https://github.com/a2x/cs2-dumper
 * 2023-10-15 12:13:33.220433600 UTC
 */

namespace animationsystem_dll {
    constexpr std::ptrdiff_t AnimationSystemUtils_001 = 0x64670;
    constexpr std::ptrdiff_t AnimationSystem_001 = 0x5F1D0;
}

namespace client_dll {
    constexpr std::ptrdiff_t LegacyGameUI001 = 0x88F360;
    constexpr std::ptrdiff_t Source2ClientUI001 = 0x87DE00;
    constexpr std::ptrdiff_t Source2ClientPrediction001 = 0x79B660;
    constexpr std::ptrdiff_t ClientToolsInfo_001 = 0x727570;
    constexpr std::ptrdiff_t Source2Client002 = 0x727590;
    constexpr std::ptrdiff_t GameClientExports001 = 0x727580;
    constexpr std::ptrdiff_t EmptyWorldService001_Client = 0x48B1E0;
    constexpr std::ptrdiff_t Source2ClientConfig001 = 0x4721F0;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t SimpleEngineLoopService_001 = 0x1E1C70;
    constexpr std::ptrdiff_t ClientServerEngineLoopService_001 = 0x1D7940;
    constexpr std::ptrdiff_t KeyValueCache001 = 0x1D3F80;
    constexpr std::ptrdiff_t HostStateMgr001 = 0x1D1990;
    constexpr std::ptrdiff_t GameEventSystemServerV001 = 0x1CD050;
    constexpr std::ptrdiff_t GameEventSystemClientV001 = 0x1CD040;
    constexpr std::ptrdiff_t EngineServiceMgr001 = 0x1C8D30;
    constexpr std::ptrdiff_t VProfService_001 = 0x1B6810;
    constexpr std::ptrdiff_t ToolService_001 = 0x1B5560;
    constexpr std::ptrdiff_t StatsService_001 = 0x1B07E0;
    constexpr std::ptrdiff_t SplitScreenService_001 = 0x1ADA50;
    constexpr std::ptrdiff_t SoundService_001 = 0x1A85A0;
    constexpr std::ptrdiff_t ScreenshotService001 = 0x1A4470;
    constexpr std::ptrdiff_t RenderService_001 = 0x1A17D0;
    constexpr std::ptrdiff_t NetworkService_001 = 0x1A12E0;
    constexpr std::ptrdiff_t NetworkServerService_001 = 0x19C380;
    constexpr std::ptrdiff_t NetworkP2PService_001 = 0x197D90;
    constexpr std::ptrdiff_t NetworkClientService_001 = 0x1919C0;
    constexpr std::ptrdiff_t MapListService_001 = 0x18A990;
    constexpr std::ptrdiff_t InputService_001 = 0x1787D0;
    constexpr std::ptrdiff_t GameUIService_001 = 0x173290;
    constexpr std::ptrdiff_t GameResourceServiceServerV001 = 0x170FF0;
    constexpr std::ptrdiff_t GameResourceServiceClientV001 = 0x170FE0;
    constexpr std::ptrdiff_t BugService001 = 0x16A010;
    constexpr std::ptrdiff_t BenchmarkService001 = 0x1687E0;
    constexpr std::ptrdiff_t VENGINE_GAMEUIFUNCS_VERSION005 = 0x1163C0;
    constexpr std::ptrdiff_t EngineGameUI001 = 0x115750;
    constexpr std::ptrdiff_t INETSUPPORT_001 = 0xE59D0;
    constexpr std::ptrdiff_t Source2EngineToServerStringTable001 = 0xA0B50;
    constexpr std::ptrdiff_t Source2EngineToServer001 = 0x8AA40;
    constexpr std::ptrdiff_t Source2EngineToClientStringTable001 = 0x83760;
    constexpr std::ptrdiff_t Source2EngineToClient001 = 0x5A1B0;
}

namespace filesystem_stdio_dll {
    constexpr std::ptrdiff_t VAsyncFileSystem2_001 = 0x66D30;
    constexpr std::ptrdiff_t VFileSystem017 = 0x66D20;
}

namespace host_dll {
    constexpr std::ptrdiff_t Source2Host001 = 0x18E10;
    constexpr std::ptrdiff_t SinglePlayerSharedMemory001 = 0x18A90;
    constexpr std::ptrdiff_t SaveRestoreDataVersion001 = 0x18A80;
    constexpr std::ptrdiff_t PredictionDiffManager001 = 0x16E20;
    constexpr std::ptrdiff_t HostUtils001 = 0x12550;
    constexpr std::ptrdiff_t GameSystem2HostHook = 0x11DA0;
    constexpr std::ptrdiff_t GameModelInfo001 = 0x11CC0;
    constexpr std::ptrdiff_t DebugDrawQueueManager001 = 0x11710;
}

namespace imemanager_dll {
    constexpr std::ptrdiff_t IMEManager001 = 0xC470;
}

namespace inputsystem_dll {
    constexpr std::ptrdiff_t InputSystemVersion001 = 0x28D0;
    constexpr std::ptrdiff_t InputStackSystemVersion001 = 0x16F0;
}

namespace localize_dll {
    constexpr std::ptrdiff_t Localize_001 = 0x3830;
}

namespace matchmaking_dll {
    constexpr std::ptrdiff_t GameTypes001 = 0x50270;
    constexpr std::ptrdiff_t MATCHFRAMEWORK_001 = 0x101030;
}

namespace materialsystem2_dll {
    constexpr std::ptrdiff_t MaterialUtils_001 = 0x4DB80;
    constexpr std::ptrdiff_t TextLayout_001 = 0x4A2D0;
    constexpr std::ptrdiff_t PostProcessingSystem_001 = 0x42A50;
    constexpr std::ptrdiff_t FontManager_001 = 0x378F0;
    constexpr std::ptrdiff_t VMaterialSystem2_001 = 0x25EB0;
}

namespace meshsystem_dll {
    constexpr std::ptrdiff_t MeshSystem001 = 0x7270;
}

namespace navsystem_dll {
    constexpr std::ptrdiff_t NavSystem001 = 0x76F0;
}

namespace networksystem_dll {
    constexpr std::ptrdiff_t SerializedEntitiesVersion001 = 0xD1A60;
    constexpr std::ptrdiff_t NetworkSystemVersion001 = 0xBBF70;
    constexpr std::ptrdiff_t NetworkMessagesVersion001 = 0x9C010;
    constexpr std::ptrdiff_t FlattenedSerializersVersion001 = 0x7B890;
}

namespace panorama_dll {
    constexpr std::ptrdiff_t PanoramaUIEngine001 = 0x57EE0;
}

namespace panorama_text_pango_dll {
    constexpr std::ptrdiff_t PanoramaTextServices001 = 0x4CBD0;
}

namespace panoramauiclient_dll {
    constexpr std::ptrdiff_t PanoramaUIClient001 = 0x12780;
}

namespace particles_dll {
    constexpr std::ptrdiff_t ParticleSystemMgr003 = 0x52D20;
}

namespace pulse_system_dll {
    constexpr std::ptrdiff_t IPulseSystem_001 = 0x5B80;
}

namespace rendersystemdx11_dll {
    constexpr std::ptrdiff_t RenderUtils_001 = 0x52C90;
    constexpr std::ptrdiff_t VRenderDeviceMgrBackdoor001 = 0x4A3A0;
    constexpr std::ptrdiff_t RenderDeviceMgr001 = 0x4A390;
}

namespace resourcesystem_dll {
    constexpr std::ptrdiff_t ResourceSystem013 = 0x10650;
}

namespace scenefilecache_dll {
    constexpr std::ptrdiff_t SceneFileCache002 = 0x68E0;
    constexpr std::ptrdiff_t ResponseRulesCache001 = 0x3190;
}

namespace scenesystem_dll {
    constexpr std::ptrdiff_t SceneUtils_001 = 0x13D030;
    constexpr std::ptrdiff_t SceneSystem_002 = 0xCAE10;
    constexpr std::ptrdiff_t RenderingPipelines_001 = 0x8EED0;
}

namespace schemasystem_dll {
    constexpr std::ptrdiff_t SchemaSystem_001 = 0xA930;
}

namespace server_dll {
    constexpr std::ptrdiff_t NavGameTest001 = 0xA2C470;
    constexpr std::ptrdiff_t ServerToolsInfo_001 = 0x830DE0;
    constexpr std::ptrdiff_t Source2GameClients001 = 0x830DF0;
    constexpr std::ptrdiff_t Source2GameEntities001 = 0x830E00;
    constexpr std::ptrdiff_t Source2Server001 = 0x830E10;
    constexpr std::ptrdiff_t EmptyWorldService001_Server = 0x5878B0;
    constexpr std::ptrdiff_t Source2ServerConfig001 = 0x5678B0;
    constexpr std::ptrdiff_t EntitySubclassUtilsV001 = 0x2C8210;
    constexpr std::ptrdiff_t customnavsystem001 = 0x244DB0;
    constexpr std::ptrdiff_t Source2GameDirector001 = 0x13EAB0;
}

namespace soundsystem_dll {
    constexpr std::ptrdiff_t SoundOpSystem001 = 0x156160;
    constexpr std::ptrdiff_t SoundOpSystemEdit001 = 0x8B540;
    constexpr std::ptrdiff_t VMixEditTool001 = 0x71740;
    constexpr std::ptrdiff_t SoundSystem001 = 0x46540;
}

namespace steamaudio_dll {
    constexpr std::ptrdiff_t SteamAudio001 = 0x12EE0;
}

namespace steamclient64_dll {
    constexpr std::ptrdiff_t IVALIDATE001 = 0x833640;
    constexpr std::ptrdiff_t CLIENTENGINE_INTERFACE_VERSION005 = 0x82F4C0;
    constexpr std::ptrdiff_t SteamClient020 = 0x62CAF0;
    constexpr std::ptrdiff_t SteamClient019 = 0x62CAE0;
    constexpr std::ptrdiff_t SteamClient018 = 0x62CAD0;
    constexpr std::ptrdiff_t SteamClient017 = 0x62CAC0;
    constexpr std::ptrdiff_t SteamClient016 = 0x62CAB0;
    constexpr std::ptrdiff_t SteamClient015 = 0x62CAA0;
    constexpr std::ptrdiff_t SteamClient014 = 0x62CA90;
    constexpr std::ptrdiff_t SteamClient013 = 0x62CA80;
    constexpr std::ptrdiff_t SteamClient012 = 0x62CA70;
    constexpr std::ptrdiff_t SteamClient011 = 0x62CA60;
    constexpr std::ptrdiff_t SteamClient010 = 0x62CA50;
    constexpr std::ptrdiff_t SteamClient009 = 0x62CA40;
    constexpr std::ptrdiff_t SteamClient008 = 0x62CA30;
    constexpr std::ptrdiff_t SteamClient007 = 0x62CA20;
    constexpr std::ptrdiff_t SteamClient006 = 0x62CA10;
    constexpr std::ptrdiff_t p2pvoice002 = 0xD8EA0;
    constexpr std::ptrdiff_t p2pvoicesingleton002 = 0xD5840;
}

namespace tier0_dll {
    constexpr std::ptrdiff_t VStringTokenSystem001 = 0x18C390;
    constexpr std::ptrdiff_t TestScriptMgr001 = 0x13F6F0;
    constexpr std::ptrdiff_t VProcessUtils002 = 0x12F870;
    constexpr std::ptrdiff_t VEngineCvar007 = 0x61C50;
}

namespace v8system_dll {
    constexpr std::ptrdiff_t Source2V8System001 = 0x1670;
}

namespace valve_avi_dll {
    constexpr std::ptrdiff_t VAvi001 = 0x2F90;
}

namespace valve_wmf_dll {
    constexpr std::ptrdiff_t VMediaFoundation001 = 0x12D0;
}

namespace vphysics2_dll {
    constexpr std::ptrdiff_t VPhysics2_Handle_Interface_001 = 0x5FA50;
    constexpr std::ptrdiff_t VPhysics2_Interface_001 = 0x5B7F0;
}

namespace vscript_dll {
    constexpr std::ptrdiff_t VScriptManager010 = 0x31DA0;
}

namespace vstdlib_s64_dll {
    constexpr std::ptrdiff_t IVALIDATE001 = 0x24FF0;
    constexpr std::ptrdiff_t VEngineCvar002 = 0x5750;
}

namespace worldrenderer_dll {
    constexpr std::ptrdiff_t WorldRendererMgr001 = 0x21530;
}