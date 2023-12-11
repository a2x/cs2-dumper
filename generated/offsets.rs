/*
 * Created using https://github.com/a2x/cs2-dumper
 * Mon, 11 Dec 2023 23:16:32 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17BB840;
    pub const dwForceAttack: usize = 0x16BBCF0;
    pub const dwForceAttack2: usize = 0x16BBD80;
    pub const dwForceBackward: usize = 0x16BBFC0;
    pub const dwForceCrouch: usize = 0x16BC290;
    pub const dwForceForward: usize = 0x16BBF30;
    pub const dwForceJump: usize = 0x16BC200;
    pub const dwForceLeft: usize = 0x16BC050;
    pub const dwForceRight: usize = 0x16BC0E0;
    pub const dwGameEntitySystem: usize = 0x18E7070;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x1817668;
    pub const dwGlobalVars: usize = 0x16B7E60;
    pub const dwGlowManager: usize = 0x1817688;
    pub const dwInterfaceLinkList: usize = 0x1914D08;
    pub const dwLocalPlayerController: usize = 0x180ACC0;
    pub const dwLocalPlayerPawn: usize = 0x16C2D98;
    pub const dwPlantedC4: usize = 0x181ED48;
    pub const dwPrediction: usize = 0x16C2C60;
    pub const dwSensitivity: usize = 0x1818D78;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x187AC60;
    pub const dwViewMatrix: usize = 0x1819FE0;
    pub const dwViewRender: usize = 0x181A860;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x48B344;
    pub const dwNetworkGameClient: usize = 0x48A8F8;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x541A6C;
    pub const dwWindowWidth: usize = 0x541A68;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35760;
}