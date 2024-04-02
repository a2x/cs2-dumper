use memflow::prelude::v1::*;

use super::{SchemaMetadataEntryData, SchemaType};

#[repr(C)]
pub struct SchemaClassFieldData {
    pub name: Pointer64<ReprCString>,
    pub type_: Pointer64<SchemaType>,
    pub offset: u32,
    pub metadata_count: u32,
    pub metadata: Pointer64<SchemaMetadataEntryData>,
}

unsafe impl Pod for SchemaClassFieldData {}
