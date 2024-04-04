use memflow::prelude::v1::*;

use super::SchemaMetadataEntryData;

#[repr(C)]
pub struct SchemaEnumeratorInfoData {
    pub name: Pointer64<ReprCString>,                 // 0x0000
    pub u: SchemaEnumeratorInfoDataUnion,             // 0x0008
    pub num_metadata: u32,                            // 0x0010
    pub metadata: Pointer64<SchemaMetadataEntryData>, // 0x0018
}

unsafe impl Pod for SchemaEnumeratorInfoData {}

#[repr(C)]
pub union SchemaEnumeratorInfoDataUnion {
    pub uchar: u8,
    pub ushort: u16,
    pub uint: u32,
    pub ulong: u64,
}
