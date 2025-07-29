// Generated using https://github.com/a2x/cs2-dumper
// 2025-07-29 08:05:49.300075200 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x707BF0;
            pub const AnimationSystem_001: usize = 0x6FFB10;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x1AECC60;
            pub const EmptyWorldService001_Client: usize = 0x1AA8280;
            pub const GameClientExports001: usize = 0x1AE9A50;
            pub const LegacyGameUI001: usize = 0x1B094E0;
            pub const Source2Client002: usize = 0x1D1B100;
            pub const Source2ClientConfig001: usize = 0x1CB9C00;
            pub const Source2ClientPrediction001: usize = 0x1AF4950;
            pub const Source2ClientUI001: usize = 0x1B07C60;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x5BF620;
            pub const BugService001: usize = 0x867960;
            pub const ClientServerEngineLoopService_001: usize = 0x8A9030;
            pub const EngineGameUI001: usize = 0x5BD3B0;
            pub const EngineServiceMgr001: usize = 0x8A8980;
            pub const GameEventSystemClientV001: usize = 0x8A8C50;
            pub const GameEventSystemServerV001: usize = 0x8A8D70;
            pub const GameResourceServiceClientV001: usize = 0x5BF720;
            pub const GameResourceServiceServerV001: usize = 0x5BF780;
            pub const GameUIService_001: usize = 0x867D90;
            pub const HostStateMgr001: usize = 0x5BFFC0;
            pub const INETSUPPORT_001: usize = 0x5B8940;
            pub const InputService_001: usize = 0x868080;
            pub const KeyValueCache001: usize = 0x5C0070;
            pub const MapListService_001: usize = 0x8A7000;
            pub const NetworkClientService_001: usize = 0x8A7190;
            pub const NetworkP2PService_001: usize = 0x8A74B0;
            pub const NetworkServerService_001: usize = 0x8A7640;
            pub const NetworkService_001: usize = 0x5BF8F0;
            pub const RenderService_001: usize = 0x8A78A0;
            pub const ScreenshotService001: usize = 0x8A7B50;
            pub const SimpleEngineLoopService_001: usize = 0x5C00D0;
            pub const SoundService_001: usize = 0x5BF930;
            pub const Source2EngineToClient001: usize = 0x5BCB00;
            pub const Source2EngineToClientStringTable001: usize = 0x5BCB60;
            pub const Source2EngineToServer001: usize = 0x5BCBD8;
            pub const Source2EngineToServerStringTable001: usize = 0x5BCC00;
            pub const SplitScreenService_001: usize = 0x5BFC30;
            pub const StatsService_001: usize = 0x8A7F50;
            pub const ToolService_001: usize = 0x5BFDF0;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x5BD440;
            pub const VProfService_001: usize = 0x5BFE30;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x21BB40;
            pub const VFileSystem017: usize = 0x21B7E0;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x138E30;
            pub const GameModelInfo001: usize = 0x138E70;
            pub const GameSystem2HostHook: usize = 0x138EB0;
            pub const HostUtils001: usize = 0x138EE0;
            pub const PredictionDiffManager001: usize = 0x1390D0;
            pub const SaveRestoreDataVersion001: usize = 0x139200;
            pub const SinglePlayerSharedMemory001: usize = 0x139230;
            pub const Source2Host001: usize = 0x1392A0;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0x35AA0;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x43CD0;
            pub const InputSystemVersion001: usize = 0x459F0;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x46BC0;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x1B3F10;
            pub const MATCHFRAMEWORK_001: usize = 0x1BC110;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x1324C0;
            pub const MaterialUtils_001: usize = 0x127270;
            pub const PostProcessingSystem_001: usize = 0x127180;
            pub const TextLayout_001: usize = 0x127200;
            pub const VMaterialSystem2_001: usize = 0x131B60;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0x1C7490;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0x123520;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x25E210;
            pub const NetworkMessagesVersion001: usize = 0x2962A0;
            pub const NetworkSystemVersion001: usize = 0x287B20;
            pub const SerializedEntitiesVersion001: usize = 0x287C30;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x503AD0;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x2B79B0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x28F300;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x566730;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x18BEC0;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x405400;
            pub const RenderUtils_001: usize = 0x405CF8;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x4054A0;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x7DB50;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x79190;
            pub const SceneFileCache002: usize = 0x792E0;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x620AC0;
            pub const SceneSystem_002: usize = 0x8433E0;
            pub const SceneUtils_001: usize = 0x621270;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0x786E0;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x15F4F50;
            pub const EntitySubclassUtilsV001: usize = 0x159ED00;
            pub const NavGameTest001: usize = 0x169B500;
            pub const ServerToolsInfo_001: usize = 0x164BEC8;
            pub const Source2GameClients001: usize = 0x1647EB0;
            pub const Source2GameDirector001: usize = 0x1792E40;
            pub const Source2GameEntities001: usize = 0x164B5D0;
            pub const Source2Server001: usize = 0x164B440;
            pub const Source2ServerConfig001: usize = 0x18641B8;
            pub const customnavsystem001: usize = 0x157F568;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x3CFBF0;
            pub const SoundOpSystemEdit001: usize = 0x3CFAE0;
            pub const SoundSystem001: usize = 0x3CF620;
            pub const VMixEditTool001: usize = 0x485EC0BB;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x24FF10;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0xFFFFFFFF8BB0BEDA;
            pub const IVALIDATE001: usize = 0x15348D8;
            pub const SteamClient006: usize = 0x1532000;
            pub const SteamClient007: usize = 0x1532008;
            pub const SteamClient008: usize = 0x1532010;
            pub const SteamClient009: usize = 0x1532018;
            pub const SteamClient010: usize = 0x1532020;
            pub const SteamClient011: usize = 0x1532028;
            pub const SteamClient012: usize = 0x1532030;
            pub const SteamClient013: usize = 0x1532038;
            pub const SteamClient014: usize = 0x1532040;
            pub const SteamClient015: usize = 0x1532048;
            pub const SteamClient016: usize = 0x1532050;
            pub const SteamClient017: usize = 0x1532058;
            pub const SteamClient018: usize = 0x1532060;
            pub const SteamClient019: usize = 0x1532068;
            pub const SteamClient020: usize = 0x1532070;
            pub const SteamClient021: usize = 0x1532078;
            pub const SteamClient022: usize = 0x1532080;
            pub const p2pvoice002: usize = 0x14E2D2F;
            pub const p2pvoicesingleton002: usize = 0x150F0F0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x3A5CA0;
            pub const VEngineCvar007: usize = 0x3B4680;
            pub const VProcessUtils002: usize = 0x3A5BE0;
            pub const VStringTokenSystem001: usize = 0x3DB4E0;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x315B0;
        }
        // Module: vconcomm.dll
        pub mod vconcomm_dll {
            pub const VConComm001: usize = 0x365C0;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x3D1E00;
            pub const VPhysics2_Interface_001: usize = 0x3D1E40;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x13C280;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0x6E990;
            pub const VEngineCvar002: usize = 0x6D070;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x1C5050;
        }
    }
}
