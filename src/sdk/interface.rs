use std::ffi::c_char;
use std::mem::offset_of;

use anyhow::Result;

use crate::mem::Address;
use crate::remote::Process;

#[derive(Debug)]
#[repr(C)]
pub struct InterfaceReg {
    pub create_fn: *const (),    // 0x0000
    pub name: *const c_char,     // 0x0008
    pub next: *mut InterfaceReg, // 0x0010
}

impl InterfaceReg {
    /// Returns the pointer of the interface.
    pub fn pointer(&self, process: &Process) -> Result<Address> {
        process
            .read_memory::<usize>(
                (self as *const _ as usize + offset_of!(InterfaceReg, create_fn)).into(),
            )
            .map(|ptr| ptr.into())
    }

    /// Returns the name of the interface.
    /// E.g. "Source2Client002"
    pub fn name(&self, process: &Process) -> Result<String> {
        let name_ptr = process.read_memory::<usize>(
            (self as *const _ as usize + offset_of!(InterfaceReg, name)).into(),
        )?;

        process.read_string(name_ptr.into())
    }

    /// Returns the next interface in the list.
    pub fn next(&self, process: &Process) -> Result<*mut InterfaceReg> {
        process.read_memory::<*mut InterfaceReg>(
            (self as *const _ as usize + offset_of!(InterfaceReg, next)).into(),
        )
    }
}
