// Generated using https://github.com/a2x/cs2-dumper
// Updated with new offsets

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod offsets {
        // Module: client.dll
        pub mod client_dll {
            pub const dwCSGOInput: usize = 0x239E7F8;              // Updated
            pub const dwEntityList: usize = 0x254DE50;             // Updated
            pub const dwGameEntitySystem: usize = 0x24E7680;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2090;
            pub const dwGameRules: usize = 0x2340FE8;
            pub const dwGlobalVars: usize = 0x208ED60;             // Updated
            pub const dwGlowManager: usize = 0x233DDE0;
            pub const dwLocalPlayerController: usize = 0x202B350;  // Updated
            pub const dwLocalPlayerPawn: usize = 0x21CFDF0;        // Updated
            pub const dwPlantedC4: usize = 0x23BA4F8;              // Updated
            pub const dwPrediction: usize = 0x2341430;
            pub const dwSensitivity: usize = 0x239E7F8;            // Updated
            pub const dwSensitivity_sensitivity: usize = 0x81C;    // Updated
            pub const dwViewAngles: usize = 0x25C7630;             // Updated
            pub const dwViewMatrix: usize = 0x23A8340;             // Updated
            pub const dwViewRender: usize = 0x2346D70;
            pub const dwWeaponC4: usize = 0x22BED18;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const dwBuildNumber: usize = 0x60CC74;
            pub const dwNetworkGameClient: usize = 0x90A1A0;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x378;
            pub const dwNetworkGameClient_deltaTick: usize = 0x24C;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x2C141F;
            pub const dwNetworkGameClient_localPlayer: usize = 0xF8;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x24C;
            pub const dwNetworkGameClient_signOnState: usize = 0x230;
            pub const dwWindowHeight: usize = 0x90E5C4;
            pub const dwWindowWidth: usize = 0x90E5C0;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const dwInputSystem: usize = 0x42B50;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const dwGameTypes: usize = 0x1B0F80;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const dwSoundSystem: usize = 0x512360;
            pub const dwSoundSystem_engineViewData: usize = 0x7C;
        }
        // Class Fields (Structure-relative offsets)
        pub mod class_fields
