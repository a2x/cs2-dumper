/*
 * https://github.com/a2x/cs2-dumper
 * 2023-10-18 10:31:55.051133700 UTC
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod ClientDll {
    pub const dwEntityList: usize = 0x1793DC8;
    pub const dwForceAttack: usize = 0x169AE50;
    pub const dwForceAttack2: usize = 0x169AEE0;
    pub const dwForceBackward: usize = 0x169B120;
    pub const dwForceCrouch: usize = 0x169B3F0;
    pub const dwForceForward: usize = 0x169B090;
    pub const dwForceJump: usize = 0x169B360;
    pub const dwForceLeft: usize = 0x169B1B0;
    pub const dwForceRight: usize = 0x169B240;
    pub const dwGameRules: usize = 0x17EFAD8;
    pub const dwGlobalVars: usize = 0x1696F40;
    pub const dwGlowManager: usize = 0x17EF258;
    pub const dwInterfaceLinkList: usize = 0x197A678;
    pub const dwLocalPlayerController: usize = 0x17E27C8;
    pub const dwLocalPlayerPawn: usize = 0x1881288;
    pub const dwPlantedC4: usize = 0x1887FC0;
    pub const dwViewAngles: usize = 0x18E0DA0;
    pub const dwViewMatrix: usize = 0x1881D70;
    pub const dwViewRender: usize = 0x1882768;
    pub const dwGameEntitySystem_getBaseEntity: usize = 0x5FFD50;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x5F1A40;
    pub const dwBaseEntityModel_setModel: usize = 0x57C750;
}

pub mod Engine2Dll {
    pub const dwBuildNumber: usize = 0x487514;
    pub const dwNetworkGameClient: usize = 0x486AB0;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5386D4;
    pub const dwWindowWidth: usize = 0x5386D0;
}