use std::fmt::{LowerHex, UpperHex};
use std::ops::{Add, AddAssign, Sub, SubAssign};

/// Represents a memory address.
#[derive(Clone, Copy, Debug, Eq, PartialEq, PartialOrd)]
#[repr(transparent)]
pub struct Address(pub usize);

impl Address {
    /// Adds the given value to the current address and returns a new `Address`.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Address` struct.
    /// * `value` - The value to add to the current address.
    ///
    /// # Returns
    ///
    /// * `Address` - A new `Address` struct with the value of the current address plus the given value.
    #[inline]
    pub fn add(&self, value: usize) -> Self {
        Self(self.0 + value)
    }

    /// Returns true if the value of the address is zero.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Address` struct.
    ///
    /// # Returns
    ///
    /// * `bool` - True if the value of the address is zero, false otherwise.
    #[inline]
    pub fn is_zero(&self) -> bool {
        self.0 == 0
    }

    /// Subtracts a value from the current address and returns a new `Address`.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Address` struct.
    /// * `value` - The value to subtract from the current address.
    ///
    /// # Returns
    ///
    /// * `Address` - A new `Address` struct with the value of the current address minus the given value.
    #[inline]
    pub fn sub(&self, value: usize) -> Self {
        Self(self.0 - value)
    }

    /// Returns a raw pointer to the underlying data as a `*const T`.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Address` struct.
    ///
    /// # Returns
    ///
    /// * `*const T` - A raw pointer to the underlying data as a `*const T`.
    #[inline]
    pub fn as_ptr<T>(&self) -> *const T {
        self.0 as *const T
    }

    /// Returns a mutable pointer to the underlying data.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Address` struct.
    ///
    /// # Returns
    ///
    /// * `*mut T` - A mutable pointer to the underlying data.
    #[inline]
    pub fn as_mut_ptr<T>(&self) -> *mut T {
        self.0 as *mut T
    }
}

/// Converts a `usize` value to an `Address` struct.
impl From<usize> for Address {
    fn from(value: usize) -> Self {
        Self(value)
    }
}

/// Converts a raw pointer to a `usize` value and creates an `Address` instance from it.
impl From<*const u8> for Address {
    fn from(value: *const u8) -> Self {
        Self(value as usize)
    }
}

/// Converts a raw pointer to a `usize` value and wraps it in an `Address` struct.
impl From<*mut u8> for Address {
    fn from(value: *mut u8) -> Self {
        Self(value as usize)
    }
}

/// Converts an `Address` struct to a `usize` value.
impl From<Address> for usize {
    fn from(value: Address) -> Self {
        value.0
    }
}

/// Converts an `Address` struct to a raw pointer to an unsigned 8-bit integer.
impl From<Address> for *const u8 {
    fn from(value: Address) -> Self {
        value.0 as *const u8
    }
}

/// Converts an `Address` struct to a raw pointer to a mutable unsigned 8-bit integer.
impl From<Address> for *mut u8 {
    fn from(value: Address) -> Self {
        value.0 as *mut u8
    }
}

/// Implements the addition of a `usize` value to an `Address` value.
impl Add<usize> for Address {
    type Output = Self;

    /// Adds a `usize` value to an `Address` value and returns the result.
    fn add(self, rhs: usize) -> Self::Output {
        Self(self.0 + rhs)
    }
}

/// Implements the addition of two `Address` instances.
impl Add<Address> for Address {
    type Output = Self;

    /// Adds two `Address` instances and returns a new `Address`.
    fn add(self, rhs: Address) -> Self::Output {
        Self(self.0 + rhs.0)
    }
}

/// Implements the `AddAssign` trait for `Address` struct.
impl AddAssign<usize> for Address {
    /// Adds the given `rhs` value to the `Address` struct.
    fn add_assign(&mut self, rhs: usize) {
        self.0 += rhs;
    }
}

/// Implements the `AddAssign` trait for `Address`.
impl AddAssign<Address> for Address {
    /// Adds the given `rhs` value to the `Address` struct.
    fn add_assign(&mut self, rhs: Address) {
        self.0 += rhs.0;
    }
}

/// Implements the subtraction of a `usize` from an `Address`.
impl Sub<usize> for Address {
    type Output = Self;

    /// Subtracts the given `rhs` from `&self`.
    fn sub(self, rhs: usize) -> Self::Output {
        Self(self.0 - rhs)
    }
}

/// Implements the subtraction operation for `Address`.
impl Sub<Address> for Address {
    type Output = Self;

    /// Subtracts the given `rhs` from `&self`.
    fn sub(self, rhs: Address) -> Self::Output {
        Self(self.0 - rhs.0)
    }
}

/// Implements the subtraction assignment operation for `Address` and `usize`.
impl SubAssign<usize> for Address {
    /// Subtracts the given `rhs` from the `Address`.
    fn sub_assign(&mut self, rhs: usize) {
        self.0 -= rhs;
    }
}

/// Implements the subtraction assignment operator for `Address`.
impl SubAssign<Address> for Address {
    /// Subtracts the value of `rhs` from `&self`.
    fn sub_assign(&mut self, rhs: Address) {
        self.0 -= rhs.0;
    }
}

/// Implements the `UpperHex` trait for the `Address` struct.
impl UpperHex for Address {
    /// Formats the value of `&self` using the `write!` macro and the `UpperHex` format specifier.
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{:#X}", self.0)
    }
}

/// Implements the `LowerHex` trait for the `Address` struct.
impl LowerHex for Address {
    /// Formats the value of `&self` using the `write!` macro and the `LowerHex` format specifier.
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{:#x}", self.0)
    }
}
