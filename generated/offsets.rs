/*
 * Created using https://github.com/a2x/cs2-dumper
 * Sat, 18 Nov 2023 01:51:41 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17B0CF0;
    pub const dwForceAttack: usize = 0x16B5400;
    pub const dwForceAttack2: usize = 0x16B5490;
    pub const dwForceBackward: usize = 0x16B56D0;
    pub const dwForceCrouch: usize = 0x16B59A0;
    pub const dwForceForward: usize = 0x16B5640;
    pub const dwForceJump: usize = 0x16B5910;
    pub const dwForceLeft: usize = 0x16B5760;
    pub const dwForceRight: usize = 0x16B57F0;
    pub const dwGameEntitySystem: usize = 0x18DC3D0;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x180C9A0;
    pub const dwGlobalVars: usize = 0x16B14E0;
    pub const dwGlowManager: usize = 0x180C9C8;
    pub const dwInterfaceLinkList: usize = 0x190A068;
    pub const dwLocalPlayerController: usize = 0x1800008;
    pub const dwLocalPlayerPawn: usize = 0x16BC4A8;
    pub const dwPlantedC4: usize = 0x1813F68;
    pub const dwPrediction: usize = 0x16BC370;
    pub const dwSensitivity: usize = 0x180DF58;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x186FFB0;
    pub const dwViewMatrix: usize = 0x180F330;
    pub const dwViewRender: usize = 0x180FBB0;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x48A514;
    pub const dwNetworkGameClient: usize = 0x489AC0;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x540CE4;
    pub const dwWindowWidth: usize = 0x540CE0;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35760;
}