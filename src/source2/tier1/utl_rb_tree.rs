use memflow::prelude::v1::*;

use crate::source2::SchemaTypeDeclaredClass;

#[repr(C)]
pub struct UtlRbTree {
    pad_0000: [u8; 0x8],                      // 0x0000
    pub elements: Pointer64<[UtlRbTreeNode]>, // 0x0008
    pad_0010: [u8; 0x8],                      // 0x0010
    pub root: u16,                            // 0x0018
    pub num_elements: u16,                    // 0x001A
    pad_001c: [u8; 0x10],                     // 0x001C
}

unsafe impl Pod for UtlRbTree {}

#[repr(C)]
pub struct UtlRbTreeNode {
    pub left: u16,           // 0x0000
    pub right: u16,          // 0x0002
    pub parent: u16,         // 0x0004
    pub tag: u16,            // 0x0006
    pad_0008: [u8; 0x4],     // 0x0008
    pub data: Pointer64<()>, // 0x000A
}

unsafe impl Pod for UtlRbTreeNode {}
