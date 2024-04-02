use std::ffi::c_char;

use memflow::prelude::v1::*;

use super::{SchemaClassBinding, SchemaEnumBinding};

use crate::source2::UtlTsHash;

#[repr(C)]
pub struct SchemaSystemTypeScope {
    pad_0000: [u8; 0x8],
    pub name: [c_char; 256],
    pad_0108: [u8; 0x4B0],
    pub class_bindings: UtlTsHash<Pointer64<SchemaClassBinding>>,
    pad_05f0: [u8; 0x2810],
    pub enum_bindings: UtlTsHash<Pointer64<SchemaEnumBinding>>,
}

unsafe impl Pod for SchemaSystemTypeScope {}
