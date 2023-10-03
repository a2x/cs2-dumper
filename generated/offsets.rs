#![allow(non_snake_case, non_upper_case_globals)]

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-03 00:41:25.582161200 UTC

pub mod client_dll {
    pub const dwEntityList: usize = 0x178D8C8;
    pub const dwForceBackward: usize = 0x1694ED0;
    pub const dwForceCrouch: usize = 0x16951A0;
    pub const dwForceForward: usize = 0x1694E40;
    pub const dwForceJump: usize = 0x1695110;
    pub const dwForceLeft: usize = 0x1694F60;
    pub const dwForceRight: usize = 0x1694FF0;
    pub const dwGlobalVars: usize = 0x1690CF8;
    pub const dwInterfaceLinkList: usize = 0x1973A68;
    pub const dwLocalPlayerController: usize = 0x17DC148;
    pub const dwLocalPlayerPawn: usize = 0x187AC28;
    pub const dwPlantedC4: usize = 0x1880AE0;
    pub const dwViewAngles: usize = 0x18DA5C0;
    pub const dwViewMatrix: usize = 0x187B710;
}

pub mod engine2_dll {
    pub const dwNetworkGameClient: usize = 0x48AAB0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
}