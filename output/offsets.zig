// Generated using https://github.com/a2x/cs2-dumper
// 2026-03-26 05:30:26.200384300 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: client.dll
        pub const client_dll = struct {
            pub const dwCSGOInput: usize = 0x231B2E0;
            pub const dwEntityList: usize = 0x24B0258;
            pub const dwGameEntitySystem: usize = 0x24B0258;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x20A0;
            pub const dwGameRules: usize = 0x230EED0;
            pub const dwGlobalVars: usize = 0x205F540;
            pub const dwGlowManager: usize = 0x230BCD8;
            pub const dwLocalPlayerController: usize = 0x22F5028;
            pub const dwLocalPlayerPawn: usize = 0x206A9E0;
            pub const dwPlantedC4: usize = 0x2318A60;
            pub const dwPrediction: usize = 0x206A8F0;
            pub const dwSensitivity: usize = 0x230C7E8;
            pub const dwSensitivity_sensitivity: usize = 0x58;
            pub const dwViewAngles: usize = 0x231B968;
            pub const dwViewMatrix: usize = 0x2310F10;
            pub const dwViewRender: usize = 0x2311328;
            pub const dwWeaponC4: usize = 0x229A2B0;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const dwBuildNumber: usize = 0x60E514;
            pub const dwNetworkGameClient: usize = 0x9095D0;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x378;
            pub const dwNetworkGameClient_deltaTick: usize = 0x24C;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x2C141F;
            pub const dwNetworkGameClient_localPlayer: usize = 0xF8;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x24C;
            pub const dwNetworkGameClient_signOnState: usize = 0x230;
            pub const dwWindowHeight: usize = 0x90D99C;
            pub const dwWindowWidth: usize = 0x90D998;
        };
        // Module: inputsystem.dll
        pub const inputsystem_dll = struct {
            pub const dwInputSystem: usize = 0x45AD0;
        };
        // Module: matchmaking.dll
        pub const matchmaking_dll = struct {
            pub const dwGameTypes: usize = 0x1B8000;
        };
        // Module: soundsystem.dll
        pub const soundsystem_dll = struct {
            pub const dwSoundSystem: usize = 0x4F3470;
            pub const dwSoundSystem_engineViewData: usize = 0x7C;
        };
    };
};
