use std::fmt::Write;
use std::fs;
use std::path::Path;

use chrono::{DateTime, Utc};

use memflow::prelude::v1::*;

use serde::{Deserialize, Serialize};
use serde_json::json;

use formatter::Formatter;

use crate::analysis::*;
use crate::error::{Error, Result};

mod buttons;
mod formatter;
mod interfaces;
mod offsets;
mod schemas;

#[derive(Serialize)]
#[serde(rename_all = "snake_case")]
enum Item<'a> {
    Buttons(&'a Vec<Button>),
    Interfaces(&'a InterfaceMap),
    Offsets(&'a OffsetMap),
    Schemas(&'a SchemaMap),
}

impl<'a> Item<'a> {
    fn generate(&self, results: &Results, indent_size: usize, file_ext: &str) -> Result<String> {
        match file_ext {
            "cs" => self.to_cs(results, indent_size),
            "hpp" => self.to_hpp(results, indent_size),
            "json" => self.to_json(results, indent_size),
            "rs" => self.to_rs(results, indent_size),
            _ => unreachable!(),
        }
    }
}

trait CodeGen {
    /// Converts an [`Item`] to formatted C# code.
    fn to_cs(&self, results: &Results, indent_size: usize) -> Result<String>;

    /// Converts an [`Item`] to formatted C++ code.
    fn to_hpp(&self, results: &Results, indent_size: usize) -> Result<String>;

    /// Converts an [`Item`] to formatted JSON.
    fn to_json(&self, results: &Results, indent_size: usize) -> Result<String>;

    /// Converts an [`Item`] to formatted Rust code.
    fn to_rs(&self, results: &Results, indent_size: usize) -> Result<String>;

    #[inline]
    fn sanitize_name(name: &str) -> String {
        name.replace(|c: char| !c.is_alphanumeric(), "_")
    }

    fn write_content<F>(&self, results: &Results, indent_size: usize, callback: F) -> Result<String>
    where
        F: FnOnce(&mut Formatter<'_>) -> Result<()>,
    {
        let mut buf = String::new();
        let mut fmt = Formatter::new(&mut buf, indent_size);

        results.write_banner(&mut fmt)?;

        callback(&mut fmt)?;

        Ok(buf)
    }
}

impl<'a> CodeGen for Item<'a> {
    fn to_cs(&self, results: &Results, indent_size: usize) -> Result<String> {
        match self {
            Item::Buttons(buttons) => buttons.to_cs(results, indent_size),
            Item::Interfaces(ifaces) => ifaces.to_cs(results, indent_size),
            Item::Offsets(offsets) => offsets.to_cs(results, indent_size),
            Item::Schemas(schemas) => schemas.to_cs(results, indent_size),
        }
    }

    fn to_hpp(&self, results: &Results, indent_size: usize) -> Result<String> {
        match self {
            Item::Buttons(buttons) => buttons.to_hpp(results, indent_size),
            Item::Interfaces(ifaces) => ifaces.to_hpp(results, indent_size),
            Item::Offsets(offsets) => offsets.to_hpp(results, indent_size),
            Item::Schemas(schemas) => schemas.to_hpp(results, indent_size),
        }
    }

    fn to_json(&self, results: &Results, indent_size: usize) -> Result<String> {
        match self {
            Item::Buttons(buttons) => buttons.to_json(results, indent_size),
            Item::Interfaces(ifaces) => ifaces.to_json(results, indent_size),
            Item::Offsets(offsets) => offsets.to_json(results, indent_size),
            Item::Schemas(schemas) => schemas.to_json(results, indent_size),
        }
    }

    fn to_rs(&self, results: &Results, indent_size: usize) -> Result<String> {
        match self {
            Item::Buttons(buttons) => buttons.to_rs(results, indent_size),
            Item::Interfaces(ifaces) => ifaces.to_rs(results, indent_size),
            Item::Offsets(offsets) => offsets.to_rs(results, indent_size),
            Item::Schemas(schemas) => schemas.to_rs(results, indent_size),
        }
    }
}

#[derive(Deserialize, Serialize)]
pub struct Results {
    /// Timestamp of the dump.
    pub timestamp: DateTime<Utc>,

    /// List of buttons to dump.
    pub buttons: Vec<Button>,

    /// Map of interfaces to dump.
    pub interfaces: InterfaceMap,

    /// Map of offsets to dump.
    pub offsets: OffsetMap,

    /// Map of schema classes and enums to dump.
    pub schemas: SchemaMap,
}

impl Results {
    pub fn new(
        buttons: Vec<Button>,
        interfaces: InterfaceMap,
        offsets: OffsetMap,
        schemas: SchemaMap,
    ) -> Self {
        Self {
            timestamp: Utc::now(),
            buttons,
            interfaces,
            offsets,
            schemas,
        }
    }

    pub fn dump_all<P: AsRef<Path>>(
        &self,
        process: &mut IntoProcessInstanceArcBox<'_>,
        out_dir: P,
        indent_size: usize,
    ) -> Result<()> {
        // TODO: Make this user-configurable.
        const FILE_EXTS: &[&str] = &["cs", "hpp", "json", "rs"];

        // Create the output directory if it doesn't exist.
        fs::create_dir_all(&out_dir)?;

        let items = [
            ("buttons", Item::Buttons(&self.buttons)),
            ("interfaces", Item::Interfaces(&self.interfaces)),
            ("offsets", Item::Offsets(&self.offsets)),
        ];

        self.dump_items(&items, out_dir.as_ref(), indent_size, FILE_EXTS)?;

        // Write a new file for each module.
        for (module_name, (classes, enums)) in &self.schemas {
            let schemas = [(module_name.clone(), (classes.clone(), enums.clone()))].into();

            let item = Item::Schemas(&schemas);

            self.dump_item(&item, out_dir.as_ref(), indent_size, FILE_EXTS, module_name)?;
        }

        self.dump_info_file(process, out_dir)?;

        Ok(())
    }

    fn dump_file<P: AsRef<Path>>(
        &self,
        out_dir: P,
        file_name: &str,
        file_ext: &str,
        content: &str,
    ) -> Result<()> {
        let file_path = out_dir.as_ref().join(format!("{}.{}", file_name, file_ext));

        fs::write(&file_path, content)?;

        Ok(())
    }

    fn dump_info_file<P: AsRef<Path>>(
        &self,
        process: &mut IntoProcessInstanceArcBox<'_>,
        out_dir: P,
    ) -> Result<()> {
        let content = &serde_json::to_string_pretty(&json!({
            "timestamp": self.timestamp.to_rfc3339(),
            "build_number": self.read_build_number(process).unwrap_or(0),
        }))?;

        self.dump_file(out_dir.as_ref(), "info", "json", &content)
    }

    fn dump_item<P: AsRef<Path>>(
        &self,
        item: &Item,
        out_dir: P,
        indent_size: usize,
        file_exts: &[&str],
        file_name: &str,
    ) -> Result<()> {
        for ext in file_exts {
            let content = item.generate(self, indent_size, ext)?;

            self.dump_file(out_dir.as_ref(), file_name, ext, &content)?;
        }

        Ok(())
    }

    fn dump_items<P: AsRef<Path>>(
        &self,
        items: &[(&str, Item)],
        out_dir: P,
        indent_size: usize,
        file_exts: &[&str],
    ) -> Result<()> {
        for (file_name, item) in items {
            self.dump_item(item, out_dir.as_ref(), indent_size, file_exts, file_name)?;
        }

        Ok(())
    }

    fn read_build_number(&self, process: &mut IntoProcessInstanceArcBox<'_>) -> Result<u32> {
        self.offsets
            .iter()
            .find_map(|(module_name, offsets)| {
                let offset = offsets.iter().find(|(name, _)| *name == "dwBuildNumber")?;
                let module = process.module_by_name(module_name).ok()?;

                process.read(module.base + offset.1).ok()
            })
            .ok_or(Error::Other("unable to read build number"))
    }

    fn write_banner(&self, fmt: &mut Formatter<'_>) -> Result<()> {
        writeln!(fmt, "// Generated using https://github.com/a2x/cs2-dumper")?;
        writeln!(fmt, "// {}\n", self.timestamp)?;

        Ok(())
    }
}
