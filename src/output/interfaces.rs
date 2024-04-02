use std::collections::BTreeMap;
use std::fmt::Write;

use heck::{AsPascalCase, AsSnakeCase};

use super::{CodeGen, InterfaceMap, Results};

use crate::error::Result;

impl CodeGen for InterfaceMap {
    fn to_cs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            fmt.block("namespace CS2Dumper.Interfaces", false, |fmt| {
                for (module_name, ifaces) in self {
                    writeln!(fmt, "// Module: {}", module_name)?;

                    fmt.block(
                        &format!(
                            "public static class {}",
                            AsPascalCase(Self::sanitize_name(module_name))
                        ),
                        false,
                        |fmt| {
                            for iface in ifaces {
                                writeln!(
                                    fmt,
                                    "public const nint {} = {:#X};",
                                    iface.name, iface.value
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

            fmt.block("namespace cs2_dumper", false, |fmt| {
                fmt.block("namespace interfaces", false, |fmt| {
                    for (module_name, ifaces) in self {
                        writeln!(fmt, "// Module: {}", module_name)?;

                        fmt.block(
                            &format!(
                                "namespace {}",
                                AsSnakeCase(Self::sanitize_name(module_name))
                            ),
                            false,
                            |fmt| {
                                for iface in ifaces {
                                    writeln!(
                                        fmt,
                                        "constexpr std::ptrdiff_t {} = {:#X};",
                                        iface.name, iface.value
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
        let content: BTreeMap<_, _> = self
            .iter()
            .map(|(module_name, ifaces)| {
                let ifaces: BTreeMap<_, _> = ifaces
                    .iter()
                    .map(|iface| (&iface.name, iface.value))
                    .collect();

                (module_name, ifaces)
            })
            .collect();

        serde_json::to_string_pretty(&content).map_err(Into::into)
    }

    fn to_rs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            writeln!(
                fmt,
                "#![allow(non_upper_case_globals, non_camel_case_types, unused)]\n"
            )?;

            fmt.block("pub mod cs2_dumper", false, |fmt| {
                fmt.block("pub mod interfaces", false, |fmt| {
                    for (module_name, ifaces) in self {
                        writeln!(fmt, "// Module: {}", module_name)?;

                        fmt.block(
                            &format!("pub mod {}", AsSnakeCase(Self::sanitize_name(module_name))),
                            false,
                            |fmt| {
                                for iface in ifaces {
                                    writeln!(
                                        fmt,
                                        "pub const {}: usize = {:#X};",
                                        iface.name, iface.value
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
