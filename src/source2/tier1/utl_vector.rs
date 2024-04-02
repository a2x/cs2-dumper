use std::mem;

use memflow::prelude::v1::*;

use crate::error::{Error, Result};

#[repr(C)]
pub struct UtlVector<T: Copy + Sized + Pod> {
    pub size: u32,
    pub mem: Pointer64<T>,
}

impl<T: Copy + Sized + Pod> UtlVector<T> {
    #[inline]
    pub fn get(&self, process: &mut IntoProcessInstanceArcBox<'_>, idx: usize) -> Result<T> {
        if idx >= self.size as usize {
            return Err(Error::OutOfBounds {
                idx,
                len: self.size as usize,
            });
        }

        let ptr = Pointer64::from(self.mem.address() + (idx * mem::size_of::<T>()));

        Ok(ptr.read(process)?)
    }
}

unsafe impl<T: Copy + Sized + Pod> Pod for UtlVector<T> {}
