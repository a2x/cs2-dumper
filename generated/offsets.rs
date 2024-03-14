/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Thu, 14 Mar 2024 05:07:42 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x18BFC08;
    pub const dwForceAttack: usize = 0x172D030;
    pub const dwForceAttack2: usize = 0x172D0C0;
    pub const dwForceBackward: usize = 0x172D300;
    pub const dwForceCrouch: usize = 0x172D5D0;
    pub const dwForceForward: usize = 0x172D270;
    pub const dwForceJump: usize = 0x172D540;
    pub const dwForceLeft: usize = 0x172D390;
    pub const dwForceRight: usize = 0x172D420;
    pub const dwGameEntitySystem: usize = 0x19DD590;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x191CB50;
    pub const dwGlobalVars: usize = 0x1727BB0;
    pub const dwGlowManager: usize = 0x191CF70;
    pub const dwInterfaceLinkList: usize = 0x1A0E6D8;
    pub const dwLocalPlayerController: usize = 0x190F428;
    pub const dwLocalPlayerPawn: usize = 0x17341B8;
    pub const dwPlantedC4: usize = 0x1925988;
    pub const dwPrediction: usize = 0x1734080;
    pub const dwSensitivity: usize = 0x191D898;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x192D860;
    pub const dwViewMatrix: usize = 0x1921050;
    pub const dwViewRender: usize = 0x19218D0;
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
    pub const buildNumber: usize = 0x36AC; // Game build number
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x367A0;
}

pub mod matchmaking_dll { // matchmaking.dll
    pub const dwGameTypes: usize = 0x1D21E0;
    pub const dwGameTypes_mapName: usize = 0x1D2300;
}