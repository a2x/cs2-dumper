use std::io::{Result, Write};

/// A trait that defines the file builder operations.
pub trait FileBuilder {
    /// Returns the extension of the file.
    ///
    /// # Arguments
    ///
    /// * `&mut self` - A mutable reference to the `FileBuilder` struct.
    ///
    /// # Returns
    ///
    /// * `&str` - A string slice containing the extension of the file.
    fn extension(&mut self) -> &str;

    /// Writes to the top level of the file. The output destination is `output`.
    ///
    /// # Arguments
    ///
    /// * `&mut self` - A mutable reference to the `FileBuilder` struct.
    /// * `output` - An object implementing Write trait where the top level will be written.
    ///
    /// # Returns
    ///
    /// * `Result<()>` - A generic Result type indicating the operations outcome.
    fn write_top_level(&mut self, output: &mut dyn Write) -> Result<()>;

    /// Writes a namespace to the output.
    ///
    /// # Arguments
    ///
    /// * `&mut self` - A mutable reference to the `FileBuilder` struct.
    /// * `output` - An object implementing Write trait where the namespace will be written.
    /// * `name` - The name of the namespace.
    /// * `comment` - An optional comment. If present, this comment will be included in the output.
    ///
    /// # Returns
    ///
    /// * `Result<()>` - A generic Result type indicating the operations outcome.
    fn write_namespace(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        comment: Option<&str>,
    ) -> Result<()>;

    /// Writes a variable to the output.
    ///
    /// # Arguments
    ///
    /// * `&mut self` - A mutable reference to the `FileBuilder` struct.
    /// * `output` - An object implementing Write trait where the variable will be written.
    /// * `name` - The name of the variable.
    /// * `value` - The value of the variable.
    /// * `comment` - An optional comment. If present, this comment will be included in the output.
    /// * `indentation` - An optional indentation value. If present, the variable will be written with the specified indentation.
    ///
    /// # Returns
    ///
    /// * `Result<()>` - A generic Result type indicating the operations outcome.
    fn write_variable(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        value: usize,
        comment: Option<&str>,
        indentation: Option<usize>,
    ) -> Result<()>;

    /// Writes a closure to the output.
    ///
    /// # Arguments
    ///
    /// * `&mut self` - A mutable reference to the `FileBuilder` struct.
    /// * `output` - An object implementing Write trait where the closure will be written.
    /// * `eof` - A boolean value, if true, indicates that this is the last element to write to the output.
    ///
    /// # Returns
    ///
    /// * `Result<()>` - A generic Result type indicating the operations outcome.
    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()>;
}
