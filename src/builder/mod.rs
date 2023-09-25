pub use std::io::{Result, Write};

pub use cpp_file_builder::CppBuilder;
pub use csharp_file_builder::CSharpBuilder;
pub use file_builder::FileBuilder;
pub use json_file_builder::JsonFileBuilder;
pub use rust_file_builder::RustFileBuilder;

pub mod cpp_file_builder;
pub mod csharp_file_builder;
pub mod file_builder;
pub mod json_file_builder;
pub mod rust_file_builder;

pub enum FileBuilderEnum {
    CppBuilder(CppBuilder),
    CSharpBuilder(CSharpBuilder),
    JsonFileBuilder(JsonFileBuilder),
    RustFileBuilder(RustFileBuilder),
}

impl FileBuilder for FileBuilderEnum {
    fn extension(&mut self) -> &str {
        match self {
            FileBuilderEnum::CppBuilder(builder) => builder.extension(),
            FileBuilderEnum::CSharpBuilder(builder) => builder.extension(),
            FileBuilderEnum::JsonFileBuilder(builder) => builder.extension(),
            FileBuilderEnum::RustFileBuilder(builder) => builder.extension(),
        }
    }

    fn write_top_level(&mut self, output: &mut dyn Write) -> Result<()> {
        match self {
            FileBuilderEnum::CppBuilder(builder) => builder.write_top_level(output),
            FileBuilderEnum::CSharpBuilder(builder) => builder.write_top_level(output),
            FileBuilderEnum::JsonFileBuilder(builder) => builder.write_top_level(output),
            FileBuilderEnum::RustFileBuilder(builder) => builder.write_top_level(output),
        }
    }

    fn write_namespace(&mut self, output: &mut dyn Write, name: &str) -> Result<()> {
        match self {
            FileBuilderEnum::CppBuilder(builder) => builder.write_namespace(output, name),
            FileBuilderEnum::CSharpBuilder(builder) => builder.write_namespace(output, name),
            FileBuilderEnum::JsonFileBuilder(builder) => builder.write_namespace(output, name),
            FileBuilderEnum::RustFileBuilder(builder) => builder.write_namespace(output, name),
        }
    }

    fn write_variable(&mut self, output: &mut dyn Write, name: &str, value: usize) -> Result<()> {
        match self {
            FileBuilderEnum::CppBuilder(builder) => builder.write_variable(output, name, value),
            FileBuilderEnum::CSharpBuilder(builder) => builder.write_variable(output, name, value),
            FileBuilderEnum::JsonFileBuilder(builder) => {
                builder.write_variable(output, name, value)
            }
            FileBuilderEnum::RustFileBuilder(builder) => {
                builder.write_variable(output, name, value)
            }
        }
    }

    fn write_closure(&mut self, output: &mut dyn Write, eof: bool) -> Result<()> {
        match self {
            FileBuilderEnum::CppBuilder(builder) => builder.write_closure(output, eof),
            FileBuilderEnum::CSharpBuilder(builder) => builder.write_closure(output, eof),
            FileBuilderEnum::JsonFileBuilder(builder) => builder.write_closure(output, eof),
            FileBuilderEnum::RustFileBuilder(builder) => builder.write_closure(output, eof),
        }
    }
}
