// Generated using https://github.com/a2x/cs2-dumper
// 2026-08-25 07:57:38.316092900 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: client.dll
        pub const client_dll = struct {
            pub const dwCSGOInput: usize = 0x23DCC80;
            pub const dwEntityList: usize = 0x2572230;
            pub const dwGameEntitySystem: usize = 0x2572230;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2090;
            pub const dwGameRules: usize = 0x23C6D28;
            pub const dwGlobalVars: usize = 0x20B05F0;
            pub const dwGlowManager: usize = 0x23C3A58;
            pub const dwLocalPlayerController: usize = 0x23A1F30;
            pub const dwLocalPlayerPawn: usize = 0x23C7268;
            pub const dwPlantedC4: usize = 0x2391A18;
            pub const dwPrediction: usize = 0x23C7170;
            pub const dwSensitivity: usize = 0x23C4578;
            pub const dwSensitivity_sensitivity: usize = 0x58;
            pub const dwViewAngles: usize = 0x23DD308;
            pub const dwViewMatrix: usize = 0x23CC830;
            pub const dwViewRender: usize = 0x23CC898;
            pub const dwWeaponC4: usize = 0x233FF10;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const dwBuildNumber: usize = 0x60F594;
            pub const dwNetworkGameClient: usize = 0x90D4B0;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x378;
            pub const dwNetworkGameClient_deltaTick: usize = 0x24C;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x2C141F;
            pub const dwNetworkGameClient_localPlayer: usize = 0xF8;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x24C;
            pub const dwNetworkGameClient_signOnState: usize = 0x230;
            pub const dwWindowHeight: usize = 0x9118DC;
            pub const dwWindowWidth: usize = 0x9118D8;
        };
        // Module: inputsystem.dll
        pub const inputsystem_dll = struct {
            pub const dwInputSystem: usize = 0x45BA0;
        };
        // Module: matchmaking.dll
        pub const matchmaking_dll = struct {
            pub const dwGameTypes: usize = 0x1ADF80;
        };
        // Module: soundsystem.dll
        pub const soundsystem_dll = struct {
            pub const dwSoundSystem: usize = 0x54B5D0;
            pub const dwSoundSystem_engineViewData: usize = 0x7C;
        };
    };
};
