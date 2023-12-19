/*
 * Created using https://github.com/a2x/cs2-dumper
 * Tue, 19 Dec 2023 04:46:28 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17C1960;
    pub const dwForceAttack: usize = 0x16C1E80;
    pub const dwForceAttack2: usize = 0x16C1F10;
    pub const dwForceBackward: usize = 0x16C2150;
    pub const dwForceCrouch: usize = 0x16C2420;
    pub const dwForceForward: usize = 0x16C20C0;
    pub const dwForceJump: usize = 0x16C2390;
    pub const dwForceLeft: usize = 0x16C21E0;
    pub const dwForceRight: usize = 0x16C2270;
    pub const dwGameEntitySystem: usize = 0x18ED260;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x181E058;
    pub const dwGlobalVars: usize = 0x16BDCA8;
    pub const dwGlowManager: usize = 0x181D7C0;
    pub const dwInterfaceLinkList: usize = 0x191AEF8;
    pub const dwLocalPlayerController: usize = 0x1810F58;
    pub const dwLocalPlayerPawn: usize = 0x16C8F48;
    pub const dwPlantedC4: usize = 0x1824A98;
    pub const dwPrediction: usize = 0x16C8E10;
    pub const dwSensitivity: usize = 0x181ED58;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x1880DD0;
    pub const dwViewMatrix: usize = 0x1820160;
    pub const dwViewRender: usize = 0x18209A8;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x4E03D4;
    pub const dwNetworkGameClient: usize = 0x4DF988;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x596E1C;
    pub const dwWindowWidth: usize = 0x596E18;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35760;
}