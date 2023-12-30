/*
 * Created using https://github.com/a2x/cs2-dumper
 * Sat, 30 Dec 2023 03:17:26 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17C1950;
    pub const dwForceAttack: usize = 0x16C1E70;
    pub const dwForceAttack2: usize = 0x16C1F00;
    pub const dwForceBackward: usize = 0x16C2140;
    pub const dwForceCrouch: usize = 0x16C2410;
    pub const dwForceForward: usize = 0x16C20B0;
    pub const dwForceJump: usize = 0x16C2380;
    pub const dwForceLeft: usize = 0x16C21D0;
    pub const dwForceRight: usize = 0x16C2260;
    pub const dwGameEntitySystem: usize = 0x18ED250;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x181E048;
    pub const dwGlobalVars: usize = 0x16BDC98;
    pub const dwGlowManager: usize = 0x181D7B0;
    pub const dwInterfaceLinkList: usize = 0x191AEE8;
    pub const dwLocalPlayerController: usize = 0x1810F48;
    pub const dwLocalPlayerPawn: usize = 0x16C8F38;
    pub const dwPlantedC4: usize = 0x1824A88;
    pub const dwPrediction: usize = 0x16C8E00;
    pub const dwSensitivity: usize = 0x181ED48;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x1880DC0;
    pub const dwViewMatrix: usize = 0x1820150;
    pub const dwViewRender: usize = 0x1820998;
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

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x369F; // Game build number
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35760;
}