use std::ffi::c_char;

use memflow::prelude::v1::*;

use super::{SchemaClassBinding, SchemaEnumBinding};

use crate::source2::UtlTsHash;

#[derive(Pod)]
#[repr(C)]
pub struct SchemaSystemTypeScope {
    pad_0000: [u8; 0x8],                                          // 0x0000
    pub name: [c_char; 256],                                      // 0x0008
    pub global_scope: Pointer64<SchemaSystemTypeScope>,           // 0x0108
    pad_0110: [u8; 0x3F0],                                        // 0x0110
    pub class_bindings: UtlTsHash<Pointer64<SchemaClassBinding>>, // 0x0500
    pub enum_bindings: UtlTsHash<Pointer64<SchemaEnumBinding>>,   // 0x2D90
}
