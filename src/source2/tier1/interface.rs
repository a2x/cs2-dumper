use memflow::prelude::v1::*;

#[repr(C)]
pub struct InterfaceReg {
    pub create_fn: Address,
    pub name: Pointer64<ReprCString>,
    pub next: Pointer64<InterfaceReg>,
}

unsafe impl Pod for InterfaceReg {}
