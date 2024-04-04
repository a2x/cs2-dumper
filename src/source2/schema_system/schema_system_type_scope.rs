use std::ffi::c_char;

use memflow::prelude::v1::*;

use super::SchemaDeclaredClassEntry;

#[repr(C)]
pub struct SchemaSystemTypeScope {
    pad_0000: [u8; 0x8],                                     // 0x0000
    pub name: [c_char; 256],                                 // 0x0008
    pub global_scope: Pointer64<SchemaSystemTypeScope>,      // 0x0108
    pad_0110: [u8; 0x3C0],                                   // 0x0110
    pub declared_class: Pointer64<SchemaDeclaredClassEntry>, // 0x04D0
    pad_04d8: [u8; 0xe],                                     // 0x04D8
    pub num_declared_classes: u16,                           // 0x04E6
}

unsafe impl Pod for SchemaSystemTypeScope {}
