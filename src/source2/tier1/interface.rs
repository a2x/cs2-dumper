use memflow::prelude::v1::*;

/// Represents a node in the linked list of exposed interfaces.
#[derive(Pod)]
#[repr(C)]
pub struct InterfaceReg {
    pub create_fn: Pointer64<()>,
    pub name: Pointer64<ReprCString>,
    pub next: Pointer64<InterfaceReg>,
}
