use super::Address;

use anyhow::Result;

use goblin::pe::export::Export;
use goblin::pe::import::Import;
use goblin::pe::options::ParseOptions;
use goblin::pe::section_table::SectionTable;
use goblin::pe::PE;

/// Represents a module loaded in a Windows process.
pub struct Module<'a> {
    /// The name of the module.
    pub name: &'a str,

    /// A reference to a slice of bytes containing the module data.
    pub data: &'a [u8],

    /// The PE file format representation of the module.
    pub pe: PE<'a>,
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
    pub fn base(&self) -> Address {
        self.pe.image_base.into()
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
    pub fn exports(&self) -> &'a [Export] {
        self.pe.exports.as_slice()
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
    pub fn get_export_by_name(&self, name: &str) -> Option<Address> {
        self.pe
            .exports
            .iter()
            .find(|e| e.name.unwrap() == name)
            .map(|e| (self.pe.image_base + e.rva).into())
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
    pub fn get_import_by_name(&self, name: &str) -> Option<Address> {
        self.pe
            .imports
            .iter()
            .find(|i| i.name.to_string() == name)
            .map(|i| (self.pe.image_base + i.rva).into())
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
    pub fn imports(&self) -> &'a [Import] {
        self.pe.imports.as_slice()
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
    pub fn sections(&self) -> &[SectionTable] {
        self.pe.sections.as_slice()
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
    pub fn size(&self) -> u32 {
        self.pe
            .header
            .optional_header
            .unwrap()
            .windows_fields
            .size_of_image
    }
}
