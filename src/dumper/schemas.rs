use super::{generate_files, Entries, Entry};

use crate::builder::FileBuilderEnum;
use crate::sdk::SchemaSystem;
use crate::util::Process;

use anyhow::Result;

use simplelog::{debug, info};

/// Dumps all schema system classes and writes the results to a file.
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
