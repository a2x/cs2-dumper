use memflow::prelude::v1::*;

use super::{
    SchemaBaseClassInfoData, SchemaClassFieldData, SchemaMetadataEntryData, SchemaStaticFieldData,
    SchemaSystemTypeScope, SchemaType,
};

pub type SchemaClassBinding = SchemaClassInfoData;

#[repr(C)]
pub struct SchemaClassInfoData {
    pub base: Pointer64<SchemaClassInfoData>,
    pub name: Pointer64<ReprCString>,
    pub module_name: Pointer64<ReprCString>,
    pub size: u32,
    pub fields_count: u16,
    pub static_fields_count: u16,
    pub static_metadata_count: u16,
    pub alignment: u8,
    pub has_base_class: bool,
    pub total_class_size: u16,
    pub derived_class_size: u16,
    pub fields: Pointer64<SchemaClassFieldData>,
    pub static_fields: Pointer64<SchemaStaticFieldData>,
    pub base_classes: Pointer64<SchemaBaseClassInfoData>,
    pad_0040: [u8; 0x8],
    pub static_metadata: Pointer64<SchemaMetadataEntryData>,
    pub type_scope: Pointer64<SchemaSystemTypeScope>,
    pub type_: Pointer64<SchemaType>,
    pad_0060: [u8; 0x10],
}

unsafe impl Pod for SchemaClassInfoData {}
