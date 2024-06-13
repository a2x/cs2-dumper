use memflow::prelude::v1::*;

use super::{SchemaMetadataEntryData, SchemaType};

#[derive(Pod)]
#[repr(C)]
pub struct SchemaClassFieldData {
    pub name: Pointer64<ReprCString>,                 // 0x0000
    pub schema_type: Pointer64<SchemaType>,           // 0x0008
    pub single_inheritance_offset: i32,               // 0x0010
    pub metadata_count: i32,                          // 0x0014
    pub metadata: Pointer64<SchemaMetadataEntryData>, // 0x0018
}
