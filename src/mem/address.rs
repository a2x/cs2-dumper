use std::fmt::{LowerHex, UpperHex};
use std::ops::{Add, AddAssign, Sub, SubAssign};

#[derive(Clone, Copy, Debug, Eq, PartialEq)]
#[repr(transparent)]
pub struct Address(pub usize);

impl Address {
    pub fn add(&self, offset: usize) -> Self {
        Self(self.0 + offset)
    }

    pub fn sub(&self, offset: usize) -> Self {
        Self(self.0 - offset)
    }

    pub fn as_ptr<T>(&self) -> *const T {
        self.0 as *const T
    }

    pub fn as_mut_ptr<T>(&self) -> *mut T {
        self.0 as *mut T
    }
}

impl From<usize> for Address {
    fn from(value: usize) -> Self {
        Self(value)
    }
}

impl From<Address> for usize {
    fn from(value: Address) -> Self {
        value.0
    }
}

impl Add<usize> for Address {
    type Output = Self;

    fn add(self, rhs: usize) -> Self::Output {
        Self(self.0 + rhs)
    }
}

impl Add<Address> for Address {
    type Output = Self;

    fn add(self, rhs: Address) -> Self::Output {
        Self(self.0 + rhs.0)
    }
}

impl AddAssign<usize> for Address {
    fn add_assign(&mut self, rhs: usize) {
        self.0 += rhs;
    }
}

impl AddAssign<Address> for Address {
    fn add_assign(&mut self, rhs: Address) {
        self.0 += rhs.0;
    }
}

impl Sub<usize> for Address {
    type Output = Self;

    fn sub(self, rhs: usize) -> Self::Output {
        Self(self.0 - rhs)
    }
}

impl Sub<Address> for Address {
    type Output = Self;

    fn sub(self, rhs: Address) -> Self::Output {
        Self(self.0 - rhs.0)
    }
}

impl SubAssign<usize> for Address {
    fn sub_assign(&mut self, rhs: usize) {
        self.0 -= rhs;
    }
}

impl SubAssign<Address> for Address {
    fn sub_assign(&mut self, rhs: Address) {
        self.0 -= rhs.0;
    }
}

impl UpperHex for Address {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{:#X}", self.0)
    }
}

impl LowerHex for Address {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{:#x}", self.0)
    }
}
