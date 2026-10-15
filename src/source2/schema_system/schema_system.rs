use memflow::prelude::v1::*;

use super::SchemaSystemTypeScope;

use crate::source2::UtlVector;

#[repr(C)]
pub struct SchemaSystem {
    pad_0000: [u8; 0x1F0],                                        // 0x0000
    pub type_scopes: UtlVector<Pointer64<SchemaSystemTypeScope>>, // 0x01F0
    pad_0200: [u8; 0x80],                                         // 0x0200
    pub registration_count: i32,                                  // 0x0280
}

unsafe impl Pod for SchemaSystem {}
