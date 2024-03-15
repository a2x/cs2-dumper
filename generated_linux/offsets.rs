/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Fri, 15 Mar 2024 16:10:00 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36AC; // Game build number
}

pub mod libclient_so { // libclient.so
    pub const dwEntityList: usize = 0x35A7848;
    pub const dwForceAttack: usize = 0x3731FD0;
    pub const dwForceAttack2: usize = 0x3731F30;
    pub const dwGameEntitySystem: usize = 0x385D880;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1540;
    pub const dwGameRules: usize = 0x3733368;
    pub const dwGlobalVars: usize = 0x35689D0;
    pub const dwGlowManager: usize = 0x3737C70;
    pub const dwInterfaceLinkList: usize = 0x37D00B0;
    pub const dwLocalPlayerController: usize = 0x3718898;
    pub const dwLocalPlayerPawn: usize = 0x3738C58;
    pub const dwPlantedC4: usize = 0x374D4B8;
    pub const dwPrediction: usize = 0x3738B20;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x37459A0;
    pub const dwViewMatrix: usize = 0x3739780;
    pub const dwViewRender: usize = 0x3739930;
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