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

                let mut type_name = field.r#type()?.name()?;

                match type_name.as_str() {
                    "uint8" => type_name = "uint8_t".to_string(),
                    "uint16" => type_name = "uint16_t".to_string(),
                    "uint32" => type_name = "uint32_t".to_string(),
                    "uint64" => type_name = "uint64_t".to_string(),
                    "int8" => type_name = "int8_t".to_string(),
                    "int16" => type_name = "int16_t".to_string(),
                    "int32" => type_name = "int32_t".to_string(),
                    "int64" => type_name = "int64_t".to_string(),
                    "float32" => type_name = "float".to_string(),
                    "float64" => type_name = "double".to_string(),
                    _ => {}
                }

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
