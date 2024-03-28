use std::fmt::Write;

use heck::{AsPascalCase, AsShoutySnakeCase, AsSnakeCase};

use super::{format_module_name, CodeGen, OffsetMap, Results};

use crate::error::Result;

impl CodeGen for OffsetMap {
    fn to_cs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            fmt.block("namespace CS2Dumper.Offsets", |fmt| {
                for (module_name, offsets) in self {
                    writeln!(fmt, "// Module: {}", module_name)?;

                    fmt.block(
                        &format!(
                            "public static class {}",
                            AsPascalCase(format_module_name(module_name))
                        ),
                        |fmt| {
                            for offset in offsets {
                                writeln!(
                                    fmt,
                                    "public const nint {} = {:#X};",
                                    AsPascalCase(&offset.name),
                                    offset.value
                                )?;
                            }

                            Ok(())
                        },
                    )?;
                }

                Ok(())
            })?;

            Ok(())
        })
    }

    fn to_hpp(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            writeln!(fmt, "#pragma once\n")?;
            writeln!(fmt, "#include <cstddef>\n")?;

            fmt.block("namespace cs2_dumper", |fmt| {
                fmt.block("namespace offsets", |fmt| {
                    for (module_name, offsets) in self {
                        writeln!(fmt, "// Module: {}", module_name)?;

                        fmt.block(
                            &format!("namespace {}", AsSnakeCase(format_module_name(module_name))),
                            |fmt| {
                                for offset in offsets {
                                    writeln!(
                                        fmt,
                                        "constexpr std::ptrdiff_t {} = {:#X};",
                                        AsSnakeCase(&offset.name),
                                        offset.value
                                    )?;
                                }

                                Ok(())
                            },
                        )?;
                    }

                    Ok(())
                })
            })?;

            Ok(())
        })
    }

    fn to_rs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            fmt.block("pub mod cs2_dumper", |fmt| {
                fmt.block("pub mod offsets", |fmt| {
                    for (module_name, offsets) in self {
                        writeln!(fmt, "// Module: {}", module_name)?;

                        fmt.block(
                            &format!("pub mod {}", AsSnakeCase(format_module_name(module_name))),
                            |fmt| {
                                for offset in offsets {
                                    writeln!(
                                        fmt,
                                        "pub const {}: usize = {:#X};",
                                        AsShoutySnakeCase(&offset.name),
                                        offset.value
                                    )?;
                                }

                                Ok(())
                            },
                        )?;
                    }

                    Ok(())
                })
            })?;

            Ok(())
        })
    }
}
