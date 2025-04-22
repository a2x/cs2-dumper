use std::collections::BTreeMap;
use std::fmt::{self, Write};

use heck::{AsPascalCase, AsSnakeCase};

use super::{CodeWriter, Formatter, InterfaceMap, slugify};

impl CodeWriter for InterfaceMap {
    fn write_cs(&self, fmt: &mut Formatter<'_>) -> fmt::Result {
        fmt.block("namespace CS2Dumper.Interfaces", false, |fmt| {
            for (module_name, ifaces) in self {
                writeln!(fmt, "// Module: {}", module_name)?;

                fmt.block(
                    &format!("public static class {}", AsPascalCase(slugify(module_name))),
                    false,
                    |fmt| {
                        for (name, value) in ifaces {
                            if *value > i32::MAX as u64 {
                                writeln!(
                                    fmt,
                                    "public static readonly nint {} = unchecked((nint){:#X});",
                                    name, value
                                )?;
                            } else {
                                writeln!(fmt, "public const nint {} = {:#X};", name, value)?;
                            };
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
            fmt.block("namespace interfaces", false, |fmt| {
                for (module_name, ifaces) in self {
                    writeln!(fmt, "// Module: {}", module_name)?;

                    fmt.block(
                        &format!("namespace {}", AsSnakeCase(slugify(module_name))),
                        false,
                        |fmt| {
                            for (name, value) in ifaces {
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
        let content: BTreeMap<_, _> = self
            .iter()
            .map(|(module_name, ifaces)| {
                let ifaces: BTreeMap<_, _> =
                    ifaces.iter().map(|(name, value)| (name, value)).collect();

                (module_name, ifaces)
            })
            .collect();

        fmt.write_str(&serde_json::to_string_pretty(&content).unwrap())
    }

    fn write_rs(&self, fmt: &mut Formatter<'_>) -> fmt::Result {
        writeln!(fmt, "#![allow(non_upper_case_globals, unused)]\n")?;

        fmt.block("pub mod cs2_dumper", false, |fmt| {
            fmt.block("pub mod interfaces", false, |fmt| {
                for (module_name, ifaces) in self {
                    writeln!(fmt, "// Module: {}", module_name)?;

                    fmt.block(
                        &format!("pub mod {}", AsSnakeCase(slugify(module_name))),
                        false,
                        |fmt| {
                            for (name, value) in ifaces {
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
