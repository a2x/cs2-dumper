use memflow::prelude::v1::*;

use super::SchemaMetadataEntryData;

#[repr(C)]
pub struct SchemaEnumeratorInfoData {
    pub name: Pointer64<ReprCString>,
    pub u: SchemaEnumeratorInfoDataUnion,
    pub metadata_count: u32,
    pub metadata: Pointer64<SchemaMetadataEntryData>,
}

unsafe impl Pod for SchemaEnumeratorInfoData {}

#[repr(C)]
pub union SchemaEnumeratorInfoDataUnion {
    pub uchar: u8,
    pub ushort: u16,
    pub uint: u32,
    pub ulong: u64,
}
