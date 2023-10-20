use std::collections::BTreeMap;
use std::fs::File;
use std::io::Write;

use anyhow::Result;

use chrono::Utc;

use crate::builder::{FileBuilder, FileBuilderEnum};

pub use interfaces::dump_interfaces;
pub use offsets::dump_offsets;
pub use schemas::dump_schemas;

pub mod interfaces;
pub mod offsets;
pub mod schemas;

/// A single entry.
#[derive(Debug, PartialEq)]
pub struct Entry {
    pub name: String,
    pub value: usize,
    pub comment: Option<String>,
}

/// A container for entries.
#[derive(Default)]
pub struct EntriesContainer {
    pub data: Vec<Entry>,
    pub comment: Option<String>,
}

/// A map of entries.
pub type Entries = BTreeMap<String, EntriesContainer>;

/// Generate a file with the given builder.
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

    write_banner_to_file(&mut file, builder.extension())?;

    builder.write_top_level(&mut file)?;

    let len = entries.len();

    for (i, pair) in entries.iter().enumerate() {
        builder.write_namespace(&mut file, pair.0, pair.1.comment.as_deref())?;

        pair.1.data.iter().try_for_each(|entry| {
            builder.write_variable(
                &mut file,
                &entry.name,
                entry.value,
                entry.comment.as_deref(),
            )
        })?;

        builder.write_closure(&mut file, i == len - 1)?;
    }

    Ok(())
}

/// Generate files with the given builders.
pub fn generate_files(
    builders: &mut [FileBuilderEnum],
    entries: &Entries,
    file_name: &str,
) -> Result<()> {
    builders
        .iter_mut()
        .try_for_each(|builder| generate_file(builder, entries, file_name))
}

/// Writes the banner to the given file.
fn write_banner_to_file(file: &mut File, file_ext: &str) -> Result<()> {
    const REPO_URL: &str = "https://github.com/a2x/cs2-dumper";

    let now_utc = Utc::now();

    let banner = match file_ext {
        "json" => None,
        "py" => Some(format!("'''\n{}\n{}\n'''\n\n", REPO_URL, now_utc)),
        _ => Some(format!("/*\n * {}\n * {}\n */\n\n", REPO_URL, now_utc)),
    };

    if let Some(banner) = banner {
        write!(file, "{}", banner)?;
    }

    Ok(())
}
