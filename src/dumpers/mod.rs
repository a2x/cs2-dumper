use std::collections::BTreeMap;
use std::fs::File;

use crate::builder::{FileBuilder, FileBuilderEnum};
use crate::error::Result;

pub use interfaces::dump_interfaces;
pub use offsets::dump_offsets;
pub use schemas::dump_schemas;

pub mod interfaces;
pub mod offsets;
pub mod schemas;

pub type Entries = BTreeMap<String, Vec<(String, usize)>>;

pub fn generate_file(
    builder: &mut FileBuilderEnum,
    file_name: &str,
    entries: &Entries,
) -> Result<()> {
    let file_path = format!("generated/{}.{}", file_name, builder.extension());

    let mut file = File::create(file_path)?;

    builder.write_top_level(&mut file)?;

    let len = entries.len();

    for (i, entry) in entries.iter().enumerate() {
        builder.write_namespace(&mut file, entry.0)?;

        for (name, value) in entry.1 {
            builder.write_variable(&mut file, name, *value)?;
        }

        builder.write_closure(&mut file, i == len - 1)?;
    }

    Ok(())
}
