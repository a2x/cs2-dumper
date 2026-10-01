// Generated using https://github.com/a2x/cs2-dumper
// 2026-10-01 06:22:34.554410 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: client.dll
        pub const client_dll = struct {
            pub const dwCSGOInput: usize = 0x2576160;
            pub const dwEntityList: usize = 0x2715828;
            pub const dwGameEntitySystem: usize = 0x2715828;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2120;
            pub const dwGameRules: usize = 0x255CE50;
            pub const dwGlobalVars: usize = 0x222BE98;
            pub const dwGlowManager: usize = 0x255CE60;
            pub const dwLocalPlayerController: usize = 0x2538008;
            pub const dwLocalPlayerPawn: usize = 0x2560698;
            pub const dwPlantedC4: usize = 0x24C88D0;
            pub const dwPrediction: usize = 0x25605A0;
            pub const dwSensitivity: usize = 0x255D998;
            pub const dwSensitivity_sensitivity: usize = 0x58;
            pub const dwViewAngles: usize = 0x25767E8;
            pub const dwViewMatrix: usize = 0x2566910;
            pub const dwViewRender: usize = 0x2565D20;
            pub const dwWeaponC4: usize = 0x24C4A90;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const dwBuildNumber: usize = 0x61CFE8;
            pub const dwNetworkGameClient: usize = 0x91AFC0;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x398;
            pub const dwNetworkGameClient_deltaTick: usize = 0x24C;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x2C143F;
            pub const dwNetworkGameClient_localPlayer: usize = 0xF8;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x24C;
            pub const dwNetworkGameClient_signOnState: usize = 0x230;
            pub const dwWindowHeight: usize = 0x91F334;
            pub const dwWindowWidth: usize = 0x91F330;
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
            pub const dwSoundSystem: usize = 0x535350;
            pub const dwSoundSystem_engineViewData: usize = 0x6C;
        };
    };
};
