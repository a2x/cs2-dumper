use memflow::prelude::v1::*;

use super::*;

pub type SchemaClassBinding = SchemaClassInfoData;

#[rustfmt::skip]
#[derive(Pod)]
#[repr(C)]
pub struct SchemaClassInfoData {
    pub base: Pointer64<SchemaClassInfoData>,                  // 0x0000
    pub name: Pointer64<ReprCString>,                          // 0x0008
    pub binary_name: Pointer64<ReprCString>,                   // 0x0010
    pub module_name: Pointer64<ReprCString>,                   // 0x0018
    pub size: i32,                                             // 0x0020
    pub field_count: i16,                                      // 0x0024
    pub static_metadata_count: i16,                            // 0x0026
    pad_0: [u8; 0x2],                                          // 0x0028
    pub alignment: u8,                                         // 0x002A
    pub has_base_class: u8,                                    // 0x002B
    pub total_class_size: i16,                                 // 0x002C
    pub derived_class_size: i16,                               // 0x002E
    pub fields: Pointer64<[SchemaClassFieldData]>,             // 0x0030
    pad_1: [u8; 0x8],                                          // 0x0038
    pub base_classes: Pointer64<SchemaBaseClassInfoData>,      // 0x0040
    pub static_metadata: Pointer64<[SchemaMetadataEntryData]>, // 0x0048
    pub type_scope: Pointer64<SchemaSystemTypeScope>,          // 0x0058
    pub r#type: Pointer64<SchemaType>,                         // 0x0060
    pad_2: [u8; 0x10],                                         // 0x0068
}
