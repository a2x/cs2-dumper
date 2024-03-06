use anyhow::Result;

#[cfg(target_os = "windows")]
use goblin::pe::{
    export::Export, import::Import, options::ParseOptions, section_table::SectionTable, PE,
};

#[cfg(target_os = "linux")]
use goblin::elf::{sym, Elf, SectionHeader};
#[cfg(target_os = "linux")]
use std::path::PathBuf;

#[cfg(target_os = "linux")]
#[derive(Debug)]
pub struct ModuleEntry {
    pub path: PathBuf,
    pub start_addr: usize,
    pub data: Vec<u8>,
}
/// Represents a module loaded in a Windows process.
pub struct Module<'a> {
    /// The name of the module.
    pub name: &'a str,

    /// A reference to a slice of bytes containing the module data.
    #[cfg(target_os = "windows")]
    pub data: &'a [u8],
    #[cfg(target_os = "linux")]
    pub module_info: &'a ModuleEntry,

    #[cfg(target_os = "windows")]
    /// The PE file format representation of the module.
    pub pe: PE<'a>,

    #[cfg(target_os = "linux")]
    pub elf: Elf<'a>,
}

impl<'a> Module<'a> {
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
        let elf = Elf::parse(&module_entry.data)?;
        Ok(Self {
            name,
            module_info: module_entry,
            elf,
        })
    }

    #[inline]
    #[cfg(target_os = "windows")]
    pub fn base(&self) -> usize {
        self.pe.image_base
    }

    #[inline]
    #[cfg(target_os = "linux")]
    pub fn base(&self) -> usize {
        self.module_info.start_addr
    }

    #[inline]
    #[cfg(target_os = "windows")]
    pub fn exports(&self) -> &[Export] {
        &self.pe.exports
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

    #[inline]
    #[cfg(target_os = "windows")]
    pub fn imports(&self) -> &[Import] {
        &self.pe.imports
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

    #[inline]
    #[cfg(target_os = "windows")]
    pub fn export_by_name(&self, name: &str) -> Option<usize> {
        self.pe
            .exports
            .iter()
            .find(|e| e.name.unwrap() == name)
            .map(|e| self.pe.image_base + e.rva)
    }

    #[inline]
    #[cfg(target_os = "linux")]
    pub fn export_by_name(&self, name: &str) -> Option<usize> {
        let base_addr: usize = self.base();
        self.elf
            .dynsyms
            .iter()
            .find(|sym| {
                (sym.st_bind() == sym::STB_GLOBAL || sym.st_bind() == sym::STB_WEAK)
                    && self.elf.dynstrtab.get_at(sym.st_name) == Some(name)
            })
            .map(|sym| (base_addr as u64 + sym.st_value) as usize)
    }

    #[inline]
    #[cfg(target_os = "windows")]
    pub fn import_by_name(&self, name: &str) -> Option<usize> {
        self.pe
            .imports
            .iter()
            .find(|i| i.name.to_string() == name)
            .map(|i| self.pe.image_base + i.rva)
    }

    #[inline]
    #[cfg(target_os = "linux")]
    pub fn get_import_by_name(&self, name: &str) -> Option<usize> {
        let base_addr: usize = self.base().into();
        self.elf
            .dynsyms
            .iter()
            .find(|sym| sym.is_import() && self.elf.dynstrtab.get_at(sym.st_name) == Some(name))
            .map(|sym| (base_addr as u64 + sym.st_value) as usize)
    }

    #[inline]
    #[cfg(target_os = "windows")]
    pub fn sections(&self) -> &[SectionTable] {
        &self.pe.sections
    }

    #[inline]
    #[cfg(target_os = "linux")]
    pub fn sections(&self) -> &[SectionHeader] {
        self.elf.section_headers.as_slice()
    }

    #[inline]
    #[cfg(target_os = "windows")]
    pub fn size(&self) -> u32 {
        self.pe
            .header
            .optional_header
            .expect("optional header not found")
            .windows_fields
            .size_of_image
    }
}
