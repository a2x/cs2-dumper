use anyhow::Result;

use simplelog::{debug, info};

use super::{generate_files, Entries, Entry};

use crate::builder::FileBuilderEnum;
use crate::os::Process;
use crate::sdk::SchemaSystem;

pub fn dump_schemas(
    process: &Process,
    builders: &mut Vec<FileBuilderEnum>,
    file_path: &str,
    indent: usize,
) -> Result<()> {
    let schema_system = SchemaSystem::new(&process)?;

    for type_scope in schema_system.type_scopes()? {
        let module_name = type_scope.module_name()?;

        info!("Generating files for <blue>{}</>...", module_name);

        let mut entries = Entries::new();

        for class in type_scope.classes()? {
            let parent_name = class.parent()?.map(|p| p.name().to_string());

            debug!(
                "<u><bright-yellow>{}</></> : <u><yellow>{}</></>",
                class.name(),
                parent_name.clone().unwrap_or_default()
            );

            let container = entries.entry(class.name().replace("::", "_")).or_default();

            container.comment = parent_name;

            for field in class.fields()? {
                let name = field.name()?;
                let offset = field.offset()?;
                let type_name = field.r#type()?.name()?;

                debug!(
                    "{}<bright-yellow>{}</> = <bright-blue>{:#X}</> // <b><cyan>{}</></>",
                    " ".repeat(indent),
                    name,
                    offset,
                    type_name
                );

                container.data.push(Entry {
                    name,
                    value: offset as usize,
                    comment: Some(type_name),
                    indent: Some(indent),
                });
            }
        }

        generate_files(builders, &entries, file_path, &module_name)?;
    }

    Ok(())
}
