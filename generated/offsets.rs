/*
 * Created using https://github.com/a2x/cs2-dumper
 * Sat, 20 Jan 2024 14:19:41 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17C26A0;
    pub const dwForceAttack: usize = 0x16C1E80;
    pub const dwForceAttack2: usize = 0x16C1F10;
    pub const dwForceBackward: usize = 0x16C2150;
    pub const dwForceCrouch: usize = 0x16C2420;
    pub const dwForceForward: usize = 0x16C20C0;
    pub const dwForceJump: usize = 0x16C2390;
    pub const dwForceLeft: usize = 0x16C21E0;
    pub const dwForceRight: usize = 0x16C2270;
    pub const dwGameEntitySystem: usize = 0x18F2DB0;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x181ED98;
    pub const dwGlobalVars: usize = 0x16BDCA8;
    pub const dwGlowManager: usize = 0x181E500;
    pub const dwInterfaceLinkList: usize = 0x1920A48;
    pub const dwLocalPlayerController: usize = 0x1811C98;
    pub const dwLocalPlayerPawn: usize = 0x16C8F48;
    pub const dwPlantedC4: usize = 0x18257D8;
    pub const dwPrediction: usize = 0x16C8E10;
    pub const dwSensitivity: usize = 0x181FA98;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x1884F30;
    pub const dwViewMatrix: usize = 0x1820EA0;
    pub const dwViewRender: usize = 0x18216E8;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x4E13D4;
    pub const dwNetworkGameClient: usize = 0x4E0988;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x597E0C;
    pub const dwWindowWidth: usize = 0x597E08;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35760;
}