use std::ffi::c_char;
use std::mem::offset_of;

use anyhow::Result;

use simplelog::{debug, info};

use super::{generate_files, Entries, Entry};

use crate::builder::FileBuilderEnum;
use crate::os::Process;

#[derive(Debug)]
#[repr(C)]
struct InterfaceNode {
    pub create_fn: *const (),
    pub name: *const c_char,
    pub next: *mut InterfaceNode,
}

impl InterfaceNode {
    fn instance(&self, process: &Process) -> Result<usize> {
        process
            .read_memory::<usize>(
                (self as *const _ as usize + offset_of!(InterfaceNode, create_fn)).into(),
            )
            .map(|ptr| ptr.into())
    }

    fn name(&self, process: &Process) -> Result<String> {
        let name_ptr = process.read_memory::<usize>(
            (self as *const _ as usize + offset_of!(InterfaceNode, name)).into(),
        )?;

        process.read_string(name_ptr.into())
    }

    fn next(&self, process: &Process) -> Result<*mut InterfaceNode> {
        process.read_memory::<*mut InterfaceNode>(
            (self as *const _ as usize + offset_of!(InterfaceNode, next)).into(),
        )
    }
}

pub fn dump_interfaces(
    process: &Process,
    builders: &mut Vec<FileBuilderEnum>,
    file_path: &str,
    indent: usize,
) -> Result<()> {
    let mut entries = Entries::new();

    for module in process
        .modules()?
        .iter()
        .filter(|m| m.name != "crashhandler64.dll")
    {
        if let Some(create_interface_export) = module.export_by_name("CreateInterface") {
            info!("Dumping interfaces in <blue>{}</>...", module.name);

            let create_interface_address =
                process.resolve_rip(create_interface_export, None, None)?;

            let mut node = process.read_memory::<*mut InterfaceNode>(create_interface_address)?;

            while !node.is_null() {
                let instance = unsafe { (*node).instance(process) }?;
                let name = unsafe { (*node).name(process) }?;

                debug!(
                    "Found <bright-yellow>{}</> @ <bright-magenta>{:#X}</> (<blue>{}</> + <bright-blue>{:#X}</>)",
                    name,
                    instance,
                    module.name,
                    instance - module.base()
                );

                let container = entries.entry(module.name.replace(".", "_")).or_default();

                container.comment = Some(module.name.to_string());

                container.data.push(Entry {
                    name,
                    value: (instance - module.base()).into(),
                    comment: None,
                    indent: Some(indent),
                });

                node = unsafe { (*node).next(process) }?;
            }
        }
    }

    generate_files(builders, &entries, file_path, "interfaces")?;

    Ok(())
}
