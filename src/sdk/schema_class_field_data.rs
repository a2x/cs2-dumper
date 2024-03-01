use anyhow::Result;

use super::SchemaType;

use crate::os::{Address, Process};

pub struct SchemaClassFieldData<'a> {
    process: &'a Process,
    address: Address,
}

impl<'a> SchemaClassFieldData<'a> {
    pub fn new(process: &'a Process, address: Address) -> Self {
        Self { process, address }
    }

    pub fn name(&self) -> Result<String> {
        let name_ptr = self.process.read_memory::<usize>(self.address)?;

        self.process.read_string_length(name_ptr.into(), 64)
    }

    pub fn r#type(&self) -> Result<SchemaType> {
        Ok(SchemaType::new(
            self.process,
            self.process
                .read_memory::<usize>(self.address + 0x8)?
                .into(),
        ))
    }

    pub fn offset(&self) -> Result<u16> {
        self.process.read_memory::<u16>(self.address + 0x10)
    }
}
