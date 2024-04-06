use memflow::prelude::v1::*;

#[repr(u32)]
pub enum MemoryPoolGrowType {
    None = 0,
    Fast,
    Slow,
    RbTree,
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

/// Represents an optimized pool memory allocator.
#[repr(C)]
pub struct UtlMemoryPoolBase {
    pub block_size: i32,                                // 0x0000
    pub blocks_per_blob: i32,                           // 0x0004
    pub grow_mode: MemoryPoolGrowType,                  // 0x0008
    pub blocks_alloc: i32,                              // 0x000C
    pub peak_alloc: i32,                                // 0x0010
    pub alignment: u16,                                 // 0x0014
    pub num_blobs: u16,                                 // 0x0016
    pub free_list_tail: Pointer64<Pointer64<FreeList>>, // 0x0018
    pub free_list_head: Pointer64<FreeList>,            // 0x0020
    pad_0028: [u8; 0x44],                               // 0x0028
    pub blob_head: Pointer64<Blob>,                     // 0x0070
    pad_0078: [u8; 0x8],                                // 0x0078
}

impl UtlMemoryPoolBase {
    /// Returns the total size of the memory pool.
    #[inline]
    pub fn size(&self) -> i32 {
        (self.num_blobs as i32 * self.blocks_per_blob) * self.block_size
    }
}
