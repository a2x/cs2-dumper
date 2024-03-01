use super::Address;

use anyhow::Result;

use goblin::pe::export::Export;
use goblin::pe::import::Import;
use goblin::pe::options::ParseOptions;
use goblin::pe::section_table::SectionTable;
use goblin::pe::PE;

#[cfg(target_os = "linux")]
use goblin::elf::{program_header, sym, Elf, SectionHeader};
use std::path::PathBuf;

#[cfg(target_os = "linux")]
#[derive(Debug)]
pub struct ModuleEntry {
    pub path: PathBuf,
    pub start_addr: Address,
    pub data: Vec<u8>,
    pub module_file_data: Vec<u8>,
}
/// Represents a module loaded in a Windows process.
pub struct Module<'a> {
    /// The name of the module.
    pub name: &'a str,

    /// A reference to a slice of bytes containing the module data.
    #[cfg(target_os = "windows")]
    pub data: &'a [u8],
    // #[cfg(target_os = "linux")]
    pub module_info: &'a ModuleEntry,
    #[cfg(target_os = "windows")]
    /// The PE file format representation of the module.
    pub pe: PE<'a>,

    #[cfg(target_os = "linux")]
    pub elf: Elf<'a>,
}

impl<'a> Module<'a> {
    /// Parses the given module name and data and returns a `Result` containing a `Module` struct.
    ///
    /// # Arguments
    ///
    /// * `name` - A string slice that holds the name of the module.
    /// * `data` - A byte slice that holds the data of the module.
    ///
    /// # Returns
    ///
    /// * `Result<Self>` - A `Result` containing a `Module` instance if successful, or an error if the module could not be parsed.
    #[cfg(target_os = "windows")]
    pub fn parse(name: &'a str, data: &'a [u8]) -> Result<Self> {
        let pe = PE::parse_with_opts(
            data,
            &ParseOptions {
                parse_attribute_certificates: false,
                resolve_rva: false,
            },
        )?;

        Ok(Self { name, data, pe })
    }

    // parse the elf
    #[cfg(target_os = "linux")]
    pub fn parse(name: &'a str, module_entry: &'a ModuleEntry) -> Result<Self> {
        let elf = Elf::parse(&module_entry.module_file_data)?;
        Ok(Self {
            name,
            module_info: module_entry,
            elf,
        })
    }

    /// Returns the base address of the module.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Module` struct.
    ///
    /// # Returns
    ///
    /// * `Address` - The base address of the module.
    #[inline]
    #[cfg(target_os = "windows")]
    pub fn base(&self) -> Address {
        self.pe.image_base.into()
    }

    #[inline]
    #[cfg(target_os = "linux")]
    pub fn base(&self) -> Address {
        self.module_info.start_addr
    }

    /// Returns a slice of `Export` structs representing the exports of the module.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Module` struct.
    ///
    /// # Returns
    ///
    /// * `&[Export]` - A slice of `Export` structs representing the exports of the module.
    #[inline]
    #[cfg(target_os = "windows")]
    pub fn exports(&self) -> &'a [Export] {
        self.pe.exports.as_slice()
    }

    #[inline]
    #[cfg(target_os = "linux")]
    pub fn exports(&self) -> Vec<sym::Sym> {
        let exports: Vec<sym::Sym> = self
            .elf
            .dynsyms
            .iter()
            .filter(|sym| sym.st_bind() == sym::STB_GLOBAL || sym.st_bind() == sym::STB_WEAK)
            .collect();
        exports
    }

    /// Returns the address of the export with the given name, if it exists.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Module` struct.
    ///
    /// # Returns
    ///
    /// * `Option<Address>` - The address of the export with the given name, if it exists.
    #[inline]
    #[cfg(target_os = "windows")]
    pub fn get_export_by_name(&self, name: &str) -> Option<Address> {
        self.pe
            .exports
            .iter()
            .find(|e| e.name.unwrap() == name)
            .map(|e| (self.pe.image_base + e.rva).into())
    }

    #[inline]
    #[cfg(target_os = "linux")]
    pub fn get_export_by_name(&self, name: &str) -> Option<Address> {
        let base_addr: usize = self.base().into();
        self.elf
            .dynsyms
            .iter()
            .find(|sym| {
                (sym.st_bind() == sym::STB_GLOBAL || sym.st_bind() == sym::STB_WEAK)
                    && self.elf.dynstrtab.get_at(sym.st_name) == Some(name)
            })
            .map(|sym| ((base_addr as u64 + sym.st_value) as usize).into())
    }

    /// Returns the address of the imported function with the given name, if it exists.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Module` struct.
    ///
    /// # Returns
    ///
    /// * `Option<Address>` - The address of the imported function with the given name, if it exists.
    #[inline]
    #[cfg(target_os = "windows")]
    pub fn get_import_by_name(&self, name: &str) -> Option<Address> {
        self.pe
            .imports
            .iter()
            .find(|i| i.name.to_string() == name)
            .map(|i| (self.pe.image_base + i.rva).into())
    }

    #[inline]
    #[cfg(target_os = "linux")]
    pub fn get_import_by_name(&self, name: &str) -> Option<Address> {
        let base_addr: usize = self.base().into();
        self.elf
            .dynsyms
            .iter()
            .find(|sym| sym.is_import() && self.elf.dynstrtab.get_at(sym.st_name) == Some(name))
            .map(|sym| ((base_addr as u64 + sym.st_value) as usize).into())
    }

    /// Returns a slice of the imported functions of the module.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Module` struct.
    ///
    /// # Returns
    ///
    /// * `&[Import]` - A slice of `Import` structs representing the imported functions of the module.
    #[inline]
    #[cfg(target_os = "windows")]
    pub fn imports(&self) -> &'a [Import] {
        self.pe.imports.as_slice()
    }

    #[inline]
    #[cfg(target_os = "linux")]
    pub fn imports(&self) -> Vec<sym::Sym> {
        let imports: Vec<sym::Sym> = self
            .elf
            .dynsyms
            .iter()
            .filter(|sym| sym.is_import())
            .collect();
        imports
    }

    /// Returns a slice of the section table entries in the module's PE header.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Module` struct.
    ///
    /// # Returns
    ///
    /// * `&[SectionTable]` - A slice of `SectionTable` structs representing the section table entries in the module's PE header.
    #[inline]
    #[cfg(target_os = "windows")]
    pub fn sections(&self) -> &[SectionTable] {
        self.pe.sections.as_slice()
    }

    #[inline]
    #[cfg(target_os = "linux")]
    pub fn sections(&self) -> &[SectionHeader] {
        self.elf.section_headers.as_slice()
    }

    /// Returns the size of the module.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `Module` struct.
    ///
    /// # Returns
    ///
    /// * `u32` - The size of the module.
    #[inline]
    #[cfg(target_os = "windows")]
    pub fn size(&self) -> u32 {
        self.pe
            .header
            .optional_header
            .unwrap()
            .windows_fields
            .size_of_image
    }
}
