#![allow(non_snake_case, non_upper_case_globals)]

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-10 02:56:33.656895 UTC

pub mod client_dll {
    pub const dwEntityList: usize = 0x178A808;
    pub const dwForceBackward: usize = 0x1691F40;
    pub const dwForceCrouch: usize = 0x1692210;
    pub const dwForceForward: usize = 0x1691EB0;
    pub const dwForceJump: usize = 0x1692180;
    pub const dwForceLeft: usize = 0x1691FD0;
    pub const dwForceRight: usize = 0x1692060;
    pub const dwGlobalVars: usize = 0x168DD60;
    pub const dwGlowManager: usize = 0x17E5CC8;
    pub const dwInterfaceLinkList: usize = 0x1970D48;
    pub const dwLocalPlayerController: usize = 0x17D9218;
    pub const dwLocalPlayerPawn: usize = 0x1877CF8;
    pub const dwPlantedC4: usize = 0x187E5A0;
    pub const dwViewAngles: usize = 0x18D77B0;
    pub const dwViewMatrix: usize = 0x18787E0;
    pub const dwViewRender: usize = 0x18791D0;
}

pub mod engine2_dll {
    pub const dwBuildNumber: usize = 0x486514;
    pub const dwNetworkGameClient: usize = 0x485AB0;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x53768C;
    pub const dwWindowWidth: usize = 0x537688;
}