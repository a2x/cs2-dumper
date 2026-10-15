// Generated using https://github.com/a2x/cs2-dumper
// 2026-10-15 20:28:01.381534584 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: libclient.so
        pub const libclient_so = struct {
            pub const dwCSGOInput: usize = 0x468E510;
            pub const dwEntityList: usize = 0x46C3000;
            pub const dwGameEntitySystem: usize = 0x4B95610;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2120;
            pub const dwGameRules: usize = 0x493F0F0;
            pub const dwGlobalVars: usize = 0x4687D38;
            pub const dwGlowManager: usize = 0x49397B8;
            pub const dwLocalPlayerController: usize = 0x49083B8;
            pub const dwLocalPlayerPawn: usize = 0x49404D8;
            pub const dwPlantedC4: usize = 0x46D8127;
            pub const dwPrediction: usize = 0x4940390;
            pub const dwSensitivity: usize = 0x493E5F8;
            pub const dwSensitivity_sensitivity: usize = 0x58;
            pub const dwViewAngles: usize = 0x468EA58;
            pub const dwViewMatrix: usize = 0x4947B00;
            pub const dwViewRender: usize = 0x4947C10;
        };
        // Module: libengine2.so
        pub const libengine2_so = struct {
            pub const dwBuildNumber: usize = 0xA4B510;
            pub const dwNetworkGameClient: usize = 0x9F6C70;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x3A8;
            pub const dwNetworkGameClient_deltaTick: usize = 0x3AC;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x288;
            pub const dwNetworkGameClient_localPlayer: usize = 0x280;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x25C;
            pub const dwNetworkGameClient_signOnState: usize = 0x284;
            pub const dwWindowHeight: usize = 0xA01364;
            pub const dwWindowWidth: usize = 0xA01360;
        };
        // Module: libinputsystem.so
        pub const libinputsystem_so = struct {
            pub const dwInputSystem: usize = 0x7FCA0;
        };
        // Module: libmatchmaking.so
        pub const libmatchmaking_so = struct {
            pub const dwGameTypes: usize = 0x39D2E0;
            pub const dwGameTypes_mapName: usize = 0x39D400;
        };
        // Module: libpanorama.so
        pub const libpanorama_so = struct {
            pub const HUD_CONTEXT: usize = 0x6C9100;
            pub const MENU_CONTEXT: usize = 0x6C90E0;
        };
    };
};
