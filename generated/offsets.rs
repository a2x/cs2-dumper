#![allow(non_snake_case, non_upper_case_globals)]

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-02 15:54:55.606604100 UTC

pub mod client_dll {
    pub const dwEntityList: usize = 0x178B898;
    pub const dwForceBackward: usize = 0x1692EC0;
    pub const dwForceCrouch: usize = 0x1693190;
    pub const dwForceForward: usize = 0x1692E30;
    pub const dwForceJump: usize = 0x1693100;
    pub const dwForceLeft: usize = 0x1692F50;
    pub const dwForceRight: usize = 0x1692FE0;
    pub const dwGlobalVars: usize = 0x168ECE8;
    pub const dwInterfaceLinkList: usize = 0x1971A58;
    pub const dwLocalPlayerController: usize = 0x17DA118;
    pub const dwLocalPlayerPawn: usize = 0x1878C08;
    pub const dwPlantedC4: usize = 0x187E9A0;
    pub const dwViewAngles: usize = 0x18D85B0;
    pub const dwViewMatrix: usize = 0x18796F0;
}

pub mod engine2_dll {
    pub const dwNetworkGameClient: usize = 0x48AAB0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
}