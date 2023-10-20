use std::io::{Result, Write};

/// Represents a file builder.
pub trait FileBuilder {
    /// Returns the file extension.
    fn extension(&mut self) -> &str;

    /// Writes the top level of the file.
    fn write_top_level(&mut self, output: &mut dyn Write) -> Result<()>;

    /// Writes a namespace.
    fn write_namespace(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        comment: Option<&str>,
    ) -> Result<()>;

    /// Writes a variable.
    fn write_variable(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        value: usize,
        comment: Option<&str>,
    ) -> Result<()>;

    /// Writes a closure.
    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()>;
}
