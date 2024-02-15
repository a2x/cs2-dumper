/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 15 Feb 2024 02:02:58 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x18B3018;
    pub const dwForceAttack: usize = 0x1721140;
    pub const dwForceAttack2: usize = 0x17211D0;
    pub const dwForceBackward: usize = 0x1721410;
    pub const dwForceCrouch: usize = 0x17216E0;
    pub const dwForceForward: usize = 0x1721380;
    pub const dwForceJump: usize = 0x1721650;
    pub const dwForceLeft: usize = 0x17214A0;
    pub const dwForceRight: usize = 0x1721530;
    pub const dwGameEntitySystem: usize = 0x19CE850;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x1910010;
    pub const dwGlobalVars: usize = 0x171BE20;
    pub const dwGlowManager: usize = 0x1910428;
    pub const dwInterfaceLinkList: usize = 0x19FF8A8;
    pub const dwLocalPlayerController: usize = 0x1902988;
    pub const dwLocalPlayerPawn: usize = 0x17282B8;
    pub const dwPlantedC4: usize = 0x1918238;
    pub const dwPrediction: usize = 0x1728180;
    pub const dwSensitivity: usize = 0x1910D48;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x1920150;
    pub const dwViewMatrix: usize = 0x1912320;
    pub const dwViewRender: usize = 0x1912BA0;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x512554;
    pub const dwNetworkGameClient: usize = 0x511AC8;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5C9A2C;
    pub const dwWindowWidth: usize = 0x5C9A28;
}

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36A8; // Game build number
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x367A0;
}