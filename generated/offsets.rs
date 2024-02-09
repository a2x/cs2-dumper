/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 9 Feb 2024 02:38:11 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x18B0FC8;
    pub const dwForceAttack: usize = 0x171F160;
    pub const dwForceAttack2: usize = 0x171F1F0;
    pub const dwForceBackward: usize = 0x171F430;
    pub const dwForceCrouch: usize = 0x171F700;
    pub const dwForceForward: usize = 0x171F3A0;
    pub const dwForceJump: usize = 0x171F670;
    pub const dwForceLeft: usize = 0x171F4C0;
    pub const dwForceRight: usize = 0x171F550;
    pub const dwGameEntitySystem: usize = 0x19CC7D0;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x190DFA0;
    pub const dwGlobalVars: usize = 0x1719E40;
    pub const dwGlowManager: usize = 0x190E3B8;
    pub const dwInterfaceLinkList: usize = 0x19FD7F8;
    pub const dwLocalPlayerController: usize = 0x1900928;
    pub const dwLocalPlayerPawn: usize = 0x17262E8;
    pub const dwPlantedC4: usize = 0x19161C8;
    pub const dwPrediction: usize = 0x17261B0;
    pub const dwSensitivity: usize = 0x190ECD8;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x191E0E0;
    pub const dwViewMatrix: usize = 0x19102B0;
    pub const dwViewRender: usize = 0x1910B30;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x512554;
    pub const dwNetworkGameClient: usize = 0x511AC8;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5C99FC;
    pub const dwWindowWidth: usize = 0x5C99F8;
}

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36A6; // Game build number
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x367A0;
}