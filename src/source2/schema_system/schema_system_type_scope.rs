use std::ffi::c_char;

use memflow::prelude::v1::*;

use super::{SchemaClassBinding, SchemaEnumBinding};

use crate::source2::UtlTsHash;

#[derive(Pod)]
#[repr(C)]
pub struct SchemaSystemTypeScope {
    pad_0000: [u8; 0x8],
    pub name: [c_char; 256],
    pub global_scope: Pointer64<SchemaSystemTypeScope>,
    pad_0110: [u8; 0x450],
    pub class_bindings: UtlTsHash<SchemaClassBinding, 768>,
    pub enum_bindings: UtlTsHash<SchemaEnumBinding, 768>,
}
