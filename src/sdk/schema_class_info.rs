use crate::error::Result;
use crate::remote::Process;

use super::SchemaClassFieldData;

pub struct SchemaClassInfo<'a> {
    process: &'a Process,
    address: usize,
    class_name: String,
}

impl<'a> SchemaClassInfo<'a> {
    pub fn new(process: &'a Process, address: usize, class_name: &str) -> Self {
        Self {
            process,
            address,
            class_name: class_name.to_string(),
        }
    }

    #[inline]
    pub fn name(&self) -> &str {
        &self.class_name
    }

    pub fn fields(&self) -> Result<Vec<SchemaClassFieldData>> {
        let count = self.fields_count()?;

        let base_address = self.process.read_memory::<usize>(self.address + 0x28)?;

        let fields: Vec<SchemaClassFieldData> = (0..count as usize)
            .map(|i| base_address + (i * 0x20))
            .filter_map(|address| {
                if address != 0 {
                    Some(SchemaClassFieldData::new(self.process, address))
                } else {
                    None
                }
            })
            .collect();

        Ok(fields)
    }

    pub fn fields_count(&self) -> Result<u16> {
        self.process.read_memory::<u16>(self.address + 0x1C)
    }

    pub fn parent(&self) -> Result<Option<SchemaClassInfo>> {
        let addr = self.process.read_memory::<u64>(self.address + 0x38)?;
        if addr == 0 {
            return Ok(None);
        }

        let parent = self.process.read_memory::<u64>(addr as usize + 0x8)?;
        let name = self.process.read_string(self.process.read_memory::<usize>(parent as usize + 0x8)?)?;
        Ok(Some(SchemaClassInfo::new(self.process, parent as usize, &name)))
    }
}
