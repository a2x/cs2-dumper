// Generated using https://github.com/a2x/cs2-dumper
// 2026-09-29 08:54:33.699279 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: client.dll
        pub const client_dll = struct {
            pub const dwCSGOInput: usize = 0x2575BB0;
            pub const dwEntityList: usize = 0x27151E8;
            pub const dwGameEntitySystem: usize = 0x27151E8;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2120;
            pub const dwGameRules: usize = 0x255C8D8;
            pub const dwGlobalVars: usize = 0x222BF88;
            pub const dwGlowManager: usize = 0x255C8F0;
            pub const dwLocalPlayerController: usize = 0x2537628;
            pub const dwLocalPlayerPawn: usize = 0x25606D8;
            pub const dwPlantedC4: usize = 0x24C9290;
            pub const dwPrediction: usize = 0x25605E0;
            pub const dwSensitivity: usize = 0x255C820;
            pub const dwSensitivity_sensitivity: usize = 0x58;
            pub const dwViewAngles: usize = 0x2576238;
            pub const dwViewMatrix: usize = 0x2565A20;
            pub const dwViewRender: usize = 0x25662E0;
            pub const dwWeaponC4: usize = 0x24C4550;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const dwBuildNumber: usize = 0x61D1E8;
            pub const dwNetworkGameClient: usize = 0x91B1C0;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x398;
            pub const dwNetworkGameClient_deltaTick: usize = 0x24C;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x2C143F;
            pub const dwNetworkGameClient_localPlayer: usize = 0xF8;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x24C;
            pub const dwNetworkGameClient_signOnState: usize = 0x230;
            pub const dwWindowHeight: usize = 0x91F544;
            pub const dwWindowWidth: usize = 0x91F540;
        };
        // Module: inputsystem.dll
        pub const inputsystem_dll = struct {
            pub const dwInputSystem: usize = 0x46BC0;
        };
        // Module: matchmaking.dll
        pub const matchmaking_dll = struct {
            pub const dwGameTypes: usize = 0x1B0FD0;
        };
        // Module: soundsystem.dll
        pub const soundsystem_dll = struct {
            pub const dwSoundSystem: usize = 0x535340;
            pub const dwSoundSystem_engineViewData: usize = 0x6C;
        };
    };
};
