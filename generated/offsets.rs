#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll {
    pub const entityList: usize = 0x178C878;
    pub const globalVars: usize = 0x168FCC8;
    pub const interfaceLinkList: usize = 0x1972A38;
    pub const localPlayerController: usize = 0x17DB0F8;
    pub const localPlayerPawn: usize = 0x1879BE8;
    pub const viewAngles: usize = 0x18D9590;
    pub const viewMatrix: usize = 0x187A6D0;
}

pub mod engine2_dll {
    pub const networkGameClient: usize = 0x489AB0;
    pub const networkGameClient_signOnState: usize = 0x240;
}