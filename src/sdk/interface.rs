use std::ffi::c_char;
use std::mem::offset_of;

use crate::error::Result;
use crate::remote::Process;

#[derive(Debug)]
#[repr(C)]
pub struct InterfaceReg {
    pub create_fn: *const (),    // 0x0000
    pub name: *const c_char,     // 0x0008
    pub next: *mut InterfaceReg, // 0x0010
}

impl InterfaceReg {
    pub fn ptr(&self, process: &Process) -> Result<usize> {
        process
            .read_memory::<usize>(self as *const _ as usize + offset_of!(InterfaceReg, create_fn))
    }

    pub fn name(&self, process: &Process) -> Result<String> {
        let name_ptr = process
            .read_memory::<usize>(self as *const _ as usize + offset_of!(InterfaceReg, name))?;

        process.read_string(name_ptr)
    }

    pub fn next(&self, process: &Process) -> Result<*mut InterfaceReg> {
        process.read_memory::<*mut InterfaceReg>(
            self as *const _ as usize + offset_of!(InterfaceReg, next),
        )
    }
}
