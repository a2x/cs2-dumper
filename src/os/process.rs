use std::collections::HashMap;
use std::ffi::{c_void, CStr};
use std::mem;
use std::ptr;

use anyhow::{bail, Result};

use windows::Win32::Foundation::{CloseHandle, HANDLE};
use windows::Win32::System::Diagnostics::Debug::ReadProcessMemory;
use windows::Win32::System::Diagnostics::ToolHelp::*;
use windows::Win32::System::Threading::{OpenProcess, PROCESS_ALL_ACCESS};

use super::Module;

#[derive(Debug)]
pub struct Process {
    id: u32,
    handle: HANDLE,
    modules: HashMap<String, Vec<u8>>,
}

impl Process {
    pub fn new(name: &str) -> Result<Self> {
        let id = Self::get_process_id_by_name(name)?;

        let handle = unsafe { OpenProcess(PROCESS_ALL_ACCESS, false, id) }?;

        let mut process = Self {
            id,
            handle,
            modules: HashMap::new(),
        };

        process.parse_loaded_modules()?;

        Ok(process)
    }

    pub fn find_pattern(&self, module_name: &str, pattern: &str) -> Option<usize> {
        let module = self.get_module_by_name(module_name)?;

        let pattern_bytes = Self::pattern_to_bytes(pattern);

        for (i, window) in module.data.windows(pattern_bytes.len()).enumerate() {
            if window
                .iter()
                .zip(&pattern_bytes)
                .all(|(&x, &y)| x == y as u8 || y == -1)
            {
                return Some(module.base() + i);
            }
        }

        None
    }

    pub fn get_module_by_name<'a>(&'a self, name: &'a str) -> Option<Module<'a>> {
        self.modules
            .get(name)
            .map(|data| Module::parse(name, data).unwrap())
    }

    pub fn modules(&self) -> Result<Vec<Module>> {
        let mut modules = Vec::new();

        for (name, data) in &self.modules {
            modules.push(Module::parse(name, data)?);
        }

        Ok(modules)
    }

    pub fn read_memory<T>(&self, address: usize) -> Result<T> {
        let mut buffer: T = unsafe { mem::zeroed() };

        self.read_memory_raw(
            address,
            &mut buffer as *const _ as *mut _,
            mem::size_of::<T>(),
        )?;

        Ok(buffer)
    }

    pub fn read_memory_raw(&self, address: usize, buffer: *mut c_void, size: usize) -> Result<()> {
        unsafe {
            ReadProcessMemory(
                self.handle,
                address as *mut _,
                buffer,
                size,
                Some(ptr::null_mut()),
            )
        }
        .map_err(|e| e.into())
    }

    pub fn read_string(&self, address: usize) -> Result<String> {
        let mut buffer = Vec::new();

        for i in 0.. {
            match self.read_memory::<u8>(address + i) {
                Ok(byte) if byte != 0 => buffer.push(byte),
                _ => break,
            }
        }

        Ok(String::from_utf8(buffer)?)
    }

    pub fn read_string_length(&self, address: usize, length: usize) -> Result<String> {
        let mut buffer = vec![0; length];

        self.read_memory_raw(address, buffer.as_mut_ptr() as *mut _, length)?;

        if let Some(end) = buffer.iter().position(|&x| x == 0) {
            buffer.truncate(end);
        }

        Ok(String::from_utf8(buffer)?)
    }

    pub fn resolve_jmp(
        &self,
        address: usize,
        offset: Option<usize>,
        length: Option<usize>,
    ) -> Result<usize> {
        // The displacement value can be negative.
        let displacement = self.read_memory::<i32>(address + offset.unwrap_or(0x1))?;

        Ok((address + displacement as usize) + length.unwrap_or(0x5))
    }

    pub fn resolve_rip(
        &self,
        address: usize,
        offset: Option<usize>,
        length: Option<usize>,
    ) -> Result<usize> {
        // The displacement value can be negative.
        let displacement = self.read_memory::<i32>(address + offset.unwrap_or(0x3))?;

        Ok((address + displacement as usize) + length.unwrap_or(0x7))
    }

    fn get_process_id_by_name(process_name: &str) -> Result<u32> {
        let snapshot = unsafe { CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0) }?;

        let mut entry = PROCESSENTRY32 {
            dwSize: mem::size_of::<PROCESSENTRY32>() as u32,
            ..Default::default()
        };

        unsafe {
            Process32First(snapshot, &mut entry)?;

            while Process32Next(snapshot, &mut entry).is_ok() {
                let name = CStr::from_ptr(&entry.szExeFile as *const _ as *const _).to_str()?;

                if name == process_name {
                    return Ok(entry.th32ProcessID);
                }
            }
        }

        bail!("Process not found: {}", process_name)
    }

    fn parse_loaded_modules(&mut self) -> Result<()> {
        let snapshot = unsafe { CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, self.id) }?;

        let mut entry = MODULEENTRY32 {
            dwSize: mem::size_of::<MODULEENTRY32>() as u32,
            ..Default::default()
        };

        unsafe {
            Module32First(snapshot, &mut entry)?;

            while Module32Next(snapshot, &mut entry).is_ok() {
                let name = CStr::from_ptr(&entry.szModule as *const _ as *const _).to_str()?;

                let mut data = vec![0; entry.modBaseSize as usize];

                if let Ok(_) = self.read_memory_raw(
                    entry.modBaseAddr as _,
                    data.as_mut_ptr() as *mut _,
                    data.len(),
                ) {
                    self.modules.insert(name.to_string(), data);
                }
            }
        }

        Ok(())
    }

    fn pattern_to_bytes(pattern: &str) -> Vec<i32> {
        pattern
            .split_whitespace()
            .map(|s| {
                if s == "?" {
                    -1
                } else {
                    i32::from_str_radix(s, 16).unwrap_or(0)
                }
            })
            .collect()
    }
}

impl Drop for Process {
    fn drop(&mut self) {
        if !self.handle.is_invalid() {
            unsafe { CloseHandle(self.handle).unwrap() }
        }
    }
}
