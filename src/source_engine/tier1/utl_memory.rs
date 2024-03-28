use std::mem;

use memflow::prelude::v1::*;

use crate::error::{Error, Result};

#[repr(C)]
pub struct UtlMemory<T: Sized + Pod> {
    pub mem: Pointer64<T>,
    pub alloc_count: u32,
    pub grow_size: u32,
}

impl<T: Sized + Pod> UtlMemory<T> {
    #[inline]
    pub fn get(&self, process: &mut IntoProcessInstanceArcBox<'_>, idx: usize) -> Result<T> {
        if idx >= self.alloc_count as usize {
            return Err(Error::IndexOutOfBounds {
                idx,
                len: self.alloc_count as usize,
            });
        }

        let ptr = Pointer64::from(self.mem.address() + (idx * mem::size_of::<T>()));

        Ok(process.read_ptr(ptr)?)
    }
}

unsafe impl<T: Sized + Pod> Pod for UtlMemory<T> {}
