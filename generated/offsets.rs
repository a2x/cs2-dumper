/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 16 Feb 2024 11:36:44 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x18B3F98;
    pub const dwForceAttack: usize = 0x17221C0;
    pub const dwForceAttack2: usize = 0x1722250;
    pub const dwForceBackward: usize = 0x1722490;
    pub const dwForceCrouch: usize = 0x1722760;
    pub const dwForceForward: usize = 0x1722400;
    pub const dwForceJump: usize = 0x17226D0;
    pub const dwForceLeft: usize = 0x1722520;
    pub const dwForceRight: usize = 0x17225B0;
    pub const dwGameEntitySystem: usize = 0x19D1970;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x1910FB0;
    pub const dwGlobalVars: usize = 0x171CE60;
    pub const dwGlowManager: usize = 0x19113D0;
    pub const dwInterfaceLinkList: usize = 0x1A029C8;
    pub const dwLocalPlayerController: usize = 0x19038E8;
    pub const dwLocalPlayerPawn: usize = 0x1729338;
    pub const dwPlantedC4: usize = 0x191B4F8;
    pub const dwPrediction: usize = 0x1729200;
    pub const dwSensitivity: usize = 0x1911CF8;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x19233D0;
    pub const dwViewMatrix: usize = 0x19154B0;
    pub const dwViewRender: usize = 0x1915D30;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x513564;
    pub const dwNetworkGameClient: usize = 0x512AC8;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5CAC04;
    pub const dwWindowWidth: usize = 0x5CAC00;
}

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36A9; // Game build number
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x367A0;
}