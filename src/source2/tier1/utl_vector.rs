use memflow::prelude::v1::*;

use crate::error::{Error, Result};

/// Represents a growable array class that doubles in size by default.
#[repr(C)]
pub struct UtlVector<T> {
    pub size: i32,           // 0x0000
    pub mem: Pointer64<[T]>, // 0x0008
}

impl<T: Pod> UtlVector<T> {
    /// Returns the number of elements in the vector.
    #[inline]
    pub fn count(&self) -> i32 {
        self.size
    }

    /// Returns the element at the specified index.
    pub fn element(&self, process: &mut IntoProcessInstanceArcBox<'_>, idx: usize) -> Result<T> {
        if idx >= self.count() as usize {
            return Err(Error::Other("index out of bounds"));
        }

        self.mem.at(idx as _).read(process).map_err(Into::into)
    }
}

unsafe impl<T: 'static> Pod for UtlVector<T> {}
