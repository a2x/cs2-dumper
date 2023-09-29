use crate::builder::FileBuilderEnum;
use crate::error::Result;
use crate::remote::Process;

use super::{generate_file, Entries};

pub fn dump_interfaces(builders: &mut Vec<FileBuilderEnum>, process: &Process) -> Result<()> {
    let module_names = process.get_loaded_modules()?;

    let mut entries = Entries::new();

    for module_name in module_names {
        let module = process.get_module_by_name(&module_name)?;

        log::info!("Dumping interfaces in {}...", module_name);

        if let Some(create_interface_export) = module.export("CreateInterface") {
            let create_interface_address = process.resolve_rip(create_interface_export.va)?;

            let mut interface_registry = process
                .read_memory::<usize>(create_interface_address)
                .unwrap_or(0);

            while interface_registry != 0 {
                let interface_ptr = process.read_memory::<usize>(interface_registry)?;

                let interface_version_name_ptr =
                    process.read_memory::<usize>(interface_registry + 0x8)?;

                let interface_version_name = process.read_string(interface_version_name_ptr, 64)?;

                log::info!(
                    "  -> Found '{}' @ {:#X} (RVA: {:#X})",
                    interface_version_name,
                    interface_ptr,
                    interface_ptr - module.address()
                );

                entries
                    .entry(module_name.replace(".", "_"))
                    .or_default()
                    .push((interface_version_name, interface_ptr - module.address()));

                interface_registry = process.read_memory::<usize>(interface_registry + 0x10)?;
            }
        }
    }

    for builder in builders.iter_mut() {
        generate_file(builder, "interfaces", &entries)?;
    }

    Ok(())
}
