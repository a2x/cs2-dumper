use anyhow::Result;

use crate::mem::Address;
use crate::remote::Process;

use super::{SchemaClassInfo, SchemaTypeDeclaredClass, UtlTsHash};

/// Represents a schema system type scope.
pub struct SchemaSystemTypeScope<'a> {
    process: &'a Process,

    /// Address of the schema system type scope.
    addr: Address,
}

impl<'a> SchemaSystemTypeScope<'a> {
    pub fn new(process: &'a Process, addr: Address) -> Self {
        Self { process, addr }
    }

    /// Returns a list of classes in the type scope.
    pub fn classes(&self) -> Result<Vec<SchemaClassInfo>> {
        let declared_classes = self
            .process
            .read_memory::<UtlTsHash<*mut SchemaTypeDeclaredClass>>(self.addr + 0x588)?;

        let classes: Vec<SchemaClassInfo> = declared_classes
            .elements(self.process)?
            .iter()
            .filter_map(|&addr| {
                let addr = Address::from(addr as usize);

                let declared_class = SchemaTypeDeclaredClass::new(self.process, addr);

                declared_class
                    .name()
                    .ok()
                    .map(|name| SchemaClassInfo::new(self.process, addr, &name))
            })
            .collect();

        Ok(classes)
    }

    /// Returns the name of the module that the type scope belongs to.
    pub fn module_name(&self) -> Result<String> {
        self.process.read_string_len(self.addr + 0x8, 256)
    }
}
