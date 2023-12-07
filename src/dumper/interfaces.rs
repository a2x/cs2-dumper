use super::{generate_files, Entries, Entry};

use crate::builder::FileBuilderEnum;
use crate::util::{Address, Process};

use anyhow::Result;

use simplelog::{debug, info};

use std::ffi::c_char;
use std::mem::offset_of;

/// Represents a node in a linked list of interfaces.
#[derive(Debug)]
#[repr(C)]
struct InterfaceNode {
    /// Used to instantiate an instance of the interface.
    pub create_fn: *const (),

    /// Pointer to the name of the interface.
    pub name: *const c_char,

    /// Pointer to the next entry in the linked list.
    pub next: *mut InterfaceNode,
}

impl InterfaceNode {
    /// Returns the instance of the interface.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `InterfaceNode` struct.
    /// * `process` - A reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// * `Result<Address>` - A `Result` containing the instance of the interface if successful, or an error if the memory read fails.
    fn instance(&self, process: &Process) -> Result<Address> {
        process
            .read_memory::<usize>(
                (self as *const _ as usize + offset_of!(InterfaceNode, create_fn)).into(),
            )
            .map(|ptr| ptr.into())
    }

    /// Returns the name of the interface with the version number appended.
    ///
    /// E.g. "Source2Client002".
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `InterfaceNode` struct.
    /// * `process` - A reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// * `Result<String>` - A `Result` containing the name of the interface if successful, or an error if the memory read fails.
    fn name(&self, process: &Process) -> Result<String> {
        let name_ptr = process.read_memory::<usize>(
            (self as *const _ as usize + offset_of!(InterfaceNode, name)).into(),
        )?;

        process.read_string(name_ptr.into())
    }

    /// Returns a pointer to the next `InterfaceNode` in the linked list.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `InterfaceNode` struct.
    /// * `process` - A reference to the `Process` struct.
    ///
    /// # Returns
    ///
    /// * `Result<*mut InterfaceNode>` - A `Result` containing a pointer to the next `InterfaceNode` if successful, or an error if the memory read fails.
    fn next(&self, process: &Process) -> Result<*mut InterfaceNode> {
        process.read_memory::<*mut InterfaceNode>(
            (self as *const _ as usize + offset_of!(InterfaceNode, next)).into(),
        )
    }
}

/// Dumps all interfaces and writes the results to a file.
///
/// # Arguments
///
/// * `process` - A reference to the `Process` struct.
/// * `builders` - A mutable reference to a vector of `FileBuilderEnum`.
/// * `file_path` - A string slice representing the path to the file to write the results to.
/// * `indent` - The number of spaces to use for indentation in the output file.
///
/// # Returns
///
/// * `Result<()>` - A `Result` indicating the outcome of the operation.
pub fn dump_interfaces(
    process: &Process,
    builders: &mut Vec<FileBuilderEnum>,
    file_path: &str,
    indent: usize,
) -> Result<()> {
    let mut entries = Entries::new();

    // Iterate over all modules in the process, excluding crashhandler64.dll.
    for module in process
        .modules()?
        .iter()
        .filter(|m| m.name != "crashhandler64.dll")
    {
        if let Some(create_interface_export) = module.get_export_by_name("CreateInterface") {
            info!("Dumping interfaces in <blue>{}</>...", module.name);

            let create_interface_address =
                process.resolve_rip(create_interface_export, None, None)?;

            let mut node = process.read_memory::<*mut InterfaceNode>(create_interface_address)?;

            // Iterate over each node in the linked list.
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

                // Get the next node in the linked list.
                node = unsafe { (*node).next(process) }?;
            }
        }
    }

    generate_files(builders, &entries, file_path, "interfaces")?;

    Ok(())
}
