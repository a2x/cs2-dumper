use anyhow::Result;

use crate::util::{Address, Process};

pub struct SchemaTypeDeclaredClass<'a> {
    process: &'a Process,
    address: Address,
}

impl<'a> SchemaTypeDeclaredClass<'a> {
    pub fn new(process: &'a Process, address: Address) -> Self {
        Self { process, address }
    }

    pub fn name(&self) -> Result<String> {
        let name_ptr = self.process.read_memory::<usize>(self.address + 0x8)?;

        self.process.read_string_length(name_ptr.into(), 64)
    }
}
