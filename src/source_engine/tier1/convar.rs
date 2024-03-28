use memflow::prelude::v1::*;

use super::UtlMemory;

use crate::error::Result;

#[repr(C)]
pub struct ConCommandBase {
    pub name: Pointer64<ReprCString>,
    pub description: Pointer64<ReprCString>,
    pub flags: u64,
    pad_0018: [u8; 0x20],
}

unsafe impl Pod for ConCommandBase {}

#[repr(C)]
pub struct CVar {
    pad_0000: [u8; 0xD8],
    pub cmds: UtlMemory<ConCommandBase>,
}

impl CVar {
    pub fn iter(
        &self,
        process: &mut IntoProcessInstanceArcBox<'_>,
    ) -> Result<impl Iterator<Item = ConCommandBase>> {
        let mut cmds = Vec::new();

        for i in 0..self.cmds.alloc_count as usize {
            let cmd = self.cmds.get(process, i)?;

            if cmd.name.is_null() {
                continue;
            }

            cmds.push(cmd);
        }

        Ok(cmds.into_iter())
    }
}

unsafe impl Pod for CVar {}
