use memflow::prelude::v1::*;

use super::SchemaSystemTypeScope;

use crate::source2::UtlVector;

#[repr(C)]
pub struct SchemaSystem {
    pad_0000: [u8; 0x190],
    pub type_scopes: UtlVector<Pointer64<SchemaSystemTypeScope>>,
    pad_01a0: [u8; 0x120],
    pub num_registrations: u32,
}

unsafe impl Pod for SchemaSystem {}
