use memflow::prelude::v1::*;

use super::SchemaSystemTypeScope;

use crate::source2::UtlVector;

#[derive(Pod)]
#[repr(C)]
pub struct SchemaSystem {
    pad_0000: [u8; 0x188],                                        // 0x0000
    pub type_scopes: UtlVector<Pointer64<SchemaSystemTypeScope>>, // 0x0188
    pad_0198: [u8; 0x120],                                        // 0x0198
    pub num_registrations: i32,                                   // 0x02B8
    pad_02bc: [u8; 0xAC],                                         // 0x02BC
}
