use memflow::prelude::v1::*;

use super::{SchemaEnumBinding, SchemaSystemTypeScope};

#[repr(C)]
pub struct SchemaTypeDeclaredEnum {
    pad_0000: [u8; 0x8],                              // 0x0000
    pub name: Pointer64<ReprCString>,                 // 0x0008
    pub type_scope: Pointer64<SchemaSystemTypeScope>, // 0x0010
    pad_0018: [u8; 0x8],                              // 0x0018
    pub binding: Pointer64<SchemaEnumBinding>,        // 0x0020
    pad_0028: [u8; 0x8],                              // 0x0028
}

unsafe impl Pod for SchemaTypeDeclaredEnum {}
