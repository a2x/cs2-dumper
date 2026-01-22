use memflow::prelude::v1::*;

use super::SchemaSystemTypeScope;

use crate::source2::UtlVector;

#[repr(C)]
pub struct SchemaSystem {
    pad_0000: [u8; 0x190],                                        // 0x0000
    pub type_scopes: UtlVector<Pointer64<SchemaSystemTypeScope>>, // 0x0190
    pad_0198: [u8; 0xE0],                                         // 0x01A0
    pub num_registrations: i32,                                   // 0x0280
}

unsafe impl Pod for SchemaSystem {}
