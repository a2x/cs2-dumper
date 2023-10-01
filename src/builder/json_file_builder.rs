use std::io::{Result, Write};

use serde_json::{json, Value};

use super::FileBuilder;

#[derive(Default)]
pub struct JsonFileBuilder {
    json: Value,
    namespace: String,
}

impl FileBuilder for JsonFileBuilder {
    fn extension(&mut self) -> &str {
        "json"
    }

    fn write_top_level(&mut self, _output: &mut dyn Write) -> Result<()> {
        Ok(())
    }

    fn write_namespace(&mut self, _output: &mut dyn Write, name: &str) -> Result<()> {
        self.namespace = name.to_string();

        Ok(())
    }

    fn write_variable(
        &mut self,
        _output: &mut dyn Write,
        name: &str,
        value: usize,
        _comment: Option<&str>,
    ) -> Result<()> {
        if let Some(json_as_map) = self.json.as_object_mut() {
            let namespace_entry = json_as_map
                .entry(self.namespace.clone())
                .or_insert_with(|| json!({}));

            if let Some(namespace_object) = namespace_entry.as_object_mut() {
                namespace_object.insert(name.to_string(), json!(value));
            }
        }

        Ok(())
    }

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()> {
        if eof {
            write!(
                output,
                "{}",
                serde_json::to_string_pretty(&self.json).unwrap()
            )
            .unwrap();

            self.json = json!({});
        }

        Ok(())
    }
}
