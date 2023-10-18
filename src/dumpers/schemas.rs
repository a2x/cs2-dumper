use crate::builder::FileBuilderEnum;
use crate::dumpers::Entry;
use crate::error::Result;
use crate::remote::Process;
use crate::sdk::SchemaSystem;

use super::{generate_files, Entries};

pub fn dump_schemas(builders: &mut Vec<FileBuilderEnum>, process: &Process) -> Result<()> {
    let schema_system = SchemaSystem::new(&process)?;

    for type_scope in schema_system.type_scopes()? {
        let module_name = type_scope.module_name()?;

        log::info!("Generating files for {}...", module_name);

        let mut entries = Entries::new();

        for class in type_scope.classes()? {
            log::debug!("  {}", class.name());

            let container = entries.entry(class.name().replace("::", "_")).or_default();
            container.comment = class.parent()?.map(|p| p.name().to_string());

            for field in class.fields()? {
                let field_name = field.name()?;
                let field_offset = field.offset()?;
                let field_type_name = field.r#type()?.name()?;

                log::debug!(
                    "    └─ {} = {:#X} // {}",
                    field_name,
                    field_offset,
                    field_type_name
                );

                container.data.push(Entry {
                    name: field_name,
                    value: field_offset as usize,
                    comment: Some(field_type_name),
                });
            }
        }

        generate_files(builders, &entries, &module_name)?;
    }

    Ok(())
}
