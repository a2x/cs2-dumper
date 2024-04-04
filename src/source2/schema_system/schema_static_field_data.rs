use memflow::prelude::v1::*;

use super::SchemaType;

#[repr(C)]
pub struct SchemaStaticFieldData {
    pub name: Pointer64<ReprCString>, // 0x0000
    pub type_: Pointer64<SchemaType>, // 0x0008
    pub instance: Address,            // 0x0010
    pad_0018: [u8; 0x10],             // 0x0018
}

unsafe impl Pod for SchemaStaticFieldData {}
