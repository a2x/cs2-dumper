use crate::util::Process;

use anyhow::Result;

use std::mem::offset_of;

/// Represents the internal data of a hash table.
#[derive(Debug)]
#[repr(C)]
struct HashFixedDataInternal<T, K> {
    ui_key: K,                              // 0x0010
    next: *mut HashFixedDataInternal<T, K>, // 0x0010
    data: T,                                // 0x0010
}

/// Implementation of HashFixedDataInternal struct with methods for reading the next element in the hash table.
impl<T, K> HashFixedDataInternal<T, K> {
    /// Reads the next element in the hash table.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// Returns a Result containing a pointer to the next element in the hash table if successful, or an error if unsuccessful.
    fn next(&self, process: &Process) -> Result<*mut HashFixedDataInternal<T, K>> {
        process.read_memory::<*mut HashFixedDataInternal<T, K>>(
            (self as *const _ as usize + offset_of!(HashFixedDataInternal<T, K>, next)).into(),
        )
    }
}

/// Represents the internal data of a hash bucket.
#[derive(Debug)]
#[repr(C)]
struct HashBucketDataInternal<T, K> {
    data: T,                                // 0x0000
    next: *mut HashFixedDataInternal<T, K>, // 0x0008
    ui_key: K,                              // 0x0010
}

impl<T, K> HashBucketDataInternal<T, K> {
    /// Reads the next element in the hash table.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// Returns a Result containing a pointer to the next element in the hash table if successful, or an error if unsuccessful.
    fn next(&self, process: &Process) -> Result<*mut HashFixedDataInternal<T, K>> {
        process.read_memory::<*mut HashFixedDataInternal<T, K>>(
            (self as *const _ as usize + offset_of!(HashBucketDataInternal<T, K>, next)).into(),
        )
    }
}

/// Represents allocated data in a hash table.
#[derive(Debug)]
#[repr(C)]
pub struct HashAllocatedData<T, K> {
    pad_0: [u8; 0x18],                        // 0x0000
    list: [HashFixedDataInternal<T, K>; 128], // 0x0018
}

impl<T, K> HashAllocatedData<T, K> {
    /// Reads the list of elements in the hash table.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// Returns a Result containing a list of elements in the hash table if successful, or an error if unsuccessful.
    fn list(&self, process: &Process) -> Result<[HashFixedDataInternal<T, K>; 128]> {
        process.read_memory::<[HashFixedDataInternal<T, K>; 128]>(
            (self as *const _ as usize + offset_of!(HashAllocatedData<T, K>, list)).into(),
        )
    }
}

/// A struct representing unallocated data in a hash table.
#[derive(Debug)]
#[repr(C)]
struct HashUnallocatedData<T, K> {
    next: *mut HashUnallocatedData<T, K>,            // 0x0000
    unknown_1: K,                                    // 0x0008
    ui_key: K,                                       // 0x0010
    unknown_2: K,                                    // 0x0018
    block_list: [HashBucketDataInternal<T, K>; 256], // 0x0020
}

impl<T, K> HashUnallocatedData<T, K> {
    /// Reads the next `HashUnallocatedData` element in memory.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// * `Result<*mut HashUnallocatedData<T, K>>` - A Result containing a pointer to the next `HashUnallocatedData` element in memory.
    fn next(&self, process: &Process) -> Result<*mut HashUnallocatedData<T, K>> {
        process.read_memory::<*mut HashUnallocatedData<T, K>>(
            (self as *const _ as usize + offset_of!(HashUnallocatedData<T, K>, next)).into(),
        )
    }

    /// Reads the UI key of the `HashUnallocatedData` element in memory.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// * `Result<K>` - A Result containing the UI key of the `HashUnallocatedData` element in memory.
    fn ui_key(&self, process: &Process) -> Result<K> {
        process.read_memory::<K>(
            (self as *const _ as usize + offset_of!(HashUnallocatedData<T, K>, ui_key)).into(),
        )
    }

    /// Reads the block list of the `HashUnallocatedData` element in memory.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// * `Result<[HashBucketDataInternal<T, K>; 256]>` - A Result containing the block list of the `HashUnallocatedData` element in memory.
    fn block_list(&self, process: &Process) -> Result<[HashBucketDataInternal<T, K>; 256]> {
        process.read_memory::<[HashBucketDataInternal<T, K>; 256]>(
            (self as *const _ as usize + offset_of!(HashUnallocatedData<T, K>, block_list)).into(),
        )
    }
}

/// Represents a hash bucket.
#[derive(Debug)]
#[repr(C)]
struct HashBucket<T, K> {
    pad_0: [u8; 0x10],                                  // 0x0000
    allocated_data: *const HashAllocatedData<T, K>,     // 0x0010
    unallocated_data: *const HashUnallocatedData<T, K>, // 0x0018
}

/// Represents a memory pool used by the `UtlTsHash` class.
#[derive(Debug)]
#[repr(C)]
struct UtlMemoryPool {
    block_size: i32,           // 0x0000
    blocks_per_blob: i32,      // 0x0004
    grow_mode: i32,            // 0x0008
    blocks_allocated: i32,     // 0x000C
    block_allocated_size: i32, // 0x0010
    peak_alloc: i32,           // 0x0014
}

impl UtlMemoryPool {
    /// Returns the number of blocks per blob.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `UtlMemoryPool` struct.
    ///
    /// # Returns
    ///
    /// * `i32` - The number of blocks per blob.
    #[inline]
    fn block_size(&self) -> i32 {
        self.blocks_per_blob
    }

    /// Returns the number of blocks allocated.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `UtlMemoryPool` struct.
    ///
    /// # Returns
    ///
    /// * `i32` - The number of blocks allocated.
    #[inline]
    fn count(&self) -> i32 {
        self.block_allocated_size
    }
}

/// Represents a thread-safe hash table.
#[derive(Debug)]
#[repr(C)]
pub struct UtlTsHash<T, K = u64> {
    entry_memory: UtlMemoryPool, // 0x0000
    buckets: HashBucket<T, K>,   // 0x0018
}

impl<T, K> UtlTsHash<T, K>
where
    T: Copy,
{
    /// Returns the number of blocks per blob.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `UtlTsHash` struct.
    ///
    /// # Returns
    ///
    /// * `i32` - The number of blocks per blob.
    #[inline]
    pub fn block_size(&self) -> i32 {
        self.entry_memory.block_size()
    }

    /// Returns the number of blocks allocated.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `UtlTsHash` struct.
    ///
    /// # Returns
    ///
    /// * `i32` - The number of blocks allocated.
    #[inline]
    pub fn count(&self) -> i32 {
        self.entry_memory.count()
    }

    /// Returns a list of elements in the hash table.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// * `Result<Vec<T>>` - A Result containing a list of elements in the hash table if successful, or an error if unsuccessful.
    pub fn elements(&self, process: &Process) -> Result<Vec<T>> {
        let mut address = self.buckets.unallocated_data;

        let min_size = (self.block_size() as usize).min(self.count() as usize);

        let mut list = Vec::with_capacity(min_size);

        while !address.is_null() {
            let block_list = unsafe { (*address).block_list(process) }?;

            for i in 0..min_size {
                list.push(block_list[i].data);

                if list.len() >= self.count() as usize {
                    return Ok(list);
                }
            }

            address = unsafe { (*address).next(process) }?;
        }

        Ok(list)
    }
}
