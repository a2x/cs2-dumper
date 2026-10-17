use memflow::prelude::v1::*;

#[repr(C)]
pub struct UtlMemory<T> {
    pub data: Pointer64<[T]>, // 0x0000
    pub count: i32,           // 0x0008
    pub grow_size: i32,       // 0x000C
}

impl<T: Pod> UtlMemory<T> {
    #[inline]
    pub fn is_externally_allocated(&self) -> bool {
        self.grow_size < 0
    }

    pub fn element(&self, mem: &mut impl MemoryView, index: usize) -> Result<T> {
        if index >= self.count as usize {
            return Err(ErrorKind::OutOfBounds.into());
        }

        mem.read_ptr(self.data.at(index as _)).data_part()
    }
}
