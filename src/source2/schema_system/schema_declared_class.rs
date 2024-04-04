use memflow::prelude::v1::*;

use super::SchemaSystemTypeScope;

#[repr(C)]
pub struct SchemaDeclaredClass {
    pad_0000: [u8; 0x8],                              // 0x0000
    pub name: Pointer64<ReprCString>,                 // 0x0008
    pub type_scope: Pointer64<SchemaSystemTypeScope>, // 0x0010
    pad_0018: [u8; 0x10],                             // 0x0018
}

unsafe impl Pod for SchemaDeclaredClass {}

#[repr(C)]
pub struct SchemaDeclaredClassEntry {
    pad_0000: [u8; 0x10],                               // 0x0000
    pub declared_class: Pointer64<SchemaDeclaredClass>, // 0x0010
}

unsafe impl Pod for SchemaDeclaredClassEntry {}
