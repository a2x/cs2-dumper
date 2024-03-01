use std::io::{Result, Write};

use super::FileBuilder;

#[derive(Clone, Debug, Default, PartialEq)]
pub struct YamlFileBuilder;

impl FileBuilder for YamlFileBuilder {
    fn extension(&mut self) -> &str {
        "yaml"
    }

    fn write_top_level(&mut self, output: &mut dyn Write) -> Result<()> {
        write!(output, "---\n")
    }

    fn write_namespace(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        comment: Option<&str>,
    ) -> Result<()> {
        let comment = comment.map_or(String::new(), |c| format!(" # {}", c));

        write!(output, "{}:{}\n", name, comment)
    }

    fn write_variable(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        value: usize,
        comment: Option<&str>,
        indentation: Option<usize>,
    ) -> Result<()> {
        let indentation = " ".repeat(indentation.unwrap_or(4));

        let comment = comment.map_or(String::new(), |c| format!(" # {}", c));

        write!(output, "{}{}: {}{}\n", indentation, name, value, comment)
    }

    fn write_closure(&mut self, _output: &mut dyn Write, _eof: bool) -> Result<()> {
        Ok(())
    }
}
