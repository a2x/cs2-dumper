use memflow::prelude::v1::*;

#[repr(u32)]
pub enum MemoryPoolGrowType {
    None = 0,
    Fast,
    Slow,
}

#[derive(Pod)]
#[repr(C)]
pub struct Blob {
    pub next: Pointer64<Blob>, // 0x0000
    pub num_bytes: i32,        // 0x0008
    pub data: [u8; 1],         // 0x000C
    pad_000d: [u8; 3],         // 0x000D
}

#[derive(Pod)]
#[repr(C)]
pub struct FreeList {
    pub next: Pointer64<FreeList>, // 0x0000
}

#[repr(C)]
pub struct UtlMemoryPoolBase {
    pub block_size: i32,                                // 0x0000
    pub blocks_per_blob: i32,                           // 0x0004
    pub grow_mode: MemoryPoolGrowType,                  // 0x0008
    pub blocks_alloc: i32,                              // 0x000C
    pub peak_alloc: i32,                                // 0x0010
    pub alignment: u16,                                 // 0x0014
    pub blob_count: u16,                                // 0x0016
    pub free_list_tail: Pointer64<Pointer64<FreeList>>, // 0x0018
    pub free_list_head: Pointer64<FreeList>,            // 0x0020
    pad_0028: [u8; 0x44],                               // 0x0028
    pub blob_head: Pointer64<Blob>,                     // 0x0070
    pub total_size: i32,                                // 0x0078
    pad_007c: [u8; 0x4],                                // 0x007C
}

impl UtlMemoryPoolBase {
    #[inline]
    pub fn size(&self) -> i32 {
        self.total_size
    }
}
