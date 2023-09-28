use std::ffi::CStr;
use std::mem;
use std::slice;

use windows::Win32::System::Diagnostics::Debug::*;
use windows::Win32::System::SystemServices::*;

use crate::error::{Error, Result};

use super::Process;

#[derive(Debug)]
pub struct Export {
    pub name: String,
    pub va: usize,
}

#[derive(Debug)]
pub struct Section {
    pub name: String,
    pub start_rva: usize,
    pub end_rva: usize,
    pub size: usize,
}

pub struct Module<'a> {
    address: usize,
    nt_headers: &'a IMAGE_NT_HEADERS64,
    size: u32,
    exports: Vec<Export>,
    sections: Vec<Section>,
}

impl<'a> Module<'a> {
    pub fn new(process: &'a Process, address: usize) -> Result<Self> {
        let mut headers: [u8; 0x1000] = [0; 0x1000];

        process.read_memory_raw(address, headers.as_mut_ptr() as *mut _, headers.len())?;

        if headers.len() < mem::size_of::<IMAGE_DOS_HEADER>() {
            return Err(Error::BufferSizeMismatch(
                mem::size_of::<IMAGE_DOS_HEADER>(),
                headers.len(),
            ));
        }

        let dos_header = unsafe { &*(headers.as_ptr() as *const IMAGE_DOS_HEADER) };

        if dos_header.e_magic != IMAGE_DOS_SIGNATURE {
            return Err(Error::InvalidMagic(dos_header.e_magic as u32));
        }

        let nt_headers = unsafe {
            &*(headers.as_ptr().offset(dos_header.e_lfanew as isize) as *const IMAGE_NT_HEADERS64)
        };

        if nt_headers.Signature != IMAGE_NT_SIGNATURE {
            return Err(Error::InvalidMagic(nt_headers.Signature));
        }

        let size = nt_headers.OptionalHeader.SizeOfImage;

        let exports = unsafe { Self::parse_exports(process, address, size, nt_headers)? };
        let sections = unsafe { Self::parse_sections(nt_headers) };

        Ok(Self {
            address,
            nt_headers,
            size,
            exports,
            sections,
        })
    }

    #[inline]
    pub fn address(&self) -> usize {
        self.address
    }

    #[inline]
    pub fn exports(&self) -> &Vec<Export> {
        &self.exports
    }

    #[inline]
    pub fn sections(&self) -> &Vec<Section> {
        &self.sections
    }

    #[inline]
    pub fn export(&self, name: &str) -> Option<&Export> {
        self.exports.iter().find(|export| export.name == name)
    }

    #[inline]
    pub fn section(&self, name: &str) -> Option<&Section> {
        self.sections.iter().find(|section| section.name == name)
    }

    #[inline]
    pub fn size(&self) -> u32 {
        self.size
    }

    unsafe fn parse_exports(
        process: &Process,
        address: usize,
        size: u32,
        nt_headers: &IMAGE_NT_HEADERS64,
    ) -> Result<Vec<Export>> {
        let export_data_directory =
            nt_headers.OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT.0 as usize];

        let export_directory_start = address + export_data_directory.VirtualAddress as usize;
        let export_directory_end = export_directory_start + export_data_directory.Size as usize;

        let mut buffer: Vec<u8> = vec![0; export_data_directory.Size as usize];

        process.read_memory_raw(
            export_directory_start,
            buffer.as_mut_ptr() as *mut _,
            buffer.len(),
        )?;

        if buffer.len() < mem::size_of::<IMAGE_EXPORT_DIRECTORY>() {
            return Err(Error::BufferSizeMismatch(
                mem::size_of::<IMAGE_EXPORT_DIRECTORY>(),
                buffer.len(),
            ));
        }

        let export_directory = &*(buffer.as_ptr() as *const IMAGE_EXPORT_DIRECTORY);

        let delta =
            export_directory as *const _ as usize - export_data_directory.VirtualAddress as usize;

        let name_table = (delta + export_directory.AddressOfNames as usize) as *const u32;
        let ordinal_table = (delta + export_directory.AddressOfNameOrdinals as usize) as *const u16;
        let function_table = (delta + export_directory.AddressOfFunctions as usize) as *const u32;

        let mut exports: Vec<Export> = Vec::with_capacity(export_directory.NumberOfNames as usize);

        for i in 0..export_directory.NumberOfNames {
            let target = ordinal_table as usize + i as usize * mem::size_of::<u16>();

            if target > address + size as usize || target < ordinal_table as usize {
                continue;
            }

            let function_ordinal = *ordinal_table.offset(i as isize);

            if function_ordinal as usize > export_directory.NumberOfFunctions as usize {
                continue;
            }

            let function_va = address + *function_table.offset(function_ordinal as isize) as usize;

            // Skip forwarded exports.
            if function_va >= export_directory_start && function_va <= export_directory_end {
                continue;
            }

            let name_ptr = delta.wrapping_add(*name_table.offset(i as isize) as usize) as *const i8;

            if name_ptr.is_null() {
                continue;
            }

            let name = CStr::from_ptr(name_ptr).to_string_lossy().into_owned();

            exports.push(Export {
                name,
                va: function_va,
            });
        }

        Ok(exports)
    }

    unsafe fn parse_sections(nt_headers: &IMAGE_NT_HEADERS64) -> Vec<Section> {
        let optional_header_ptr = &nt_headers.OptionalHeader as *const _ as *const u8;

        let section_header_ptr = optional_header_ptr
            .offset(nt_headers.FileHeader.SizeOfOptionalHeader as isize)
            as *const IMAGE_SECTION_HEADER;

        let sections_raw = slice::from_raw_parts(
            section_header_ptr,
            nt_headers.FileHeader.NumberOfSections as usize,
        );

        sections_raw
            .iter()
            .map(|section| {
                let name = CStr::from_ptr(section.Name.as_ptr() as *const _)
                    .to_string_lossy()
                    .into_owned();

                let start_rva = section.VirtualAddress as usize;
                let end_rva = start_rva + section.Misc.VirtualSize as usize;
                let size = section.SizeOfRawData as usize;

                Section {
                    name,
                    start_rva,
                    end_rva,
                    size,
                }
            })
            .collect()
    }
}
