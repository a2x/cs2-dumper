use crate::builder::{FileBuilder, FileBuilderEnum};

use anyhow::Result;

use chrono::Utc;

pub use interfaces::dump_interfaces;
pub use offsets::dump_offsets;
pub use schemas::dump_schemas;

use std::collections::BTreeMap;
use std::fs::File;
use std::io::Write;

pub mod interfaces;
pub mod offsets;
pub mod schemas;

/// Represents an entry in the generated file.
#[derive(Debug, PartialEq)]
pub struct Entry {
    /// The name of the entry.
    pub name: String,

    /// The value of the entry.
    pub value: usize,

    /// An optional comment associated with the entry.
    pub comment: Option<String>,

    /// An optional indentation level for the entry.
    pub indent: Option<usize>,
}

/// A container for entries, which consists of data and an optional comment.
#[derive(Default)]
pub struct EntriesContainer {
    /// The data associated with the container.
    pub data: Vec<Entry>,

    /// An optional comment associated with the container.
    pub comment: Option<String>,
}

/// A type alias for a `BTreeMap` that maps `String` keys to `EntriesContainer` values.
pub type Entries = BTreeMap<String, EntriesContainer>;

/// Generates a file using the given `builder`, `entries`, `file_path`, and `file_name`.
///
/// # Arguments
///
/// * `builder` - A mutable reference to the `FileBuilderEnum`.
/// * `entries` - A reference to the `Entries` struct.
/// * `file_path` - A string slice representing the path to the file.
/// * `file_name` - A string slice representing the name of the file.
///
/// # Returns
///
/// * `Result<()>` - A `Result` indicating the outcome of the operation.
pub fn generate_file(
    builder: &mut FileBuilderEnum,
    entries: &Entries,
    file_path: &str,
    file_name: &str,
) -> Result<()> {
    if entries.is_empty() {
        return Ok(());
    }

    let file_path = format!("{}/{}.{}", file_path, file_name, builder.extension());

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
                entry.indent,
            )
        })?;

        builder.write_closure(&mut file, i == len - 1)?;
    }

    Ok(())
}

/// Generate files using the given `builders`, `entries`, `file_path`, and `file_name`.
///
/// # Arguments
///
/// * `builders` - A mutable slice of `FileBuilderEnum` objects.
/// * `entries` - A reference to the `Entries` struct.
/// * `file_path` - A string slice representing the path to the file.
/// * `file_name` - A string slice representing the name of the file.
///
/// # Returns
///
/// * `Result<()>` - A `Result` indicating the outcome of the operation.
pub fn generate_files(
    builders: &mut [FileBuilderEnum],
    entries: &Entries,
    file_path: &str,
    file_name: &str,
) -> Result<()> {
    builders
        .iter_mut()
        .try_for_each(|builder| generate_file(builder, entries, file_path, file_name))
}

/// Writes the banner to the given file based on the file extension.
///
/// # Arguments
///
/// * `file` - A mutable reference to the file to write the banner to.
/// * `file_extension` - A string slice representing the file extension of the file.
///
/// # Returns
///
/// * `Result<()>` - A `Result` indicating the outcome of the operation.
fn write_banner_to_file(file: &mut File, file_extension: &str) -> Result<()> {
    const REPO_URL: &str = "https://github.com/a2x/cs2-dumper";

    let time_now = Utc::now().to_rfc2822();

    let banner = match file_extension {
        "json" => None,
        "py" => Some(format!(
            "'''\nCreated using {}\n{}\n'''\n\n",
            REPO_URL, time_now
        )),
        "yaml" => None,
        _ => Some(format!(
            "/*\n * Created using {}\n * {}\n */\n\n",
            REPO_URL, time_now
        )),
    };

    if let Some(banner) = banner {
        write!(file, "{}", banner)?;
    }

    Ok(())
}
