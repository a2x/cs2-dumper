/*
 * Created using https://github.com/a2x/cs2-dumper
 * Tue, 5 Dec 2023 00:38:26 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17BB5B0;
    pub const dwForceAttack: usize = 0x16BBA70;
    pub const dwForceAttack2: usize = 0x16BBB00;
    pub const dwForceBackward: usize = 0x16BBD40;
    pub const dwForceCrouch: usize = 0x16BC010;
    pub const dwForceForward: usize = 0x16BBCB0;
    pub const dwForceJump: usize = 0x16BBF80;
    pub const dwForceLeft: usize = 0x16BBDD0;
    pub const dwForceRight: usize = 0x16BBE60;
    pub const dwGameEntitySystem: usize = 0x18E6DE0;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x18173C8;
    pub const dwGlobalVars: usize = 0x16B7BE0;
    pub const dwGlowManager: usize = 0x18173E8;
    pub const dwInterfaceLinkList: usize = 0x1914A78;
    pub const dwLocalPlayerController: usize = 0x180AA20;
    pub const dwLocalPlayerPawn: usize = 0x16C2B18;
    pub const dwPlantedC4: usize = 0x181E988;
    pub const dwPrediction: usize = 0x16C29E0;
    pub const dwSensitivity: usize = 0x1818AD8;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x187A9D0;
    pub const dwViewMatrix: usize = 0x1819D40;
    pub const dwViewRender: usize = 0x181A5C0;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x48A344;
    pub const dwNetworkGameClient: usize = 0x4898F8;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x540A4C;
    pub const dwWindowWidth: usize = 0x540A48;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35760;
}