use anyhow::Result;

use super::SchemaType;

use crate::os::Process;

pub struct SchemaClassFieldData<'a> {
    process: &'a Process,
    address: usize,
}

impl<'a> SchemaClassFieldData<'a> {
    pub fn new(process: &'a Process, address: usize) -> Self {
        Self { process, address }
    }

    pub fn name(&self) -> Result<String> {
        let name_ptr = self.process.read_memory::<usize>(self.address)?;

        self.process.read_string_length(name_ptr.into(), 64)
    }

    pub fn r#type(&self) -> Result<SchemaType> {
        let address = self.process.read_memory::<usize>(self.address + 0x8)?;

        Ok(SchemaType::new(self.process, address))
    }

    pub fn offset(&self) -> Result<u16> {
        self.process.read_memory::<u16>(self.address + 0x10)
    }
}
