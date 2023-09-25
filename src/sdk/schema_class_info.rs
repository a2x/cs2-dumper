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
            class_name: class_name.into(),
        }
    }

    #[inline]
    pub fn name(&self) -> &str {
        &self.class_name
    }

    pub fn fields(&self) -> Result<Vec<SchemaClassFieldData>> {
        let count = self.fields_count()?;

        let fields: Vec<SchemaClassFieldData> = (0..count as usize)
            .filter_map(|i| {
                let field = self
                    .process
                    .read_memory::<usize>(self.address + 0x28)
                    .ok()?
                    + (i * 0x20);

                (field != 0).then(|| SchemaClassFieldData::new(self.process, field))
            })
            .collect();

        Ok(fields)
    }

    pub fn fields_count(&self) -> Result<u16> {
        self.process.read_memory::<u16>(self.address + 0x1C)
    }
}
