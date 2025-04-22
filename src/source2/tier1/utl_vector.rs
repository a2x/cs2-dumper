use memflow::prelude::v1::*;

#[repr(C)]
pub struct UtlVector<T> {
    pub size: i32,           // 0x0000
    pad_0004: [u8; 0x4],     // 0x0004
    pub mem: Pointer64<[T]>, // 0x0008
}

impl<T: Pod> UtlVector<T> {
    pub fn element(&self, mem: &mut impl MemoryView, index: usize) -> Result<T> {
        if index >= self.size as usize {
            return Err(ErrorKind::OutOfBounds.into());
        }

        mem.read_ptr(self.mem.at(index as _)).data_part()
    }
}

unsafe impl<T: 'static> Pod for UtlVector<T> {}
