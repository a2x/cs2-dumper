use super::{Address, Module, ModuleEntry};

use anyhow::{bail, Result};

use std::collections::HashMap;
use std::ffi::{c_void, CStr};
use std::mem;
use std::ptr;

#[cfg(target_os = "windows")]
use windows::Win32::{
    Foundation::{CloseHandle, HANDLE},
    System::Diagnostics::Debug::ReadProcessMemory,
    System::Diagnostics::ToolHelp::*,
    System::Threading::{OpenProcess, PROCESS_ALL_ACCESS},
};

#[cfg(target_os = "linux")]
use procfs::process::{self, all_processes};
use std::fs::File;
use std::io::{Read, Seek, SeekFrom};
use std::path::{Path, PathBuf};

/// Represents a Windows process.
#[derive(Debug)]
pub struct Process {
    /// ID of the process.
    id: u32,

    #[cfg(target_os = "windows")]
    /// Handle to the process.
    handle: HANDLE,

    /// A HashMap containing the name of each module and its corresponding raw data.
    #[cfg(target_os = "windows")]
    modules: HashMap<String, Vec<u8>>,

    #[cfg(target_os = "linux")]
    modules: HashMap<String, ModuleEntry>,
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
    #[cfg(target_os = "windows")]
    pub fn new(name: &str) -> Result<Self> {
        let id = Self::get_process_id_by_name(name)?;

        let handle = unsafe { OpenProcess(PROCESS_ALL_ACCESS, false, id) }?;

        Ok(Self {
            id,
            handle,
            modules: HashMap::new(),
        })
    }

    #[cfg(target_os = "linux")]
    pub fn new(process_name: &str) -> Result<Self> {
        let id = Self::get_process_id_by_name(process_name.strip_suffix(".exe").unwrap())?;
        Ok(Self {
            id,
            modules: HashMap::new(),
        })
    }

    /// Initializes the `Process` instance by parsing all loaded modules in the process.
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
    #[cfg(target_os = "windows")]
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

    #[cfg(target_os = "linux")]
    pub fn find_pattern(&self, module_name: &str, pattern: &str) -> Option<Address> {
        let module = self.get_module_by_name(module_name)?;

        let pattern_bytes = Self::pattern_to_bytes(pattern);

        for (i, window) in module
            .module_info
            .data
            .windows(pattern_bytes.len())
            .enumerate()
        {
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
            .map(|entry| Module::parse(name, entry).unwrap())
        // Module::parse(name, self.modules.get_mut(name)?).ok()
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

        for (name, entry) in &self.modules {
            modules.push(Module::parse(name, entry)?);
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

    #[cfg(target_os = "windows")]
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

    #[cfg(target_os = "linux")]
    pub fn read_memory_raw(
        &self,
        address: Address,
        buffer: *mut c_void,
        size: usize,
    ) -> Result<()> {
        let proc_mem_path = format!("/proc/{}/mem", self.id);
        let mut mem_file = File::open(proc_mem_path)?;

        // Go to the start address
        mem_file.seek(SeekFrom::Start(
            <Address as Into<usize>>::into(address) as u64
        ))?;

        let buffer_slice = unsafe { std::slice::from_raw_parts_mut(buffer as *mut u8, size) };

        // Try to read the data
        mem_file.read_exact(buffer_slice)?;
        Ok(())
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
    #[cfg(target_os = "windows")]
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

    #[cfg(target_os = "linux")]
    fn get_process_id_by_name(process_name: &str) -> Result<u32> {
        use std::io::{BufRead, BufReader};

        for process_iter in all_processes()? {
            let Ok(process) = process_iter else { continue };
            let comm_path = format!("/proc/{}/comm", process.pid());
            if let Ok(comm_file) = File::open(Path::new(&comm_path)) {
                let mut comm = String::new();
                if BufReader::new(comm_file).read_line(&mut comm).is_ok() {
                    comm.pop();
                    if comm == process_name && process.pid() > 0 {
                        return Ok(process.pid() as u32);
                    }
                }
            }
        }
        bail!("Process not found: {}", process_name);
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

    #[cfg(target_os = "windows")]
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

    #[cfg(target_os = "linux")]
    fn read_elf_file(path: &PathBuf) -> Result<Vec<u8>> {
        let mut file = File::open(path)?;
        let mut data = Vec::new();
        file.read_to_end(&mut data)?;

        Ok(data)
    }

    fn get_transformed_module_name(path: PathBuf) -> Option<String> {
        if let Ok(module_path) = path.into_os_string().into_string() {
            if let Some(module_name) = module_path.split('/').last() {
                if module_name.starts_with("lib") && module_name.ends_with(".so") {
                    return Some(format!(
                        "{}.dll",
                        module_name.strip_prefix("lib")?.strip_suffix(".so")?
                    ));
                }
            }
        }
        None
    }

    #[cfg(target_os = "linux")]
    fn parse_loaded_modules(&mut self) -> Result<()> {
        let process = process::Process::new(self.id as i32)?;

        let mut modules_info: HashMap<String, ((u64, u64), PathBuf)> = HashMap::new();

        for mmap in process.maps()? {
            let mmap_path = match mmap.pathname {
                process::MMapPath::Path(path) => path,
                _ => continue,
            };
            let module_name = match Process::get_transformed_module_name(mmap_path.clone()) {
                Some(new_path) => new_path,
                None => continue,
            };
            if module_name != "client.dll"
                && module_name != "engine2.dll"
                && module_name != "inputsystem.dll"
                && module_name != "matchmaking.dll"
                && module_name != "schemasystem.dll"
            {
                continue;
            }
            let module_entry = modules_info
                .entry(module_name)
                .or_insert_with(|| (mmap.address, mmap_path));
            module_entry.0 = (
                std::cmp::min(mmap.address.0, module_entry.0 .0),
                std::cmp::max(mmap.address.1, module_entry.0 .1),
            );
        }

        for (module_name, (address_space, path)) in modules_info.into_iter() {
            let (start, end) = address_space;
            let mut data = vec![0; (end - start + 1) as usize];
            if let Ok(_) = self.read_memory_raw(
                (start as usize).into(),
                data.as_mut_ptr() as *mut _,
                data.len(),
            ) {
                self.modules.insert(
                    module_name,
                    ModuleEntry {
                        path: path.clone(),
                        start_addr: (start as usize).into(),
                        data: data,
                        module_file_data: Process::read_elf_file(&path)?,
                    },
                );
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
#[cfg(target_os = "windows")]
impl Drop for Process {
    fn drop(&mut self) {
        if !self.handle.is_invalid() {
            unsafe { CloseHandle(self.handle).unwrap() }
        }
    }
}
