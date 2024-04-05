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
    fn to_cs(&self, results: &Results, indent_size: usize) -> Result<String>;

    fn to_hpp(&self, results: &Results, indent_size: usize) -> Result<String>;

    fn to_json(&self, results: &Results, indent_size: usize) -> Result<String>;

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

    /// Map of schema classes/enums to dump.
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
        const FILE_EXTS: &[&str] = &["cs", "hpp", "json", "rs"];

        fs::create_dir_all(&out_dir)?;

        let items = [
            ("buttons", Item::Buttons(&self.buttons)),
            ("interfaces", Item::Interfaces(&self.interfaces)),
            ("offsets", Item::Offsets(&self.offsets)),
        ];

        for (file_name, item) in &items {
            self.dump_item(item, &out_dir, indent_size, FILE_EXTS, file_name)?;
        }

        self.dump_schemas(&out_dir, indent_size, FILE_EXTS)?;
        self.dump_info(process, &out_dir)?;

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

            self.dump_file(&out_dir, file_name, ext, &content)?;
        }

        Ok(())
    }

    fn dump_info<P: AsRef<Path>>(
        &self,
        process: &mut IntoProcessInstanceArcBox<'_>,
        out_dir: P,
    ) -> Result<()> {
        let content = &serde_json::to_string_pretty(&json!({
            "timestamp": self.timestamp.to_rfc3339(),
            "build_number": self.read_build_number(process).unwrap_or(0),
        }))?;

        self.dump_file(&out_dir, "info", "json", &content)
    }

    fn dump_schemas<P: AsRef<Path>>(
        &self,
        out_dir: P,
        indent_size: usize,
        file_exts: &[&str],
    ) -> Result<()> {
        for (module_name, (classes, enums)) in &self.schemas {
            let map = SchemaMap::from([(module_name.clone(), (classes.clone(), enums.clone()))]);
            let item = Item::Schemas(&map);

            self.dump_item(&item, &out_dir, indent_size, file_exts, &module_name)?;
        }

        Ok(())
    }

    fn read_build_number(&self, process: &mut IntoProcessInstanceArcBox<'_>) -> Result<u32> {
        self.offsets
            .iter()
            .find_map(|(module_name, offsets)| {
                let (_name, value) = offsets.iter().find(|(name, _)| *name == "dwBuildNumber")?;
                let module = process.module_by_name(module_name).ok()?;

                process.read(module.base + value).ok()
            })
            .ok_or(Error::Other("unable to read build number"))
    }

    fn write_banner(&self, fmt: &mut Formatter<'_>) -> Result<()> {
        writeln!(fmt, "// Generated using https://github.com/a2x/cs2-dumper")?;
        writeln!(fmt, "// {}\n", self.timestamp)?;

        Ok(())
    }
}
