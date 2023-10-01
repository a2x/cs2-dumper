use std::ffi::{c_void, CStr};
use std::mem;
use std::ptr;

use windows::Win32::Foundation::*;
use windows::Win32::System::Diagnostics::Debug::*;
use windows::Win32::System::Diagnostics::ToolHelp::*;
use windows::Win32::System::Threading::*;

use crate::error::{Error, Result};

use super::Module;

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

    pub fn find_pattern(&self, module_name: &str, pattern: &str) -> Result<usize> {
        let module = self.get_module_by_name(module_name)?;

        let mut module_data: Vec<u8> = vec![0; module.size() as usize];

        self.read_memory_raw(
            module.address(),
            module_data.as_mut_ptr() as *mut _,
            module_data.len(),
        )?;

        let pattern_bytes = Self::pattern_to_bytes(pattern);

        for i in 0..module.size() as usize - pattern.len() {
            let mut found = true;

            for j in 0..pattern_bytes.len() {
                if module_data[i + j] != pattern_bytes[j] as u8 && pattern_bytes[j] != -1 {
                    found = false;

                    break;
                }
            }

            if found {
                return Ok(module.address() + i);
            }
        }

        Err(Error::PatternNotFound)
    }

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
                    return Module::new(self, entry.modBaseAddr as usize);
                }
            }
        }

        Err(Error::ModuleNotFound)
    }

    pub fn read_memory_raw(&self, address: usize, buffer: *mut c_void, size: usize) -> Result<()> {
        unsafe {
            ReadProcessMemory(
                self.process_handle,
                address as *const _,
                buffer,
                size,
                Some(ptr::null_mut()),
            )
        }
        .map_err(Into::into)
    }

    pub fn write_memory_raw(
        &self,
        address: usize,
        buffer: *const c_void,
        size: usize,
    ) -> Result<()> {
        unsafe {
            WriteProcessMemory(
                self.process_handle,
                address as *const _,
                buffer,
                size,
                Some(ptr::null_mut()),
            )
        }
        .map_err(Into::into)
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

    pub fn write_memory<T>(&self, address: usize, value: T) -> Result<()> {
        self.write_memory_raw(address, &value as *const _ as *const _, mem::size_of::<T>())
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

    pub fn resolve_jmp(&self, address: usize) -> Result<usize> {
        let displacement = self.read_memory::<i32>(address + 0x1)?;

        Ok((address + 0x5) + displacement as usize)
    }

    pub fn resolve_rip(&self, address: usize) -> Result<usize> {
        let displacement = self.read_memory::<i32>(address + 0x3)?;

        Ok((address + 0x7) + displacement as usize)
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
                let name = CStr::from_ptr(&entry.szExeFile as *const _ as *const _)
                    .to_string_lossy()
                    .into_owned();

                if name == process_name {
                    return Ok(entry.th32ProcessID);
                }
            }
        }

        Err(Error::ProcessNotFound)
    }

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
                let value = i32::from_str_radix(&pattern[i..i + 2], 16);

                match value {
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
    fn drop(&mut self) {
        if !self.process_handle.is_invalid() {
            unsafe { CloseHandle(self.process_handle).unwrap() }
        }
    }
}
