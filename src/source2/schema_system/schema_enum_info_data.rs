use memflow::prelude::v1::*;

use super::{SchemaEnumeratorInfoData, SchemaMetadataEntryData, SchemaSystemTypeScope};

pub type SchemaEnumBinding = SchemaEnumInfoData;

#[rustfmt::skip]
#[derive(Pod)]
#[repr(C)]
pub struct SchemaEnumInfoData {
    pub base: Pointer64<SchemaEnumInfoData>,                 // 0x0000
    pub name: Pointer64<ReprCString>,                        // 0x0008
    pub module_name: Pointer64<ReprCString>,                 // 0x0010
    pub size: u8,                                            // 0x0018
    pub align_of: u8,                                        // 0x0019
    pad_001a: [u8; 0x2],                                     // 0x001A
    pub enumerators_count: u16,                              // 0x001C
    pub static_metadata_count: u16,                          // 0x001E
    pub enumerators: Pointer64<[SchemaEnumeratorInfoData]>,  // 0x0020
    pub static_metadata: Pointer64<SchemaMetadataEntryData>, // 0x0028
    pub type_scope: Pointer64<SchemaSystemTypeScope>,        // 0x0030
    pub min_enumerator_value: i64,                           // 0x0038
    pub max_enumerator_value: i64,                           // 0x0040
}
