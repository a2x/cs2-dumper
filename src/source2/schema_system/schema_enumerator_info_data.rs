use memflow::prelude::v1::*;

use super::SchemaMetadataEntryData;

#[derive(Pod)]
#[repr(C)]
pub struct SchemaEnumeratorInfoData {
    pub name: Pointer64<ReprCString>,                 // 0x0000
    pub value: SchemaEnumeratorInfoDataUnion,         // 0x0008
    pub metadata_count: i32,                          // 0x0010
    pad_0014: [u8; 0x4],                              // 0x0014
    pub metadata: Pointer64<SchemaMetadataEntryData>, // 0x0018
}

#[repr(C)]
pub union SchemaEnumeratorInfoDataUnion {
    pub uchar: u8,
    pub ushort: u16,
    pub uint: u32,
    pub ulong: u64,
}

unsafe impl Pod for SchemaEnumeratorInfoDataUnion {}
