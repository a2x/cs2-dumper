/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 23 Feb 2024 13:32:08 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x18B3FA8;
    pub const dwForceAttack: usize = 0x17221D0;
    pub const dwForceAttack2: usize = 0x1722260;
    pub const dwForceBackward: usize = 0x17224A0;
    pub const dwForceCrouch: usize = 0x1722770;
    pub const dwForceForward: usize = 0x1722410;
    pub const dwForceJump: usize = 0x17226E0;
    pub const dwForceLeft: usize = 0x1722530;
    pub const dwForceRight: usize = 0x17225C0;
    pub const dwGameEntitySystem: usize = 0x19D1980;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x1910FC0;
    pub const dwGlobalVars: usize = 0x171CE70;
    pub const dwGlowManager: usize = 0x19113E0;
    pub const dwInterfaceLinkList: usize = 0x1A029D8;
    pub const dwLocalPlayerController: usize = 0x19038F8;
    pub const dwLocalPlayerPawn: usize = 0x1729348;
    pub const dwPlantedC4: usize = 0x191B508;
    pub const dwPrediction: usize = 0x1729210;
    pub const dwSensitivity: usize = 0x1911D08;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x19233E0;
    pub const dwViewMatrix: usize = 0x19154C0;
    pub const dwViewRender: usize = 0x1915D40;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x513564;
    pub const dwNetworkGameClient: usize = 0x512AC8;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_deltaTick: usize = 0x258;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5CABC4;
    pub const dwWindowWidth: usize = 0x5CABC0;
}

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36AA; // Game build number
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x367A0;
}

pub mod matchmaking_dll { // matchmaking.dll
    pub const dwGameTypes: usize = 0x1D21E0;
    pub const dwGameTypes_mapName: usize = 0x1D2300;
}