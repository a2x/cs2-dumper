use super::SchemaClassFieldData;

use crate::util::{Address, Process};

use anyhow::Result;

/// Represents information about a schema class.
pub struct SchemaClassInfo<'a> {
    process: &'a Process,
    address: Address,
    class_name: String,
}

impl<'a> SchemaClassInfo<'a> {
    /// Creates a new `SchemaClassInfo` instance.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    /// * `address` - The address of the `SchemaClassInfo` instance.
    /// * `class_name` - The name of the class.
    ///
    /// # Returns
    ///
    /// * `SchemaClassInfo` - The new `SchemaClassInfo` instance.
    pub fn new(process: &'a Process, address: Address, class_name: &str) -> Self {
        Self {
            process,
            address,
            class_name: class_name.to_string(),
        }
    }

    /// Returns a reference to the name of the class.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `SchemaClassInfo` struct.
    ///
    /// # Returns
    ///
    /// * `&str` - A string slice containing the name of the class.
    #[inline]
    pub fn name(&self) -> &str {
        &self.class_name
    }

    /// Returns a vector of `SchemaClassFieldData` representing the fields of the schema class.
    /// If the address of the schema class is null, an empty vector is returned.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `SchemaClassInfo` struct.
    ///
    /// # Returns
    ///
    /// * `Result<Vec<SchemaClassFieldData>>` - A vector of `SchemaClassFieldData` representing the fields of the schema class.
    pub fn fields(&self) -> Result<Vec<SchemaClassFieldData>> {
        let address = self.process.read_memory::<usize>(self.address + 0x28)?;

        if address == 0 {
            return Ok(Vec::new());
        }

        let count = self.fields_count()?;

        let fields: Vec<SchemaClassFieldData> = (address..address + count as usize * 0x20)
            .step_by(0x20)
            .map(|address| SchemaClassFieldData::new(self.process, address.into()))
            .collect();

        Ok(fields)
    }

    /// Returns the number of fields in the class.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `SchemaClassInfo` struct.
    ///
    /// # Returns
    ///
    /// * `Result<u16>` - The number of fields in the class.
    pub fn fields_count(&self) -> Result<u16> {
        self.process.read_memory::<u16>(self.address + 0x1C)
    }

    /// Returns the parent `SchemaClassInfo` of the current `SchemaClassInfo` instance.
    /// If the parent is not found, returns `Ok(None)`.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `SchemaClassInfo` struct.
    ///
    /// # Returns
    ///
    /// * `Result<Option<SchemaClassInfo>>` - The parent `SchemaClassInfo` of the current `SchemaClassInfo` instance.
    pub fn parent(&self) -> Result<Option<SchemaClassInfo>> {
        let address = Address::from(self.process.read_memory::<usize>(self.address + 0x38)?);

        if address.is_zero() {
            return Ok(None);
        }

        let parent = Address::from(self.process.read_memory::<usize>(address + 0x8)?);

        let name_ptr = self.process.read_memory::<usize>(parent + 0x8)?;
        let name = self.process.read_string(name_ptr.into())?;

        Ok(Some(SchemaClassInfo::new(
            self.process,
            parent.into(),
            &name,
        )))
    }
}
