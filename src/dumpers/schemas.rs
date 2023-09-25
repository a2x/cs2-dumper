use crate::builder::FileBuilderEnum;
use crate::error::Result;
use crate::remote::Process;
use crate::sdk::SchemaSystem;

use super::{generate_file, Entries};

pub fn dump_schemas(builders: &mut Vec<FileBuilderEnum>, process: &Process) -> Result<()> {
    let schema_system = SchemaSystem::new(&process)?;

    for type_scope in schema_system.type_scopes()? {
        log::info!("Generating files for {}...", type_scope.module_name()?);

        let mut entries = Entries::new();

        for class in type_scope.classes()? {
            log::info!("  [{}]", class.name());

            for field in class.fields()? {
                log::info!("    [{}] = {:#X}", field.name()?, field.offset()?);

                entries
                    .entry(class.name().replace("::", "_"))
                    .or_default()
                    .push((field.name()?, field.offset()? as usize));
            }
        }

        if entries.is_empty() {
            continue;
        }

        for builder in builders.iter_mut() {
            generate_file(builder, &type_scope.module_name()?, &entries)?;
        }
    }

    Ok(())
}
