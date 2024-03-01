use anyhow::Result;

use crate::os::Process;

pub struct SchemaTypeDeclaredClass<'a> {
    process: &'a Process,
    address: usize,
}

impl<'a> SchemaTypeDeclaredClass<'a> {
    pub fn new(process: &'a Process, address: usize) -> Self {
        Self { process, address }
    }

    pub fn name(&self) -> Result<String> {
        let name_ptr = self.process.read_memory::<usize>(self.address + 0x8)?;

        self.process.read_string_length(name_ptr, 64)
    }
}
