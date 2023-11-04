/*
 * Created using https://github.com/a2x/cs2-dumper
 * Sat, 4 Nov 2023 04:05:17 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17AB958;
    pub const dwForceAttack: usize = 0x16B02B0;
    pub const dwForceAttack2: usize = 0x16B0340;
    pub const dwForceBackward: usize = 0x16B0580;
    pub const dwForceCrouch: usize = 0x16B0850;
    pub const dwForceForward: usize = 0x16B04F0;
    pub const dwForceJump: usize = 0x16B07C0;
    pub const dwForceLeft: usize = 0x16B0610;
    pub const dwForceRight: usize = 0x16B06A0;
    pub const dwGameEntitySystem: usize = 0x18D51A8;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x1807FA8;
    pub const dwGlobalVars: usize = 0x16AC100;
    pub const dwGlowManager: usize = 0x1807708;
    pub const dwInterfaceLinkList: usize = 0x1902EB8;
    pub const dwLocalPlayerController: usize = 0x17FAC68;
    pub const dwLocalPlayerPawn: usize = 0x16B7340;
    pub const dwPlantedC4: usize = 0x180EB48;
    pub const dwPrediction: usize = 0x16B7210;
    pub const dwViewAngles: usize = 0x18690D8;
    pub const dwViewMatrix: usize = 0x180A0D0;
    pub const dwViewRender: usize = 0x180A090;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x488514;
    pub const dwNetworkGameClient: usize = 0x487AB0;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5397DC;
    pub const dwWindowWidth: usize = 0x5397D8;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35770;
}