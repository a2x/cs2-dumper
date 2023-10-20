use anyhow::Result;

use crate::mem::Address;
use crate::remote::Process;

/// Represents a schema type declared class.
pub struct SchemaTypeDeclaredClass<'a> {
    process: &'a Process,

    /// Address of the schema type declared class.
    addr: Address,
}

impl<'a> SchemaTypeDeclaredClass<'a> {
    pub fn new(process: &'a Process, addr: Address) -> Self {
        Self { process, addr }
    }

    /// Returns the name of the class.
    pub fn name(&self) -> Result<String> {
        let name_ptr = self.process.read_memory::<usize>(self.addr + 0x8)?;

        self.process.read_string_len(name_ptr.into(), 64)
    }
}
