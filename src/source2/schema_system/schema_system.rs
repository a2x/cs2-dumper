use memflow::prelude::v1::*;

use super::SchemaSystemTypeScope;

use crate::source2::UtlVector;

#[derive(Pod)]
#[repr(C)]
pub struct SchemaSystem {
    pad_0000: [u8; 0x1F0],                                        // 0x0000
    pub type_scopes: UtlVector<Pointer64<SchemaSystemTypeScope>>, // 0x01F0
    pad_0200: [u8; 0x120],                                        // 0x0200
    pub num_registrations: u32,                                   // 0x0320
    pad_0324: [u8; 0x4],                                          // 0x0324
}
