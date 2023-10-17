use std::io::{Result, Write};

use serde_json::{json, Map, Value};

use super::FileBuilder;

#[derive(Debug, PartialEq)]
pub struct JsonFileBuilder {
    json: Value,
    current_namespace: String,
}

impl Default for JsonFileBuilder {
    fn default() -> Self {
        Self {
            json: Value::Object(Map::new()),
            current_namespace: String::new(),
        }
    }
}

impl FileBuilder for JsonFileBuilder {
    fn extension(&mut self) -> &str {
        "json"
    }

    fn write_top_level(&mut self, _output: &mut dyn Write) -> Result<()> {
        Ok(())
    }

    fn write_namespace(&mut self, _output: &mut dyn Write, name: &str) -> Result<()> {
        self.current_namespace = name.to_string();

        Ok(())
    }

    fn write_variable(
        &mut self,
        _output: &mut dyn Write,
        name: &str,
        value: usize,
        _comment: Option<&str>,
    ) -> Result<()> {
        if let Some(map) = self.json.as_object_mut() {
            let entry = map
                .entry(&self.current_namespace)
                .or_insert_with(|| json!({}));

            if let Some(object) = entry.as_object_mut() {
                object.insert(name.to_string(), json!(value));
            }
        }

        Ok(())
    }

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()> {
        if eof {
            write!(output, "{}", serde_json::to_string_pretty(&self.json)?)?;

            self.json = json!({});
        }

        Ok(())
    }
}
