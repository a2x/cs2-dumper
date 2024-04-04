use memflow::prelude::v1::*;

use super::SchemaClassInfoData;

#[repr(C)]
pub struct SchemaBaseClassInfoData {
    pub offset: u32,                          // 0x0000
    pad_0004: [u8; 0x4],                      // 0x0004
    pub prev: Pointer64<SchemaClassInfoData>, // 0x0008
}

unsafe impl Pod for SchemaBaseClassInfoData {}
