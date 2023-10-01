use crate::error::Result;
use crate::remote::Process;

use super::{SchemaClassInfo, SchemaTypeDeclaredClass, UtlTsHash};

pub struct SchemaSystemTypeScope<'a> {
    process: &'a Process,
    address: usize,
}

impl<'a> SchemaSystemTypeScope<'a> {
    pub fn new(process: &'a Process, address: usize) -> Self {
        Self { process, address }
    }

    pub fn classes(&self) -> Result<Vec<SchemaClassInfo>> {
        let classes = self
            .process
            .read_memory::<UtlTsHash<*mut SchemaTypeDeclaredClass>>(self.address + 0x588)?;

        let classes: Vec<SchemaClassInfo> = classes
            .elements(self.process)?
            .iter()
            .filter_map(|&address| {
                let declared_class = SchemaTypeDeclaredClass::new(self.process, address as usize);

                declared_class
                    .name()
                    .ok()
                    .map(|name| SchemaClassInfo::new(self.process, address as usize, &name))
            })
            .collect();

        Ok(classes)
    }

    pub fn module_name(&self) -> Result<String> {
        self.process.read_string(self.address + 0x8)
    }
}
