use memflow::prelude::v1::*;

use super::{SchemaEnumeratorInfoData, SchemaMetadataEntryData, SchemaSystemTypeScope};

pub type SchemaEnumBinding = SchemaEnumInfoData;

#[repr(C)]
pub struct SchemaEnumInfoData {
    pub base: Pointer64<SchemaEnumInfoData>,
    pub name: Pointer64<ReprCString>,
    pub module_name: Pointer64<ReprCString>,
    pub alignment: u8,
    pad_0019: [u8; 0x3],
    pub size: u16,
    pub static_metadata_count: u16,
    pub enum_info: Pointer64<SchemaEnumeratorInfoData>,
    pub static_metadata: Pointer64<SchemaMetadataEntryData>,
    pub type_scope: Pointer64<SchemaSystemTypeScope>,
    pad_0038: [u8; 0xC],
}

unsafe impl Pod for SchemaEnumInfoData {}
