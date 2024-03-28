use std::fmt::Write;
use std::path::Path;
use std::{env, fs};

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
    fn generate(&self, results: &Results, indent_size: usize, file_type: &str) -> Result<String> {
        match file_type {
            "cs" => self.to_cs(results, indent_size),
            "hpp" => self.to_hpp(results, indent_size),
            "rs" => self.to_rs(results, indent_size),
            "json" => serde_json::to_string_pretty(self).map_err(Into::into),
            _ => unreachable!(),
        }
    }
}

trait CodeGen {
    fn to_cs(&self, results: &Results, indent_size: usize) -> Result<String>;
    fn to_hpp(&self, results: &Results, indent_size: usize) -> Result<String>;
    fn to_rs(&self, results: &Results, indent_size: usize) -> Result<String>;

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
            Item::Interfaces(interfaces) => interfaces.to_cs(results, indent_size),
            Item::Offsets(offsets) => offsets.to_cs(results, indent_size),
            Item::Schemas(schemas) => schemas.to_cs(results, indent_size),
        }
    }

    fn to_hpp(&self, results: &Results, indent_size: usize) -> Result<String> {
        match self {
            Item::Buttons(buttons) => buttons.to_hpp(results, indent_size),
            Item::Interfaces(interfaces) => interfaces.to_hpp(results, indent_size),
            Item::Offsets(offsets) => offsets.to_hpp(results, indent_size),
            Item::Schemas(schemas) => schemas.to_hpp(results, indent_size),
        }
    }

    fn to_rs(&self, results: &Results, indent_size: usize) -> Result<String> {
        match self {
            Item::Buttons(buttons) => buttons.to_rs(results, indent_size),
            Item::Interfaces(interfaces) => interfaces.to_rs(results, indent_size),
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
        let items = [
            ("buttons", Item::Buttons(&self.buttons)),
            ("interfaces", Item::Interfaces(&self.interfaces)),
            ("offsets", Item::Offsets(&self.offsets)),
            ("schemas", Item::Schemas(&self.schemas)),
        ];

        // TODO: Make this user-configurable.
        let file_types = ["cs", "hpp", "json", "rs"];

        for (file_name, item) in &items {
            for &file_type in &file_types {
                let content = item.generate(self, indent_size, file_type)?;

                self.dump_file(out_dir.as_ref(), file_name, file_type, &content)?;
            }
        }

        self.dump_info_file(process, out_dir)?;

        Ok(())
    }

    fn dump_file<P: AsRef<Path>>(
        &self,
        out_dir: P,
        file_name: &str,
        file_type: &str,
        content: &str,
    ) -> Result<()> {
        let file_path = out_dir
            .as_ref()
            .join(format!("{}.{}", file_name, file_type));

        fs::write(file_path, content)?;

        Ok(())
    }

    fn dump_info_file<P: AsRef<Path>>(
        &self,
        process: &mut IntoProcessInstanceArcBox<'_>,
        out_dir: P,
    ) -> Result<()> {
        let info = json!({
            "timestamp": self.timestamp.to_rfc3339(),
            "build_number": self.read_build_number(process).unwrap_or(0),
        });

        self.dump_file(
            out_dir.as_ref(),
            "info",
            "json",
            &serde_json::to_string_pretty(&info)?,
        )
    }

    fn read_build_number(&self, process: &mut IntoProcessInstanceArcBox<'_>) -> Result<u32> {
        self.offsets
            .iter()
            .find_map(|(module_name, offsets)| {
                offsets
                    .iter()
                    .find(|o| o.name == "dwBuildNumber")
                    .and_then(|offset| {
                        let module_base = process.module_by_name(module_name).ok()?;

                        process.read(module_base.base + offset.value).ok()
                    })
            })
            .ok_or_else(|| Error::Other("unable to read build number".into()))
    }

    fn write_banner(&self, fmt: &mut Formatter<'_>) -> Result<()> {
        writeln!(fmt, "// Generated using https://github.com/a2x/cs2-dumper")?;
        writeln!(fmt, "// {}\n", self.timestamp)?;

        Ok(())
    }
}

pub fn format_module_name(module_name: &String) -> String {
    let extension = match env::consts::OS {
        "linux" => ".so",
        "windows" => ".dll",
        _ => panic!("unsupported os"),
    };

    module_name.strip_suffix(extension).unwrap().to_string()
}

#[inline]
pub fn sanitize_name(name: &str) -> String {
    name.replace(|c: char| !c.is_alphanumeric(), "_")
}
