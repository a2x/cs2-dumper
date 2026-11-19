// Generated using https://github.com/a2x/cs2-dumper
// 2026-11-19 17:25:11.274421400 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: client.dll
        pub const client_dll = struct {
            pub const dwCSGOInput: usize = 0x256CFE0;
            pub const dwEntityList: usize = 0x270C680;
            pub const dwGameEntitySystem: usize = 0x270C680;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2120;
            pub const dwGameRules: usize = 0x2556E78;
            pub const dwGlobalVars: usize = 0x2223AD0;
            pub const dwGlowManager: usize = 0x2553B90;
            pub const dwLocalPlayerController: usize = 0x252ED78;
            pub const dwLocalPlayerPawn: usize = 0x2557538;
            pub const dwPlantedC4: usize = 0x24BD9E8;
            pub const dwPrediction: usize = 0x2557440;
            pub const dwSensitivity: usize = 0x2554648;
            pub const dwSensitivity_sensitivity: usize = 0x58;
            pub const dwServerConfirmedReservation: usize = 0x256E1C8;
            pub const dwViewAngles: usize = 0x256D668;
            pub const dwViewMatrix: usize = 0x255CE50;
            pub const dwViewRender: usize = 0x255D818;
            pub const dwWeaponC4: usize = 0x24BB680;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const dwBuildNumber: usize = 0x6B2D1C;
            pub const dwNetworkGameClient: usize = 0x9AFB90;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x398;
            pub const dwNetworkGameClient_deltaTick: usize = 0x24C;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x2C143F;
            pub const dwNetworkGameClient_localPlayer: usize = 0xF8;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x24C;
            pub const dwNetworkGameClient_signOnState: usize = 0x230;
            pub const dwWindowHeight: usize = 0x9B42EC;
            pub const dwWindowWidth: usize = 0x9B42E8;
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
