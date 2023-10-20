/*
 * Created using https://github.com/a2x/cs2-dumper
 * 2023-10-20 23:01:51.631119800 UTC
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod ClientDll { // client.dll
    pub const dwBaseEntityModel_setModel: usize = 0x57DA70;
    pub const dwEntityList: usize = 0x1798738;
    pub const dwForceAttack: usize = 0x169DE50;
    pub const dwForceAttack2: usize = 0x169DEE0;
    pub const dwForceBackward: usize = 0x169E120;
    pub const dwForceCrouch: usize = 0x169E3F0;
    pub const dwForceForward: usize = 0x169E090;
    pub const dwForceJump: usize = 0x169E360;
    pub const dwForceLeft: usize = 0x169E1B0;
    pub const dwForceRight: usize = 0x169E240;
    pub const dwGameEntitySystem_getBaseEntity: usize = 0x601070;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x5F2D60;
    pub const dwGameRules: usize = 0x17F4478;
    pub const dwGlobalVars: usize = 0x1699F40;
    pub const dwGlowManager: usize = 0x17F3BF8;
    pub const dwInterfaceLinkList: usize = 0x197F2B8;
    pub const dwLocalPlayerController: usize = 0x17E7158;
    pub const dwLocalPlayerPawn: usize = 0x1885C28;
    pub const dwPlantedC4: usize = 0x188CAD0;
    pub const dwViewAngles: usize = 0x18E5740;
    pub const dwViewMatrix: usize = 0x1886710;
    pub const dwViewRender: usize = 0x1887108;
}

pub mod Engine2Dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x487514;
    pub const dwNetworkGameClient: usize = 0x486AB0;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x53867C;
    pub const dwWindowWidth: usize = 0x538678;
}