pub use cpp_file_builder::CppFileBuilder;
pub use csharp_file_builder::CSharpFileBuilder;
pub use file_builder::FileBuilder;
pub use json_file_builder::JsonFileBuilder;
pub use python_file_builder::PythonFileBuilder;
pub use rust_file_builder::RustFileBuilder;
pub use yaml_file_builder::YamlFileBuilder;

use std::io::{Result, Write};

pub mod cpp_file_builder;
pub mod csharp_file_builder;
pub mod file_builder;
pub mod json_file_builder;
pub mod python_file_builder;
pub mod rust_file_builder;
pub mod yaml_file_builder;

#[derive(Clone, Debug, PartialEq)]
pub enum FileBuilderEnum {
    CppFileBuilder(CppFileBuilder),
    CSharpFileBuilder(CSharpFileBuilder),
    JsonFileBuilder(JsonFileBuilder),
    PythonFileBuilder(PythonFileBuilder),
    RustFileBuilder(RustFileBuilder),
    YamlFileBuilder(YamlFileBuilder),
}

impl FileBuilder for FileBuilderEnum {
    fn extension(&mut self) -> &str {
        self.as_mut().extension()
    }

    fn write_top_level(&mut self, output: &mut dyn Write) -> Result<()> {
        self.as_mut().write_top_level(output)
    }

    fn write_namespace(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        comment: Option<&str>,
    ) -> Result<()> {
        self.as_mut().write_namespace(output, name, comment)
    }

    fn write_variable(
        &mut self,
        output: &mut dyn Write,
        name: &str,
        value: usize,
        comment: Option<&str>,
        indentation: Option<usize>,
    ) -> Result<()> {
        self.as_mut()
            .write_variable(output, name, value, comment, indentation)
    }

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()> {
        self.as_mut().write_closure(output, eof)
    }
}

impl FileBuilderEnum {
    fn as_mut(&mut self) -> &mut dyn FileBuilder {
        match self {
            FileBuilderEnum::CppFileBuilder(builder) => builder,
            FileBuilderEnum::CSharpFileBuilder(builder) => builder,
            FileBuilderEnum::JsonFileBuilder(builder) => builder,
            FileBuilderEnum::PythonFileBuilder(builder) => builder,
            FileBuilderEnum::RustFileBuilder(builder) => builder,
            FileBuilderEnum::YamlFileBuilder(builder) => builder,
        }
    }
}
