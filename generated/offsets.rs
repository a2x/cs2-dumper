#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll {
    pub const entityList: usize = 0x178C8A8;
    pub const globalVars: usize = 0x168FCE8;
    pub const interfaceLinkList: usize = 0x1972A68;
    pub const localPlayerController: usize = 0x17DB128;
    pub const localPlayerPawn: usize = 0x1879C18;
    pub const viewAngles: usize = 0x18D95C0;
    pub const viewMatrix: usize = 0x187A700;
}

pub mod engine2_dll {
    pub const networkGameClient: usize = 0x48AAB0;
    pub const networkGameClient_signOnState: usize = 0x240;
}