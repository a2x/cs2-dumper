/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 16 Nov 2023 14:20:14 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17ADAF0;
    pub const dwForceAttack: usize = 0x16B2300;
    pub const dwForceAttack2: usize = 0x16B2390;
    pub const dwForceBackward: usize = 0x16B25D0;
    pub const dwForceCrouch: usize = 0x16B28A0;
    pub const dwForceForward: usize = 0x16B2540;
    pub const dwForceJump: usize = 0x16B2810;
    pub const dwForceLeft: usize = 0x16B2660;
    pub const dwForceRight: usize = 0x16B26F0;
    pub const dwGameEntitySystem: usize = 0x18D8110;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x1809740;
    pub const dwGlobalVars: usize = 0x16AE488;
    pub const dwGlowManager: usize = 0x1809768;
    pub const dwInterfaceLinkList: usize = 0x1905DA8;
    pub const dwLocalPlayerController: usize = 0x17FCDC8;
    pub const dwLocalPlayerPawn: usize = 0x16B9388;
    pub const dwPlantedC4: usize = 0x1810CD8;
    pub const dwPrediction: usize = 0x16B9250;
    pub const dwSensitivity: usize = 0x180ACF8;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x186BF18;
    pub const dwViewMatrix: usize = 0x180C100;
    pub const dwViewRender: usize = 0x180C958;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x48B524;
    pub const dwNetworkGameClient: usize = 0x48AAC0;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x541E1C;
    pub const dwWindowWidth: usize = 0x541E18;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35770;
}