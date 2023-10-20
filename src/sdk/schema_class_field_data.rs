use anyhow::Result;

use crate::mem::Address;
use crate::remote::Process;

use super::SchemaType;

/// Represents a class field in a schema.
pub struct SchemaClassFieldData<'a> {
    process: &'a Process,

    /// Address of the class field.
    addr: Address,
}

impl<'a> SchemaClassFieldData<'a> {
    pub fn new(process: &'a Process, addr: Address) -> Self {
        Self { process, addr }
    }

    /// Returns the name of the field.
    pub fn name(&self) -> Result<String> {
        let name_ptr = self.process.read_memory::<usize>(self.addr + 0x0)?;

        self.process.read_string_len(name_ptr.into(), 64)
    }

    /// Returns the type of the field.
    pub fn r#type(&self) -> Result<SchemaType> {
        Ok(SchemaType::new(
            self.process,
            self.process.read_memory::<usize>(self.addr + 0x8)?.into(),
        ))
    }

    /// Returns the offset of the field.
    pub fn offset(&self) -> Result<u16> {
        self.process.read_memory::<u16>(self.addr + 0x10)
    }
}
