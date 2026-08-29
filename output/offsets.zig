// Generated using https://github.com/a2x/cs2-dumper
// 2026-08-29 09:27:12.680043800 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: client.dll
        pub const client_dll = struct {
            pub const dwCSGOInput: usize = 0x23DBC70;
            pub const dwEntityList: usize = 0x2571220;
            pub const dwGameEntitySystem: usize = 0x2571220;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2090;
            pub const dwGameRules: usize = 0x23C5D28;
            pub const dwGlobalVars: usize = 0x20AF5F0;
            pub const dwGlowManager: usize = 0x23C2A58;
            pub const dwLocalPlayerController: usize = 0x23A0F30;
            pub const dwLocalPlayerPawn: usize = 0x23C6268;
            pub const dwPlantedC4: usize = 0x2390A18;
            pub const dwPrediction: usize = 0x23C6170;
            pub const dwSensitivity: usize = 0x23C3578;
            pub const dwSensitivity_sensitivity: usize = 0x58;
            pub const dwViewAngles: usize = 0x23DC2F8;
            pub const dwViewMatrix: usize = 0x23CB830;
            pub const dwViewRender: usize = 0x23CB898;
            pub const dwWeaponC4: usize = 0x233EF10;
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
            pub const dwWindowHeight: usize = 0x9118D4;
            pub const dwWindowWidth: usize = 0x9118D0;
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
