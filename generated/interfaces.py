'''
Created using https://github.com/a2x/cs2-dumper
Wed, 7 Feb 2024 04:10:49 +0000
'''

class animationsystem_dll: # animationsystem.dll
    AnimationSystemUtils_001 = 0x72E80
    AnimationSystem_001 = 0x6DA00

class client_dll: # client.dll
    LegacyGameUI001 = 0x8A97A0
    Source2ClientUI001 = 0x898A00
    Source2ClientPrediction001 = 0x7AC110
    ClientToolsInfo_001 = 0x730A20
    Source2Client002 = 0x730A40
    GameClientExports001 = 0x730A30
    EmptyWorldService001_Client = 0x483430
    Source2ClientConfig001 = 0x46E670

class engine2_dll: # engine2.dll
    SimpleEngineLoopService_001 = 0x1F5620
    ClientServerEngineLoopService_001 = 0x1E9500
    KeyValueCache001 = 0x1E5C60
    HostStateMgr001 = 0x1E3440
    GameEventSystemServerV001 = 0x1DE9F0
    GameEventSystemClientV001 = 0x1DE9E0
    EngineServiceMgr001 = 0x1DA340
    VProfService_001 = 0x1C7920
    ToolService_001 = 0x1C65A0
    StatsService_001 = 0x1C1950
    SplitScreenService_001 = 0x1BEC70
    SoundService_001 = 0x1B83B0
    ScreenshotService001 = 0x1B3DB0
    RenderService_001 = 0x1B13F0
    NetworkService_001 = 0x1B0F00
    NetworkServerService_001 = 0x1ABCE0
    NetworkP2PService_001 = 0x1A7770
    NetworkClientService_001 = 0x1A0A30
    MapListService_001 = 0x199870
    InputService_001 = 0x187180
    GameUIService_001 = 0x181680
    GameResourceServiceServerV001 = 0x17ECE0
    GameResourceServiceClientV001 = 0x17ECD0
    BugService001 = 0x177B10
    BenchmarkService001 = 0x1762B0
    VENGINE_GAMEUIFUNCS_VERSION005 = 0x1220F0
    EngineGameUI001 = 0x121480
    INETSUPPORT_001 = 0xF04D0
    Source2EngineToServerStringTable001 = 0xA9110
    Source2EngineToServer001 = 0x91EE0
    Source2EngineToClientStringTable001 = 0x8A910
    Source2EngineToClient001 = 0x61830

class filesystem_stdio_dll: # filesystem_stdio.dll
    VAsyncFileSystem2_001 = 0x67960
    VFileSystem017 = 0x67950

class host_dll: # host.dll
    Source2Host001 = 0x193F0
    SinglePlayerSharedMemory001 = 0x19070
    SaveRestoreDataVersion001 = 0x19060
    PredictionDiffManager001 = 0x17340
    HostUtils001 = 0x12920
    GameSystem2HostHook = 0x12170
    GameModelInfo001 = 0x12090
    DebugDrawQueueManager001 = 0x11AE0

class imemanager_dll: # imemanager.dll
    IMEManager001 = 0xC470

class inputsystem_dll: # inputsystem.dll
    InputSystemVersion001 = 0x2A40
    InputStackSystemVersion001 = 0x1850

class localize_dll: # localize.dll
    Localize_001 = 0x3830

class matchmaking_dll: # matchmaking.dll
    GameTypes001 = 0x53800
    MATCHFRAMEWORK_001 = 0x105690

class materialsystem2_dll: # materialsystem2.dll
    MaterialUtils_001 = 0x4DB40
    TextLayout_001 = 0x4A200
    PostProcessingSystem_001 = 0x42A80
    FontManager_001 = 0x37A80
    VMaterialSystem2_001 = 0x25F80

class meshsystem_dll: # meshsystem.dll
    MeshSystem001 = 0x7440

class navsystem_dll: # navsystem.dll
    NavSystem001 = 0x8E30

class networksystem_dll: # networksystem.dll
    SerializedEntitiesVersion001 = 0xD5590
    NetworkSystemVersion001 = 0xBF930
    NetworkMessagesVersion001 = 0x9FBC0
    FlattenedSerializersVersion001 = 0x7EF20

class panorama_dll: # panorama.dll
    PanoramaUIEngine001 = 0x5D960

class panorama_text_pango_dll: # panorama_text_pango.dll
    PanoramaTextServices001 = 0x4CBE0

class panoramauiclient_dll: # panoramauiclient.dll
    PanoramaUIClient001 = 0x11EA0

class particles_dll: # particles.dll
    ParticleSystemMgr003 = 0x5C380

class pulse_system_dll: # pulse_system.dll
    IPulseSystem_001 = 0x93C0

class rendersystemdx11_dll: # rendersystemdx11.dll
    RenderUtils_001 = 0x53680
    VRenderDeviceMgrBackdoor001 = 0x4AD70
    RenderDeviceMgr001 = 0x4AD60

class resourcesystem_dll: # resourcesystem.dll
    ResourceSystem013 = 0x10920

class scenefilecache_dll: # scenefilecache.dll
    SceneFileCache002 = 0x6A60
    ResponseRulesCache001 = 0x31A0

class scenesystem_dll: # scenesystem.dll
    SceneUtils_001 = 0x12FCE0
    SceneSystem_002 = 0xBD1F0
    RenderingPipelines_001 = 0x86470

class schemasystem_dll: # schemasystem.dll
    SchemaSystem_001 = 0xAA50

class server_dll: # server.dll
    NavGameTest001 = 0xA41120
    ServerToolsInfo_001 = 0x82F350
    Source2GameClients001 = 0x82F360
    Source2GameEntities001 = 0x82F370
    Source2Server001 = 0x82F380
    EmptyWorldService001_Server = 0x5738E0
    Source2ServerConfig001 = 0x5652F0
    EntitySubclassUtilsV001 = 0x2B8F30
    customnavsystem001 = 0x235DF0
    Source2GameDirector001 = 0x129FB0

class soundsystem_dll: # soundsystem.dll
    SoundOpSystem001 = 0x16A640
    SoundOpSystemEdit001 = 0x96A50
    VMixEditTool001 = 0x75C30
    SoundSystem001 = 0x48320

class steamaudio_dll: # steamaudio.dll
    SteamAudio001 = 0x5AA70

class steamclient64_dll: # steamclient64.dll
    IVALIDATE001 = 0x861720
    CLIENTENGINE_INTERFACE_VERSION005 = 0x85D5D0
    SteamClient021 = 0x65E570
    SteamClient020 = 0x65E560
    SteamClient019 = 0x65E550
    SteamClient018 = 0x65E540
    SteamClient017 = 0x65E530
    SteamClient016 = 0x65E520
    SteamClient015 = 0x65E510
    SteamClient014 = 0x65E500
    SteamClient013 = 0x65E4F0
    SteamClient012 = 0x65E4E0
    SteamClient011 = 0x65E4D0
    SteamClient010 = 0x65E4C0
    SteamClient009 = 0x65E4B0
    SteamClient008 = 0x65E4A0
    SteamClient007 = 0x65E490
    SteamClient006 = 0x65E480
    p2pvoice002 = 0xD9EB0
    p2pvoicesingleton002 = 0xD6910

class tier0_dll: # tier0.dll
    VStringTokenSystem001 = 0x190B00
    TestScriptMgr001 = 0x140C90
    VProcessUtils002 = 0x132170
    VEngineCvar007 = 0x635C0

class v8system_dll: # v8system.dll
    Source2V8System001 = 0x1690

class valve_avi_dll: # valve_avi.dll
    VAvi001 = 0x2F90

class valve_wmf_dll: # valve_wmf.dll
    VMediaFoundation001 = 0x12D0

class vphysics2_dll: # vphysics2.dll
    VPhysics2_Handle_Interface_001 = 0x5BCB0
    VPhysics2_Interface_001 = 0x57130

class vscript_dll: # vscript.dll
    VScriptManager010 = 0x32000

class vstdlib_s64_dll: # vstdlib_s64.dll
    IVALIDATE001 = 0x250E0
    VEngineCvar002 = 0x5760

class worldrenderer_dll: # worldrenderer.dll
    WorldRendererMgr001 = 0x205E0
