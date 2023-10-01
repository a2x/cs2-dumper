use std::io::{Result, Write};

use super::FileBuilder;

pub struct CppBuilder;

impl FileBuilder for CppBuilder {
    fn extension(&mut self) -> &str {
        "hpp"
    }

    fn write_top_level(&mut self, output: &mut dyn Write) -> Result<()> {
        write!(output, "#pragma once\n\n")?;
        write!(output, "#include <cstddef>\n\n")?;

        Ok(())
    }

    fn write_namespace(&mut self, output: &mut dyn Write, name: &str) -> Result<()> {
        write!(output, "namespace {} {{\n", name)?;

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
                "    constexpr std::ptrdiff_t {} = {:#X}; // {}\n",
                name, value, comment
            ),
            None => write!(
                output,
                "    constexpr std::ptrdiff_t {} = {:#X};\n",
                name, value
            ),
        }
    }

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()> {
        write!(output, "{}", if eof { "}" } else { "}\n\n" })?;

        Ok(())
    }
}
