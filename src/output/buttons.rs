use std::collections::BTreeMap;
use std::fmt::Write;

use super::{Button, CodeGen, Results};

use crate::error::Result;

impl CodeGen for Vec<Button> {
    fn to_cs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            fmt.block("namespace CS2Dumper", false, |fmt| {
                writeln!(fmt, "// Module: client.dll")?;

                fmt.block("public static class Buttons", false, |fmt| {
                    for button in self {
                        writeln!(
                            fmt,
                            "public const nint {} = {:#X};",
                            button.name, button.value
                        )?;
                    }

                    Ok(())
                })
            })?;

            Ok(())
        })
    }

    fn to_hpp(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            writeln!(fmt, "#pragma once\n")?;
            writeln!(fmt, "#include <cstddef>\n")?;

            fmt.block("namespace cs2_dumper", false, |fmt| {
                writeln!(fmt, "// Module: client.dll")?;

                fmt.block("namespace buttons", false, |fmt| {
                    for button in self {
                        writeln!(
                            fmt,
                            "constexpr std::ptrdiff_t {} = {:#X};",
                            button.name, button.value
                        )?;
                    }

                    Ok(())
                })
            })?;

            Ok(())
        })
    }

    fn to_json(&self, _results: &Results, _indent_size: usize) -> Result<String> {
        let content = {
            let buttons: BTreeMap<_, _> = self
                .iter()
                .map(|button| (button.name.as_str(), button.value))
                .collect();

            BTreeMap::from_iter([("client.dll", buttons)])
        };

        serde_json::to_string_pretty(&content).map_err(Into::into)
    }

    fn to_rs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            writeln!(
                fmt,
                "#![allow(non_upper_case_globals, non_camel_case_types, unused)]\n"
            )?;

            fmt.block("pub mod cs2_dumper", false, |fmt| {
                writeln!(fmt, "// Module: client.dll")?;

                fmt.block("pub mod buttons", false, |fmt| {
                    for button in self {
                        writeln!(
                            fmt,
                            "pub const {}: usize = {:#X};",
                            button.name, button.value
                        )?;
                    }

                    Ok(())
                })
            })?;

            Ok(())
        })
    }
}
