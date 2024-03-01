use super::{Module, ModuleEntry};

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
    #[cfg(target_os = "windows")]
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

    #[cfg(target_os = "linux")]
    pub fn new(process_name: &str) -> Result<Self> {
        let id = Self::get_process_id_by_name(process_name.strip_suffix(".exe").unwrap())?;
        let mut process = Self {
            id,
            modules: HashMap::new(),
        };
        process.parse_loaded_modules()?;
        Ok(process)
    }
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
    pub fn find_pattern(&self, module_name: &str, pattern: &str) -> Option<usize> {
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

    #[cfg(target_os = "windows")]
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

    #[cfg(target_os = "linux")]
    pub fn read_memory_raw(&self, address: usize, buffer: *mut c_void, size: usize) -> Result<()> {
        let proc_mem_path = format!("/proc/{}/mem", self.id);
        let mut mem_file = File::open(proc_mem_path)?;

        // Go to the start address
        mem_file.seek(SeekFrom::Start(address as u64))?;

        let buffer_slice = unsafe { std::slice::from_raw_parts_mut(buffer as *mut u8, size) };

        // Try to read the data
        mem_file.read_exact(buffer_slice)?;
        Ok(())
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

        let final_address = if displacement.is_negative() {
            address - displacement.wrapping_abs() as usize
        } else {
            address + displacement as usize
        } + length.unwrap_or(0x5);
        Ok(final_address)
    }

    pub fn resolve_rip(
        &self,
        address: usize,
        offset: Option<usize>,
        length: Option<usize>,
    ) -> Result<usize> {
        // The displacement value can be negative.
        let displacement = self.read_memory::<i32>(address + offset.unwrap_or(0x3))?;

        let final_address = if displacement.is_negative() {
            address - displacement.wrapping_abs() as usize
        } else {
            address + displacement as usize
        } + length.unwrap_or(0x7);
        Ok(final_address)
    }

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
            // let mut data = vec![0; (end - start + 1) as usize];
            if let Ok(data) = Process::read_elf_file(&path) {
                self.modules.insert(
                    module_name,
                    ModuleEntry {
                        path: path.clone(),
                        start_addr: start as usize,
                        data: data,
                    },
                );
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

#[cfg(target_os = "windows")]
impl Drop for Process {
    fn drop(&mut self) {
        if !self.handle.is_invalid() {
            unsafe { CloseHandle(self.handle).unwrap() }
        }
    }
}
