use crate::builder::FileBuilderEnum;
use crate::dumpers::Entry;
use crate::error::Result;
use crate::remote::Process;
use crate::sdk::SchemaSystem;

use super::{generate_file, Entries};

pub fn dump_schemas(builders: &mut Vec<FileBuilderEnum>, process: &Process) -> Result<()> {
    let schema_system = SchemaSystem::new(&process)?;

    for type_scope in schema_system.type_scopes()? {
        let module_name = type_scope.module_name()?;

        log::info!("Generating files for {}...", module_name);

        let mut entries = Entries::new();

        for class in type_scope.classes()? {
            log::debug!("  {}", class.name());

            for field in class.fields()? {
                let field_name = field.name()?;
                let field_offset = field.offset()?;
                let type_name = field.r#type()?.name()?;

                log::debug!(
                    "    └─ {} = {:#X} // {}",
                    field_name,
                    field_offset,
                    type_name
                );

                entries
                    .entry(class.name().replace("::", "_"))
                    .or_default()
                    .push(Entry {
                        name: field_name,
                        value: field_offset as usize,
                        comment: Some(type_name),
                    });
            }
        }

        if !entries.is_empty() {
            for builder in builders.iter_mut() {
                generate_file(builder, &module_name, &entries)?;
            }
        }
    }

    Ok(())
}
