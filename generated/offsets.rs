/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 17 Nov 2023 03:37:55 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17B0D00;
    pub const dwForceAttack: usize = 0x16B5410;
    pub const dwForceAttack2: usize = 0x16B54A0;
    pub const dwForceBackward: usize = 0x16B56E0;
    pub const dwForceCrouch: usize = 0x16B59B0;
    pub const dwForceForward: usize = 0x16B5650;
    pub const dwForceJump: usize = 0x16B5920;
    pub const dwForceLeft: usize = 0x16B5770;
    pub const dwForceRight: usize = 0x16B5800;
    pub const dwGameEntitySystem: usize = 0x18DC3E0;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x180C9B0;
    pub const dwGlobalVars: usize = 0x16B14F0;
    pub const dwGlowManager: usize = 0x180C9D8;
    pub const dwInterfaceLinkList: usize = 0x190A078;
    pub const dwLocalPlayerController: usize = 0x1800018;
    pub const dwLocalPlayerPawn: usize = 0x16BC4B8;
    pub const dwPlantedC4: usize = 0x1813F78;
    pub const dwPrediction: usize = 0x16BC380;
    pub const dwSensitivity: usize = 0x180DF68;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x186FFC0;
    pub const dwViewMatrix: usize = 0x180F340;
    pub const dwViewRender: usize = 0x180FBC0;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x48A514;
    pub const dwNetworkGameClient: usize = 0x489AC0;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x540CE4;
    pub const dwWindowWidth: usize = 0x540CE0;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35760;
}