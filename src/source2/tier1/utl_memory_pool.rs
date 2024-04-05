/// Represents an optimized pool memory allocator.
#[repr(C)]
pub struct UtlMemoryPool {
    pub block_size: i32,       // 0x0000
    pub blocks_per_blob: i32,  // 0x0004
    pub grow_mode: i32,        // 0x0008
    pub blocks_alloc: i32,     // 0x000C
    pub block_alloc_size: i32, // 0x0010
    pub peak_alloc: i32,       // 0x0014
}

impl UtlMemoryPool {
    /// Returns the size of a block.
    #[inline]
    pub fn block_size(&self) -> i32 {
        self.block_size
    }

    /// Returns the number of allocated blocks per blob.
    #[inline]
    pub fn count(&self) -> i32 {
        self.blocks_per_blob
    }

    /// Returns the maximum number of allocated blocks.
    #[inline]
    pub fn peak_count(&self) -> i32 {
        self.peak_alloc
    }
}
