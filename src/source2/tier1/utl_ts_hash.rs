use std::collections::HashSet;

use memflow::prelude::v1::*;

use super::UtlMemoryPool;

#[repr(C)]
pub struct UtlTsHashAllocatedBlob<D> {
    pub next: Pointer64<UtlTsHashAllocatedBlob<D>>, // 0x0000
    pad_0: [u8; 0x8],                               // 0x0008
    pub data: Pointer64<D>,                         // 0x0010
    pad_1: [u8; 0x18],                              // 0x0018
}

unsafe impl<D: 'static> Pod for UtlTsHashAllocatedBlob<D> {}

#[repr(C)]
pub struct UtlTsHashFixedData<D, K> {
    pub ui_key: K,                                 // 0x0000
    pub next: Pointer64<UtlTsHashFixedData<D, K>>, // 0x0008
    pub data: Pointer64<D>,                        // 0x0010
}

unsafe impl<D: 'static, K: 'static> Pod for UtlTsHashFixedData<D, K> {}

#[repr(C)]
pub struct UtlTsHashBucket<D, K> {
    pub add_lock: usize,                                        // 0x0000
    pub first: Pointer64<UtlTsHashFixedData<D, K>>,             // 0x0008
    pub first_uncommitted: Pointer64<UtlTsHashFixedData<D, K>>, // 0x0010
}

#[repr(C)]
pub struct UtlTsHash<D, const C: usize = 256, K = u64> {
    pub entry_mem: UtlMemoryPool,            // 0x0000
    pub buckets: [UtlTsHashBucket<D, K>; C], // 0x0060
    pub needs_commit: bool,                  // 0x1860
    pad_0: [u8; 0x3],                        // 0x1861
    pub contention_check: i32,               // 0x1864
    pad_1: [u8; 0x8],                        // 0x1868
}

impl<D: Pod, const C: usize, K: Pod> UtlTsHash<D, C, K> {
    pub fn elements(&self, mem: &mut impl MemoryView) -> Vec<Pointer64<D>> {
        let allocated = self.allocated_elements(mem);
        let unallocated = self.unallocated_elements(mem);

        let mut result = Vec::with_capacity(allocated.len() + unallocated.len());

        result.extend(allocated);
        result.extend(unallocated);

        let mut seen = HashSet::with_capacity(result.capacity());

        // Remove duplicate pointers that exist in both lists.
        result.retain(|ptr| seen.insert(ptr.address().to_umem()));

        result
    }

    fn allocated_elements(&self, mem: &mut impl MemoryView) -> Vec<Pointer64<D>> {
        let used_count = self.entry_mem.blocks_allocated as usize;

        let mut elements = Vec::with_capacity(used_count);

        for bucket in &self.buckets {
            let mut node_ptr = bucket.first_uncommitted;

            while !node_ptr.is_null() {
                let node = match mem.read_ptr(node_ptr).data_part() {
                    Ok(n) => n,
                    Err(_) => break,
                };

                if !node.data.is_null() {
                    elements.push(node.data);
                }

                if elements.len() >= used_count {
                    break;
                }

                node_ptr = node.next;
            }
        }

        elements
    }

    fn unallocated_elements(&self, mem: &mut impl MemoryView) -> Vec<Pointer64<D>> {
        let free_count = self.entry_mem.peak_allocated as usize;

        let mut elements = Vec::with_capacity(free_count);

        let mut blob_ptr = Pointer64::<UtlTsHashAllocatedBlob<D>>::from(
            self.entry_mem.free_blocks.head.next.address(),
        );

        while !blob_ptr.is_null() {
            let blob = match mem.read_ptr(blob_ptr).data_part() {
                Ok(b) => b,
                Err(_) => break,
            };

            if !blob.data.is_null() {
                elements.push(blob.data);
            }

            if elements.len() >= free_count {
                break;
            }

            blob_ptr = blob.next;
        }

        elements
    }
}

unsafe impl<D: 'static, const C: usize, K: 'static> Pod for UtlTsHash<D, C, K> {}
