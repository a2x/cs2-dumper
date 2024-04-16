use memflow::prelude::v1::*;

#[derive(Pod)]
#[repr(C)]
pub struct InterfaceReg {
    pub create_fn: Pointer64<()>,      // 0x0000
    pub name: Pointer64<ReprCString>,  // 0x0008
    pub next: Pointer64<InterfaceReg>, // 0x0010
}
