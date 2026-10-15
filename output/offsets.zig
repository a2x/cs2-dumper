// Generated using https://github.com/a2x/cs2-dumper
// 2026-10-15 13:10:38.711921300 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: client.dll
        pub const client_dll = struct {
            pub const dwCSGOInput: usize = 0x257B640;
            pub const dwEntityList: usize = 0x271A908;
            pub const dwGameEntitySystem: usize = 0x271A908;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2120;
            pub const dwGameRules: usize = 0x25651D0;
            pub const dwGlobalVars: usize = 0x2230090;
            pub const dwGlowManager: usize = 0x2561EF0;
            pub const dwLocalPlayerController: usize = 0x253CB78;
            pub const dwLocalPlayerPawn: usize = 0x2565718;
            pub const dwPlantedC4: usize = 0x24CB3C0;
            pub const dwPrediction: usize = 0x2565620;
            pub const dwSensitivity: usize = 0x2562A18;
            pub const dwSensitivity_sensitivity: usize = 0x58;
            pub const dwViewAngles: usize = 0x257BCC8;
            pub const dwViewMatrix: usize = 0x256B020;
            pub const dwViewRender: usize = 0x256B9E8;
            pub const dwWeaponC4: usize = 0x24C9B30;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const dwBuildNumber: usize = 0x61CFEC;
            pub const dwNetworkGameClient: usize = 0x91AFC0;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x398;
            pub const dwNetworkGameClient_deltaTick: usize = 0x24C;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x2C143F;
            pub const dwNetworkGameClient_localPlayer: usize = 0xF8;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x24C;
            pub const dwNetworkGameClient_signOnState: usize = 0x230;
            pub const dwWindowHeight: usize = 0x91F33C;
            pub const dwWindowWidth: usize = 0x91F338;
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
