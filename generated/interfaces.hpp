/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 9 Feb 2024 02:38:11 +0000
 */

#pragma once

#include <cstddef>

namespace animationsystem_dll { // animationsystem.dll
    constexpr std::ptrdiff_t AnimationSystemUtils_001 = 0x72E80;
    constexpr std::ptrdiff_t AnimationSystem_001 = 0x6DA00;
}

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t LegacyGameUI001 = 0x8AA820;
    constexpr std::ptrdiff_t Source2ClientUI001 = 0x899A80;
    constexpr std::ptrdiff_t Source2ClientPrediction001 = 0x7AC9B0;
    constexpr std::ptrdiff_t ClientToolsInfo_001 = 0x7312C0;
    constexpr std::ptrdiff_t Source2Client002 = 0x7312E0;
    constexpr std::ptrdiff_t GameClientExports001 = 0x7312D0;
    constexpr std::ptrdiff_t EmptyWorldService001_Client = 0x483D80;
    constexpr std::ptrdiff_t Source2ClientConfig001 = 0x46E9A0;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t SimpleEngineLoopService_001 = 0x1F5730;
    constexpr std::ptrdiff_t ClientServerEngineLoopService_001 = 0x1E9610;
    constexpr std::ptrdiff_t KeyValueCache001 = 0x1E5D70;
    constexpr std::ptrdiff_t HostStateMgr001 = 0x1E3550;
    constexpr std::ptrdiff_t GameEventSystemServerV001 = 0x1DEB00;
    constexpr std::ptrdiff_t GameEventSystemClientV001 = 0x1DEAF0;
    constexpr std::ptrdiff_t EngineServiceMgr001 = 0x1DA450;
    constexpr std::ptrdiff_t VProfService_001 = 0x1C7A30;
    constexpr std::ptrdiff_t ToolService_001 = 0x1C66B0;
    constexpr std::ptrdiff_t StatsService_001 = 0x1C1A60;
    constexpr std::ptrdiff_t SplitScreenService_001 = 0x1BED80;
    constexpr std::ptrdiff_t SoundService_001 = 0x1B84C0;
    constexpr std::ptrdiff_t ScreenshotService001 = 0x1B3EC0;
    constexpr std::ptrdiff_t RenderService_001 = 0x1B1500;
    constexpr std::ptrdiff_t NetworkService_001 = 0x1B1010;
    constexpr std::ptrdiff_t NetworkServerService_001 = 0x1ABDF0;
    constexpr std::ptrdiff_t NetworkP2PService_001 = 0x1A7880;
    constexpr std::ptrdiff_t NetworkClientService_001 = 0x1A0B40;
    constexpr std::ptrdiff_t MapListService_001 = 0x199980;
    constexpr std::ptrdiff_t InputService_001 = 0x1871E0;
    constexpr std::ptrdiff_t GameUIService_001 = 0x1816E0;
    constexpr std::ptrdiff_t GameResourceServiceServerV001 = 0x17ED40;
    constexpr std::ptrdiff_t GameResourceServiceClientV001 = 0x17ED30;
    constexpr std::ptrdiff_t BugService001 = 0x177B70;
    constexpr std::ptrdiff_t BenchmarkService001 = 0x176310;
    constexpr std::ptrdiff_t VENGINE_GAMEUIFUNCS_VERSION005 = 0x122150;
    constexpr std::ptrdiff_t EngineGameUI001 = 0x1214E0;
    constexpr std::ptrdiff_t INETSUPPORT_001 = 0xF0530;
    constexpr std::ptrdiff_t Source2EngineToServerStringTable001 = 0xA9170;
    constexpr std::ptrdiff_t Source2EngineToServer001 = 0x91F40;
    constexpr std::ptrdiff_t Source2EngineToClientStringTable001 = 0x8A970;
    constexpr std::ptrdiff_t Source2EngineToClient001 = 0x61890;
}

namespace filesystem_stdio_dll { // filesystem_stdio.dll
    constexpr std::ptrdiff_t VAsyncFileSystem2_001 = 0x67960;
    constexpr std::ptrdiff_t VFileSystem017 = 0x67950;
}

namespace host_dll { // host.dll
    constexpr std::ptrdiff_t Source2Host001 = 0x193F0;
    constexpr std::ptrdiff_t SinglePlayerSharedMemory001 = 0x19070;
    constexpr std::ptrdiff_t SaveRestoreDataVersion001 = 0x19060;
    constexpr std::ptrdiff_t PredictionDiffManager001 = 0x17340;
    constexpr std::ptrdiff_t HostUtils001 = 0x12920;
    constexpr std::ptrdiff_t GameSystem2HostHook = 0x12170;
    constexpr std::ptrdiff_t GameModelInfo001 = 0x12090;
    constexpr std::ptrdiff_t DebugDrawQueueManager001 = 0x11AE0;
}

namespace imemanager_dll { // imemanager.dll
    constexpr std::ptrdiff_t IMEManager001 = 0xC470;
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t InputSystemVersion001 = 0x2A40;
    constexpr std::ptrdiff_t InputStackSystemVersion001 = 0x1850;
}

namespace localize_dll { // localize.dll
    constexpr std::ptrdiff_t Localize_001 = 0x3830;
}

namespace matchmaking_dll { // matchmaking.dll
    constexpr std::ptrdiff_t GameTypes001 = 0x53800;
    constexpr std::ptrdiff_t MATCHFRAMEWORK_001 = 0x105690;
}

namespace materialsystem2_dll { // materialsystem2.dll
    constexpr std::ptrdiff_t MaterialUtils_001 = 0x4DB40;
    constexpr std::ptrdiff_t TextLayout_001 = 0x4A200;
    constexpr std::ptrdiff_t PostProcessingSystem_001 = 0x42A80;
    constexpr std::ptrdiff_t FontManager_001 = 0x37A80;
    constexpr std::ptrdiff_t VMaterialSystem2_001 = 0x25F80;
}

namespace meshsystem_dll { // meshsystem.dll
    constexpr std::ptrdiff_t MeshSystem001 = 0x7440;
}

namespace navsystem_dll { // navsystem.dll
    constexpr std::ptrdiff_t NavSystem001 = 0x8E30;
}

namespace networksystem_dll { // networksystem.dll
    constexpr std::ptrdiff_t SerializedEntitiesVersion001 = 0xD5590;
    constexpr std::ptrdiff_t NetworkSystemVersion001 = 0xBF930;
    constexpr std::ptrdiff_t NetworkMessagesVersion001 = 0x9FBC0;
    constexpr std::ptrdiff_t FlattenedSerializersVersion001 = 0x7EF20;
}

namespace panorama_dll { // panorama.dll
    constexpr std::ptrdiff_t PanoramaUIEngine001 = 0x5D960;
}

namespace panorama_text_pango_dll { // panorama_text_pango.dll
    constexpr std::ptrdiff_t PanoramaTextServices001 = 0x4CBE0;
}

namespace panoramauiclient_dll { // panoramauiclient.dll
    constexpr std::ptrdiff_t PanoramaUIClient001 = 0x11F50;
}

namespace particles_dll { // particles.dll
    constexpr std::ptrdiff_t ParticleSystemMgr003 = 0x5C380;
}

namespace pulse_system_dll { // pulse_system.dll
    constexpr std::ptrdiff_t IPulseSystem_001 = 0x93C0;
}

namespace rendersystemdx11_dll { // rendersystemdx11.dll
    constexpr std::ptrdiff_t RenderUtils_001 = 0x53940;
    constexpr std::ptrdiff_t VRenderDeviceMgrBackdoor001 = 0x4B030;
    constexpr std::ptrdiff_t RenderDeviceMgr001 = 0x4B020;
}

namespace resourcesystem_dll { // resourcesystem.dll
    constexpr std::ptrdiff_t ResourceSystem013 = 0x10920;
}

namespace scenefilecache_dll { // scenefilecache.dll
    constexpr std::ptrdiff_t SceneFileCache002 = 0x6A60;
    constexpr std::ptrdiff_t ResponseRulesCache001 = 0x31A0;
}

namespace scenesystem_dll { // scenesystem.dll
    constexpr std::ptrdiff_t SceneUtils_001 = 0x12FCE0;
    constexpr std::ptrdiff_t SceneSystem_002 = 0xBD1F0;
    constexpr std::ptrdiff_t RenderingPipelines_001 = 0x86470;
}

namespace schemasystem_dll { // schemasystem.dll
    constexpr std::ptrdiff_t SchemaSystem_001 = 0xAA50;
}

namespace server_dll { // server.dll
    constexpr std::ptrdiff_t NavGameTest001 = 0xA418E0;
    constexpr std::ptrdiff_t ServerToolsInfo_001 = 0x82FFA0;
    constexpr std::ptrdiff_t Source2GameClients001 = 0x82FFB0;
    constexpr std::ptrdiff_t Source2GameEntities001 = 0x82FFC0;
    constexpr std::ptrdiff_t Source2Server001 = 0x82FFD0;
    constexpr std::ptrdiff_t EmptyWorldService001_Server = 0x5745B0;
    constexpr std::ptrdiff_t Source2ServerConfig001 = 0x565920;
    constexpr std::ptrdiff_t EntitySubclassUtilsV001 = 0x2B8F50;
    constexpr std::ptrdiff_t customnavsystem001 = 0x235E10;
    constexpr std::ptrdiff_t Source2GameDirector001 = 0x129FC0;
}

namespace soundsystem_dll { // soundsystem.dll
    constexpr std::ptrdiff_t SoundOpSystem001 = 0x16A640;
    constexpr std::ptrdiff_t SoundOpSystemEdit001 = 0x96A50;
    constexpr std::ptrdiff_t VMixEditTool001 = 0x75C30;
    constexpr std::ptrdiff_t SoundSystem001 = 0x48320;
}

namespace steamaudio_dll { // steamaudio.dll
    constexpr std::ptrdiff_t SteamAudio001 = 0x5AA70;
}

namespace steamclient64_dll { // steamclient64.dll
    constexpr std::ptrdiff_t IVALIDATE001 = 0x861720;
    constexpr std::ptrdiff_t CLIENTENGINE_INTERFACE_VERSION005 = 0x85D5D0;
    constexpr std::ptrdiff_t SteamClient021 = 0x65E570;
    constexpr std::ptrdiff_t SteamClient020 = 0x65E560;
    constexpr std::ptrdiff_t SteamClient019 = 0x65E550;
    constexpr std::ptrdiff_t SteamClient018 = 0x65E540;
    constexpr std::ptrdiff_t SteamClient017 = 0x65E530;
    constexpr std::ptrdiff_t SteamClient016 = 0x65E520;
    constexpr std::ptrdiff_t SteamClient015 = 0x65E510;
    constexpr std::ptrdiff_t SteamClient014 = 0x65E500;
    constexpr std::ptrdiff_t SteamClient013 = 0x65E4F0;
    constexpr std::ptrdiff_t SteamClient012 = 0x65E4E0;
    constexpr std::ptrdiff_t SteamClient011 = 0x65E4D0;
    constexpr std::ptrdiff_t SteamClient010 = 0x65E4C0;
    constexpr std::ptrdiff_t SteamClient009 = 0x65E4B0;
    constexpr std::ptrdiff_t SteamClient008 = 0x65E4A0;
    constexpr std::ptrdiff_t SteamClient007 = 0x65E490;
    constexpr std::ptrdiff_t SteamClient006 = 0x65E480;
    constexpr std::ptrdiff_t p2pvoice002 = 0xD9EB0;
    constexpr std::ptrdiff_t p2pvoicesingleton002 = 0xD6910;
}

namespace tier0_dll { // tier0.dll
    constexpr std::ptrdiff_t VStringTokenSystem001 = 0x190B00;
    constexpr std::ptrdiff_t TestScriptMgr001 = 0x140C90;
    constexpr std::ptrdiff_t VProcessUtils002 = 0x132170;
    constexpr std::ptrdiff_t VEngineCvar007 = 0x635C0;
}

namespace v8system_dll { // v8system.dll
    constexpr std::ptrdiff_t Source2V8System001 = 0x1690;
}

namespace valve_avi_dll { // valve_avi.dll
    constexpr std::ptrdiff_t VAvi001 = 0x2F90;
}

namespace valve_wmf_dll { // valve_wmf.dll
    constexpr std::ptrdiff_t VMediaFoundation001 = 0x12D0;
}

namespace vphysics2_dll { // vphysics2.dll
    constexpr std::ptrdiff_t VPhysics2_Handle_Interface_001 = 0x5BCB0;
    constexpr std::ptrdiff_t VPhysics2_Interface_001 = 0x57130;
}

namespace vscript_dll { // vscript.dll
    constexpr std::ptrdiff_t VScriptManager010 = 0x32000;
}

namespace vstdlib_s64_dll { // vstdlib_s64.dll
    constexpr std::ptrdiff_t IVALIDATE001 = 0x250E0;
    constexpr std::ptrdiff_t VEngineCvar002 = 0x5760;
}

namespace worldrenderer_dll { // worldrenderer.dll
    constexpr std::ptrdiff_t WorldRendererMgr001 = 0x205E0;
}