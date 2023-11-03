/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 3 Nov 2023 01:49:49 +0000
 */

#pragma once

#include <cstddef>

namespace animationsystem_dll { // animationsystem.dll
    constexpr std::ptrdiff_t AnimationSystemUtils_001 = 0x64670;
    constexpr std::ptrdiff_t AnimationSystem_001 = 0x5F1D0;
}

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t LegacyGameUI001 = 0x8996A0;
    constexpr std::ptrdiff_t Source2ClientUI001 = 0x8883C0;
    constexpr std::ptrdiff_t Source2ClientPrediction001 = 0x7A1860;
    constexpr std::ptrdiff_t ClientToolsInfo_001 = 0x72D800;
    constexpr std::ptrdiff_t Source2Client002 = 0x72D820;
    constexpr std::ptrdiff_t GameClientExports001 = 0x72D810;
    constexpr std::ptrdiff_t EmptyWorldService001_Client = 0x48DEB0;
    constexpr std::ptrdiff_t Source2ClientConfig001 = 0x474EC0;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t SimpleEngineLoopService_001 = 0x1E32D0;
    constexpr std::ptrdiff_t ClientServerEngineLoopService_001 = 0x1D8FA0;
    constexpr std::ptrdiff_t KeyValueCache001 = 0x1D55E0;
    constexpr std::ptrdiff_t HostStateMgr001 = 0x1D2DE0;
    constexpr std::ptrdiff_t GameEventSystemServerV001 = 0x1CE480;
    constexpr std::ptrdiff_t GameEventSystemClientV001 = 0x1CE470;
    constexpr std::ptrdiff_t EngineServiceMgr001 = 0x1CA160;
    constexpr std::ptrdiff_t VProfService_001 = 0x1B7BF0;
    constexpr std::ptrdiff_t ToolService_001 = 0x1B6940;
    constexpr std::ptrdiff_t StatsService_001 = 0x1B1BC0;
    constexpr std::ptrdiff_t SplitScreenService_001 = 0x1AEE30;
    constexpr std::ptrdiff_t SoundService_001 = 0x1A9970;
    constexpr std::ptrdiff_t ScreenshotService001 = 0x1A5840;
    constexpr std::ptrdiff_t RenderService_001 = 0x1A2BA0;
    constexpr std::ptrdiff_t NetworkService_001 = 0x1A26B0;
    constexpr std::ptrdiff_t NetworkServerService_001 = 0x19D750;
    constexpr std::ptrdiff_t NetworkP2PService_001 = 0x199160;
    constexpr std::ptrdiff_t NetworkClientService_001 = 0x192D90;
    constexpr std::ptrdiff_t MapListService_001 = 0x18BD60;
    constexpr std::ptrdiff_t InputService_001 = 0x179BE0;
    constexpr std::ptrdiff_t GameUIService_001 = 0x174400;
    constexpr std::ptrdiff_t GameResourceServiceServerV001 = 0x172160;
    constexpr std::ptrdiff_t GameResourceServiceClientV001 = 0x172150;
    constexpr std::ptrdiff_t BugService001 = 0x16B180;
    constexpr std::ptrdiff_t BenchmarkService001 = 0x169950;
    constexpr std::ptrdiff_t VENGINE_GAMEUIFUNCS_VERSION005 = 0x116ED0;
    constexpr std::ptrdiff_t EngineGameUI001 = 0x116260;
    constexpr std::ptrdiff_t INETSUPPORT_001 = 0xE6470;
    constexpr std::ptrdiff_t Source2EngineToServerStringTable001 = 0xA1420;
    constexpr std::ptrdiff_t Source2EngineToServer001 = 0x8B260;
    constexpr std::ptrdiff_t Source2EngineToClientStringTable001 = 0x83F80;
    constexpr std::ptrdiff_t Source2EngineToClient001 = 0x5A9C0;
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
    constexpr std::ptrdiff_t GameTypes001 = 0x50270;
    constexpr std::ptrdiff_t MATCHFRAMEWORK_001 = 0x101030;
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
    constexpr std::ptrdiff_t SerializedEntitiesVersion001 = 0xD1AD0;
    constexpr std::ptrdiff_t NetworkSystemVersion001 = 0xBBF90;
    constexpr std::ptrdiff_t NetworkMessagesVersion001 = 0x9C030;
    constexpr std::ptrdiff_t FlattenedSerializersVersion001 = 0x7B8A0;
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
    constexpr std::ptrdiff_t IPulseSystem_001 = 0x5B80;
}

namespace rendersystemdx11_dll { // rendersystemdx11.dll
    constexpr std::ptrdiff_t RenderUtils_001 = 0x52FD0;
    constexpr std::ptrdiff_t VRenderDeviceMgrBackdoor001 = 0x4A4F0;
    constexpr std::ptrdiff_t RenderDeviceMgr001 = 0x4A4E0;
}

namespace resourcesystem_dll { // resourcesystem.dll
    constexpr std::ptrdiff_t ResourceSystem013 = 0x10650;
}

namespace scenefilecache_dll { // scenefilecache.dll
    constexpr std::ptrdiff_t SceneFileCache002 = 0x68E0;
    constexpr std::ptrdiff_t ResponseRulesCache001 = 0x3190;
}

namespace scenesystem_dll { // scenesystem.dll
    constexpr std::ptrdiff_t SceneUtils_001 = 0x13C370;
    constexpr std::ptrdiff_t SceneSystem_002 = 0xCA160;
    constexpr std::ptrdiff_t RenderingPipelines_001 = 0x8E420;
}

namespace schemasystem_dll { // schemasystem.dll
    constexpr std::ptrdiff_t SchemaSystem_001 = 0xA930;
}

namespace server_dll { // server.dll
    constexpr std::ptrdiff_t NavGameTest001 = 0xA346B0;
    constexpr std::ptrdiff_t ServerToolsInfo_001 = 0x838410;
    constexpr std::ptrdiff_t Source2GameClients001 = 0x838420;
    constexpr std::ptrdiff_t Source2GameEntities001 = 0x838430;
    constexpr std::ptrdiff_t Source2Server001 = 0x838440;
    constexpr std::ptrdiff_t EmptyWorldService001_Server = 0x58D6A0;
    constexpr std::ptrdiff_t Source2ServerConfig001 = 0x56D6B0;
    constexpr std::ptrdiff_t EntitySubclassUtilsV001 = 0x2CD440;
    constexpr std::ptrdiff_t customnavsystem001 = 0x24A370;
    constexpr std::ptrdiff_t Source2GameDirector001 = 0x151E80;
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
    constexpr std::ptrdiff_t IVALIDATE001 = 0x83A900;
    constexpr std::ptrdiff_t CLIENTENGINE_INTERFACE_VERSION005 = 0x8367B0;
    constexpr std::ptrdiff_t SteamClient020 = 0x631440;
    constexpr std::ptrdiff_t SteamClient019 = 0x631430;
    constexpr std::ptrdiff_t SteamClient018 = 0x631420;
    constexpr std::ptrdiff_t SteamClient017 = 0x631410;
    constexpr std::ptrdiff_t SteamClient016 = 0x631400;
    constexpr std::ptrdiff_t SteamClient015 = 0x6313F0;
    constexpr std::ptrdiff_t SteamClient014 = 0x6313E0;
    constexpr std::ptrdiff_t SteamClient013 = 0x6313D0;
    constexpr std::ptrdiff_t SteamClient012 = 0x6313C0;
    constexpr std::ptrdiff_t SteamClient011 = 0x6313B0;
    constexpr std::ptrdiff_t SteamClient010 = 0x6313A0;
    constexpr std::ptrdiff_t SteamClient009 = 0x631390;
    constexpr std::ptrdiff_t SteamClient008 = 0x631380;
    constexpr std::ptrdiff_t SteamClient007 = 0x631370;
    constexpr std::ptrdiff_t SteamClient006 = 0x631360;
    constexpr std::ptrdiff_t p2pvoice002 = 0xD93D0;
    constexpr std::ptrdiff_t p2pvoicesingleton002 = 0xD5D70;
}

namespace tier0_dll { // tier0.dll
    constexpr std::ptrdiff_t VStringTokenSystem001 = 0x18C100;
    constexpr std::ptrdiff_t TestScriptMgr001 = 0x13F460;
    constexpr std::ptrdiff_t VProcessUtils002 = 0x12F5E0;
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
    constexpr std::ptrdiff_t IVALIDATE001 = 0x24FF0;
    constexpr std::ptrdiff_t VEngineCvar002 = 0x5750;
}

namespace worldrenderer_dll { // worldrenderer.dll
    constexpr std::ptrdiff_t WorldRendererMgr001 = 0x21650;
}