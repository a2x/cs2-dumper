use crate::util::{Address, Process};

use anyhow::Result;

/// Represents a declared class type in the schema.
pub struct SchemaTypeDeclaredClass<'a> {
    process: &'a Process,
    address: Address,
}

impl<'a> SchemaTypeDeclaredClass<'a> {
    /// Creates a new `SchemaTypeDeclaredClass` instance.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    /// * `address` - The address of the `SchemaTypeDeclaredClass` instance.
    ///
    /// # Returns
    ///
    /// * `SchemaTypeDeclaredClass` - The new `SchemaTypeDeclaredClass` instance.
    pub fn new(process: &'a Process, address: Address) -> Self {
        Self { process, address }
    }

    /// Returns the name of the declared class.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `SchemaTypeDeclaredClass` struct.
    ///
    /// # Returns
    ///
    /// * `Result<String>` - The name of the declared class.
    pub fn name(&self) -> Result<String> {
        let name_ptr = self.process.read_memory::<usize>(self.address + 0x8)?;

        self.process.read_string_length(name_ptr.into(), 64)
    }
}
