use memflow::prelude::v1::*;

use super::{SchemaMetadataEntryData, SchemaType};

#[repr(C)]
pub struct SchemaClassFieldData {
    pub name: Pointer64<ReprCString>,                 // 0x0000
    pub type_: Pointer64<SchemaType>,                 // 0x0008
    pub offset: u32,                                  // 0x0010
    pub num_metadata: u32,                            // 0x0014
    pub metadata: Pointer64<SchemaMetadataEntryData>, // 0x0018
}

unsafe impl Pod for SchemaClassFieldData {}
