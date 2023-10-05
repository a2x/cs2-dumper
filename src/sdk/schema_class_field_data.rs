use crate::error::Result;
use crate::remote::Process;

use super::SchemaType;

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

        self.process.read_string(name_ptr)
    }

    pub fn r#type(&self) -> Result<SchemaType> {
        let type_ptr = self.process.read_memory::<usize>(self.address + 0x8)?;

        Ok(SchemaType::new(self.process, type_ptr))
    }

    pub fn offset(&self) -> Result<u16> {
        self.process.read_memory::<u16>(self.address + 0x10)
    }
}
