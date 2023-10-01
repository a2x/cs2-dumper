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
        self.process
            .read_string(self.process.read_memory::<usize>(self.address)?)
    }

    pub fn r#type(&self) -> Result<SchemaType> {
        Ok(SchemaType::new(
            self.process,
            self.process.read_memory::<usize>(self.address + 0x8)?,
        ))
    }

    pub fn offset(&self) -> Result<u16> {
        self.process.read_memory::<u16>(self.address + 0x10)
    }
}
