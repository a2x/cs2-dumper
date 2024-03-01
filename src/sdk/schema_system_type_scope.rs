use anyhow::Result;

use super::{SchemaClassInfo, SchemaTypeDeclaredClass, UtlTsHash};

use crate::os::Process;

pub struct SchemaSystemTypeScope<'a> {
    process: &'a Process,
    address: usize,
}

impl<'a> SchemaSystemTypeScope<'a> {
    pub fn new(process: &'a Process, address: usize) -> Self {
        Self { process, address }
    }

    pub fn classes(&self) -> Result<Vec<SchemaClassInfo>> {
        let declared_classes = self
            .process
            .read_memory::<UtlTsHash<*mut SchemaTypeDeclaredClass>>(self.address + 0x5B8)?;

        let classes: Vec<SchemaClassInfo> = declared_classes
            .elements(self.process)?
            .iter()
            .filter_map(|&class_ptr| {
                let address = class_ptr as usize;

                let declared_class = SchemaTypeDeclaredClass::new(self.process, address);

                declared_class
                    .name()
                    .ok()
                    .map(|name| SchemaClassInfo::new(self.process, address, &name))
            })
            .collect();

        Ok(classes)
    }

    pub fn module_name(&self) -> Result<String> {
        self.process.read_string_length(self.address + 0x8, 256)
    }
}
