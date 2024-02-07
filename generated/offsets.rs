/*
 * Created using https://github.com/a2x/cs2-dumper
 * Wed, 7 Feb 2024 04:10:49 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x18AFFB8;
    pub const dwForceAttack: usize = 0x171E130;
    pub const dwForceAttack2: usize = 0x171E1C0;
    pub const dwForceBackward: usize = 0x171E400;
    pub const dwForceCrouch: usize = 0x171E6D0;
    pub const dwForceForward: usize = 0x171E370;
    pub const dwForceJump: usize = 0x171E640;
    pub const dwForceLeft: usize = 0x171E490;
    pub const dwForceRight: usize = 0x171E520;
    pub const dwGameEntitySystem: usize = 0x19CB7B0;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x190CF90;
    pub const dwGlobalVars: usize = 0x1718E10;
    pub const dwGlowManager: usize = 0x190D3A8;
    pub const dwInterfaceLinkList: usize = 0x19FC7D8;
    pub const dwLocalPlayerController: usize = 0x18FF918;
    pub const dwLocalPlayerPawn: usize = 0x17252B8;
    pub const dwPlantedC4: usize = 0x19151B8;
    pub const dwPrediction: usize = 0x1725180;
    pub const dwSensitivity: usize = 0x190DCC8;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x191D0D0;
    pub const dwViewMatrix: usize = 0x190F2A0;
    pub const dwViewRender: usize = 0x190FB20;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x512554;
    pub const dwNetworkGameClient: usize = 0x511AC8;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5C99DC;
    pub const dwWindowWidth: usize = 0x5C99D8;
}

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36A3; // Game build number
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x367A0;
}