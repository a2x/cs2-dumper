/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Mon, 11 Mar 2024 20:06:27 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36AB; // Game build number
}

pub mod libclient_so { // libclient.so
    pub const dwEntityList: usize = 0x35A5808;
    pub const dwForceAttack: usize = 0x372FEB0;
    pub const dwForceAttack2: usize = 0x372FE10;
    pub const dwGameEntitySystem: usize = 0x385B700;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1540;
    pub const dwGameRules: usize = 0x3731248;
    pub const dwGlobalVars: usize = 0x35669D0;
    pub const dwGlowManager: usize = 0x3735B50;
    pub const dwInterfaceLinkList: usize = 0x37CDF30;
    pub const dwLocalPlayerController: usize = 0x3716778;
    pub const dwLocalPlayerPawn: usize = 0x3736B38;
    pub const dwPlantedC4: usize = 0x374B398;
    pub const dwPrediction: usize = 0x3736A00;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x3743870;
    pub const dwViewMatrix: usize = 0x3737660;
    pub const dwViewRender: usize = 0x3737810;
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