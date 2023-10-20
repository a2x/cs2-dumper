use std::mem;

use anyhow::{bail, Result};

use crate::mem::Address;
use crate::remote::Process;

use super::SchemaSystemTypeScope;

/// Represents the schema system.
pub struct SchemaSystem<'a> {
    process: &'a Process,

    /// Address of the schema system.
    addr: Address,
}

impl<'a> SchemaSystem<'a> {
    pub fn new(process: &'a Process) -> Result<Self> {
        let mut addr = process.find_pattern(
            "schemasystem.dll",
            "48 8D 0D ? ? ? ? E9 ? ? ? ? CC CC CC CC 48 8D 0D ? ? ? ? E9 ? ? ? ? CC CC CC CC 48 83 EC 28"
        )?;

        addr = process.resolve_rip(addr, None, None)?;

        Ok(Self { process, addr })
    }

    /// Returns a list of type scopes.
    pub fn type_scopes(&self) -> Result<Vec<SchemaSystemTypeScope>> {
        let size = self.process.read_memory::<u32>(self.addr + 0x190)?;

        if size == 0 {
            bail!("Type scopes size is 0");
        }

        let data = self.process.read_memory::<usize>(self.addr + 0x198)?;

        let mut addresses: Vec<usize> = vec![0; size as usize];

        self.process.read_memory_raw(
            data.into(),
            addresses.as_mut_ptr() as *mut _,
            addresses.len() * mem::size_of::<usize>(),
        )?;

        let type_scopes: Vec<SchemaSystemTypeScope> = addresses
            .iter()
            .map(|&addr| SchemaSystemTypeScope::new(self.process, addr.into()))
            .collect();

        Ok(type_scopes)
    }
}
