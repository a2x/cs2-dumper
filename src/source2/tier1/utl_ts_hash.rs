use memflow::prelude::v1::*;

use super::UtlMemoryPoolBase;

use crate::error::Result;
use crate::mem::PointerExt;

#[repr(C)]
pub struct HashAllocatedBlob<D> {
    pub next: Pointer64<HashAllocatedBlob<D>>, // 0x0000
    pad_0008: [u8; 0x8],                       // 0x0008
    pub data: D,                               // 0x0010
    pad_0018: [u8; 0x8],                       // 0x0018
}

unsafe impl<D: 'static> Pod for HashAllocatedBlob<D> {}

#[repr(C)]
pub struct HashBucket<D, K> {
    pad_0000: [u8; 0x18],                                          // 0x0000
    pub first: Pointer64<HashFixedDataInternal<D, K>>,             // 0x0018
    pub first_uncommitted: Pointer64<HashFixedDataInternal<D, K>>, // 0x0020
}

#[repr(C)]
pub struct HashFixedDataInternal<D, K> {
    pub ui_key: K,                                    // 0x0000
    pub next: Pointer64<HashFixedDataInternal<D, K>>, // 0x0008
    pub data: D,                                      // 0x0010
}

unsafe impl<D: 'static, K: 'static> Pod for HashFixedDataInternal<D, K> {}

#[repr(C)]
pub struct UtlTsHash<D, const C: usize = 256, K = u64> {
    pub entry_mem: UtlMemoryPoolBase,   // 0x0000
    pub buckets: [HashBucket<D, K>; C], // 0x0080
    pub needs_commit: bool,             // 0x2880
    pad_2881: [u8; 0xF],                // 0x2881
}

impl<D, const C: usize, K> UtlTsHash<D, C, K>
where
    D: Pod + PointerExt,
    K: Pod,
{
    #[inline]
    pub fn blocks_alloc(&self) -> i32 {
        self.entry_mem.blocks_alloc
    }

    #[inline]
    pub fn block_size(&self) -> i32 {
        self.entry_mem.block_size
    }

    #[inline]
    pub fn peak_count(&self) -> i32 {
        self.entry_mem.peak_alloc
    }

    pub fn elements(&self, process: &mut IntoProcessInstanceArcBox<'_>) -> Result<Vec<D>> {
        let blocks_alloc = self.blocks_alloc() as usize;
        let peak_alloc = self.peak_count() as usize;

        let mut allocated_list = Vec::with_capacity(peak_alloc);
        let mut unallocated_list = Vec::with_capacity(blocks_alloc);

        for bucket in &self.buckets {
            let mut cur_element = bucket.first_uncommitted;

            while !cur_element.is_null() {
                let element = cur_element.read(process)?;

                if !element.data.is_null() {
                    unallocated_list.push(element.data);
                }

                if unallocated_list.len() >= blocks_alloc {
                    break;
                }

                cur_element = element.next;
            }
        }

        let mut cur_blob =
            Pointer64::<HashAllocatedBlob<D>>::from(self.entry_mem.free_list_head.address());

        while !cur_blob.is_null() {
            let blob = cur_blob.read(process)?;

            if !blob.data.is_null() {
                allocated_list.push(blob.data);
            }

            if allocated_list.len() >= peak_alloc {
                break;
            }

            cur_blob = blob.next;
        }

        Ok(if unallocated_list.len() > allocated_list.len() {
            unallocated_list
        } else {
            allocated_list
        })
    }
}

unsafe impl<D: 'static, const C: usize, K: 'static> Pod for UtlTsHash<D, C, K> {}
