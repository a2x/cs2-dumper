'''
Created using https://github.com/a2x/cs2-dumper
Sat, 4 Nov 2023 04:05:17 +0000
'''

class animationsystem_dll: # animationsystem.dll
    AnimationSystemUtils_001 = 0x64670
    AnimationSystem_001 = 0x5F1D0

class client_dll: # client.dll
    LegacyGameUI001 = 0x899820
    Source2ClientUI001 = 0x888530
    Source2ClientPrediction001 = 0x7A1860
    ClientToolsInfo_001 = 0x72DAA0
    Source2Client002 = 0x72DAC0
    GameClientExports001 = 0x72DAB0
    EmptyWorldService001_Client = 0x48DEF0
    Source2ClientConfig001 = 0x474F00

class engine2_dll: # engine2.dll
    SimpleEngineLoopService_001 = 0x1E3370
    ClientServerEngineLoopService_001 = 0x1D9040
    KeyValueCache001 = 0x1D5680
    HostStateMgr001 = 0x1D2E80
    GameEventSystemServerV001 = 0x1CE520
    GameEventSystemClientV001 = 0x1CE510
    EngineServiceMgr001 = 0x1CA200
    VProfService_001 = 0x1B7C90
    ToolService_001 = 0x1B69E0
    StatsService_001 = 0x1B1C60
    SplitScreenService_001 = 0x1AEED0
    SoundService_001 = 0x1A9A10
    ScreenshotService001 = 0x1A58E0
    RenderService_001 = 0x1A2C40
    NetworkService_001 = 0x1A2750
    NetworkServerService_001 = 0x19D7F0
    NetworkP2PService_001 = 0x199200
    NetworkClientService_001 = 0x192E30
    MapListService_001 = 0x18BE00
    InputService_001 = 0x179C80
    GameUIService_001 = 0x1744A0
    GameResourceServiceServerV001 = 0x172200
    GameResourceServiceClientV001 = 0x1721F0
    BugService001 = 0x16B220
    BenchmarkService001 = 0x1699F0
    VENGINE_GAMEUIFUNCS_VERSION005 = 0x116F70
    EngineGameUI001 = 0x116300
    INETSUPPORT_001 = 0xE6510
    Source2EngineToServerStringTable001 = 0xA14C0
    Source2EngineToServer001 = 0x8B300
    Source2EngineToClientStringTable001 = 0x84020
    Source2EngineToClient001 = 0x5AA60

class filesystem_stdio_dll: # filesystem_stdio.dll
    VAsyncFileSystem2_001 = 0x66D30
    VFileSystem017 = 0x66D20

class host_dll: # host.dll
    Source2Host001 = 0x18E10
    SinglePlayerSharedMemory001 = 0x18A90
    SaveRestoreDataVersion001 = 0x18A80
    PredictionDiffManager001 = 0x16E20
    HostUtils001 = 0x12550
    GameSystem2HostHook = 0x11DA0
    GameModelInfo001 = 0x11CC0
    DebugDrawQueueManager001 = 0x11710

class imemanager_dll: # imemanager.dll
    IMEManager001 = 0xC470

class inputsystem_dll: # inputsystem.dll
    InputSystemVersion001 = 0x28D0
    InputStackSystemVersion001 = 0x16F0

class localize_dll: # localize.dll
    Localize_001 = 0x3830

class matchmaking_dll: # matchmaking.dll
    GameTypes001 = 0x50270
    MATCHFRAMEWORK_001 = 0x101030

class materialsystem2_dll: # materialsystem2.dll
    MaterialUtils_001 = 0x4DB90
    TextLayout_001 = 0x4A2E0
    PostProcessingSystem_001 = 0x42A60
    FontManager_001 = 0x37900
    VMaterialSystem2_001 = 0x25EC0

class meshsystem_dll: # meshsystem.dll
    MeshSystem001 = 0x7270

class navsystem_dll: # navsystem.dll
    NavSystem001 = 0x76F0

class networksystem_dll: # networksystem.dll
    SerializedEntitiesVersion001 = 0xD1AD0
    NetworkSystemVersion001 = 0xBBF90
    NetworkMessagesVersion001 = 0x9C030
    FlattenedSerializersVersion001 = 0x7B8A0

class panorama_dll: # panorama.dll
    PanoramaUIEngine001 = 0x57EE0

class panorama_text_pango_dll: # panorama_text_pango.dll
    PanoramaTextServices001 = 0x4CBD0

class panoramauiclient_dll: # panoramauiclient.dll
    PanoramaUIClient001 = 0x12780

class particles_dll: # particles.dll
    ParticleSystemMgr003 = 0x52D20

class pulse_system_dll: # pulse_system.dll
    IPulseSystem_001 = 0x5B80

class rendersystemdx11_dll: # rendersystemdx11.dll
    RenderUtils_001 = 0x52FD0
    VRenderDeviceMgrBackdoor001 = 0x4A4F0
    RenderDeviceMgr001 = 0x4A4E0

class resourcesystem_dll: # resourcesystem.dll
    ResourceSystem013 = 0x10650

class scenefilecache_dll: # scenefilecache.dll
    SceneFileCache002 = 0x68E0
    ResponseRulesCache001 = 0x3190

class scenesystem_dll: # scenesystem.dll
    SceneUtils_001 = 0x13C370
    SceneSystem_002 = 0xCA160
    RenderingPipelines_001 = 0x8E420

class schemasystem_dll: # schemasystem.dll
    SchemaSystem_001 = 0xA930

class server_dll: # server.dll
    NavGameTest001 = 0xA35420
    ServerToolsInfo_001 = 0x838790
    Source2GameClients001 = 0x8387A0
    Source2GameEntities001 = 0x8387B0
    Source2Server001 = 0x8387C0
    EmptyWorldService001_Server = 0x58D750
    Source2ServerConfig001 = 0x56D760
    EntitySubclassUtilsV001 = 0x2CD4C0
    customnavsystem001 = 0x24A3F0
    Source2GameDirector001 = 0x151EC0

class soundsystem_dll: # soundsystem.dll
    SoundOpSystem001 = 0x1567E0
    SoundOpSystemEdit001 = 0x8BBC0
    VMixEditTool001 = 0x71740
    SoundSystem001 = 0x46540

class steamaudio_dll: # steamaudio.dll
    SteamAudio001 = 0x12EE0

class steamclient64_dll: # steamclient64.dll
    IVALIDATE001 = 0x83A900
    CLIENTENGINE_INTERFACE_VERSION005 = 0x8367B0
    SteamClient020 = 0x631440
    SteamClient019 = 0x631430
    SteamClient018 = 0x631420
    SteamClient017 = 0x631410
    SteamClient016 = 0x631400
    SteamClient015 = 0x6313F0
    SteamClient014 = 0x6313E0
    SteamClient013 = 0x6313D0
    SteamClient012 = 0x6313C0
    SteamClient011 = 0x6313B0
    SteamClient010 = 0x6313A0
    SteamClient009 = 0x631390
    SteamClient008 = 0x631380
    SteamClient007 = 0x631370
    SteamClient006 = 0x631360
    p2pvoice002 = 0xD93D0
    p2pvoicesingleton002 = 0xD5D70

class tier0_dll: # tier0.dll
    VStringTokenSystem001 = 0x18C100
    TestScriptMgr001 = 0x13F460
    VProcessUtils002 = 0x12F5E0
    VEngineCvar007 = 0x61920

class v8system_dll: # v8system.dll
    Source2V8System001 = 0x1670

class valve_avi_dll: # valve_avi.dll
    VAvi001 = 0x2F90

class valve_wmf_dll: # valve_wmf.dll
    VMediaFoundation001 = 0x12D0

class vphysics2_dll: # vphysics2.dll
    VPhysics2_Handle_Interface_001 = 0x61120
    VPhysics2_Interface_001 = 0x5C740

class vscript_dll: # vscript.dll
    VScriptManager010 = 0x31DA0

class vstdlib_s64_dll: # vstdlib_s64.dll
    IVALIDATE001 = 0x24FF0
    VEngineCvar002 = 0x5750

class worldrenderer_dll: # worldrenderer.dll
    WorldRendererMgr001 = 0x21650
