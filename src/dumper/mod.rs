pub use interfaces::dump_interfaces;
pub use offsets::dump_offsets;
pub use schemas::dump_schemas;

use std::collections::BTreeMap;
use std::fs::File;
use std::io::Write;

use anyhow::Result;

use chrono::Utc;

use crate::builder::{FileBuilder, FileBuilderEnum};

pub mod interfaces;
pub mod offsets;
pub mod schemas;

#[derive(Debug, PartialEq)]
pub struct Entry {
    pub name: String,
    pub value: usize,
    pub comment: Option<String>,
    pub indent: Option<usize>,
}

#[derive(Default)]
pub struct EntriesContainer {
    pub data: Vec<Entry>,
    pub comment: Option<String>,
}

pub type Entries = BTreeMap<String, EntriesContainer>;

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

fn write_banner_to_file(file: &mut File, file_extension: &str) -> Result<()> {
    const REPO_URL: &str = "https://github.com/a2x/cs2-dumper";

    let time_now = Utc::now().to_rfc2822();

    let banner = match file_extension {
        "json" => None,
        "py" => Some(format!(
            "'''\nGenerated using {}\n{}\n'''\n\n",
            REPO_URL, time_now
        )),
        "yaml" => None,
        _ => Some(format!(
            "/*\n * Generated using {}\n * {}\n */\n\n",
            REPO_URL, time_now
        )),
    };

    if let Some(banner) = banner {
        write!(file, "{}", banner)?;
    }

    Ok(())
}
