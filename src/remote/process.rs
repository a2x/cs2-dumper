use std::ffi::{c_void, CStr};
use std::mem;
use std::ptr;

use anyhow::{bail, Result};

use windows::Win32::Foundation::*;
use windows::Win32::System::Diagnostics::Debug::*;
use windows::Win32::System::Diagnostics::ToolHelp::*;
use windows::Win32::System::Threading::*;

use crate::mem::Address;

use super::Module;

/// Represents a Win32 process.
#[derive(Debug)]
pub struct Process {
    process_id: u32,
    process_handle: HANDLE,
}

impl Process {
    pub fn new(process_name: &str) -> Result<Self> {
        let process_id = Self::get_process_id_by_name(process_name)?;

        let process_handle = unsafe { OpenProcess(PROCESS_ALL_ACCESS, false, process_id) }?;

        Ok(Self {
            process_id,
            process_handle,
        })
    }

    /// Finds an sequence of bytes in memory.
    pub fn find_pattern(&self, module_name: &str, pattern: &str) -> Result<Address> {
        let module = self.get_module_by_name(module_name)?;

        let mut module_data: Vec<u8> = vec![0; module.size() as usize];

        self.read_memory_raw(
            module.base_address(),
            module_data.as_mut_ptr() as *mut _,
            module_data.len(),
        )?;

        let pat_bytes = Self::pattern_to_bytes(pattern);

        for i in 0..module.size() as usize - pattern.len() {
            let mut found = true;

            for j in 0..pat_bytes.len() {
                if module_data[i + j] != pat_bytes[j] as u8 && pat_bytes[j] != -1 {
                    found = false;

                    break;
                }
            }

            if found {
                return Ok(module.base_address() + i);
            }
        }

        bail!("Pattern not found: {}", pattern)
    }

    /// Returns a list of loaded modules.
    pub fn get_loaded_modules(&self) -> Result<Vec<String>> {
        let snapshot = unsafe { CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, self.process_id) }?;

        let mut entry = MODULEENTRY32 {
            dwSize: mem::size_of::<MODULEENTRY32>() as u32,
            ..Default::default()
        };

        let mut modules = Vec::new();

        unsafe {
            Module32First(snapshot, &mut entry)?;

            while Module32Next(snapshot, &mut entry).is_ok() {
                let name = CStr::from_ptr(&entry.szModule as *const _ as *const _)
                    .to_string_lossy()
                    .into_owned();

                modules.push(name);
            }
        }

        Ok(modules)
    }

    /// Returns a module by name.
    pub fn get_module_by_name(&self, module_name: &str) -> Result<Module> {
        let snapshot = unsafe { CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, self.process_id) }?;

        let mut entry = MODULEENTRY32 {
            dwSize: mem::size_of::<MODULEENTRY32>() as u32,
            ..Default::default()
        };

        unsafe {
            Module32First(snapshot, &mut entry)?;

            while Module32Next(snapshot, &mut entry).is_ok() {
                let name = CStr::from_ptr(&entry.szModule as *const _ as *const _)
                    .to_string_lossy()
                    .into_owned();

                if name == module_name {
                    return Module::new(self, Address::from(entry.modBaseAddr as usize));
                }
            }
        }

        bail!("Module not found: {}", module_name)
    }

    /// Reads raw data from memory.
    pub fn read_memory_raw(&self, addr: Address, buf: *mut c_void, size: usize) -> Result<()> {
        unsafe {
            ReadProcessMemory(
                self.process_handle,
                addr.as_ptr(),
                buf,
                size,
                Some(ptr::null_mut()),
            )
        }
        .map_err(Into::into)
    }

    /// Writes raw data to memory.
    pub fn write_memory_raw(&self, addr: Address, buf: *const c_void, size: usize) -> Result<()> {
        unsafe {
            WriteProcessMemory(
                self.process_handle,
                addr.as_ptr(),
                buf,
                size,
                Some(ptr::null_mut()),
            )
        }
        .map_err(Into::into)
    }

    /// Reads a value from memory.
    pub fn read_memory<T>(&self, addr: Address) -> Result<T> {
        let mut buf: T = unsafe { mem::zeroed() };

        self.read_memory_raw(addr, &mut buf as *const _ as *mut _, mem::size_of::<T>())?;

        Ok(buf)
    }

    /// Writes a value to memory.
    pub fn write_memory<T>(&self, addr: Address, val: T) -> Result<()> {
        self.write_memory_raw(addr, &val as *const _ as *const _, mem::size_of::<T>())
    }

    /// Reads a string.
    pub fn read_string(&self, addr: Address) -> Result<String> {
        let mut buf = Vec::new();

        for i in 0.. {
            match self.read_memory::<u8>(addr + i) {
                Ok(byte) if byte != 0 => buf.push(byte),
                _ => break,
            }
        }

        Ok(String::from_utf8(buf)?)
    }

    /// Reads a string with a specified length.
    pub fn read_string_len(&self, addr: Address, len: usize) -> Result<String> {
        let mut buf: Vec<u8> = vec![0; len];

        self.read_memory_raw(addr, buf.as_mut_ptr() as *mut _, len)?;

        if let Some(end) = buf.iter().position(|&x| x == 0) {
            buf.truncate(end);
        }

        Ok(String::from_utf8(buf)?)
    }

    /// Resolves a JMP/CALL instruction.
    pub fn resolve_jmp(
        &self,
        addr: Address,
        offset: Option<usize>,
        len: Option<usize>,
    ) -> Result<Address> {
        let disp = self.read_memory::<i32>(addr + offset.unwrap_or(0x1))?;

        Ok(((addr.add(len.unwrap_or(0x5)).0 as isize + disp as isize) as usize).into())
    }

    /// Resolves a RIP-relative address.
    pub fn resolve_rip(
        &self,
        addr: Address,
        offset: Option<usize>,
        len: Option<usize>,
    ) -> Result<Address> {
        let disp = self.read_memory::<i32>(addr + offset.unwrap_or(0x3))?;

        Ok(((addr.add(len.unwrap_or(0x7)).0 as isize + disp as isize) as usize).into())
    }

    /// Returns the process ID of a process by name.
    fn get_process_id_by_name(process_name: &str) -> Result<u32> {
        let snapshot = unsafe { CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0) }?;

        let mut entry = PROCESSENTRY32 {
            dwSize: mem::size_of::<PROCESSENTRY32>() as u32,
            ..Default::default()
        };

        unsafe {
            Process32First(snapshot, &mut entry)?;

            while Process32Next(snapshot, &mut entry).is_ok() {
                let name = CStr::from_ptr(&entry.szExeFile as *const _ as *const _)
                    .to_string_lossy()
                    .into_owned();

                if name == process_name {
                    return Ok(entry.th32ProcessID);
                }
            }
        }

        bail!("Process not found: {}", process_name)
    }

    /// Converts a pattern to a list of bytes.
    fn pattern_to_bytes(pattern: &str) -> Vec<i32> {
        let mut bytes = Vec::new();

        let chars: Vec<char> = pattern.chars().collect();

        let mut i = 0;

        while i < chars.len() {
            if chars[i] == ' ' {
                i += 1;

                continue;
            }

            if chars[i] == '?' {
                bytes.push(-1);

                i += 1;

                continue;
            }

            if i + 1 < chars.len() {
                match i32::from_str_radix(&pattern[i..i + 2], 16) {
                    Ok(v) => bytes.push(v),
                    Err(_) => {}
                }

                i += 1;
            }

            i += 1;
        }

        bytes
    }
}

impl Drop for Process {
    /// Closes the process handle.
    fn drop(&mut self) {
        if !self.process_handle.is_invalid() {
            unsafe { CloseHandle(self.process_handle).unwrap() }
        }
    }
}
