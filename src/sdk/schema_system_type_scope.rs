use super::{SchemaClassInfo, SchemaTypeDeclaredClass, UtlTsHash};

use crate::util::{Address, Process};

use anyhow::Result;

/// Represents a system type scope in the schema.
pub struct SchemaSystemTypeScope<'a> {
    process: &'a Process,
    address: Address,
}

impl<'a> SchemaSystemTypeScope<'a> {
    /// Creates a new `SchemaSystemTypeScope` instance.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    /// * `address` - The address of the `SchemaSystemTypeScope` instance.
    /// * `class_name` - The name of the class.
    ///
    /// # Returns
    ///
    /// * `SchemaSystemTypeScope` - The new `SchemaSystemTypeScope` instance.
    pub fn new(process: &'a Process, address: Address) -> Self {
        Self { process, address }
    }

    /// Returns a vector of `SchemaClassInfo` containing information about all the classes declared in the current scope.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `SchemaSystemTypeScope` struct.
    ///
    /// # Returns
    ///
    /// * `Result<Vec<SchemaClassInfo>>` - A vector of `SchemaClassInfo` containing information about all the classes declared in the current scope.
    pub fn classes(&self) -> Result<Vec<SchemaClassInfo>> {
        let declared_classes = self
            .process
            .read_memory::<UtlTsHash<*mut SchemaTypeDeclaredClass>>(self.address + 0x588)?;

        let classes: Vec<SchemaClassInfo> = declared_classes
            .elements(self.process)?
            .iter()
            .filter_map(|&a| {
                let address = Address::from(a as usize);

                let declared_class = SchemaTypeDeclaredClass::new(self.process, address);

                declared_class
                    .name()
                    .ok()
                    .map(|name| SchemaClassInfo::new(self.process, address, &name))
            })
            .collect();

        Ok(classes)
    }

    /// Returns the name of the module associated with the current `SchemaSystemTypeScope` instance.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `SchemaSystemTypeScope` struct.
    ///
    /// # Returns
    ///
    /// * `Result<String>` - The name of the module associated with the current `SchemaSystemTypeScope` instance.
    pub fn module_name(&self) -> Result<String> {
        self.process.read_string_length(self.address + 0x8, 256)
    }
}
