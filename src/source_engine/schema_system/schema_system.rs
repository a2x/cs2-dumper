use memflow::prelude::v1::*;

use super::SchemaSystemTypeScope;

use crate::source_engine::UtlVector;

#[cfg(target_os = "linux")]
#[repr(C)]
pub struct SchemaSystem {
    pad_0000: [u8; 0x1F8],
    pub type_scopes: UtlVector<Pointer64<SchemaSystemTypeScope>>,
    pad_01a0: [u8; 0x120],
    pub num_registrations: u32,
}

#[cfg(target_os = "windows")]
#[repr(C)]
pub struct SchemaSystem {
    pad_0000: [u8; 0x190],
    pub type_scopes: UtlVector<Pointer64<SchemaSystemTypeScope>>,
    pad_01a0: [u8; 0x120],
    pub num_registrations: u32,
}

unsafe impl Pod for SchemaSystem {}
