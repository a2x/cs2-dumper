use std::io::{Result, Write};

use super::FileBuilder;

pub struct RustFileBuilder;

impl FileBuilder for RustFileBuilder {
    fn extension(&mut self) -> &str {
        "rs"
    }

    fn write_top_level(&mut self, output: &mut dyn Write) -> Result<()> {
        write!(
            output,
            "#![allow(non_snake_case, non_upper_case_globals)]\n\n"
        )?;

        Ok(())
    }

    fn write_namespace(&mut self, output: &mut dyn Write, name: &str) -> Result<()> {
        write!(output, "pub mod {} {{\n", name)?;

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
                "    pub const {}: usize = {:#X}; // {}\n",
                name, value, comment
            ),
            None => write!(output, "    pub const {}: usize = {:#X};\n", name, value),
        }
    }

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()> {
        write!(output, "{}", if eof { "}" } else { "}\n\n" })?;

        Ok(())
    }
}
