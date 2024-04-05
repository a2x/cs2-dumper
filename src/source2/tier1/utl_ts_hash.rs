use memflow::prelude::v1::*;

use super::UtlMemoryPool;

use crate::error::Result;
use crate::mem::IsNull;

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
    pad_0000: [u8; 0x18],                                 // 0x0000,
    pub first: Pointer64<HashFixedData<D, K>>,            // 0x0018
    pub first_uncommited: Pointer64<HashFixedData<D, K>>, // 0x0020
}

#[repr(C)]
pub struct HashFixedData<D, K> {
    pub ui_key: K,                            // 0x0000
    pub next: Pointer64<HashFixedData<D, K>>, // 0x0008
    pub data: D,                              // 0x0010
}

unsafe impl<D: 'static, K: 'static> Pod for HashFixedData<D, K> {}

/// Represents a thread-safe hash table.
#[repr(C)]
pub struct UtlTsHash<D, const C: usize = 256, K = u64> {
    pub entry_mem: UtlMemoryPool,               // 0x0000
    pad_0018: [u8; 0x8],                        // 0x0018
    pub blobs: Pointer64<HashAllocatedBlob<D>>, // 0x0020
    pad_0028: [u8; 0x58],                       // 0x0028
    pub buckets: [HashBucket<D, K>; C],         // 0x0080
    pad_2880: [u8; 0x10],                       // 0x2880
}

impl<D: Pod + IsNull, const C: usize, K: Pod> UtlTsHash<D, C, K> {
    /// Returns all elements in the hash table.
    pub fn elements(&self, process: &mut IntoProcessInstanceArcBox<'_>) -> Result<Vec<D>> {
        let mut elements: Vec<_> = self
            .buckets
            .iter()
            .flat_map(|bucket| {
                let mut element_ptr = bucket.first;

                let mut list = Vec::new();

                while !element_ptr.is_null() {
                    if let Ok(element) = element_ptr.read(process) {
                        if !element.data.is_null() {
                            list.push(element.data);
                        }

                        element_ptr = element.next;
                    }
                }

                list
            })
            .collect();

        if let Ok(blob) = self.blobs.read(process) {
            let mut unallocated_data = blob.next;

            if !unallocated_data.is_null() {
                if !blob.data.is_null() {
                    elements.push(blob.data);
                }

                while !unallocated_data.is_null() {
                    if let Ok(element) = unallocated_data.read(process) {
                        if !element.data.is_null() {
                            elements.push(element.data);
                        }

                        unallocated_data = element.next;
                    }
                }
            }
        }

        // TODO: Separate allocated and unallocated data.

        Ok(elements)
    }
}

unsafe impl<D: 'static, const C: usize, K: 'static> Pod for UtlTsHash<D, C, K> {}
