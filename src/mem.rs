use memflow::prelude::v1::*;

pub trait PointerExt {
    fn is_null(&self) -> bool;
    fn read_string<V: MemoryView>(&self, mem: &mut V) -> Result<String>;
}

impl<U: PrimitiveAddress, T> PointerExt for Pointer<U, T> {
    #[inline]
    fn is_null(&self) -> bool {
        self.inner.is_null()
    }

    fn read_string<V: MemoryView>(&self, mem: &mut V) -> Result<String> {
        mem.read_char_string(self.address()).map_err(|e| e.into())
    }
}

pub trait MemoryViewExt {
    fn read_addr64_rip(&mut self, base: Address) -> Result<Address>;
}

impl<V: MemoryView> MemoryViewExt for V {
    fn read_addr64_rip(&mut self, base: Address) -> Result<Address> {
        let rel32: i32 = self.read(base + 3)?;
        let instr_end = (base + 7usize).to_umem() as i64;
        let target_addr = instr_end.wrapping_add(rel32 as i64);
        Ok(target_addr.into())
    }
}
