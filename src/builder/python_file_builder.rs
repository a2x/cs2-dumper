use std::io::{Result, Write};

use super::FileBuilder;

#[derive(Clone, Debug, PartialEq)]
pub struct PythonFileBuilder;

impl FileBuilder for PythonFileBuilder {
    fn extension(&mut self) -> &str {
        "py"
    }

    fn write_top_level(&mut self, _output: &mut dyn Write) -> Result<()> {
        Ok(())
    }

    fn write_namespace(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        comment: Option<&str>,
    ) -> Result<()> {
        let comment = comment.map_or(String::new(), |c| format!(" # {}", c));

        write!(output, "class {}:{}\n", name, comment)
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

        write!(
            output,
            "{}{} = {:#X}{}\n",
            indentation, name, value, comment
        )
    }

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()> {
        if !eof {
            write!(output, "\n")?;
        }

        Ok(())
    }
}
