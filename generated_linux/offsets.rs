/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Thu, 7 Mar 2024 10:34:48 +0000
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
    pub const dwLocalPlayerController: usize = 0x3716778;
    pub const dwLocalPlayerPawn: usize = 0x3736A38;
    pub const dwViewMatrix: usize = 0x3737660;
}

pub mod libengine2_so { // libengine2.so
    pub const dwBuildNumber: usize = 0x6D35F4;
    pub const dwNetworkGameClient_deltaTick: usize = 0x278;
}