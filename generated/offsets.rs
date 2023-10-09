#![allow(non_snake_case, non_upper_case_globals)]

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-09 05:41:44.461556800 UTC

pub mod client_dll {
    pub const dwEntityList: usize = 0x17888D8;
    pub const dwForceBackward: usize = 0x168FEC0;
    pub const dwForceCrouch: usize = 0x1690190;
    pub const dwForceForward: usize = 0x168FE30;
    pub const dwForceJump: usize = 0x1690100;
    pub const dwForceLeft: usize = 0x168FF50;
    pub const dwForceRight: usize = 0x168FFE0;
    pub const dwGlobalVars: usize = 0x168BCE8;
    pub const dwGlowManager: usize = 0x17E3C00;
    pub const dwInterfaceLinkList: usize = 0x196EC98;
    pub const dwLocalPlayerController: usize = 0x17D7158;
    pub const dwLocalPlayerPawn: usize = 0x1875C48;
    pub const dwPlantedC4: usize = 0x187B9E0;
    pub const dwViewAngles: usize = 0x18D5700;
    pub const dwViewMatrix: usize = 0x1876730;
    pub const dwViewRender: usize = 0x1877120;
}

pub mod engine2_dll {
    pub const dwBuildNumber: usize = 0x486514;
    pub const dwNetworkGameClient: usize = 0x485AB0;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5376AC;
    pub const dwWindowWidth: usize = 0x5376A8;
}