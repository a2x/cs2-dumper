use super::SchemaSystemTypeScope;

use crate::util::{Address, Process};

use anyhow::{bail, Result};

use std::mem;

/// Represents the schema system.
pub struct SchemaSystem<'a> {
    process: &'a Process,
    address: Address,
}

impl<'a> SchemaSystem<'a> {
    /// Creates a new `SchemaSystem` instance.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// * `Result<SchemaSystem>` - The new `SchemaSystem` instance.
    pub fn new(process: &'a Process) -> Result<Self> {
        let mut address = process.find_pattern(
            "schemasystem.dll",
            "48 8D 0D ? ? ? ? E9 ? ? ? ? CC CC CC CC 48 8D 0D ? ? ? ? E9 ? ? ? ? CC CC CC CC 48 83 EC 28"
        ).expect("Failed to find pattern for SchemaSystem");

        address = process.resolve_rip(address, None, None)?;

        Ok(Self { process, address })
    }

    /// Returns a vector of `SchemaSystemTypeScope` objects.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `SchemaSystem` struct.
    ///
    /// # Returns
    ///
    /// * `Result<Vec<SchemaSystemTypeScope>>` - A vector of `SchemaSystemTypeScope` objects.
    pub fn type_scopes(&self) -> Result<Vec<SchemaSystemTypeScope>> {
        let size = self.process.read_memory::<u32>(self.address + 0x190)?;

        if size == 0 {
            bail!("Type scopes size is 0");
        }

        let data = self.process.read_memory::<usize>(self.address + 0x198)?;

        let mut addresses = vec![0; size as usize];

        self.process.read_memory_raw(
            data.into(),
            addresses.as_mut_ptr() as *mut _,
            addresses.len() * mem::size_of::<usize>(),
        )?;

        let type_scopes: Vec<SchemaSystemTypeScope> = addresses
            .iter()
            .map(|&address| SchemaSystemTypeScope::new(self.process, address.into()))
            .collect();

        Ok(type_scopes)
    }
}
