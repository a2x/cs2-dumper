/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 14 Dec 2023 01:10:27 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17C18D0;
    pub const dwForceAttack: usize = 0x16C2180;
    pub const dwForceAttack2: usize = 0x16C2330;
    pub const dwForceBackward: usize = 0x16C20F0;
    pub const dwForceCrouch: usize = 0x16C23C0;
    pub const dwForceForward: usize = 0x16C2060;
    pub const dwForceJump: usize = 0x16C2330;
    pub const dwForceLeft: usize = 0x16C2180;
    pub const dwForceRight: usize = 0x16C2210;
    pub const dwGameEntitySystem: usize = 0x18ED1A0;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x181DFE8;
    pub const dwGlobalVars: usize = 0x16BDE18;
    pub const dwGlowManager: usize = 0x181D758;
    pub const dwInterfaceLinkList: usize = 0x191AE38;
    pub const dwLocalPlayerController: usize = 0x1810ED0;
    pub const dwLocalPlayerPawn: usize = 0x16C8EC8;
    pub const dwPlantedC4: usize = 0x1824B88;
    pub const dwPrediction: usize = 0x16C8D90;
    pub const dwSensitivity: usize = 0x181ECE8;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x1880D50;
    pub const dwViewMatrix: usize = 0x18200F0;
    pub const dwViewRender: usize = 0x1820938;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x4E03D4;
    pub const dwNetworkGameClient: usize = 0x4DF988;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x596E1C;
    pub const dwWindowWidth: usize = 0x596E18;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35760;
}