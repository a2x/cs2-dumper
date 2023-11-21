'''
Created using https://github.com/a2x/cs2-dumper
Tue, 21 Nov 2023 00:47:43 +0000
'''

class animationsystem_dll: # animationsystem.dll
    AnimationSystemUtils_001 = 0x64670
    AnimationSystem_001 = 0x5F1D0

class client_dll: # client.dll
    LegacyGameUI001 = 0x89C960
    Source2ClientUI001 = 0x88B670
    Source2ClientPrediction001 = 0x7A3990
    ClientToolsInfo_001 = 0x72F780
    Source2Client002 = 0x72F7A0
    GameClientExports001 = 0x72F790
    EmptyWorldService001_Client = 0x48FD90
    Source2ClientConfig001 = 0x476CD0

class engine2_dll: # engine2.dll
    SimpleEngineLoopService_001 = 0x1E4710
    ClientServerEngineLoopService_001 = 0x1DA360
    KeyValueCache001 = 0x1D69A0
    HostStateMgr001 = 0x1D41A0
    GameEventSystemServerV001 = 0x1CF840
    GameEventSystemClientV001 = 0x1CF830
    EngineServiceMgr001 = 0x1CB520
    VProfService_001 = 0x1B8E90
    ToolService_001 = 0x1B7BE0
    StatsService_001 = 0x1B2E60
    SplitScreenService_001 = 0x1B00D0
    SoundService_001 = 0x1AAC10
    ScreenshotService001 = 0x1A6AE0
    RenderService_001 = 0x1A3E40
    NetworkService_001 = 0x1A3950
    NetworkServerService_001 = 0x19E800
    NetworkP2PService_001 = 0x19A2F0
    NetworkClientService_001 = 0x193F80
    MapListService_001 = 0x18CF50
    InputService_001 = 0x17ABC0
    GameUIService_001 = 0x1753E0
    GameResourceServiceServerV001 = 0x173140
    GameResourceServiceClientV001 = 0x173130
    BugService001 = 0x16C160
    BenchmarkService001 = 0x16A930
    VENGINE_GAMEUIFUNCS_VERSION005 = 0x118440
    EngineGameUI001 = 0x1177D0
    INETSUPPORT_001 = 0xE6E30
    Source2EngineToServerStringTable001 = 0xA2410
    Source2EngineToServer001 = 0x8B6F0
    Source2EngineToClientStringTable001 = 0x841D0
    Source2EngineToClient001 = 0x5A990

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
    MATCHFRAMEWORK_001 = 0x1012B0

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
    SerializedEntitiesVersion001 = 0xD1EB0
    NetworkSystemVersion001 = 0xBC6E0
    NetworkMessagesVersion001 = 0x9C6D0
    FlattenedSerializersVersion001 = 0x7C440

class panorama_dll: # panorama.dll
    PanoramaUIEngine001 = 0x57EE0

class panorama_text_pango_dll: # panorama_text_pango.dll
    PanoramaTextServices001 = 0x4CBD0

class panoramauiclient_dll: # panoramauiclient.dll
    PanoramaUIClient001 = 0x12780

class particles_dll: # particles.dll
    ParticleSystemMgr003 = 0x52D20

class pulse_system_dll: # pulse_system.dll
    IPulseSystem_001 = 0x5B30

class rendersystemdx11_dll: # rendersystemdx11.dll
    RenderUtils_001 = 0x530F0
    VRenderDeviceMgrBackdoor001 = 0x4A690
    RenderDeviceMgr001 = 0x4A680

class resourcesystem_dll: # resourcesystem.dll
    ResourceSystem013 = 0x10650

class scenefilecache_dll: # scenefilecache.dll
    SceneFileCache002 = 0x68E0
    ResponseRulesCache001 = 0x3190

class scenesystem_dll: # scenesystem.dll
    SceneUtils_001 = 0x13C9E0
    SceneSystem_002 = 0xCAA30
    RenderingPipelines_001 = 0x8E8A0

class schemasystem_dll: # schemasystem.dll
    SchemaSystem_001 = 0xA930

class server_dll: # server.dll
    NavGameTest001 = 0xA3A950
    ServerToolsInfo_001 = 0x83D750
    Source2GameClients001 = 0x83D760
    Source2GameEntities001 = 0x83D770
    Source2Server001 = 0x83D780
    EmptyWorldService001_Server = 0x591BE0
    Source2ServerConfig001 = 0x571B10
    EntitySubclassUtilsV001 = 0x2D0890
    customnavsystem001 = 0x24D610
    Source2GameDirector001 = 0x1453D0

class soundsystem_dll: # soundsystem.dll
    SoundOpSystem001 = 0x1567E0
    SoundOpSystemEdit001 = 0x8BBC0
    VMixEditTool001 = 0x71740
    SoundSystem001 = 0x46540

class steamaudio_dll: # steamaudio.dll
    SteamAudio001 = 0x12EE0

class steamclient64_dll: # steamclient64.dll
    IVALIDATE001 = 0x84FD80
    CLIENTENGINE_INTERFACE_VERSION005 = 0x84BC30
    SteamClient021 = 0x6460C0
    SteamClient020 = 0x6460B0
    SteamClient019 = 0x6460A0
    SteamClient018 = 0x646090
    SteamClient017 = 0x646080
    SteamClient016 = 0x646070
    SteamClient015 = 0x646060
    SteamClient014 = 0x646050
    SteamClient013 = 0x646040
    SteamClient012 = 0x646030
    SteamClient011 = 0x646020
    SteamClient010 = 0x646010
    SteamClient009 = 0x646000
    SteamClient008 = 0x645FF0
    SteamClient007 = 0x645FE0
    SteamClient006 = 0x645FD0
    p2pvoice002 = 0xD97D0
    p2pvoicesingleton002 = 0xD6200

class tier0_dll: # tier0.dll
    VStringTokenSystem001 = 0x18C2B0
    TestScriptMgr001 = 0x13F610
    VProcessUtils002 = 0x12F790
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
    IVALIDATE001 = 0x25000
    VEngineCvar002 = 0x5760

class worldrenderer_dll: # worldrenderer.dll
    WorldRendererMgr001 = 0x21650
