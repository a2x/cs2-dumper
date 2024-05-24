use std::collections::BTreeMap;
use std::fmt::{self, Write};

use super::{Button, CodeWriter, Formatter};

impl CodeWriter for Vec<Button> {
    fn write_cs(&self, fmt: &mut Formatter<'_>) -> fmt::Result {
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
        })
    }

    fn write_hpp(&self, fmt: &mut Formatter<'_>) -> fmt::Result {
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
        })
    }

    fn write_json(&self, fmt: &mut Formatter<'_>) -> fmt::Result {
        let content = {
            let buttons: BTreeMap<_, _> = self
                .iter()
                .map(|button| (button.name.as_str(), button.value))
                .collect();

            BTreeMap::from_iter([("client.dll", buttons)])
        };

        fmt.write_str(&serde_json::to_string_pretty(&content).expect("unable to serialize json"))
    }

    fn write_rs(&self, fmt: &mut Formatter<'_>) -> fmt::Result {
        writeln!(fmt, "#![allow(non_upper_case_globals, unused)]\n")?;

        fmt.block("pub mod cs2_dumper", false, |fmt| {
            writeln!(fmt, "// Module: client.dll")?;

            fmt.block("pub mod buttons", false, |fmt| {
                for button in self {
                    let mut name = button.name.clone();

                    if name == "use" {
                        name = format!("r#{}", name);
                    }

                    writeln!(fmt, "pub const {}: usize = {:#X};", name, button.value)?;
                }

                Ok(())
            })
        })
    }
}
