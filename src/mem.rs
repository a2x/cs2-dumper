use memflow::types::{Pointer, PrimitiveAddress};

pub trait PointerExt {
    fn is_null(&self) -> bool;
}

impl<U: PrimitiveAddress, T> PointerExt for Pointer<U, T> {
    #[inline]
    fn is_null(&self) -> bool {
        self.inner.is_null()
    }
}
