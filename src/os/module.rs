use anyhow::Result;

use goblin::pe::export::Export;
use goblin::pe::import::Import;
use goblin::pe::options::ParseOptions;
use goblin::pe::section_table::SectionTable;
use goblin::pe::PE;

pub struct Module<'a> {
    pub name: &'a str,
    pub data: &'a [u8],
    pub pe: PE<'a>,
}

impl<'a> Module<'a> {
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

    #[inline]
    pub fn base(&self) -> usize {
        self.pe.image_base
    }

    #[inline]
    pub fn exports(&self) -> &[Export] {
        &self.pe.exports
    }

    #[inline]
    pub fn imports(&self) -> &[Import] {
        &self.pe.imports
    }

    #[inline]
    pub fn export_by_name(&self, name: &str) -> Option<usize> {
        self.pe
            .exports
            .iter()
            .find(|e| e.name.unwrap() == name)
            .map(|e| self.pe.image_base + e.rva)
    }

    #[inline]
    pub fn import_by_name(&self, name: &str) -> Option<usize> {
        self.pe
            .imports
            .iter()
            .find(|i| i.name.to_string() == name)
            .map(|i| self.pe.image_base + i.rva)
    }

    #[inline]
    pub fn sections(&self) -> &[SectionTable] {
        &self.pe.sections
    }

    #[inline]
    pub fn size(&self) -> u32 {
        self.pe
            .header
            .optional_header
            .expect("optional header not found")
            .windows_fields
            .size_of_image
    }
}
