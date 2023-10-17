use std::collections::BTreeMap;
use std::fs::File;
use std::io::Write;

use chrono::Utc;

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

    write_banner_to_file(&mut file, builder.extension())?;

    builder.write_top_level(&mut file)?;

    let len = entries.len();

    for (i, pair) in entries.iter().enumerate() {
        builder.write_namespace(&mut file, pair.0)?;

        pair.1.iter().try_for_each(|entry| {
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

pub fn generate_files(
    builders: &mut [FileBuilderEnum],
    entries: &Entries,
    file_name: &str,
) -> Result<()> {
    builders
        .iter_mut()
        .try_for_each(|builder| generate_file(builder, entries, file_name))
}

fn write_banner_to_file(file: &mut File, extension: &str) -> Result<()> {
    let chrono_now = Utc::now();

    const URL: &str = "https://github.com/a2x/cs2-dumper";

    let banner = match extension {
        "json" => None,
        "py" => Some(format!("'''\n{}\n{}\n'''\n\n", URL, chrono_now)),
        _ => Some(format!("/*\n * {}\n * {}\n */\n\n", URL, chrono_now)),
    };

    if let Some(banner) = banner {
        write!(file, "{}", banner)?;
    }

    Ok(())
}
