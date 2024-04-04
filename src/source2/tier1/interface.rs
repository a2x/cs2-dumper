use memflow::prelude::v1::*;

#[repr(C)]
pub struct InterfaceReg {
    pub create_fn: Address,            // 0x0000
    pub name: Pointer64<ReprCString>,  // 0x0008
    pub next: Pointer64<InterfaceReg>, // 0x0010
}

unsafe impl Pod for InterfaceReg {}
