use memflow::prelude::v1::*;

pub trait PointerExt {
    fn is_null(&self) -> bool;
}

impl<U: PrimitiveAddress, T> PointerExt for Pointer<U, T> {
    #[inline]
    fn is_null(&self) -> bool {
        self.inner.is_null()
    }
}

pub fn read_addr64_rip(
    process: &mut IntoProcessInstanceArcBox<'_>,
    addr: Address,
) -> PartialResult<Address> {
    let displacement = match process.read::<i32>(addr + 0x3) {
        Ok(d) => d,
        Err(e) => return Err(PartialError::Error(e.into())),
    };

    Ok(addr + 0x7 + displacement)
}
