use std::io::{Result, Write};

pub trait FileBuilder {
    fn extension(&mut self) -> &str;

    fn write_top_level(&mut self, output: &mut dyn Write) -> Result<()>;

    fn write_namespace(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        comment: Option<&str>,
    ) -> Result<()>;

    fn write_variable(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        value: usize,
        comment: Option<&str>,
        indentation: Option<usize>,
    ) -> Result<()>;

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()>;
}
