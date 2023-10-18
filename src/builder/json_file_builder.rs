use std::{io::{Result, Write}, collections::BTreeMap};

use serde::Serialize;

use super::FileBuilder;


#[derive(Debug, PartialEq, Default, Serialize)]
struct JsonOffsetValue {
    value: usize,
    comment: Option<String>,
}

#[derive(Debug, PartialEq, Default, Serialize)]
struct JsonMod {
    data: BTreeMap<String, JsonOffsetValue>,
    comment: Option<String>,
}

#[derive(Debug, PartialEq, Default)]
pub struct JsonFileBuilder {
    data: BTreeMap<String, JsonMod>,
    current_namespace: String,
}

impl FileBuilder for JsonFileBuilder {
    fn extension(&mut self) -> &str {
        "json"
    }

    fn write_top_level(&mut self, _output: &mut dyn Write) -> Result<()> {
        Ok(())
    }

    fn write_namespace(&mut self, _output: &mut dyn Write, name: &str, comment: Option<&str>) -> Result<()> {
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
    ) -> Result<()> {
        self.data.entry(self.current_namespace.clone()).or_default().data
            .insert(name.to_string(), JsonOffsetValue { 
                value: value, 
                comment: comment.map(str::to_string) 
            });

        Ok(())
    }

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()> {
        if eof {
            write!(output, "{}", serde_json::to_string_pretty(&self.data)?)?;

            self.data = BTreeMap::new();
        }

        Ok(())
    }
}
