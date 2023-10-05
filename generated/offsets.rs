#![allow(non_snake_case, non_upper_case_globals)]

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-05 13:02:39.761284500 UTC

pub mod client_dll {
    pub const dwEntityList: usize = 0x178D8E8;
    pub const dwForceBackward: usize = 0x1694EF0;
    pub const dwForceCrouch: usize = 0x16951C0;
    pub const dwForceForward: usize = 0x1694E60;
    pub const dwForceJump: usize = 0x1695130;
    pub const dwForceLeft: usize = 0x1694F80;
    pub const dwForceRight: usize = 0x1695010;
    pub const dwGlobalVars: usize = 0x1690D18;
    pub const dwInterfaceLinkList: usize = 0x1973BA8;
    pub const dwLocalPlayerController: usize = 0x17DC158;
    pub const dwLocalPlayerPawn: usize = 0x187AC48;
    pub const dwPlantedC4: usize = 0x1880DE0;
    pub const dwViewAngles: usize = 0x18DA700;
    pub const dwViewMatrix: usize = 0x187B730;
    pub const dwViewRender: usize = 0x187C120;
}

pub mod engine2_dll {
    pub const dwBuildNumber: usize = 0x48C504;
    pub const dwNetworkGameClient: usize = 0x48BAB0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
}