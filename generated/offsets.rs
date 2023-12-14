/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 14 Dec 2023 15:21:21 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x17C18E0;
    pub const dwForceAttack: usize = 0x16C1E30;
    pub const dwForceAttack2: usize = 0x16C1EC0;
    pub const dwForceBackward: usize = 0x16C2100;
    pub const dwForceCrouch: usize = 0x16C23D0;
    pub const dwForceForward: usize = 0x16C2070;
    pub const dwForceJump: usize = 0x16C2340;
    pub const dwForceLeft: usize = 0x16C2190;
    pub const dwForceRight: usize = 0x16C2220;
    pub const dwGameEntitySystem: usize = 0x18ED1C0;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x181DFF8;
    pub const dwGlobalVars: usize = 0x16BDE28;
    pub const dwGlowManager: usize = 0x181D768;
    pub const dwInterfaceLinkList: usize = 0x191AE58;
    pub const dwLocalPlayerController: usize = 0x1810EE0;
    pub const dwLocalPlayerPawn: usize = 0x16C8ED8;
    pub const dwPlantedC4: usize = 0x1824B98;
    pub const dwPrediction: usize = 0x16C8DA0;
    pub const dwSensitivity: usize = 0x181ECF8;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x1880D60;
    pub const dwViewMatrix: usize = 0x1820100;
    pub const dwViewRender: usize = 0x1820948;
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