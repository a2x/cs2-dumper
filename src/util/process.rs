use super::{Address, Module};

use anyhow::{bail, Result};

use std::collections::HashMap;
use std::ffi::{c_void, CStr};
use std::mem;
use std::ptr;

use windows::Win32::Foundation::{CloseHandle, HANDLE};
use windows::Win32::System::Diagnostics::Debug::ReadProcessMemory;
use windows::Win32::System::Diagnostics::ToolHelp::*;
use windows::Win32::System::Threading::{OpenProcess, PROCESS_ALL_ACCESS};

/// Represents a Windows process.
#[derive(Debug)]
pub struct Process {
    /// ID of the process.
    id: u32,

    /// Handle to the process.
    handle: HANDLE,

    /// A HashMap containing the name of each module and its corresponding raw data.
    modules: HashMap<String, Vec<u8>>,
}

impl Process {
    /// Creates a new `Process` instance with the given name.
    ///
    /// # Arguments
    ///
    /// * `name` - A string slice that holds the name of the process.
    ///
    /// # Returns
    ///
    /// * `Result<Self>` - A `Result` containing the `Process` instance if successful, or an error if the process could not be found.
    pub fn new(name: &str) -> Result<Self> {
        let id = Self::get_process_id_by_name(name)?;

        let handle = unsafe { OpenProcess(PROCESS_ALL_ACCESS, false, id) }?;

        Ok(Self {
            id,
            handle,
            modules: HashMap::new(),
        })
    }

    /// Initializes the process by parsing the loaded modules.
    ///
    /// # Arguments
    ///
    /// * `&self` - A mutable reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// * `Result<()>` - A `Result` indicating the outcome of the operation.
    pub fn initialize(&mut self) -> Result<()> {
        self.parse_loaded_modules()
    }

    /// Searches for a pattern in the memory of a specified module and returns the address of the first occurrence.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Process` struct.
    /// * `module_name` - A string slice that holds the name of the module to search in.
    /// * `pattern` - A string slice that holds the pattern to search for.
    ///
    /// # Returns
    ///
    /// * `Option<Address>` - The address of the first occurrence of the pattern if found, or `None` if the pattern was not found.
    pub fn find_pattern(&self, module_name: &str, pattern: &str) -> Option<Address> {
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

    /// Returns an optional `Module` instance by its name.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Process` struct.
    /// * `name` - A string slice representing the name of the module to retrieve.
    ///
    /// # Returns
    ///
    /// * `Option<Module>` - An optional `Module` instance if the module was found, or `None` if the module was not found.
    pub fn get_module_by_name<'a>(&'a self, name: &'a str) -> Option<Module<'a>> {
        self.modules
            .get(name)
            .map(|data| Module::parse(name, data).unwrap())
    }

    /// Returns a vector of `Module` instances parsed from the process's loaded modules.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// * `Result<Vec<Module>>` - A `Result` containing a vector of `Module` instances if successful, or an error if the modules could not be parsed.
    pub fn modules(&self) -> Result<Vec<Module>> {
        let mut modules = Vec::new();

        for (name, data) in &self.modules {
            modules.push(Module::parse(name, data)?);
        }

        Ok(modules)
    }

    /// Reads the memory at the specified address and returns the value as type T.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Process` struct.
    /// * `address` - The address to read from.
    ///
    /// # Examples
    ///
    /// ```
    /// let process = Process::new(pid)?;
    /// let value: i32 = process.read_memory(address)?;
    /// ```
    ///
    /// # Returns
    ///
    /// * `Result<T>` - A `Result` containing the value if successful, or an error if the memory read fails.
    pub fn read_memory<T>(&self, address: Address) -> Result<T> {
        let mut buffer: T = unsafe { mem::zeroed() };

        self.read_memory_raw(
            address,
            &mut buffer as *const _ as *mut _,
            mem::size_of::<T>(),
        )?;

        Ok(buffer)
    }

    /// Reads the memory of a process and stores it in a buffer.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Process` struct.
    /// * `address` - The address to start reading from.
    /// * `buffer` - A pointer to the buffer where the read data will be stored.
    /// * `size` - The number of bytes to read.
    ///
    /// # Returns
    ///
    /// * `Result<()>` - A `Result` indicating the outcome of the operation.
    pub fn read_memory_raw(
        &self,
        address: Address,
        buffer: *mut c_void,
        size: usize,
    ) -> Result<()> {
        unsafe {
            ReadProcessMemory(
                self.handle,
                address.as_ptr(),
                buffer,
                size,
                Some(ptr::null_mut()),
            )
        }
        .map_err(|e| e.into())
    }

    /// Reads a null-terminated string from the process memory at the given address.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Process` struct.
    /// * `address` - The address in the process memory where the string is located.
    ///
    /// # Returns
    ///
    /// * `Result<String>` - A `Result` containing the string read from the process memory if successful, or an error if the memory read fails or if the string contains invalid UTF-8.
    pub fn read_string(&self, address: Address) -> Result<String> {
        let mut buffer = Vec::new();

        for i in 0.. {
            match self.read_memory::<u8>(address + i) {
                Ok(byte) if byte != 0 => buffer.push(byte),
                _ => break,
            }
        }

        Ok(String::from_utf8(buffer)?)
    }

    /// Reads a string of the specified length from the process memory at the given address.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Process` struct.
    /// * `address` - The address to read the string from.
    /// * `length` - The length of the string to read.
    ///
    /// # Returns
    ///
    /// * `Result<String>` - A `Result` containing the string read from the process memory if successful, or an error if the memory read fails or if the string contains invalid UTF-8.
    pub fn read_string_length(&self, address: Address, length: usize) -> Result<String> {
        let mut buffer = vec![0; length];

        self.read_memory_raw(address, buffer.as_mut_ptr() as *mut _, length)?;

        if let Some(end) = buffer.iter().position(|&x| x == 0) {
            buffer.truncate(end);
        }

        Ok(String::from_utf8(buffer)?)
    }

    /// Resolves the absolute address of a relative call.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Process` struct.
    /// * `address` - The address of the jump instruction.
    /// * `offset` - The offset of the displacement value.
    /// * `length` - The length of the instruction.
    ///
    /// # Returns
    ///
    /// * `Result<Address>` - A `Result` containing the absolute address if successful, or an error if the memory read fails.
    pub fn resolve_jmp(
        &self,
        address: Address,
        offset: Option<usize>,
        length: Option<usize>,
    ) -> Result<Address> {
        // The displacement value can be negative.
        let displacement = self.read_memory::<i32>(address.add(offset.unwrap_or(0x1)))?;

        Ok(address
            .add(length.unwrap_or(0x5))
            .add(displacement as usize))
    }

    /// Resolves the absolute address of a RIP-relative address.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Process` struct.
    /// * `address` - The address of the relative instruction pointer (RIP).
    /// * `offset` - The offset of the displacement value. If `None`, the offset will be `0x3`.
    /// * `length` - The length of the instruction. If `None`, the length will be `0x7`.
    ///
    /// # Returns
    ///
    /// * `Result<Address>` - A `Result` containing the absolute address if successful, or an error if the memory read fails.
    pub fn resolve_rip(
        &self,
        address: Address,
        offset: Option<usize>,
        length: Option<usize>,
    ) -> Result<Address> {
        // The displacement value can be negative.
        let displacement = self.read_memory::<i32>(address.add(offset.unwrap_or(0x3)))?;

        Ok(address
            .add(length.unwrap_or(0x7))
            .add(displacement as usize))
    }

    /// Returns the process ID of the first process with the given name.
    ///
    /// # Arguments
    ///
    /// * `process_name` - A string slice that holds the name of the process to search for.
    ///
    /// # Returns
    ///
    /// * `Result<u32>` - A `Result` containing the process ID if successful, or an error if the process could not be found.
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

    /// Parses the loaded modules of a process and stores them in a HashMap with the module name as the key and the module data as the value.
    ///
    /// # Arguments
    ///
    /// * `&self` - A mutable reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// * `Result<()>` - A `Result` indicating the outcome of the operation.
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
                    entry.modBaseAddr.into(),
                    data.as_mut_ptr() as *mut _,
                    data.len(),
                ) {
                    self.modules.insert(name.to_string(), data);
                }
            }
        }

        Ok(())
    }

    /// Converts a pattern string to a vector of bytes.
    ///
    /// # Arguments
    ///
    /// * `pattern` - A string slice that represents the pattern to be converted.
    ///
    /// # Returns
    ///
    /// * `Vec<i32>` - A vector of bytes representing the pattern.
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

/// Implements the `Drop` trait for the `Process` struct.
///
/// When a `Process` instance goes out of scope, this implementation will automatically close the process handle if it is not invalid.
impl Drop for Process {
    fn drop(&mut self) {
        if !self.handle.is_invalid() {
            unsafe { CloseHandle(self.handle).unwrap() }
        }
    }
}
