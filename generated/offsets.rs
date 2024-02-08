/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 8 Feb 2024 02:46:19 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x18B0FB8;
    pub const dwForceAttack: usize = 0x171F150;
    pub const dwForceAttack2: usize = 0x171F1E0;
    pub const dwForceBackward: usize = 0x171F420;
    pub const dwForceCrouch: usize = 0x171F6F0;
    pub const dwForceForward: usize = 0x171F390;
    pub const dwForceJump: usize = 0x171F660;
    pub const dwForceLeft: usize = 0x171F4B0;
    pub const dwForceRight: usize = 0x171F540;
    pub const dwGameEntitySystem: usize = 0x19CC7C0;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x190DF90;
    pub const dwGlobalVars: usize = 0x1719E30;
    pub const dwGlowManager: usize = 0x190E3A8;
    pub const dwInterfaceLinkList: usize = 0x19FD7E8;
    pub const dwLocalPlayerController: usize = 0x1900918;
    pub const dwLocalPlayerPawn: usize = 0x17262D8;
    pub const dwPlantedC4: usize = 0x19161B8;
    pub const dwPrediction: usize = 0x17261A0;
    pub const dwSensitivity: usize = 0x190ECC8;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x191E0D0;
    pub const dwViewMatrix: usize = 0x19102A0;
    pub const dwViewRender: usize = 0x1910B20;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x512554;
    pub const dwNetworkGameClient: usize = 0x511AC8;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5C9A6C;
    pub const dwWindowWidth: usize = 0x5C9A68;
}

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36A4; // Game build number
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x367A0;
}