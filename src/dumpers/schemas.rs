use std::collections::HashMap;

use regex::Regex;

use crate::builder::FileBuilderEnum;
use crate::dumpers::Entry;
use crate::error::Result;
use crate::remote::Process;
use crate::sdk::SchemaSystem;

use super::{generate_file, Entries};

pub fn dump_schemas(builders: &mut Vec<FileBuilderEnum>, process: &Process) -> Result<()> {
    let schema_system = SchemaSystem::new(&process)?;

    let type_map = HashMap::from([
        ("uint8", "uint8_t"),
        ("uint16", "uint16_t"),
        ("uint32", "uint32_t"),
        ("uint64", "uint64_t"),
        ("int8", "int8_t"),
        ("int16", "int16_t"),
        ("int32", "int32_t"),
        ("int64", "int64_t"),
        ("float32", "float"),
        ("float64", "double"),
    ]);

    let regex_map: HashMap<String, Regex> = type_map
        .iter()
        .map(|(k, _v)| ((k.to_string()), Regex::new(&format!(r"\b{}\b", k)).unwrap()))
        .collect();

    for type_scope in schema_system.type_scopes()? {
        let module_name = type_scope.module_name()?;

        log::info!("Generating files for {}...", module_name);

        let mut entries = Entries::new();

        for class in type_scope.classes()? {
            log::debug!("  {}", class.name());

            for field in class.fields()? {
                let field_name = field.name()?;
                let field_offset = field.offset()?;

                let mut type_name = field.r#type()?.name()?.replace(" ", "");

                for k in type_map.keys() {
                    let re = &regex_map[*k];

                    type_name = re.replace_all(&type_name, type_map[*k]).to_string();
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
