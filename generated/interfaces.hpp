/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 27 Oct 2023 01:03:23 +0000
 */

#pragma once

#include <cstddef>

namespace animationsystem_dll { // animationsystem.dll
    constexpr std::ptrdiff_t AnimationSystemUtils_001 = 0x64670;
    constexpr std::ptrdiff_t AnimationSystem_001 = 0x5F1D0;
}

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t LegacyGameUI001 = 0x892500;
    constexpr std::ptrdiff_t Source2ClientUI001 = 0x881220;
    constexpr std::ptrdiff_t Source2ClientPrediction001 = 0x79EB10;
    constexpr std::ptrdiff_t ClientToolsInfo_001 = 0x72AA20;
    constexpr std::ptrdiff_t Source2Client002 = 0x72AA40;
    constexpr std::ptrdiff_t GameClientExports001 = 0x72AA30;
    constexpr std::ptrdiff_t EmptyWorldService001_Client = 0x48C470;
    constexpr std::ptrdiff_t Source2ClientConfig001 = 0x473480;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t SimpleEngineLoopService_001 = 0x1E26D0;
    constexpr std::ptrdiff_t ClientServerEngineLoopService_001 = 0x1D83A0;
    constexpr std::ptrdiff_t KeyValueCache001 = 0x1D49E0;
    constexpr std::ptrdiff_t HostStateMgr001 = 0x1D23F0;
    constexpr std::ptrdiff_t GameEventSystemServerV001 = 0x1CDAB0;
    constexpr std::ptrdiff_t GameEventSystemClientV001 = 0x1CDAA0;
    constexpr std::ptrdiff_t EngineServiceMgr001 = 0x1C9790;
    constexpr std::ptrdiff_t VProfService_001 = 0x1B7220;
    constexpr std::ptrdiff_t ToolService_001 = 0x1B5F70;
    constexpr std::ptrdiff_t StatsService_001 = 0x1B11F0;
    constexpr std::ptrdiff_t SplitScreenService_001 = 0x1AE460;
    constexpr std::ptrdiff_t SoundService_001 = 0x1A8FB0;
    constexpr std::ptrdiff_t ScreenshotService001 = 0x1A4E80;
    constexpr std::ptrdiff_t RenderService_001 = 0x1A21E0;
    constexpr std::ptrdiff_t NetworkService_001 = 0x1A1CF0;
    constexpr std::ptrdiff_t NetworkServerService_001 = 0x19CD90;
    constexpr std::ptrdiff_t NetworkP2PService_001 = 0x1987A0;
    constexpr std::ptrdiff_t NetworkClientService_001 = 0x1923D0;
    constexpr std::ptrdiff_t MapListService_001 = 0x18B3A0;
    constexpr std::ptrdiff_t InputService_001 = 0x179220;
    constexpr std::ptrdiff_t GameUIService_001 = 0x173A40;
    constexpr std::ptrdiff_t GameResourceServiceServerV001 = 0x1717A0;
    constexpr std::ptrdiff_t GameResourceServiceClientV001 = 0x171790;
    constexpr std::ptrdiff_t BugService001 = 0x16A7C0;
    constexpr std::ptrdiff_t BenchmarkService001 = 0x168F90;
    constexpr std::ptrdiff_t VENGINE_GAMEUIFUNCS_VERSION005 = 0x116B70;
    constexpr std::ptrdiff_t EngineGameUI001 = 0x115F00;
    constexpr std::ptrdiff_t INETSUPPORT_001 = 0xE6110;
    constexpr std::ptrdiff_t Source2EngineToServerStringTable001 = 0xA10E0;
    constexpr std::ptrdiff_t Source2EngineToServer001 = 0x8AF40;
    constexpr std::ptrdiff_t Source2EngineToClientStringTable001 = 0x83C60;
    constexpr std::ptrdiff_t Source2EngineToClient001 = 0x5A6A0;
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
    constexpr std::ptrdiff_t SerializedEntitiesVersion001 = 0xD1AE0;
    constexpr std::ptrdiff_t NetworkSystemVersion001 = 0xBBFA0;
    constexpr std::ptrdiff_t NetworkMessagesVersion001 = 0x9C040;
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
    constexpr std::ptrdiff_t SceneUtils_001 = 0x13D030;
    constexpr std::ptrdiff_t SceneSystem_002 = 0xCAE10;
    constexpr std::ptrdiff_t RenderingPipelines_001 = 0x8EED0;
}

namespace schemasystem_dll { // schemasystem.dll
    constexpr std::ptrdiff_t SchemaSystem_001 = 0xA930;
}

namespace server_dll { // server.dll
    constexpr std::ptrdiff_t NavGameTest001 = 0xA2D610;
    constexpr std::ptrdiff_t ServerToolsInfo_001 = 0x831EE0;
    constexpr std::ptrdiff_t Source2GameClients001 = 0x831EF0;
    constexpr std::ptrdiff_t Source2GameEntities001 = 0x831F00;
    constexpr std::ptrdiff_t Source2Server001 = 0x831F10;
    constexpr std::ptrdiff_t EmptyWorldService001_Server = 0x588530;
    constexpr std::ptrdiff_t Source2ServerConfig001 = 0x568530;
    constexpr std::ptrdiff_t EntitySubclassUtilsV001 = 0x2C87D0;
    constexpr std::ptrdiff_t customnavsystem001 = 0x2451B0;
    constexpr std::ptrdiff_t Source2GameDirector001 = 0x13F130;
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
    constexpr std::ptrdiff_t IVALIDATE001 = 0x83A8B0;
    constexpr std::ptrdiff_t CLIENTENGINE_INTERFACE_VERSION005 = 0x836760;
    constexpr std::ptrdiff_t SteamClient020 = 0x6313C0;
    constexpr std::ptrdiff_t SteamClient019 = 0x6313B0;
    constexpr std::ptrdiff_t SteamClient018 = 0x6313A0;
    constexpr std::ptrdiff_t SteamClient017 = 0x631390;
    constexpr std::ptrdiff_t SteamClient016 = 0x631380;
    constexpr std::ptrdiff_t SteamClient015 = 0x631370;
    constexpr std::ptrdiff_t SteamClient014 = 0x631360;
    constexpr std::ptrdiff_t SteamClient013 = 0x631350;
    constexpr std::ptrdiff_t SteamClient012 = 0x631340;
    constexpr std::ptrdiff_t SteamClient011 = 0x631330;
    constexpr std::ptrdiff_t SteamClient010 = 0x631320;
    constexpr std::ptrdiff_t SteamClient009 = 0x631310;
    constexpr std::ptrdiff_t SteamClient008 = 0x631300;
    constexpr std::ptrdiff_t SteamClient007 = 0x6312F0;
    constexpr std::ptrdiff_t SteamClient006 = 0x6312E0;
    constexpr std::ptrdiff_t p2pvoice002 = 0xD93D0;
    constexpr std::ptrdiff_t p2pvoicesingleton002 = 0xD5D70;
}

namespace tier0_dll { // tier0.dll
    constexpr std::ptrdiff_t VStringTokenSystem001 = 0x18C060;
    constexpr std::ptrdiff_t TestScriptMgr001 = 0x13F3C0;
    constexpr std::ptrdiff_t VProcessUtils002 = 0x12F540;
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
    constexpr std::ptrdiff_t WorldRendererMgr001 = 0x21530;
}