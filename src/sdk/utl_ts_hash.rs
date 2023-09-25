use crate::error::Result;
use crate::remote::Process;

#[derive(Debug)]
#[repr(C)]
pub struct HashBucketDataInternal<T, K> {
    data: T,
    pad_0: [u8; 8],
    ui_key: K,
}

impl<T, K> HashBucketDataInternal<T, K> {
    pub fn next(&self, process: &Process) -> Result<*const HashBucketDataInternal<T, K>> {
        process
            .read_memory::<*const HashBucketDataInternal<T, K>>((self as *const _ as usize) + 0x8)
    }
}

#[derive(Debug)]
#[repr(C)]
pub struct HashFixedDataInternal<T, K> {
    ui_key: K,
    pad_0: [u8; 8],
    data: T,
}

impl<T, K> HashFixedDataInternal<T, K> {
    pub fn next(&self, process: &Process) -> Result<*const HashFixedDataInternal<T, K>> {
        process.read_memory::<*const HashFixedDataInternal<T, K>>((self as *const _ as usize) + 0x8)
    }
}

#[derive(Debug)]
#[repr(C)]
pub struct HashAllocatedData<T, K> {
    list: [HashFixedDataInternal<T, K>; 128],
}

impl<T, K> HashAllocatedData<T, K> {
    pub fn list(&self, process: &Process) -> Result<[HashFixedDataInternal<T, K>; 128]> {
        process
            .read_memory::<[HashFixedDataInternal<T, K>; 128]>((self as *const _ as usize) + 0x18)
    }
}

#[derive(Debug)]
#[repr(C)]
pub struct HashUnallocatedData<T, K> {
    block_list: [HashBucketDataInternal<T, K>; 256],
}

impl<T, K> HashUnallocatedData<T, K> {
    pub fn next(&self, process: &Process) -> Result<*const HashUnallocatedData<T, K>> {
        process.read_memory::<*const HashUnallocatedData<T, K>>(self as *const _ as usize)
    }

    pub fn ui_key(&self, process: &Process) -> Result<K> {
        process.read_memory::<K>((self as *const _ as usize) + 0x10)
    }

    pub fn block_list(&self, process: &Process) -> Result<[HashBucketDataInternal<T, K>; 256]> {
        process
            .read_memory::<[HashBucketDataInternal<T, K>; 256]>((self as *const _ as usize) + 0x20)
    }
}

#[derive(Debug)]
#[repr(C)]
pub struct HashBucket<T, K> {
    pad_0: [u8; 16],
    allocated_data: *const HashAllocatedData<T, K>,
    unallocated_data: *const HashUnallocatedData<T, K>,
}

#[derive(Debug)]
#[repr(C)]
pub struct UtlMemoryPool {
    block_size: i32,
    blocks_per_blob: i32,
    grow_mode: i32,
    blocks_allocated: i32,
    block_allocated_size: i32,
    peak_alloc: i32,
}

impl UtlMemoryPool {
    #[inline]
    pub fn block_size(&self) -> i32 {
        self.blocks_per_blob
    }

    #[inline]
    pub fn count(&self) -> i32 {
        self.block_allocated_size
    }
}

#[derive(Debug)]
#[repr(C)]
pub struct UtlTsHash<T, K = u64> {
    entry_memory: UtlMemoryPool,
    buckets: HashBucket<T, K>,
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
        let min_size = (self.block_size() as usize).min(self.count() as usize);

        let mut list = Vec::with_capacity(min_size);

        let mut address = self.buckets.unallocated_data;

        while !address.is_null() {
            unsafe {
                let block_list = (*address).block_list(process)?;

                for i in 0..min_size {
                    list.push(block_list[i].data);

                    if list.len() >= self.count() as usize {
                        return Ok(list);
                    }
                }

                address = (*address).next(process)?;
            }
        }

        Ok(list)
    }
}
