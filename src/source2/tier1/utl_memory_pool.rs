use memflow::prelude::v1::*;

#[repr(i32)]
pub enum MemoryPoolGrowType {
    None = 0,
    Fast,
    Slow,
}

#[derive(Pod)]
#[repr(C)]
pub struct FreeList {
    pub next: Pointer64<FreeList>, // 0x0000
}

#[repr(C)]
pub struct UtlMemoryPoolBase {
    pub block_size: i32,                // 0x0000
    pub blocks_per_blob: i32,           // 0x0004
    pub grow_mode: MemoryPoolGrowType,  // 0x0008
    pub blocks_alloc: i32,              // 0x000C
    pub peak_alloc: i32,                // 0x0010
    pub alignment: u16,                 // 0x0014
    pub blob_count: u16,                // 0x0016
    pad_0018: [u8; 0x8],                // 0x0018
    pub free_list: Pointer64<FreeList>, // 0x0020
    pad_0028: [u8; 0x68],               // 0x0028
}
