use memflow::types::Pointer64;

pub trait IsNull {
    fn is_null(&self) -> bool;
}

impl<T> IsNull for Pointer64<T> {
    /// Returns `true` if the pointer is null.
    #[inline]
    fn is_null(&self) -> bool {
        self.inner == 0
    }
}
