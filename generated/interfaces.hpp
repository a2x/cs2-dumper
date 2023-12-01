/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 1 Dec 2023 04:38:02 +0000
 */

#pragma once

#include <cstddef>

namespace animationsystem_dll { // animationsystem.dll
    constexpr std::ptrdiff_t AnimationSystemUtils_001 = 0x64670;
    constexpr std::ptrdiff_t AnimationSystem_001 = 0x5F1D0;
}

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t LegacyGameUI001 = 0x89F5C0;
    constexpr std::ptrdiff_t Source2ClientUI001 = 0x88E800;
    constexpr std::ptrdiff_t Source2ClientPrediction001 = 0x7A6970;
    constexpr std::ptrdiff_t ClientToolsInfo_001 = 0x732720;
    constexpr std::ptrdiff_t Source2Client002 = 0x732740;
    constexpr std::ptrdiff_t GameClientExports001 = 0x732730;
    constexpr std::ptrdiff_t EmptyWorldService001_Client = 0x490110;
    constexpr std::ptrdiff_t Source2ClientConfig001 = 0x477050;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t SimpleEngineLoopService_001 = 0x1E4620;
    constexpr std::ptrdiff_t ClientServerEngineLoopService_001 = 0x1DA110;
    constexpr std::ptrdiff_t KeyValueCache001 = 0x1D6750;
    constexpr std::ptrdiff_t HostStateMgr001 = 0x1D3F50;
    constexpr std::ptrdiff_t GameEventSystemServerV001 = 0x1CF5F0;
    constexpr std::ptrdiff_t GameEventSystemClientV001 = 0x1CF5E0;
    constexpr std::ptrdiff_t EngineServiceMgr001 = 0x1CB2B0;
    constexpr std::ptrdiff_t VProfService_001 = 0x1B8BB0;
    constexpr std::ptrdiff_t ToolService_001 = 0x1B7900;
    constexpr std::ptrdiff_t StatsService_001 = 0x1B2B80;
    constexpr std::ptrdiff_t SplitScreenService_001 = 0x1AFD20;
    constexpr std::ptrdiff_t SoundService_001 = 0x1AA800;
    constexpr std::ptrdiff_t ScreenshotService001 = 0x1A66D0;
    constexpr std::ptrdiff_t RenderService_001 = 0x1A3A30;
    constexpr std::ptrdiff_t NetworkService_001 = 0x1A3540;
    constexpr std::ptrdiff_t NetworkServerService_001 = 0x19E3F0;
    constexpr std::ptrdiff_t NetworkP2PService_001 = 0x199EA0;
    constexpr std::ptrdiff_t NetworkClientService_001 = 0x193B30;
    constexpr std::ptrdiff_t MapListService_001 = 0x18CB00;
    constexpr std::ptrdiff_t InputService_001 = 0x17ABE0;
    constexpr std::ptrdiff_t GameUIService_001 = 0x175310;
    constexpr std::ptrdiff_t GameResourceServiceServerV001 = 0x173070;
    constexpr std::ptrdiff_t GameResourceServiceClientV001 = 0x173060;
    constexpr std::ptrdiff_t BugService001 = 0x16C050;
    constexpr std::ptrdiff_t BenchmarkService001 = 0x16A7F0;
    constexpr std::ptrdiff_t VENGINE_GAMEUIFUNCS_VERSION005 = 0x118300;
    constexpr std::ptrdiff_t EngineGameUI001 = 0x117690;
    constexpr std::ptrdiff_t INETSUPPORT_001 = 0xE6CD0;
    constexpr std::ptrdiff_t Source2EngineToServerStringTable001 = 0xA2150;
    constexpr std::ptrdiff_t Source2EngineToServer001 = 0x8B160;
    constexpr std::ptrdiff_t Source2EngineToClientStringTable001 = 0x83C30;
    constexpr std::ptrdiff_t Source2EngineToClient001 = 0x5A3D0;
}

namespace filesystem_stdio_dll { // filesystem_stdio.dll
    constexpr std::ptrdiff_t VAsyncFileSystem2_001 = 0x66D30;
    constexpr std::ptrdiff_t VFileSystem017 = 0x66D20;
}

namespace host_dll { // host.dll
    constexpr std::ptrdiff_t Source2Host001 = 0x18E10;
    constexpr std::ptrdiff_t SinglePlayerSharedMemory001 = 0x18A90;
    constexpr std::ptrdiff_t SaveRestoreDataVersion001 = 0x18A80;
    constexpr std::ptrdiff_t PredictionDiffManager001 = 0x16E20;
    constexpr std::ptrdiff_t HostUtils001 = 0x12550;
    constexpr std::ptrdiff_t GameSystem2HostHook = 0x11DA0;
    constexpr std::ptrdiff_t GameModelInfo001 = 0x11CC0;
    constexpr std::ptrdiff_t DebugDrawQueueManager001 = 0x11710;
}

namespace imemanager_dll { // imemanager.dll
    constexpr std::ptrdiff_t IMEManager001 = 0xC470;
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t InputSystemVersion001 = 0x28D0;
    constexpr std::ptrdiff_t InputStackSystemVersion001 = 0x16F0;
}

namespace localize_dll { // localize.dll
    constexpr std::ptrdiff_t Localize_001 = 0x3830;
}

namespace matchmaking_dll { // matchmaking.dll
    constexpr std::ptrdiff_t GameTypes001 = 0x50300;
    constexpr std::ptrdiff_t MATCHFRAMEWORK_001 = 0x1017D0;
}

namespace materialsystem2_dll { // materialsystem2.dll
    constexpr std::ptrdiff_t MaterialUtils_001 = 0x4DB90;
    constexpr std::ptrdiff_t TextLayout_001 = 0x4A2E0;
    constexpr std::ptrdiff_t PostProcessingSystem_001 = 0x42A60;
    constexpr std::ptrdiff_t FontManager_001 = 0x37900;
    constexpr std::ptrdiff_t VMaterialSystem2_001 = 0x25EC0;
}

namespace meshsystem_dll { // meshsystem.dll
    constexpr std::ptrdiff_t MeshSystem001 = 0x7270;
}

namespace navsystem_dll { // navsystem.dll
    constexpr std::ptrdiff_t NavSystem001 = 0x76F0;
}

namespace networksystem_dll { // networksystem.dll
    constexpr std::ptrdiff_t SerializedEntitiesVersion001 = 0xD15B0;
    constexpr std::ptrdiff_t NetworkSystemVersion001 = 0xBBF40;
    constexpr std::ptrdiff_t NetworkMessagesVersion001 = 0x9C690;
    constexpr std::ptrdiff_t FlattenedSerializersVersion001 = 0x7C400;
}

namespace panorama_dll { // panorama.dll
    constexpr std::ptrdiff_t PanoramaUIEngine001 = 0x57EE0;
}

namespace panorama_text_pango_dll { // panorama_text_pango.dll
    constexpr std::ptrdiff_t PanoramaTextServices001 = 0x4CBD0;
}

namespace panoramauiclient_dll { // panoramauiclient.dll
    constexpr std::ptrdiff_t PanoramaUIClient001 = 0x12780;
}

namespace particles_dll { // particles.dll
    constexpr std::ptrdiff_t ParticleSystemMgr003 = 0x52D20;
}

namespace pulse_system_dll { // pulse_system.dll
    constexpr std::ptrdiff_t IPulseSystem_001 = 0x5B30;
}

namespace rendersystemdx11_dll { // rendersystemdx11.dll
    constexpr std::ptrdiff_t RenderUtils_001 = 0x530F0;
    constexpr std::ptrdiff_t VRenderDeviceMgrBackdoor001 = 0x4A690;
    constexpr std::ptrdiff_t RenderDeviceMgr001 = 0x4A680;
}

namespace resourcesystem_dll { // resourcesystem.dll
    constexpr std::ptrdiff_t ResourceSystem013 = 0x10650;
}

namespace scenefilecache_dll { // scenefilecache.dll
    constexpr std::ptrdiff_t SceneFileCache002 = 0x68E0;
    constexpr std::ptrdiff_t ResponseRulesCache001 = 0x3190;
}

namespace scenesystem_dll { // scenesystem.dll
    constexpr std::ptrdiff_t SceneUtils_001 = 0x13C9E0;
    constexpr std::ptrdiff_t SceneSystem_002 = 0xCAA30;
    constexpr std::ptrdiff_t RenderingPipelines_001 = 0x8E8A0;
}

namespace schemasystem_dll { // schemasystem.dll
    constexpr std::ptrdiff_t SchemaSystem_001 = 0xA930;
}

namespace server_dll { // server.dll
    constexpr std::ptrdiff_t NavGameTest001 = 0xA3BDA0;
    constexpr std::ptrdiff_t ServerToolsInfo_001 = 0x83EB80;
    constexpr std::ptrdiff_t Source2GameClients001 = 0x83EB90;
    constexpr std::ptrdiff_t Source2GameEntities001 = 0x83EBA0;
    constexpr std::ptrdiff_t Source2Server001 = 0x83EBB0;
    constexpr std::ptrdiff_t EmptyWorldService001_Server = 0x591CC0;
    constexpr std::ptrdiff_t Source2ServerConfig001 = 0x571BF0;
    constexpr std::ptrdiff_t EntitySubclassUtilsV001 = 0x2D0850;
    constexpr std::ptrdiff_t customnavsystem001 = 0x24D880;
    constexpr std::ptrdiff_t Source2GameDirector001 = 0x145620;
}

namespace soundsystem_dll { // soundsystem.dll
    constexpr std::ptrdiff_t SoundOpSystem001 = 0x1567E0;
    constexpr std::ptrdiff_t SoundOpSystemEdit001 = 0x8BBC0;
    constexpr std::ptrdiff_t VMixEditTool001 = 0x71740;
    constexpr std::ptrdiff_t SoundSystem001 = 0x46540;
}

namespace steamaudio_dll { // steamaudio.dll
    constexpr std::ptrdiff_t SteamAudio001 = 0x12EE0;
}

namespace steamclient64_dll { // steamclient64.dll
    constexpr std::ptrdiff_t IVALIDATE001 = 0x8503A0;
    constexpr std::ptrdiff_t CLIENTENGINE_INTERFACE_VERSION005 = 0x84C250;
    constexpr std::ptrdiff_t SteamClient021 = 0x6466D0;
    constexpr std::ptrdiff_t SteamClient020 = 0x6466C0;
    constexpr std::ptrdiff_t SteamClient019 = 0x6466B0;
    constexpr std::ptrdiff_t SteamClient018 = 0x6466A0;
    constexpr std::ptrdiff_t SteamClient017 = 0x646690;
    constexpr std::ptrdiff_t SteamClient016 = 0x646680;
    constexpr std::ptrdiff_t SteamClient015 = 0x646670;
    constexpr std::ptrdiff_t SteamClient014 = 0x646660;
    constexpr std::ptrdiff_t SteamClient013 = 0x646650;
    constexpr std::ptrdiff_t SteamClient012 = 0x646640;
    constexpr std::ptrdiff_t SteamClient011 = 0x646630;
    constexpr std::ptrdiff_t SteamClient010 = 0x646620;
    constexpr std::ptrdiff_t SteamClient009 = 0x646610;
    constexpr std::ptrdiff_t SteamClient008 = 0x646600;
    constexpr std::ptrdiff_t SteamClient007 = 0x6465F0;
    constexpr std::ptrdiff_t SteamClient006 = 0x6465E0;
    constexpr std::ptrdiff_t p2pvoice002 = 0xD97D0;
    constexpr std::ptrdiff_t p2pvoicesingleton002 = 0xD6200;
}

namespace tier0_dll { // tier0.dll
    constexpr std::ptrdiff_t VStringTokenSystem001 = 0x18C2B0;
    constexpr std::ptrdiff_t TestScriptMgr001 = 0x13F610;
    constexpr std::ptrdiff_t VProcessUtils002 = 0x12F790;
    constexpr std::ptrdiff_t VEngineCvar007 = 0x61920;
}

namespace v8system_dll { // v8system.dll
    constexpr std::ptrdiff_t Source2V8System001 = 0x1670;
}

namespace valve_avi_dll { // valve_avi.dll
    constexpr std::ptrdiff_t VAvi001 = 0x2F90;
}

namespace valve_wmf_dll { // valve_wmf.dll
    constexpr std::ptrdiff_t VMediaFoundation001 = 0x12D0;
}

namespace vphysics2_dll { // vphysics2.dll
    constexpr std::ptrdiff_t VPhysics2_Handle_Interface_001 = 0x61120;
    constexpr std::ptrdiff_t VPhysics2_Interface_001 = 0x5C740;
}

namespace vscript_dll { // vscript.dll
    constexpr std::ptrdiff_t VScriptManager010 = 0x31DA0;
}

namespace vstdlib_s64_dll { // vstdlib_s64.dll
    constexpr std::ptrdiff_t IVALIDATE001 = 0x25000;
    constexpr std::ptrdiff_t VEngineCvar002 = 0x5760;
}

namespace worldrenderer_dll { // worldrenderer.dll
    constexpr std::ptrdiff_t WorldRendererMgr001 = 0x21650;
}