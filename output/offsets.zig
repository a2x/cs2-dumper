// Generated using https://github.com/a2x/cs2-dumper
// 2026-09-23 13:05:49.580295900 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: client.dll
        pub const client_dll = struct {
            pub const dwCSGOInput: usize = 0x2570A80;
            pub const dwEntityList: usize = 0x2710038;
            pub const dwGameEntitySystem: usize = 0x2710038;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2120;
            pub const dwGameRules: usize = 0x255AA88;
            pub const dwGlobalVars: usize = 0x2226F08;
            pub const dwGlowManager: usize = 0x25577A0;
            pub const dwLocalPlayerController: usize = 0x25324D8;
            pub const dwLocalPlayerPawn: usize = 0x255B598;
            pub const dwPlantedC4: usize = 0x24C3D28;
            pub const dwPrediction: usize = 0x255B4A0;
            pub const dwViewAngles: usize = 0x2571108;
            pub const dwViewMatrix: usize = 0x25608E0;
            pub const dwViewRender: usize = 0x25611A0;
            pub const dwWeaponC4: usize = 0x24BF400;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const dwBuildNumber: usize = 0x61C1EC;
            pub const dwNetworkGameClient: usize = 0x91A150;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x398;
            pub const dwNetworkGameClient_deltaTick: usize = 0x24C;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x2C143F;
            pub const dwNetworkGameClient_localPlayer: usize = 0xF8;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x24C;
            pub const dwNetworkGameClient_signOnState: usize = 0x230;
            pub const dwWindowHeight: usize = 0x91E4DC;
            pub const dwWindowWidth: usize = 0x91E4D8;
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
        };
    };
};
