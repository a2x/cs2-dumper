use std::env;
use std::fmt::Write;

use heck::{AsPascalCase, AsShoutySnakeCase, AsSnakeCase};

use super::{Button, CodeGen, Results};

use crate::error::Result;

impl CodeGen for Vec<Button> {
    fn to_cs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            fmt.block("namespace CS2Dumper", |fmt| {
                writeln!(fmt, "// Module: {}", get_module_name())?;

                fmt.block("public static class Buttons", |fmt| {
                    for button in self {
                        writeln!(
                            fmt,
                            "public const nint {} = {:#X};",
                            AsPascalCase(&button.name),
                            button.value
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

            fmt.block("namespace cs2_dumper", |fmt| {
                writeln!(fmt, "// Module: {}", get_module_name())?;

                fmt.block("namespace buttons", |fmt| {
                    for button in self {
                        writeln!(
                            fmt,
                            "constexpr std::ptrdiff_t {} = {:#X};",
                            AsSnakeCase(&button.name),
                            button.value
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
                writeln!(fmt, "// Module: {}", get_module_name())?;

                fmt.block("pub mod buttons", |fmt| {
                    for button in self {
                        writeln!(
                            fmt,
                            "pub const {}: usize = {:#X};",
                            AsShoutySnakeCase(&button.name),
                            button.value
                        )?;
                    }

                    Ok(())
                })
            })?;

            Ok(())
        })
    }
}

#[inline]
fn get_module_name() -> &'static str {
    match env::consts::OS {
        "linux" => "libclient.so",
        "windows" => "client.dll",
        _ => panic!("unsupported os"),
    }
}
