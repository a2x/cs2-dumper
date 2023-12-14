/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 14 Dec 2023 11:58:27 +0000
 */

#pragma once

#include <cstddef>

namespace animationsystem_dll { // animationsystem.dll
    constexpr std::ptrdiff_t AnimationSystemUtils_001 = 0x64670;
    constexpr std::ptrdiff_t AnimationSystem_001 = 0x5F1D0;
}

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t LegacyGameUI001 = 0x8A21A0;
    constexpr std::ptrdiff_t Source2ClientUI001 = 0x8913E0;
    constexpr std::ptrdiff_t Source2ClientPrediction001 = 0x7A9770;
    constexpr std::ptrdiff_t ClientToolsInfo_001 = 0x735540;
    constexpr std::ptrdiff_t Source2Client002 = 0x735560;
    constexpr std::ptrdiff_t GameClientExports001 = 0x735550;
    constexpr std::ptrdiff_t EmptyWorldService001_Client = 0x490940;
    constexpr std::ptrdiff_t Source2ClientConfig001 = 0x477880;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t SimpleEngineLoopService_001 = 0x1E65E0;
    constexpr std::ptrdiff_t ClientServerEngineLoopService_001 = 0x1DC0E0;
    constexpr std::ptrdiff_t KeyValueCache001 = 0x1D8720;
    constexpr std::ptrdiff_t HostStateMgr001 = 0x1D5F20;
    constexpr std::ptrdiff_t GameEventSystemServerV001 = 0x1D15C0;
    constexpr std::ptrdiff_t GameEventSystemClientV001 = 0x1D15B0;
    constexpr std::ptrdiff_t EngineServiceMgr001 = 0x1CD280;
    constexpr std::ptrdiff_t VProfService_001 = 0x1BAA30;
    constexpr std::ptrdiff_t ToolService_001 = 0x1B9780;
    constexpr std::ptrdiff_t StatsService_001 = 0x1B4A00;
    constexpr std::ptrdiff_t SplitScreenService_001 = 0x1B1BA0;
    constexpr std::ptrdiff_t SoundService_001 = 0x1AB680;
    constexpr std::ptrdiff_t ScreenshotService001 = 0x1A70F0;
    constexpr std::ptrdiff_t RenderService_001 = 0x1A4450;
    constexpr std::ptrdiff_t NetworkService_001 = 0x1A3F60;
    constexpr std::ptrdiff_t NetworkServerService_001 = 0x19EE10;
    constexpr std::ptrdiff_t NetworkP2PService_001 = 0x19A8C0;
    constexpr std::ptrdiff_t NetworkClientService_001 = 0x194550;
    constexpr std::ptrdiff_t MapListService_001 = 0x18D520;
    constexpr std::ptrdiff_t InputService_001 = 0x17B600;
    constexpr std::ptrdiff_t GameUIService_001 = 0x175D30;
    constexpr std::ptrdiff_t GameResourceServiceServerV001 = 0x173A90;
    constexpr std::ptrdiff_t GameResourceServiceClientV001 = 0x173A80;
    constexpr std::ptrdiff_t BugService001 = 0x16CA20;
    constexpr std::ptrdiff_t BenchmarkService001 = 0x16B1C0;
    constexpr std::ptrdiff_t VENGINE_GAMEUIFUNCS_VERSION005 = 0x1189D0;
    constexpr std::ptrdiff_t EngineGameUI001 = 0x117D60;
    constexpr std::ptrdiff_t INETSUPPORT_001 = 0xE73A0;
    constexpr std::ptrdiff_t Source2EngineToServerStringTable001 = 0xA2820;
    constexpr std::ptrdiff_t Source2EngineToServer001 = 0x8B7D0;
    constexpr std::ptrdiff_t Source2EngineToClientStringTable001 = 0x842A0;
    constexpr std::ptrdiff_t Source2EngineToClient001 = 0x5AA30;
}

namespace filesystem_stdio_dll { // filesystem_stdio.dll
    constexpr std::ptrdiff_t VAsyncFileSystem2_001 = 0x679D0;
    constexpr std::ptrdiff_t VFileSystem017 = 0x679C0;
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
    constexpr std::ptrdiff_t MaterialUtils_001 = 0x4DCB0;
    constexpr std::ptrdiff_t TextLayout_001 = 0x4A400;
    constexpr std::ptrdiff_t PostProcessingSystem_001 = 0x42B80;
    constexpr std::ptrdiff_t FontManager_001 = 0x37A20;
    constexpr std::ptrdiff_t VMaterialSystem2_001 = 0x25FC0;
}

namespace meshsystem_dll { // meshsystem.dll
    constexpr std::ptrdiff_t MeshSystem001 = 0x7270;
}

namespace navsystem_dll { // navsystem.dll
    constexpr std::ptrdiff_t NavSystem001 = 0x76F0;
}

namespace networksystem_dll { // networksystem.dll
    constexpr std::ptrdiff_t SerializedEntitiesVersion001 = 0xD1920;
    constexpr std::ptrdiff_t NetworkSystemVersion001 = 0xBC2B0;
    constexpr std::ptrdiff_t NetworkMessagesVersion001 = 0x9CA00;
    constexpr std::ptrdiff_t FlattenedSerializersVersion001 = 0x7C770;
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
    constexpr std::ptrdiff_t RenderUtils_001 = 0x53100;
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
    constexpr std::ptrdiff_t NavGameTest001 = 0xA3D210;
    constexpr std::ptrdiff_t ServerToolsInfo_001 = 0x840050;
    constexpr std::ptrdiff_t Source2GameClients001 = 0x840060;
    constexpr std::ptrdiff_t Source2GameEntities001 = 0x840070;
    constexpr std::ptrdiff_t Source2Server001 = 0x840080;
    constexpr std::ptrdiff_t EmptyWorldService001_Server = 0x5920A0;
    constexpr std::ptrdiff_t Source2ServerConfig001 = 0x571FD0;
    constexpr std::ptrdiff_t EntitySubclassUtilsV001 = 0x2D0880;
    constexpr std::ptrdiff_t customnavsystem001 = 0x24D8C0;
    constexpr std::ptrdiff_t Source2GameDirector001 = 0x145660;
}

namespace soundsystem_dll { // soundsystem.dll
    constexpr std::ptrdiff_t SoundOpSystem001 = 0x157B00;
    constexpr std::ptrdiff_t SoundOpSystemEdit001 = 0x8CEE0;
    constexpr std::ptrdiff_t VMixEditTool001 = 0x71FF0;
    constexpr std::ptrdiff_t SoundSystem001 = 0x46AE0;
}

namespace steamaudio_dll { // steamaudio.dll
    constexpr std::ptrdiff_t SteamAudio001 = 0x12EE0;
}

namespace steamclient64_dll { // steamclient64.dll
    constexpr std::ptrdiff_t IVALIDATE001 = 0x84FE60;
    constexpr std::ptrdiff_t CLIENTENGINE_INTERFACE_VERSION005 = 0x84BD10;
    constexpr std::ptrdiff_t SteamClient021 = 0x646160;
    constexpr std::ptrdiff_t SteamClient020 = 0x646150;
    constexpr std::ptrdiff_t SteamClient019 = 0x646140;
    constexpr std::ptrdiff_t SteamClient018 = 0x646130;
    constexpr std::ptrdiff_t SteamClient017 = 0x646120;
    constexpr std::ptrdiff_t SteamClient016 = 0x646110;
    constexpr std::ptrdiff_t SteamClient015 = 0x646100;
    constexpr std::ptrdiff_t SteamClient014 = 0x6460F0;
    constexpr std::ptrdiff_t SteamClient013 = 0x6460E0;
    constexpr std::ptrdiff_t SteamClient012 = 0x6460D0;
    constexpr std::ptrdiff_t SteamClient011 = 0x6460C0;
    constexpr std::ptrdiff_t SteamClient010 = 0x6460B0;
    constexpr std::ptrdiff_t SteamClient009 = 0x6460A0;
    constexpr std::ptrdiff_t SteamClient008 = 0x646090;
    constexpr std::ptrdiff_t SteamClient007 = 0x646080;
    constexpr std::ptrdiff_t SteamClient006 = 0x646070;
    constexpr std::ptrdiff_t p2pvoice002 = 0xD97C0;
    constexpr std::ptrdiff_t p2pvoicesingleton002 = 0xD6220;
}

namespace tier0_dll { // tier0.dll
    constexpr std::ptrdiff_t VStringTokenSystem001 = 0x18C360;
    constexpr std::ptrdiff_t TestScriptMgr001 = 0x13F6C0;
    constexpr std::ptrdiff_t VProcessUtils002 = 0x12F840;
    constexpr std::ptrdiff_t VEngineCvar007 = 0x619D0;
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