use anyhow::Result;

use crate::mem::Address;
use crate::remote::Process;

use super::SchemaClassFieldData;

/// Represents a class in a schema.
pub struct SchemaClassInfo<'a> {
    process: &'a Process,

    /// Address of the class.
    addr: Address,

    /// Name of the class.
    class_name: String,
}

impl<'a> SchemaClassInfo<'a> {
    pub fn new(process: &'a Process, addr: Address, class_name: &str) -> Self {
        Self {
            process,
            addr,
            class_name: class_name.to_string(),
        }
    }

    /// Returns the name of the class.
    #[inline]
    pub fn name(&self) -> &str {
        &self.class_name
    }

    /// Returns a list of fields in the class.
    pub fn fields(&self) -> Result<Vec<SchemaClassFieldData>> {
        let addr = self.process.read_memory::<usize>(self.addr + 0x28)?;

        if addr == 0 {
            return Ok(Vec::new());
        }

        let count = self.fields_count()?;

        let fields: Vec<SchemaClassFieldData> = (addr..addr + count as usize * 0x20)
            .step_by(0x20)
            .map(|address| SchemaClassFieldData::new(self.process, address.into()))
            .collect();

        Ok(fields)
    }

    /// Returns the number of fields in the class.
    pub fn fields_count(&self) -> Result<u16> {
        self.process.read_memory::<u16>(self.addr + 0x1C)
    }

    /// Returns the parent class.
    pub fn parent(&self) -> Result<Option<SchemaClassInfo>> {
        let addr = self.process.read_memory::<usize>(self.addr + 0x38)?;

        if addr == 0 {
            return Ok(None);
        }

        let parent = self.process.read_memory::<usize>((addr + 0x8).into())?;

        let name_ptr = self.process.read_memory::<usize>((parent + 0x8).into())?;
        let name = self.process.read_string(name_ptr.into())?;

        Ok(Some(SchemaClassInfo::new(
            self.process,
            parent.into(),
            &name,
        )))
    }
}
