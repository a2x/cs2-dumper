use std::io::{Result, Write};

use super::FileBuilder;

/// Represents a C# file builder.
#[derive(Debug, PartialEq)]
pub struct CSharpFileBuilder;

impl FileBuilder for CSharpFileBuilder {
    fn extension(&mut self) -> &str {
        "cs"
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
        if let Some(comment) = comment {
            write!(output, "public static class {} {{ // {}\n", name, comment)?;
        } else {
            write!(output, "public static class {} {{\n", name)?;
        }

        Ok(())
    }

    fn write_variable(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        value: usize,
        comment: Option<&str>,
    ) -> Result<()> {
        match comment {
            Some(comment) => write!(
                output,
                "    public const nint {} = {:#X}; // {}\n",
                name, value, comment
            ),
            None => write!(output, "    public const nint {} = {:#X};\n", name, value),
        }
    }

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()> {
        write!(output, "{}", if eof { "}" } else { "}\n\n" })?;

        Ok(())
    }
}
