/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 9 Nov 2023 06:05:32 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17ADAF0;
    pub const dwForceAttack: usize = 0x16B2320;
    pub const dwForceAttack2: usize = 0x16B23B0;
    pub const dwForceBackward: usize = 0x16B25F0;
    pub const dwForceCrouch: usize = 0x16B28C0;
    pub const dwForceForward: usize = 0x16B2560;
    pub const dwForceJump: usize = 0x16B2830;
    pub const dwForceLeft: usize = 0x16B2680;
    pub const dwForceRight: usize = 0x16B2710;
    pub const dwGameEntitySystem: usize = 0x18D72E0;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x1809730;
    pub const dwGlobalVars: usize = 0x16AE4A8;
    pub const dwGlowManager: usize = 0x1809758;
    pub const dwInterfaceLinkList: usize = 0x1904F78;
    pub const dwLocalPlayerController: usize = 0x17FCDC8;
    pub const dwLocalPlayerPawn: usize = 0x16B9398;
    pub const dwPlantedC4: usize = 0x1810CD8;
    pub const dwPrediction: usize = 0x16B9260;
    pub const dwViewAngles: usize = 0x186B108;
    pub const dwViewMatrix: usize = 0x180C0F0;
    pub const dwViewRender: usize = 0x180C948;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x48B524;
    pub const dwNetworkGameClient: usize = 0x48AAC0;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x541E0C;
    pub const dwWindowWidth: usize = 0x541E08;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35770;
}