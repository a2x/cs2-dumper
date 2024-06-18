use memflow::prelude::v1::*;

use super::{SchemaMetadataEntryData, SchemaType};

#[derive(Pod)]
#[repr(C)]
pub struct SchemaStaticFieldData {
    pub name: Pointer64<ReprCString>,                 // 0x0000
    pub type_: Pointer64<SchemaType>,                 // 0x0008
    pub instance: Pointer64<()>,                      // 0x0010
    pub metadata_count: i32,                          // 0x0018
    pad_001c: [u8; 0x4],                              // 0x001C
    pub metadata: Pointer64<SchemaMetadataEntryData>, // 0x0020
}
