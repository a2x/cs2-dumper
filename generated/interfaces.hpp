/*
 * https://github.com/a2x/cs2-dumper
 * 2023-10-18 10:31:51.204572300 UTC
 */

#pragma once

#include <cstddef>

namespace AnimationsystemDll {
    constexpr std::ptrdiff_t AnimationSystemUtils_001 = 0x64670;
    constexpr std::ptrdiff_t AnimationSystem_001 = 0x5F1D0;
}

namespace ClientDll {
    constexpr std::ptrdiff_t LegacyGameUI001 = 0x88FF10;
    constexpr std::ptrdiff_t Source2ClientUI001 = 0x87E9B0;
    constexpr std::ptrdiff_t Source2ClientPrediction001 = 0x79C1F0;
    constexpr std::ptrdiff_t ClientToolsInfo_001 = 0x728100;
    constexpr std::ptrdiff_t Source2Client002 = 0x728120;
    constexpr std::ptrdiff_t GameClientExports001 = 0x728110;
    constexpr std::ptrdiff_t EmptyWorldService001_Client = 0x48BCC0;
    constexpr std::ptrdiff_t Source2ClientConfig001 = 0x472CD0;
}

namespace Engine2Dll {
    constexpr std::ptrdiff_t SimpleEngineLoopService_001 = 0x1E1FD0;
    constexpr std::ptrdiff_t ClientServerEngineLoopService_001 = 0x1D7CA0;
    constexpr std::ptrdiff_t KeyValueCache001 = 0x1D42E0;
    constexpr std::ptrdiff_t HostStateMgr001 = 0x1D1CF0;
    constexpr std::ptrdiff_t GameEventSystemServerV001 = 0x1CD3B0;
    constexpr std::ptrdiff_t GameEventSystemClientV001 = 0x1CD3A0;
    constexpr std::ptrdiff_t EngineServiceMgr001 = 0x1C9090;
    constexpr std::ptrdiff_t VProfService_001 = 0x1B6B70;
    constexpr std::ptrdiff_t ToolService_001 = 0x1B58C0;
    constexpr std::ptrdiff_t StatsService_001 = 0x1B0B40;
    constexpr std::ptrdiff_t SplitScreenService_001 = 0x1ADDB0;
    constexpr std::ptrdiff_t SoundService_001 = 0x1A8900;
    constexpr std::ptrdiff_t ScreenshotService001 = 0x1A47D0;
    constexpr std::ptrdiff_t RenderService_001 = 0x1A1B30;
    constexpr std::ptrdiff_t NetworkService_001 = 0x1A1640;
    constexpr std::ptrdiff_t NetworkServerService_001 = 0x19C6E0;
    constexpr std::ptrdiff_t NetworkP2PService_001 = 0x1980F0;
    constexpr std::ptrdiff_t NetworkClientService_001 = 0x191D20;
    constexpr std::ptrdiff_t MapListService_001 = 0x18ACF0;
    constexpr std::ptrdiff_t InputService_001 = 0x178B70;
    constexpr std::ptrdiff_t GameUIService_001 = 0x173390;
    constexpr std::ptrdiff_t GameResourceServiceServerV001 = 0x1710F0;
    constexpr std::ptrdiff_t GameResourceServiceClientV001 = 0x1710E0;
    constexpr std::ptrdiff_t BugService001 = 0x16A110;
    constexpr std::ptrdiff_t BenchmarkService001 = 0x1688E0;
    constexpr std::ptrdiff_t VENGINE_GAMEUIFUNCS_VERSION005 = 0x1164C0;
    constexpr std::ptrdiff_t EngineGameUI001 = 0x115850;
    constexpr std::ptrdiff_t INETSUPPORT_001 = 0xE5A60;
    constexpr std::ptrdiff_t Source2EngineToServerStringTable001 = 0xA0BE0;
    constexpr std::ptrdiff_t Source2EngineToServer001 = 0x8AA70;
    constexpr std::ptrdiff_t Source2EngineToClientStringTable001 = 0x83790;
    constexpr std::ptrdiff_t Source2EngineToClient001 = 0x5A1D0;
}

namespace FilesystemStdioDll {
    constexpr std::ptrdiff_t VAsyncFileSystem2_001 = 0x66D30;
    constexpr std::ptrdiff_t VFileSystem017 = 0x66D20;
}

namespace HostDll {
    constexpr std::ptrdiff_t Source2Host001 = 0x18E10;
    constexpr std::ptrdiff_t SinglePlayerSharedMemory001 = 0x18A90;
    constexpr std::ptrdiff_t SaveRestoreDataVersion001 = 0x18A80;
    constexpr std::ptrdiff_t PredictionDiffManager001 = 0x16E20;
    constexpr std::ptrdiff_t HostUtils001 = 0x12550;
    constexpr std::ptrdiff_t GameSystem2HostHook = 0x11DA0;
    constexpr std::ptrdiff_t GameModelInfo001 = 0x11CC0;
    constexpr std::ptrdiff_t DebugDrawQueueManager001 = 0x11710;
}

namespace ImemanagerDll {
    constexpr std::ptrdiff_t IMEManager001 = 0xC470;
}

namespace InputsystemDll {
    constexpr std::ptrdiff_t InputSystemVersion001 = 0x28D0;
    constexpr std::ptrdiff_t InputStackSystemVersion001 = 0x16F0;
}

namespace LocalizeDll {
    constexpr std::ptrdiff_t Localize_001 = 0x3830;
}

namespace MatchmakingDll {
    constexpr std::ptrdiff_t GameTypes001 = 0x50270;
    constexpr std::ptrdiff_t MATCHFRAMEWORK_001 = 0x101030;
}

namespace Materialsystem2Dll {
    constexpr std::ptrdiff_t MaterialUtils_001 = 0x4DB90;
    constexpr std::ptrdiff_t TextLayout_001 = 0x4A2E0;
    constexpr std::ptrdiff_t PostProcessingSystem_001 = 0x42A60;
    constexpr std::ptrdiff_t FontManager_001 = 0x37900;
    constexpr std::ptrdiff_t VMaterialSystem2_001 = 0x25EC0;
}

namespace MeshsystemDll {
    constexpr std::ptrdiff_t MeshSystem001 = 0x7270;
}

namespace NavsystemDll {
    constexpr std::ptrdiff_t NavSystem001 = 0x76F0;
}

namespace NetworksystemDll {
    constexpr std::ptrdiff_t SerializedEntitiesVersion001 = 0xD1A70;
    constexpr std::ptrdiff_t NetworkSystemVersion001 = 0xBBF80;
    constexpr std::ptrdiff_t NetworkMessagesVersion001 = 0x9C020;
    constexpr std::ptrdiff_t FlattenedSerializersVersion001 = 0x7B8A0;
}

namespace PanoramaDll {
    constexpr std::ptrdiff_t PanoramaUIEngine001 = 0x57EE0;
}

namespace PanoramaTextPangoDll {
    constexpr std::ptrdiff_t PanoramaTextServices001 = 0x4CBD0;
}

namespace PanoramauiclientDll {
    constexpr std::ptrdiff_t PanoramaUIClient001 = 0x12780;
}

namespace ParticlesDll {
    constexpr std::ptrdiff_t ParticleSystemMgr003 = 0x52D20;
}

namespace PulseSystemDll {
    constexpr std::ptrdiff_t IPulseSystem_001 = 0x5B80;
}

namespace Rendersystemdx11Dll {
    constexpr std::ptrdiff_t RenderUtils_001 = 0x52C90;
    constexpr std::ptrdiff_t VRenderDeviceMgrBackdoor001 = 0x4A3A0;
    constexpr std::ptrdiff_t RenderDeviceMgr001 = 0x4A390;
}

namespace ResourcesystemDll {
    constexpr std::ptrdiff_t ResourceSystem013 = 0x10650;
}

namespace ScenefilecacheDll {
    constexpr std::ptrdiff_t SceneFileCache002 = 0x68E0;
    constexpr std::ptrdiff_t ResponseRulesCache001 = 0x3190;
}

namespace ScenesystemDll {
    constexpr std::ptrdiff_t SceneUtils_001 = 0x13D030;
    constexpr std::ptrdiff_t SceneSystem_002 = 0xCAE10;
    constexpr std::ptrdiff_t RenderingPipelines_001 = 0x8EED0;
}

namespace SchemasystemDll {
    constexpr std::ptrdiff_t SchemaSystem_001 = 0xA930;
}

namespace ServerDll {
    constexpr std::ptrdiff_t NavGameTest001 = 0xA2D150;
    constexpr std::ptrdiff_t ServerToolsInfo_001 = 0x831AC0;
    constexpr std::ptrdiff_t Source2GameClients001 = 0x831AD0;
    constexpr std::ptrdiff_t Source2GameEntities001 = 0x831AE0;
    constexpr std::ptrdiff_t Source2Server001 = 0x831AF0;
    constexpr std::ptrdiff_t EmptyWorldService001_Server = 0x588490;
    constexpr std::ptrdiff_t Source2ServerConfig001 = 0x568490;
    constexpr std::ptrdiff_t EntitySubclassUtilsV001 = 0x2C8770;
    constexpr std::ptrdiff_t customnavsystem001 = 0x245270;
    constexpr std::ptrdiff_t Source2GameDirector001 = 0x13EFC0;
}

namespace SoundsystemDll {
    constexpr std::ptrdiff_t SoundOpSystem001 = 0x1567E0;
    constexpr std::ptrdiff_t SoundOpSystemEdit001 = 0x8BBC0;
    constexpr std::ptrdiff_t VMixEditTool001 = 0x71740;
    constexpr std::ptrdiff_t SoundSystem001 = 0x46540;
}

namespace SteamaudioDll {
    constexpr std::ptrdiff_t SteamAudio001 = 0x12EE0;
}

namespace Steamclient64Dll {
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

namespace Tier0Dll {
    constexpr std::ptrdiff_t VStringTokenSystem001 = 0x18C060;
    constexpr std::ptrdiff_t TestScriptMgr001 = 0x13F3C0;
    constexpr std::ptrdiff_t VProcessUtils002 = 0x12F540;
    constexpr std::ptrdiff_t VEngineCvar007 = 0x61920;
}

namespace V8SystemDll {
    constexpr std::ptrdiff_t Source2V8System001 = 0x1670;
}

namespace ValveAviDll {
    constexpr std::ptrdiff_t VAvi001 = 0x2F90;
}

namespace ValveWmfDll {
    constexpr std::ptrdiff_t VMediaFoundation001 = 0x12D0;
}

namespace Vphysics2Dll {
    constexpr std::ptrdiff_t VPhysics2_Handle_Interface_001 = 0x5FA50;
    constexpr std::ptrdiff_t VPhysics2_Interface_001 = 0x5B7F0;
}

namespace VscriptDll {
    constexpr std::ptrdiff_t VScriptManager010 = 0x31DA0;
}

namespace VstdlibS64Dll {
    constexpr std::ptrdiff_t IVALIDATE001 = 0x24FF0;
    constexpr std::ptrdiff_t VEngineCvar002 = 0x5750;
}

namespace WorldrendererDll {
    constexpr std::ptrdiff_t WorldRendererMgr001 = 0x21530;
}