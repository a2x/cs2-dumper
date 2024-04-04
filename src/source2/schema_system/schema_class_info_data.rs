use memflow::prelude::v1::*;

use super::{
    SchemaBaseClassInfoData, SchemaClassFieldData, SchemaMetadataEntryData, SchemaStaticFieldData,
    SchemaSystemTypeScope, SchemaType,
};

pub type SchemaClassBinding = SchemaClassInfoData;

#[rustfmt::skip]
#[repr(C)]
pub struct SchemaClassInfoData {
    pub base: Pointer64<SchemaClassInfoData>,                // 0x0000
    pub name: Pointer64<ReprCString>,                        // 0x0008
    pub module_name: Pointer64<ReprCString>,                 // 0x0010
    pub size: u32,                                           // 0x0018
    pub num_fields: u16,                                     // 0x001C
    pub num_static_fields: u16,                              // 0x001E
    pub num_static_metadata: u16,                            // 0x0020
    pub alignment: u8,                                       // 0x0022
    pub has_base_class: bool,                                // 0x0023
    pub total_class_size: u16,                               // 0x0024
    pub derived_class_size: u16,                             // 0x0026
    pub fields: Pointer64<SchemaClassFieldData>,             // 0x0028
    pub static_fields: Pointer64<SchemaStaticFieldData>,     // 0x0030
    pub base_classes: Pointer64<SchemaBaseClassInfoData>,    // 0x0038
    pad_0040: [u8; 0x8],                                     // 0x0040
    pub static_metadata: Pointer64<SchemaMetadataEntryData>, // 0x0048
    pub type_scope: Pointer64<SchemaSystemTypeScope>,        // 0x0050
    pub type_: Pointer64<SchemaType>,                        // 0x0058
    pad_0060: [u8; 0x10],                                    // 0x0060
}

unsafe impl Pod for SchemaClassInfoData {}
