use crate::error::Result;
use crate::remote::Process;

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

        self.process.read_string(name_ptr, 64)
    }

    pub fn offset(&self) -> Result<u16> {
        self.process.read_memory::<u16>(self.address + 0x10)
    }
}
