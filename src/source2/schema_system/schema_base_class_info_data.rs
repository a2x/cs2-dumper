use memflow::prelude::v1::*;

use super::SchemaClassInfoData;

#[repr(C)]
pub struct SchemaBaseClassInfoData {
    pad_0000: [u8; 0x18],                 // 0x0000
    pub prev: Pointer64<SchemaBaseClass>, // 0x0018
}

unsafe impl Pod for SchemaBaseClassInfoData {}

#[repr(C)]
pub struct SchemaBaseClass {
    pad_0000: [u8; 0x10],             // 0x0000
    pub name: Pointer64<ReprCString>, // 0x0010
}

unsafe impl Pod for SchemaBaseClass {}
