use memflow::prelude::v1::*;

use super::{SchemaEnumeratorInfoData, SchemaMetadataEntryData, SchemaSystemTypeScope};

pub type SchemaEnumBinding = SchemaEnumInfoData;

#[rustfmt::skip]
#[repr(C)]
pub struct SchemaEnumInfoData {
    pub base: Pointer64<SchemaEnumInfoData>,                 // 0x0000
    pub name: Pointer64<ReprCString>,                        // 0x0008
    pub module_name: Pointer64<ReprCString>,                 // 0x0010
    pub alignment: u8,                                       // 0x0018
    pad_0019: [u8; 0x3],                                     // 0x0019
    pub size: u16,                                           // 0x001C
    pub num_static_metadata: u16,                            // 0x001E
    pub enum_info: Pointer64<SchemaEnumeratorInfoData>,      // 0x0020
    pub static_metadata: Pointer64<SchemaMetadataEntryData>, // 0x0028
    pub type_scope: Pointer64<SchemaSystemTypeScope>,        // 0x0030
    pad_0038: [u8; 0x10],                                    // 0x0038
}

unsafe impl Pod for SchemaEnumInfoData {}
