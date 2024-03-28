/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:05 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x18C2D58;
    pub const dwForceAttack: usize = 0x1730020;
    pub const dwForceAttack2: usize = 0x17300B0;
    pub const dwForceBackward: usize = 0x17302F0;
    pub const dwForceCrouch: usize = 0x17305C0;
    pub const dwForceForward: usize = 0x1730260;
    pub const dwForceJump: usize = 0x1730530;
    pub const dwForceLeft: usize = 0x1730380;
    pub const dwForceRight: usize = 0x1730410;
    pub const dwGameEntitySystem: usize = 0x19E0790;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x191FCA0;
    pub const dwGlobalVars: usize = 0x172ABA0;
    pub const dwGlowManager: usize = 0x19200C0;
    pub const dwInterfaceLinkList: usize = 0x1A118D8;
    pub const dwLocalPlayerController: usize = 0x1912578;
    pub const dwLocalPlayerPawn: usize = 0x17371A8;
    pub const dwPlantedC4: usize = 0x1928AD8;
    pub const dwPrediction: usize = 0x1737070;
    pub const dwSensitivity: usize = 0x19209E8;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x19309B0;
    pub const dwViewMatrix: usize = 0x19241A0;
    pub const dwViewRender: usize = 0x1924A20;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x514574;
    pub const dwNetworkGameClient_deltaTick: usize = 0x258;
    pub const dwNetworkGameClient: usize = 0x513AC8;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5CCCDC;
    pub const dwWindowWidth: usize = 0x5CCCD8;
}

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36B0; // Game build number
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x367A0;
}

pub mod matchmaking_dll { // matchmaking.dll
    pub const dwGameTypes: usize = 0x1D21E0;
    pub const dwGameTypes_mapName: usize = 0x1D2300;
}