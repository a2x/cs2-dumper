use crate::builder::FileBuilderEnum;
use crate::dumpers::Entry;
use crate::error::Result;
use crate::remote::Process;

use super::{generate_files, Entries};

pub fn dump_interfaces(builders: &mut Vec<FileBuilderEnum>, process: &Process) -> Result<()> {
    let module_names = process.get_loaded_modules()?;

    let mut entries = Entries::new();

    for module_name in module_names {
        let module = process.get_module_by_name(&module_name)?;

        if let Some(create_interface_export) = module.export("CreateInterface") {
            log::info!("Dumping interfaces in {}...", module_name);

            let create_interface_address =
                process.resolve_rip(create_interface_export.va, None, None)?;

            let mut interface_registry_ptr = process
                .read_memory::<usize>(create_interface_address)
                .unwrap_or(0);

            while interface_registry_ptr != 0 {
                let interface_ptr = process.read_memory::<usize>(interface_registry_ptr)?;

                let interface_version_ptr =
                    process.read_memory::<usize>(interface_registry_ptr + 0x8)?;

                let interface_version = process.read_string(interface_version_ptr)?;

                log::debug!(
                    "  └─ {} @ {:#X} ({} + {:#X})",
                    interface_version,
                    interface_ptr,
                    module_name,
                    interface_ptr - module.address()
                );

                entries
                    .entry(module_name.replace(".", "_"))
                    .or_default()
                    .push(Entry {
                        name: interface_version.clone(),
                        value: interface_ptr - module.address(),
                        comment: None,
                    });

                interface_registry_ptr =
                    process.read_memory::<usize>(interface_registry_ptr + 0x10)?;
            }
        }
    }

    generate_files(builders, &entries, "interfaces")?;

    Ok(())
}
