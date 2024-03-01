use std::mem::offset_of;

use anyhow::Result;

use crate::os::Process;

#[derive(Debug)]
#[repr(C)]
struct HashFixedDataInternal<T, K> {
    ui_key: K,                              // 0x0010
    next: *mut HashFixedDataInternal<T, K>, // 0x0010
    data: T,                                // 0x0010
}

impl<T, K> HashFixedDataInternal<T, K> {
    fn next(&self, process: &Process) -> Result<*mut HashFixedDataInternal<T, K>> {
        process.read_memory::<*mut HashFixedDataInternal<T, K>>(
            (self as *const _ as usize + offset_of!(HashFixedDataInternal<T, K>, next)) as _,
        )
    }
}

#[derive(Debug)]
#[repr(C)]
struct HashBucketDataInternal<T, K> {
    data: T,                                // 0x0000
    next: *mut HashFixedDataInternal<T, K>, // 0x0008
    ui_key: K,                              // 0x0010
}

impl<T, K> HashBucketDataInternal<T, K> {
    fn next(&self, process: &Process) -> Result<*mut HashFixedDataInternal<T, K>> {
        process.read_memory::<*mut HashFixedDataInternal<T, K>>(
            (self as *const _ as usize + offset_of!(HashBucketDataInternal<T, K>, next)) as _,
        )
    }
}

#[derive(Debug)]
#[repr(C)]
pub struct HashAllocatedData<T, K> {
    pad_0: [u8; 0x18],                        // 0x0000
    list: [HashFixedDataInternal<T, K>; 128], // 0x0018
}

impl<T, K> HashAllocatedData<T, K> {
    fn list(&self, process: &Process) -> Result<[HashFixedDataInternal<T, K>; 128]> {
        process.read_memory::<[HashFixedDataInternal<T, K>; 128]>(
            (self as *const _ as usize + offset_of!(HashAllocatedData<T, K>, list)) as _,
        )
    }
}

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
    fn next(&self, process: &Process) -> Result<*mut HashUnallocatedData<T, K>> {
        process.read_memory::<*mut HashUnallocatedData<T, K>>(
            (self as *const _ as usize + offset_of!(HashUnallocatedData<T, K>, next)) as _,
        )
    }

    fn ui_key(&self, process: &Process) -> Result<K> {
        process.read_memory::<K>(
            (self as *const _ as usize + offset_of!(HashUnallocatedData<T, K>, ui_key)) as _,
        )
    }

    fn block_list(&self, process: &Process) -> Result<[HashBucketDataInternal<T, K>; 256]> {
        process.read_memory::<[HashBucketDataInternal<T, K>; 256]>(
            (self as *const _ as usize + offset_of!(HashUnallocatedData<T, K>, block_list)) as _,
        )
    }
}

#[derive(Debug)]
#[repr(C)]
struct HashBucket<T, K> {
    pad_0: [u8; 0x10],                                  // 0x0000
    allocated_data: *const HashAllocatedData<T, K>,     // 0x0010
    unallocated_data: *const HashUnallocatedData<T, K>, // 0x0018
}

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
    #[inline]
    fn block_size(&self) -> i32 {
        self.blocks_per_blob
    }

    #[inline]
    fn count(&self) -> i32 {
        self.block_allocated_size
    }
}

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
    #[inline]
    pub fn block_size(&self) -> i32 {
        self.entry_memory.block_size()
    }

    #[inline]
    pub fn count(&self) -> i32 {
        self.entry_memory.count()
    }

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
