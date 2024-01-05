/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 5 Jan 2024 01:00:02 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17C1950;
    pub const dwForceAttack: usize = 0x16C1E90;
    pub const dwForceAttack2: usize = 0x16C1F20;
    pub const dwForceBackward: usize = 0x16C2160;
    pub const dwForceCrouch: usize = 0x16C2430;
    pub const dwForceForward: usize = 0x16C20D0;
    pub const dwForceJump: usize = 0x16C23A0;
    pub const dwForceLeft: usize = 0x16C21F0;
    pub const dwForceRight: usize = 0x16C2280;
    pub const dwGameEntitySystem: usize = 0x18ED240;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x181E048;
    pub const dwGlobalVars: usize = 0x16BDCB8;
    pub const dwGlowManager: usize = 0x181D7B0;
    pub const dwInterfaceLinkList: usize = 0x191AED8;
    pub const dwLocalPlayerController: usize = 0x1810F48;
    pub const dwLocalPlayerPawn: usize = 0x16C8F58;
    pub const dwPlantedC4: usize = 0x1824A88;
    pub const dwPrediction: usize = 0x16C8E20;
    pub const dwSensitivity: usize = 0x181ED48;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x1880DC0;
    pub const dwViewMatrix: usize = 0x1820150;
    pub const dwViewRender: usize = 0x1820998;
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

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36A0; // Game build number
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35760;
}