// Generated using https://github.com/a2x/cs2-dumper
// 2026-11-12 13:07:45.363725600 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: client.dll
        pub const client_dll = struct {
            pub const dwCSGOInput: usize = 0x2569E30;
            pub const dwEntityList: usize = 0x2709010;
            pub const dwGameEntitySystem: usize = 0x2709010;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2120;
            pub const dwGameRules: usize = 0x25537E8;
            pub const dwGlobalVars: usize = 0x2221AB8;
            pub const dwGlowManager: usize = 0x2550500;
            pub const dwLocalPlayerController: usize = 0x252B0C8;
            pub const dwLocalPlayerPawn: usize = 0x2553D38;
            pub const dwPlantedC4: usize = 0x24B9B90;
            pub const dwPrediction: usize = 0x2553C40;
            pub const dwSensitivity: usize = 0x2551038;
            pub const dwSensitivity_sensitivity: usize = 0x58;
            pub const dwViewAngles: usize = 0x256A4B8;
            pub const dwViewMatrix: usize = 0x2559640;
            pub const dwViewRender: usize = 0x255A008;
            pub const dwWeaponC4: usize = 0x24B83B0;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const dwBuildNumber: usize = 0x6B2D18;
            pub const dwNetworkGameClient: usize = 0x9AFB30;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x398;
            pub const dwNetworkGameClient_deltaTick: usize = 0x24C;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x2C143F;
            pub const dwNetworkGameClient_localPlayer: usize = 0xF8;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x24C;
            pub const dwNetworkGameClient_signOnState: usize = 0x230;
            pub const dwWindowHeight: usize = 0x9B4294;
            pub const dwWindowWidth: usize = 0x9B4290;
        };
        // Module: inputsystem.dll
        pub const inputsystem_dll = struct {
            pub const dwInputSystem: usize = 0x46BC0;
        };
        // Module: matchmaking.dll
        pub const matchmaking_dll = struct {
            pub const dwGameTypes: usize = 0x1AEFC0;
        };
        // Module: soundsystem.dll
        pub const soundsystem_dll = struct {
            pub const dwSoundSystem: usize = 0x532470;
            pub const dwSoundSystem_engineViewData: usize = 0x6C;
        };
    };
};
