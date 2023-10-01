use std::io::{Result, Write};

use super::FileBuilder;

pub struct CSharpBuilder;

impl FileBuilder for CSharpBuilder {
    fn extension(&mut self) -> &str {
        "cs"
    }

    fn write_top_level(&mut self, _output: &mut dyn Write) -> Result<()> {
        Ok(())
    }

    fn write_namespace(&mut self, output: &mut dyn Write, name: &str) -> Result<()> {
        write!(output, "public static class {} {{\n", name)?;

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
