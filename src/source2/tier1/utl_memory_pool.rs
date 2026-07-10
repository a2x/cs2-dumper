use memflow::prelude::v1::*;

use crate::source2::TsListBase;

#[repr(u32)]
pub enum MemoryPoolGrowType {
    None = 0, // Doesn't allocate new blobs.
    Fast,     // New blobs will grow in size.
    Slow,     // New blobs will stay the same size.
}

#[derive(Pod)]
#[repr(C)]
pub struct UtlMemoryPoolBlob {
    pub next: Pointer64<UtlMemoryPoolBlob>, // 0x0000
    pub size: i32,                          // 0x0008
    pub data: [u8; 1],                      // 0x000C
    pad_0: [u8; 0x3],                       // 0x000D
}

#[repr(C)]
pub struct UtlMemoryPool {
    pub block_size: i32,                         // 0x0000
    pub blocks_per_blob: i32,                    // 0x0004
    pub grow_mode: MemoryPoolGrowType,           // 0x0008
    pub blocks_allocated: i32,                   // 0x000C
    pub peak_allocated: i32,                     // 0x0010
    pub alignment: u16,                          // 0x0014
    pub blob_count: u16,                         // 0x0016
    pad_0: [u8; 0x2],                            // 0x0018
    pub free_blocks: TsListBase,                 // 0x0020
    pad_1: [u8; 0x20],                           // 0x0028
    pub blob_head: Pointer64<UtlMemoryPoolBlob>, // 0x0048
    pub total_size: i32,                         // 0x0050
    pad_2: [u8; 0xC],                            // 0x0054
}
