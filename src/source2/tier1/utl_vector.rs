use anyhow::{bail, Result};

use memflow::prelude::v1::*;

#[repr(C)]
pub struct UtlVector<T> {
    pub size: i32,           // 0x0000
    pad_0004: [u8; 0x4],     // 0x0004
    pub mem: Pointer64<[T]>, // 0x0008
}

impl<T: Pod> UtlVector<T> {
    #[inline]
    pub fn count(&self) -> i32 {
        self.size
    }

    pub fn element(&self, process: &mut IntoProcessInstanceArcBox<'_>, idx: usize) -> Result<T> {
        if idx >= self.count() as usize {
            bail!("index out of bounds");
        }

        process
            .read_ptr(self.mem.at(idx as _))
            .data_part()
            .map_err(Into::into)
    }
}

unsafe impl<T: 'static> Pod for UtlVector<T> {}
