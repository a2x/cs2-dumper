use std::fmt::{self, Write};

use heck::{AsPascalCase, AsSnakeCase};

use super::{slugify, CodeWriter, Formatter, OffsetMap};

impl CodeWriter for OffsetMap {
    fn write_cs(&self, fmt: &mut Formatter<'_>) -> fmt::Result {
        fmt.block("namespace CS2Dumper.Offsets", false, |fmt| {
            for (module_name, offsets) in self {
                writeln!(fmt, "// Module: {}", module_name)?;

                fmt.block(
                    &format!("public static class {}", AsPascalCase(slugify(module_name))),
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
        })
    }

    fn write_hpp(&self, fmt: &mut Formatter<'_>) -> fmt::Result {
        writeln!(fmt, "#pragma once\n")?;
        writeln!(fmt, "#include <cstddef>\n")?;

        fmt.block("namespace cs2_dumper", false, |fmt| {
            fmt.block("namespace offsets", false, |fmt| {
                for (module_name, offsets) in self {
                    writeln!(fmt, "// Module: {}", module_name)?;

                    fmt.block(
                        &format!("namespace {}", AsSnakeCase(slugify(module_name))),
                        false,
                        |fmt| {
                            for (name, value) in offsets {
                                writeln!(fmt, "constexpr std::ptrdiff_t {} = {:#X};", name, value)?;
                            }

                            Ok(())
                        },
                    )?;
                }

                Ok(())
            })
        })
    }

    fn write_json(&self, fmt: &mut Formatter<'_>) -> fmt::Result {
        fmt.write_str(&serde_json::to_string_pretty(self).expect("unable to serialize json"))
    }

    fn write_rs(&self, fmt: &mut Formatter<'_>) -> fmt::Result {
        writeln!(fmt, "#![allow(non_upper_case_globals, unused)]\n")?;

        fmt.block("pub mod cs2_dumper", false, |fmt| {
            fmt.block("pub mod offsets", false, |fmt| {
                for (module_name, offsets) in self {
                    writeln!(fmt, "// Module: {}", module_name)?;

                    fmt.block(
                        &format!("pub mod {}", AsSnakeCase(slugify(module_name))),
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
        })
    }
}
