/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 3 Nov 2023 09:10:10 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwBaseEntityModel_setModel: usize = 0x581310;
    pub const dwEntityList: usize = 0x17AA8E8;
    pub const dwForceAttack: usize = 0x16AF290;
    pub const dwForceAttack2: usize = 0x16AF320;
    pub const dwForceBackward: usize = 0x16AF560;
    pub const dwForceCrouch: usize = 0x16AF830;
    pub const dwForceForward: usize = 0x16AF4D0;
    pub const dwForceJump: usize = 0x16AF7A0;
    pub const dwForceLeft: usize = 0x16AF5F0;
    pub const dwForceRight: usize = 0x16AF680;
    pub const dwGameEntitySystem: usize = 0x1964158;
    pub const dwGameEntitySystem_getBaseEntity: usize = 0x604920;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x5F6610;
    pub const dwGameRules: usize = 0x1806F48;
    pub const dwGlobalVars: usize = 0x16AB2D0;
    pub const dwGlowManager: usize = 0x18066A8;
    pub const dwInterfaceLinkList: usize = 0x1991E68;
    pub const dwLocalPlayerController: usize = 0x17F9C08;
    pub const dwLocalPlayerPawn: usize = 0x16B6320;
    pub const dwPlantedC4: usize = 0x189DAF8;
    pub const dwPrediction: usize = 0x16B61F0;
    pub const dwViewAngles: usize = 0x18F8088;
    pub const dwViewMatrix: usize = 0x1899070;
    pub const dwViewRender: usize = 0x1899A48;
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