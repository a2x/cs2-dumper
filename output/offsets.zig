// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-22 02:40:55.168485600 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: client.dll
        pub const client_dll = struct {
            pub const dwCSGOInput: usize = 0x233DD80;
            pub const dwEntityList: usize = 0x24CED50;
            pub const dwGameEntitySystem: usize = 0x24CED50;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2090;
            pub const dwGameRules: usize = 0x2328F38;
            pub const dwGlobalVars: usize = 0x20496A0;
            pub const dwGlowManager: usize = 0x2325D30;
            pub const dwLocalPlayerController: usize = 0x2308540;
            pub const dwLocalPlayerPawn: usize = 0x20547A0;
            pub const dwPlantedC4: usize = 0x2336A48;
            pub const dwPrediction: usize = 0x20546B0;
            pub const dwSensitivity: usize = 0x2326848;
            pub const dwSensitivity_sensitivity: usize = 0x58;
            pub const dwViewAngles: usize = 0x233E408;
            pub const dwViewMatrix: usize = 0x232EAC0;
            pub const dwViewRender: usize = 0x232DCB8;
            pub const dwWeaponC4: usize = 0x22A6CE8;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const dwBuildNumber: usize = 0x60CC74;
            pub const dwNetworkGameClient: usize = 0x90A0C0;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x378;
            pub const dwNetworkGameClient_deltaTick: usize = 0x24C;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x2C141F;
            pub const dwNetworkGameClient_localPlayer: usize = 0xF8;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x24C;
            pub const dwNetworkGameClient_signOnState: usize = 0x230;
            pub const dwWindowHeight: usize = 0x90E4EC;
            pub const dwWindowWidth: usize = 0x90E4E8;
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
