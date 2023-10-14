#![allow(non_snake_case, non_upper_case_globals)]

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-14 05:19:10.046951800 UTC

pub mod client_dll {
    pub const dwEntityList: usize = 0x178FC88;
    pub const dwForceAttack: usize = 0x1696DF0;
    pub const dwForceAttack2: usize = 0x1696E80;
    pub const dwForceBackward: usize = 0x16970C0;
    pub const dwForceCrouch: usize = 0x1697390;
    pub const dwForceForward: usize = 0x1697030;
    pub const dwForceJump: usize = 0x1697300;
    pub const dwForceLeft: usize = 0x1697150;
    pub const dwForceRight: usize = 0x16971E0;
    pub const dwGameRules: usize = 0x17EB818;
    pub const dwGlobalVars: usize = 0x1692EE8;
    pub const dwGlowManager: usize = 0x17EAF98;
    pub const dwInterfaceLinkList: usize = 0x1976138;
    pub const dwLocalPlayerController: usize = 0x17DE508;
    pub const dwLocalPlayerPawn: usize = 0x187CFC8;
    pub const dwPlantedC4: usize = 0x18838C0;
    pub const dwViewAngles: usize = 0x18DCAF0;
    pub const dwViewMatrix: usize = 0x187DAB0;
    pub const dwViewRender: usize = 0x187E4A8;
}

pub mod engine2_dll {
    pub const dwBuildNumber: usize = 0x487514;
    pub const dwNetworkGameClient: usize = 0x486AB0;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x538674;
    pub const dwWindowWidth: usize = 0x538670;
}