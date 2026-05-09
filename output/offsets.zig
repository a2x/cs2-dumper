// Generated using https://github.com/a2x/cs2-dumper
// 2026-05-07 22:28:06.173739700 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: client.dll
        pub const client_dll = struct {
            pub const dwCSGOInput: usize = 0x233FC00;
            pub const dwEntityList: usize = 0x24D0DC0;
            pub const dwGameEntitySystem: usize = 0x24D0DC0;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2090;
            pub const dwGameRules: usize = 0x232AF48;
            pub const dwGlobalVars: usize = 0x204B5D8;
            pub const dwGlowManager: usize = 0x2327D40;
            pub const dwLocalPlayerController: usize = 0x230A4F0;
            pub const dwLocalPlayerPawn: usize = 0x2056700;
            pub const dwPlantedC4: usize = 0x2338A68;
            pub const dwPrediction: usize = 0x2056610;
            pub const dwSensitivity: usize = 0x2328858;
            pub const dwSensitivity_sensitivity: usize = 0x58;
            pub const dwViewAngles: usize = 0x2340288;
            pub const dwViewMatrix: usize = 0x2330AE0;
            pub const dwViewRender: usize = 0x232FCD0;
            pub const dwWeaponC4: usize = 0x22A8E38;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const dwBuildNumber: usize = 0x60BC74;
            pub const dwNetworkGameClient: usize = 0x9090C0;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x378;
            pub const dwNetworkGameClient_deltaTick: usize = 0x24C;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x2C141F;
            pub const dwNetworkGameClient_localPlayer: usize = 0xF8;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x24C;
            pub const dwNetworkGameClient_signOnState: usize = 0x230;
            pub const dwWindowHeight: usize = 0x90D4EC;
            pub const dwWindowWidth: usize = 0x90D4E8;
        };
        // Module: inputsystem.dll
        pub const inputsystem_dll = struct {
            pub const dwInputSystem: usize = 0x42B50;
        };
        // Module: matchmaking.dll
        pub const matchmaking_dll = struct {
            pub const dwGameTypes: usize = 0x1B0F80;
        };
        // Module: soundsystem.dll
        pub const soundsystem_dll = struct {
            pub const dwSoundSystem: usize = 0x512360;
            pub const dwSoundSystem_engineViewData: usize = 0x7C;
        };
    };
};
