use std::collections::BTreeMap;
use std::io::{Result, Write};

use serde::Serialize;

use super::FileBuilder;

#[derive(Clone, Debug, Default, PartialEq, Serialize)]
struct JsonOffsetValue {
    value: usize,
    comment: Option<String>,
}

#[derive(Clone, Debug, Default, PartialEq, Serialize)]
struct JsonModule {
    data: BTreeMap<String, JsonOffsetValue>,
    comment: Option<String>,
}

#[derive(Clone, Debug, Default, PartialEq)]
pub struct JsonFileBuilder {
    data: BTreeMap<String, JsonModule>,
    current_namespace: String,
}

impl FileBuilder for JsonFileBuilder {
    fn extension(&mut self) -> &str {
        "json"
    }

    fn write_top_level(&mut self, _output: &mut dyn Write) -> Result<()> {
        Ok(())
    }

    fn write_namespace(
        &mut self,
        _output: &mut dyn Write,
        name: &str,
        comment: Option<&str>,
    ) -> Result<()> {
        self.current_namespace = name.to_string();
        self.data.entry(name.to_string()).or_default().comment = comment.map(str::to_string);

        Ok(())
    }

    fn write_variable(
        &mut self,
        _output: &mut dyn Write,
        name: &str,
        value: usize,
        comment: Option<&str>,
        _indentation: Option<usize>,
    ) -> Result<()> {
        self.data
            .entry(self.current_namespace.clone())
            .or_default()
            .data
            .insert(
                name.to_string(),
                JsonOffsetValue {
                    value,
                    comment: comment.map(str::to_string),
                },
            );

        Ok(())
    }

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()> {
        if eof {
            write!(output, "{}", serde_json::to_string_pretty(&self.data)?)?;

            self.data.clear();
        }

        Ok(())
    }
}
