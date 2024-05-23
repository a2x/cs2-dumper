use memflow::prelude::v1::*;

use super::SchemaSystemTypeScope;

use crate::source2::UtlVector;

#[derive(Pod)]
#[repr(C)]
pub struct SchemaSystem {
    pad_0000: [u8; 0x190],                                        // 0x0000
    pub type_scopes: UtlVector<Pointer64<SchemaSystemTypeScope>>, // 0x0190
    pad_01a0: [u8; 0x118],                                        // 0x01A0
    pub num_registrations: u32,                                   // 0x02B8
    pad_02bc: [u8; 0xAC],                                         // 0x02BC
}
