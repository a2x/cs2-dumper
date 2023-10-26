use super::SchemaType;

use crate::util::{Address, Process};

use anyhow::Result;

/// Represents data for a field in a schema class.
pub struct SchemaClassFieldData<'a> {
    process: &'a Process,
    address: Address,
}

impl<'a> SchemaClassFieldData<'a> {
    /// Creates a new `SchemaClassFieldData` instance.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    /// * `address` - The address of the `SchemaClassFieldData` instance.
    ///
    /// # Returns
    ///
    /// * `SchemaClassFieldData` - The new `SchemaClassFieldData` instance.
    pub fn new(process: &'a Process, address: Address) -> Self {
        Self { process, address }
    }

    /// Returns the name of the field.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `SchemaClassFieldData` struct.
    ///
    /// # Returns
    ///
    /// * `Result<String>` - The name of the field.
    pub fn name(&self) -> Result<String> {
        let name_ptr = self.process.read_memory::<usize>(self.address)?;

        self.process.read_string_length(name_ptr.into(), 64)
    }

    /// Returns the `SchemaType` of the field.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `SchemaClassFieldData` struct.
    ///
    /// # Returns
    ///
    /// * `Result<SchemaType>` - The `SchemaType` of the field.
    pub fn r#type(&self) -> Result<SchemaType> {
        Ok(SchemaType::new(
            self.process,
            self.process
                .read_memory::<usize>(self.address + 0x8)?
                .into(),
        ))
    }

    /// Returns the offset of the field.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `SchemaClassFieldData` struct.
    ///
    /// # Returns
    ///
    /// * `Result<u16>` - The offset of the field.
    pub fn offset(&self) -> Result<u16> {
        self.process.read_memory::<u16>(self.address + 0x10)
    }
}
