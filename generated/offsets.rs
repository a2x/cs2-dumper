#![allow(non_snake_case, non_upper_case_globals)]

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-05 09:19:39.897461600 UTC

pub mod client_dll {
    pub const dwEntityList: usize = 0x178D8D8;
    pub const dwForceBackward: usize = 0x1694F00;
    pub const dwForceCrouch: usize = 0x16951D0;
    pub const dwForceForward: usize = 0x1694E70;
    pub const dwForceJump: usize = 0x1695140;
    pub const dwForceLeft: usize = 0x1694F90;
    pub const dwForceRight: usize = 0x1695020;
    pub const dwGlobalVars: usize = 0x1690D28;
    pub const dwInterfaceLinkList: usize = 0x1973B98;
    pub const dwLocalPlayerController: usize = 0x17DC148;
    pub const dwLocalPlayerPawn: usize = 0x187AC38;
    pub const dwPlantedC4: usize = 0x1880D80;
    pub const dwViewAngles: usize = 0x18DA6F0;
    pub const dwViewMatrix: usize = 0x187B720;
    pub const dwViewRender: usize = 0x187C110;
}

pub mod engine2_dll {
    pub const dwBuildNumber: usize = 0x48B504;
    pub const dwNetworkGameClient: usize = 0x48AAB0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
}