use std::ffi::c_char;
use std::mem::offset_of;

use crate::builder::FileBuilderEnum;
use crate::dumpers::Entry;
use crate::error::Result;
use crate::remote::Process;

use super::{generate_files, Entries};

#[derive(Debug)]
#[repr(C)]
struct InterfaceReg {
    create_fn: *const (),    // 0x0000
    name: *const c_char,     // 0x0008
    next: *mut InterfaceReg, // 0x0010
}

impl InterfaceReg {
    pub fn ptr(&self, process: &Process) -> Result<usize> {
        process
            .read_memory::<usize>(self as *const _ as usize + offset_of!(InterfaceReg, create_fn))
    }

    pub fn name(&self, process: &Process) -> Result<String> {
        let name_ptr = process
            .read_memory::<usize>(self as *const _ as usize + offset_of!(InterfaceReg, name))?;

        process.read_string(name_ptr)
    }

    pub fn next(&self, process: &Process) -> Result<*mut InterfaceReg> {
        process.read_memory::<*mut InterfaceReg>(
            self as *const _ as usize + offset_of!(InterfaceReg, next),
        )
    }
}

pub fn dump_interfaces(builders: &mut Vec<FileBuilderEnum>, process: &Process) -> Result<()> {
    let module_names = process.get_loaded_modules()?;

    let mut entries = Entries::new();

    for module_name in module_names {
        if module_name == "crashhandler64.dll" {
            continue;
        }

        let module = process.get_module_by_name(&module_name)?;

        if let Some(create_interface_export) = module.export("CreateInterface") {
            log::info!("Dumping interfaces in {}...", module_name);

            let create_interface_address =
                process.resolve_rip(create_interface_export.va, None, None)?;

            if let Ok(mut interface_reg) =
                process.read_memory::<*mut InterfaceReg>(create_interface_address)
            {
                while !interface_reg.is_null() {
                    let ptr = unsafe { (*interface_reg).ptr(process) }?;
                    let name = unsafe { (*interface_reg).name(process) }?;

                    log::debug!(
                        "  └─ {} @ {:#X} ({} + {:#X})",
                        name,
                        ptr,
                        module_name,
                        ptr - module.base()
                    );

                    entries
                        .entry(module_name.replace(".", "_"))
                        .or_default()
                        .push(Entry {
                            name: name.clone(),
                            value: ptr - module.base(),
                            comment: None,
                        });

                    interface_reg = unsafe { (*interface_reg).next(process) }?;
                }
            }
        }
    }

    generate_files(builders, &entries, "interfaces")?;

    Ok(())
}
