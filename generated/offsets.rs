/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 29 Feb 2024 02:15:37 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x18BBAF8;
    pub const dwForceAttack: usize = 0x1728F90;
    pub const dwForceAttack2: usize = 0x1729020;
    pub const dwForceBackward: usize = 0x1729260;
    pub const dwForceCrouch: usize = 0x1729530;
    pub const dwForceForward: usize = 0x17291D0;
    pub const dwForceJump: usize = 0x17294A0;
    pub const dwForceLeft: usize = 0x17292F0;
    pub const dwForceRight: usize = 0x1729380;
    pub const dwGameEntitySystem: usize = 0x19D9450;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x1918A30;
    pub const dwGlobalVars: usize = 0x1723B10;
    pub const dwGlowManager: usize = 0x1918E50;
    pub const dwInterfaceLinkList: usize = 0x1A0A598;
    pub const dwLocalPlayerController: usize = 0x190B308;
    pub const dwLocalPlayerPawn: usize = 0x1730118;
    pub const dwPlantedC4: usize = 0x1921858;
    pub const dwPrediction: usize = 0x172FFE0;
    pub const dwSensitivity: usize = 0x1919778;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x1929730;
    pub const dwViewMatrix: usize = 0x191CF30;
    pub const dwViewRender: usize = 0x191D7B0;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x513574;
    pub const dwNetworkGameClient_deltaTick: usize = 0x258;
    pub const dwNetworkGameClient: usize = 0x512AC8;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5CBC64;
    pub const dwWindowWidth: usize = 0x5CBC60;
}

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36AB; // Game build number
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x367A0;
}

pub mod matchmaking_dll { // matchmaking.dll
    pub const dwGameTypes: usize = 0x1D21E0;
    pub const dwGameTypes_mapName: usize = 0x1D2300;
}