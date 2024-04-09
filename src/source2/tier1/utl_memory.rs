use memflow::prelude::v1::*;

use crate::error::{Error, Result};

/// Represents a growable memory class that doubles in size by default.
#[repr(C)]
pub struct UtlMemory<T> {
    pub mem: Pointer64<[T]>, // 0x0000
    pub alloc_count: i32,    // 0x0008
    pub grow_size: i32,      // 0x000C
}

impl<T: Pod> UtlMemory<T> {
    /// Returns the number of allocated elements.
    #[inline]
    pub fn count(&self) -> i32 {
        self.alloc_count
    }

    /// Returns the element at the specified index.
    pub fn element(&self, process: &mut IntoProcessInstanceArcBox<'_>, idx: usize) -> Result<T> {
        if idx >= self.count() as usize {
            return Err(Error::Other("index out of bounds"));
        }

        self.mem.at(idx as _).read(process).map_err(Into::into)
    }

    /// Returns `true` if the memory was externally allocated.
    #[inline]
    pub fn is_externally_allocated(&self) -> bool {
        self.grow_size < 0
    }
}

unsafe impl<T: 'static> Pod for UtlMemory<T> {}
