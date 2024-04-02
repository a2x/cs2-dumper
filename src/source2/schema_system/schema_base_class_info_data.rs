use memflow::prelude::v1::*;

use super::SchemaClassInfoData;

#[repr(C)]
pub struct SchemaBaseClassInfoData {
    pub offset: u32,
    pub prev: Pointer64<SchemaClassInfoData>,
}

unsafe impl Pod for SchemaBaseClassInfoData {}
