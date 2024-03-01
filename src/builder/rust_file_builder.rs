use super::FileBuilder;

use std::io::{Result, Write};

#[derive(Clone, Debug, Default, PartialEq)]
pub struct RustFileBuilder;

impl FileBuilder for RustFileBuilder {
    fn extension(&mut self) -> &str {
        "rs"
    }

    fn write_top_level(&mut self, output: &mut dyn Write) -> Result<()> {
        write!(
            output,
            "#![allow(non_snake_case, non_upper_case_globals)]\n\n"
        )
    }

    fn write_namespace(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        comment: Option<&str>,
    ) -> Result<()> {
        let comment = comment.map_or(String::new(), |c| format!(" // {}", c));

        write!(output, "pub mod {} {{{}\n", name, comment)
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
            "{}pub const {}: usize = {:#X};{}\n",
            indentation, name, value, comment
        )
    }

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()> {
        write!(output, "{}", if eof { "}" } else { "}\n\n" })
    }
}
