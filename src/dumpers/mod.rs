use std::collections::BTreeMap;
use std::fs::File;
use std::io::Write;

use crate::builder::{FileBuilder, FileBuilderEnum};
use crate::error::Result;

pub use interfaces::dump_interfaces;
pub use offsets::dump_offsets;
pub use schemas::dump_schemas;

pub mod interfaces;
pub mod offsets;
pub mod schemas;

pub struct Entry {
    pub name: String,
    pub value: usize,
    pub comment: Option<String>,
}

pub type Entries = BTreeMap<String, Vec<Entry>>;

pub fn generate_file(
    builder: &mut FileBuilderEnum,
    entries: &Entries,
    file_name: &str,
) -> Result<()> {
    if entries.is_empty() {
        return Ok(());
    }

    let file_path = format!("generated/{}.{}", file_name, builder.extension());

    let mut file = File::create(file_path)?;

    builder.write_top_level(&mut file)?;

    if builder.extension() != "json" {
        write!(
            file,
            "/*\n * https://github.com/a2x/cs2-dumper\n * {}\n */\n\n",
            chrono::Utc::now()
        )?;
    }

    let len = entries.len();

    for (i, pair) in entries.iter().enumerate() {
        builder.write_namespace(&mut file, pair.0)?;

        for entry in pair.1 {
            builder.write_variable(
                &mut file,
                &entry.name,
                entry.value,
                entry.comment.as_deref(),
            )?;
        }

        builder.write_closure(&mut file, i == len - 1)?;
    }

    Ok(())
}

pub fn generate_files(
    builders: &mut Vec<FileBuilderEnum>,
    entries: &Entries,
    file_name: &str,
) -> Result<()> {
    for builder in builders {
        generate_file(builder, &entries, file_name)?;
    }

    Ok(())
}
