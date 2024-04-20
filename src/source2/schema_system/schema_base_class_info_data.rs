use memflow::prelude::v1::*;

use super::SchemaClassInfoData;

#[derive(Pod)]
#[repr(C)]
pub struct SchemaBaseClassInfoData {
    pub offset: u32,                          // 0x0000
    pad_0004: [u8; 4],                        // 0x0004
    pub prev: Pointer64<SchemaClassInfoData>, // 0x0008
}
