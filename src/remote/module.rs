use std::ffi::CStr;
use std::mem;
use std::slice;

use anyhow::{bail, Result};

use windows::Win32::System::Diagnostics::Debug::*;
use windows::Win32::System::SystemServices::*;

use crate::mem::Address;

use super::Process;

/// Represents an export in a module.
#[derive(Debug)]
pub struct Export {
    /// Name of the export.
    pub name: String,

    /// Address of the export.
    pub va: usize,
}

/// Represents a section in a module.
#[derive(Debug)]
pub struct Section {
    /// Name of the section.
    pub name: String,

    /// Base address of the section.
    pub start_va: usize,

    /// End address of the section.
    pub end_va: usize,

    /// Size of the section.
    pub size: usize,
}

/// Represents a module in a process.
pub struct Module<'a> {
    /// Base address of the module.
    base_addr: Address,

    /// DOS header.
    dos_hdr: &'a IMAGE_DOS_HEADER,

    /// NT header.
    nt_hdr: &'a IMAGE_NT_HEADERS64,

    /// Size of the module.
    size: u32,

    /// List of exports.
    exports: Vec<Export>,

    /// List of sections.
    sections: Vec<Section>,
}

impl<'a> Module<'a> {
    pub fn new(process: &'a Process, base_addr: Address) -> Result<Self> {
        let mut buf: [u8; 0x1000] = [0; 0x1000];

        process.read_memory_raw(base_addr, buf.as_mut_ptr() as *mut _, buf.len())?;

        if buf.len() < mem::size_of::<IMAGE_DOS_HEADER>() {
            bail!(
                "Buffer size mismatch. Expected {} bytes, got {} bytes",
                mem::size_of::<IMAGE_DOS_HEADER>(),
                buf.len()
            );
        }

        let dos_hdr = unsafe { &*(buf.as_ptr() as *const IMAGE_DOS_HEADER) };

        if dos_hdr.e_magic != IMAGE_DOS_SIGNATURE {
            bail!(
                "Invalid DOS signature. Expected 0x{:X}, got 0x{:X}",
                IMAGE_DOS_SIGNATURE,
                dos_hdr.e_magic
            );
        }

        let nt_hdr = unsafe {
            &*(buf.as_ptr().offset(dos_hdr.e_lfanew as isize) as *const IMAGE_NT_HEADERS64)
        };

        if nt_hdr.Signature != IMAGE_NT_SIGNATURE {
            bail!(
                "Invalid NT signature. Expected 0x{:X}, got 0x{:X}",
                IMAGE_NT_SIGNATURE,
                nt_hdr.Signature
            );
        }

        let size = nt_hdr.OptionalHeader.SizeOfImage;

        let exports = unsafe { Self::parse_exports(process, base_addr, size, nt_hdr)? };
        let sections = unsafe { Self::parse_sections(base_addr, nt_hdr) };

        Ok(Self {
            base_addr,
            dos_hdr,
            nt_hdr,
            size,
            exports,
            sections,
        })
    }

    /// Returns the base address of the module.
    #[inline]
    pub fn base_address(&self) -> Address {
        self.base_addr
    }

    /// Returns the exports of the module.
    #[inline]
    pub fn exports(&self) -> &Vec<Export> {
        &self.exports
    }

    /// Returns the sections of the module.
    #[inline]
    pub fn sections(&self) -> &Vec<Section> {
        &self.sections
    }

    /// Returns the export with the given name.
    #[inline]
    pub fn export(&self, name: &str) -> Option<&Export> {
        self.exports.iter().find(|export| export.name == name)
    }

    /// Returns the section with the given name.
    #[inline]
    pub fn section(&self, name: &str) -> Option<&Section> {
        self.sections.iter().find(|section| section.name == name)
    }

    /// Returns the size of the module.
    #[inline]
    pub fn size(&self) -> u32 {
        self.size
    }

    /// Parses the exports of the module.
    unsafe fn parse_exports(
        process: &Process,
        base_addr: Address,
        size: u32,
        nt_hdr: &IMAGE_NT_HEADERS64,
    ) -> Result<Vec<Export>> {
        let export_data_dir =
            nt_hdr.OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT.0 as usize];

        let export_dir_start = base_addr + export_data_dir.VirtualAddress as usize;
        let export_dir_end = export_dir_start + export_data_dir.Size as usize;

        let mut buf: Vec<u8> = vec![0; export_data_dir.Size as usize];

        process.read_memory_raw(export_dir_start, buf.as_mut_ptr() as *mut _, buf.len())?;

        if buf.len() < mem::size_of::<IMAGE_EXPORT_DIRECTORY>() {
            bail!(
                "Buffer size mismatch. Expected {} bytes, got {} bytes",
                mem::size_of::<IMAGE_EXPORT_DIRECTORY>(),
                buf.len()
            );
        }

        let export_dir = &*(buf.as_ptr() as *const IMAGE_EXPORT_DIRECTORY);

        let delta = export_dir as *const _ as usize - export_data_dir.VirtualAddress as usize;

        let name_table = (delta + export_dir.AddressOfNames as usize) as *const u32;
        let ordinal_table = (delta + export_dir.AddressOfNameOrdinals as usize) as *const u16;
        let function_table = (delta + export_dir.AddressOfFunctions as usize) as *const u32;

        let mut exports: Vec<Export> = Vec::with_capacity(export_dir.NumberOfNames as usize);

        for i in 0..export_dir.NumberOfNames {
            let target_va = ordinal_table as usize + i as usize * mem::size_of::<u16>();

            if target_va > base_addr.add(size as usize).0 || target_va < ordinal_table as usize {
                continue;
            }

            let func_ordinal = *ordinal_table.offset(i as isize);

            if func_ordinal as usize > export_dir.NumberOfFunctions as usize {
                continue;
            }

            let func_va = base_addr.add(*function_table.offset(func_ordinal as isize) as usize);

            // Skip forwarded exports.
            if func_va >= export_dir_start && func_va <= export_dir_end {
                continue;
            }

            let name_ptr = delta.wrapping_add(*name_table.offset(i as isize) as usize) as *const i8;

            if name_ptr.is_null() {
                continue;
            }

            let name = CStr::from_ptr(name_ptr).to_string_lossy().into_owned();

            exports.push(Export {
                name,
                va: func_va.0,
            });
        }

        Ok(exports)
    }

    /// Parses the sections of the module.
    unsafe fn parse_sections(base_addr: Address, nt_hdr: &IMAGE_NT_HEADERS64) -> Vec<Section> {
        let optional_hdr = &nt_hdr.OptionalHeader as *const _ as *const u8;

        let section_hdr = optional_hdr.offset(nt_hdr.FileHeader.SizeOfOptionalHeader as isize)
            as *const IMAGE_SECTION_HEADER;

        let sections_raw =
            slice::from_raw_parts(section_hdr, nt_hdr.FileHeader.NumberOfSections as usize);

        sections_raw
            .iter()
            .map(|section| {
                let name = CStr::from_ptr(section.Name.as_ptr() as *const _)
                    .to_string_lossy()
                    .into_owned();

                let start_rva = section.VirtualAddress as usize;
                let end_rva = start_rva + section.Misc.VirtualSize as usize;

                let start_va = base_addr + start_rva;
                let end_va = base_addr + end_rva;

                let size = section.SizeOfRawData as usize;

                Section {
                    name,
                    start_va: start_va.0,
                    end_va: end_va.0,
                    size,
                }
            })
            .collect()
    }
}
