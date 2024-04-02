use memflow::prelude::v1::*;

#[repr(C)]
pub struct KeyboardKey {
    pad_0000: [u8; 0x8],
    pub name: Pointer64<ReprCString>,
    pad_0010: [u8; 0x20],
    pub state: u32,
    pad_0034: [u8; 0x50],
    pub next: Pointer64<KeyboardKey>,
}

unsafe impl Pod for KeyboardKey {}
