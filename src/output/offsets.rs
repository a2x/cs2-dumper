use std::fmt::Write;

use heck::{AsPascalCase, AsSnakeCase};

use super::{CodeGen, OffsetMap, Results};

use crate::error::Result;

impl CodeGen for OffsetMap {
    fn to_cs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            fmt.block("namespace CS2Dumper.Offsets", false, |fmt| {
                for (module_name, offsets) in self {
                    writeln!(fmt, "// Module: {}", module_name)?;

                    fmt.block(
                        &format!(
                            "public static class {}",
                            AsPascalCase(Self::sanitize_name(module_name))
                        ),
                        false,
                        |fmt| {
                            for (name, value) in offsets {
                                writeln!(fmt, "public const nint {} = {:#X};", name, value)?;
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

            fmt.block("namespace cs2_dumper", false, |fmt| {
                fmt.block("namespace offsets", false, |fmt| {
                    for (module_name, offsets) in self {
                        writeln!(fmt, "// Module: {}", module_name)?;

                        fmt.block(
                            &format!(
                                "namespace {}",
                                AsSnakeCase(Self::sanitize_name(module_name))
                            ),
                            false,
                            |fmt| {
                                for (name, value) in offsets {
                                    writeln!(
                                        fmt,
                                        "constexpr std::ptrdiff_t {} = {:#X};",
                                        name, value
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

    fn to_json(&self, _results: &Results, _indent_size: usize) -> Result<String> {
        serde_json::to_string_pretty(self).map_err(Into::into)
    }

    fn to_rs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            writeln!(
                fmt,
                "#![allow(non_upper_case_globals, non_camel_case_types, unused)]\n"
            )?;

            fmt.block("pub mod cs2_dumper", false, |fmt| {
                fmt.block("pub mod offsets", false, |fmt| {
                    for (module_name, offsets) in self {
                        writeln!(fmt, "// Module: {}", module_name)?;

                        fmt.block(
                            &format!("pub mod {}", AsSnakeCase(Self::sanitize_name(module_name))),
                            false,
                            |fmt| {
                                for (name, value) in offsets {
                                    writeln!(fmt, "pub const {}: usize = {:#X};", name, value)?;
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
