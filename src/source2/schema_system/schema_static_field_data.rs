use memflow::prelude::v1::*;

use super::SchemaType;

#[repr(C)]
pub struct SchemaStaticFieldData {
    pub name: Pointer64<ReprCString>,
    pub type_: Pointer64<SchemaType>,
    pub instance: Address,
    pad_0018: [u8; 0x10],
}

unsafe impl Pod for SchemaStaticFieldData {}
