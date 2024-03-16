/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 16 Mar 2024 22:04:11 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36AE; // Game build number
}

pub mod libclient_so { // libclient.so
    pub const dwEntityList: usize = 0x35AA8C8;
    pub const dwForceAttack: usize = 0x3735050;
    pub const dwForceAttack2: usize = 0x3734FB0;
    pub const dwGameEntitySystem: usize = 0x38609C0;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1540;
    pub const dwGameRules: usize = 0x37363E8;
    pub const dwGlobalVars: usize = 0x379E780;
    pub const dwGlowManager: usize = 0x373ACF0;
    pub const dwInterfaceLinkList: usize = 0x37D3130;
    pub const dwLocalPlayerController: usize = 0x371B918;
    pub const dwLocalPlayerPawn: usize = 0x373BCD8;
    pub const dwPlantedC4: usize = 0x3750538;
    pub const dwPrediction: usize = 0x373BBA0;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x3748A20;
    pub const dwViewMatrix: usize = 0x373C800;
    pub const dwViewRender: usize = 0x373C9B0;
}

pub mod libengine2_so { // libengine2.so
    pub const dwBuildNumber: usize = 0x6D35F4;
    pub const dwNetworkGameClient_deltaTick: usize = 0x278;
    pub const dwNetworkGameClient: usize = 0x6D3F88;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x260;
    pub const dwWindowHeight: usize = 0x6DCDBC;
    pub const dwWindowWidth: usize = 0x6DCDB8;
}

pub mod libmatchmaking_so { // libmatchmaking.so
    pub const dwGameTypes: usize = 0x37C9A0;
    pub const dwGameTypes_mapName: usize = 0x37CAC0;
}