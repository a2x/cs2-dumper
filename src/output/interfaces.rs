use std::fmt::Write;

use heck::{AsPascalCase, AsShoutySnakeCase, AsSnakeCase};

use super::{format_module_name, CodeGen, InterfaceMap, Results};

use crate::error::Result;

impl CodeGen for InterfaceMap {
    fn to_cs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            fmt.block("namespace CS2Dumper.Interfaces", |fmt| {
                for (module_name, ifaces) in self {
                    writeln!(fmt, "// Module: {}", module_name)?;

                    fmt.block(
                        &format!(
                            "public static class {}",
                            AsPascalCase(format_module_name(module_name))
                        ),
                        |fmt| {
                            for iface in ifaces {
                                writeln!(
                                    fmt,
                                    "public const nint {} = {:#X};",
                                    AsPascalCase(&iface.name),
                                    iface.value
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
                fmt.block("namespace interfaces", |fmt| {
                    for (module_name, ifaces) in self {
                        writeln!(fmt, "// Module: {}", module_name)?;

                        fmt.block(
                            &format!("namespace {}", AsSnakeCase(format_module_name(module_name))),
                            |fmt| {
                                for iface in ifaces {
                                    writeln!(
                                        fmt,
                                        "constexpr std::ptrdiff_t {} = {:#X};",
                                        AsSnakeCase(&iface.name),
                                        iface.value
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
                fmt.block("pub mod interfaces", |fmt| {
                    for (module_name, ifaces) in self {
                        writeln!(fmt, "// Module: {}", module_name)?;

                        fmt.block(
                            &format!("pub mod {}", AsSnakeCase(format_module_name(module_name))),
                            |fmt| {
                                for iface in ifaces {
                                    writeln!(
                                        fmt,
                                        "pub const {}: usize = {:#X};",
                                        AsShoutySnakeCase(&iface.name),
                                        iface.value
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
