use memflow::prelude::v1::*;

use crate::error::Result;

pub trait HashData: Copy + Sized + Pod {}

impl<T: Copy + Sized + Pod> HashData for T {}

pub trait HashKey: Copy + Sized + Pod {}

impl<K: Copy + Sized + Pod> HashKey for K {}

#[repr(C)]
struct HashFixedDataInternal<T: HashData, K: HashKey> {
    ui_key: K,
    next: Pointer64<HashFixedDataInternal<T, K>>,
    data: T,
}

unsafe impl<T: HashData, K: HashKey> Pod for HashFixedDataInternal<T, K> {}

#[repr(C)]
struct HashBucketDataInternal<T: HashData, K: HashKey> {
    data: T,
    next: Pointer64<HashFixedDataInternal<T, K>>,
    ui_key: K,
}

unsafe impl<T: HashData, K: HashKey> Pod for HashBucketDataInternal<T, K> {}

#[repr(C)]
struct HashAllocatedData<T: HashData, K: HashKey> {
    pad_0000: [u8; 0x18],
    list: [HashFixedDataInternal<T, K>; 128],
}

unsafe impl<T: HashData, K: HashKey> Pod for HashAllocatedData<T, K> {}

#[repr(C)]
struct HashUnallocatedData<T: HashData, K: HashKey> {
    next: Pointer64<HashUnallocatedData<T, K>>,
    unk_1: K,
    ui_key: K,
    unk_2: K,
    block_list: [HashBucketDataInternal<T, K>; 256],
}

unsafe impl<T: HashData, K: HashKey> Pod for HashUnallocatedData<T, K> {}

#[repr(C)]
struct HashBucket<T: HashData, K: HashKey> {
    pad_0000: [u8; 0x10],
    allocated_data: Pointer64<HashAllocatedData<T, K>>,
    unallocated_data: Pointer64<HashUnallocatedData<T, K>>,
}

unsafe impl<T: HashData, K: HashKey> Pod for HashBucket<T, K> {}

#[repr(C)]
struct UtlMemoryPool {
    block_size: u32,
    blocks_per_blob: u32,
    grow_mode: u32,
    blocks_alloc: u32,
    block_alloc_size: u32,
    peak_alloc: u32,
}

#[repr(C)]
pub struct UtlTsHash<T: HashData, K: HashKey = u64> {
    entry: UtlMemoryPool,
    buckets: HashBucket<T, K>,
}

impl<T: HashData, K: HashKey> UtlTsHash<T, K> {
    pub fn elements(&self, process: &mut IntoProcessInstanceArcBox<'_>) -> Result<Vec<T>> {
        let mut element_ptr = self.buckets.unallocated_data;

        let min_size =
            (self.entry.blocks_per_blob as usize).min(self.entry.block_alloc_size as usize);

        let mut list = Vec::with_capacity(min_size);

        while !element_ptr.is_null() {
            let element = element_ptr.read(process)?;

            for i in 0..min_size {
                if list.len() >= self.entry.block_alloc_size as usize {
                    return Ok(list);
                }

                list.push(element.block_list[i].data);
            }

            element_ptr = element.next;
        }

        Ok(list)
    }
}

unsafe impl<T: HashData, K: HashKey> Pod for UtlTsHash<T, K> {}
