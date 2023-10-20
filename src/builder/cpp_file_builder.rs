use std::io::{Result, Write};

use super::FileBuilder;

/// Represents a C++ header file builder.
#[derive(Debug, PartialEq)]
pub struct CppFileBuilder;

impl FileBuilder for CppFileBuilder {
    fn extension(&mut self) -> &str {
        "hpp"
    }

    fn write_top_level(&mut self, output: &mut dyn Write) -> Result<()> {
        write!(output, "#pragma once\n\n")?;
        write!(output, "#include <cstddef>\n\n")?;

        Ok(())
    }

    fn write_namespace(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        comment: Option<&str>,
    ) -> Result<()> {
        if let Some(comment) = comment {
            write!(output, "namespace {} {{ // {}\n", name, comment)?;
        } else {
            write!(output, "namespace {} {{\n", name)?;
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
