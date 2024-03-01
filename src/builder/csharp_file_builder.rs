use std::io::{Result, Write};

use super::FileBuilder;

#[derive(Clone, Debug, PartialEq)]
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
        let comment = comment.map_or(String::new(), |c| format!(" // {}", c));

        write!(output, "public static class {} {{{}\n", name, comment)
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

        let comment = comment.map_or(String::new(), |c| format!(" // {}", c));

        write!(
            output,
            "{}public const nint {} = {:#X};{}\n",
            indentation, name, value, comment
        )
    }

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()> {
        write!(output, "{}", if eof { "}" } else { "}\n\n" })
    }
}
