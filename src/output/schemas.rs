use std::collections::{BTreeMap, HashSet};
use std::fmt::{self, Write};

use heck::{AsPascalCase, AsSnakeCase};

use serde_json::json;

use super::{CodeWriter, Formatter, SchemaMap, slugify};

use crate::analysis::ClassMetadata;

impl CodeWriter for SchemaMap {
    fn write_cs(&self, fmt: &mut Formatter<'_>) -> fmt::Result {
        fmt.block("namespace CS2Dumper.Schemas", false, |fmt| {
            for (module_name, (classes, enums)) in self {
                writeln!(fmt, "// Module: {}", module_name)?;
                writeln!(fmt, "// Class count: {}", classes.len())?;
                writeln!(fmt, "// Enum count: {}", enums.len())?;

                fmt.block(
                    &format!("public static class {}", AsPascalCase(slugify(module_name))),
                    false,
                    |fmt| {
                        for enum_ in enums {
                            let type_name = match enum_.alignment {
                                1 => "byte",
                                2 => "ushort",
                                4 => "uint",
                                8 => "ulong",
                                _ => continue,
                            };

                            writeln!(fmt, "// Alignment: {}", enum_.alignment)?;
                            writeln!(fmt, "// Member count: {}", enum_.size)?;

                            fmt.block(
                                &format!("public enum {} : {}", slugify(&enum_.name), type_name),
                                false,
                                |fmt| {
                                    let members = enum_
                                        .members
                                        .iter()
                                        .map(|member| {
                                            let hex = if member.value < 0
                                                || member.value > i32::MAX as i64
                                            {
                                                format!(
                                                    "unchecked(({}){})",
                                                    type_name, member.value
                                                )
                                            } else {
                                                format!("{:#X}", member.value)
                                            };
                                            format!("{} = {}", member.name, hex)
                                        })
                                        .collect::<Vec<_>>()
                                        .join(",\n");

                                    writeln!(fmt, "{}", members)
                                },
                            )?;
                        }

                        for class in classes {
                            let parent_name = class
                                .parent
                                .as_ref()
                                .map(|parent| slugify(&parent.name))
                                .unwrap_or_else(|| String::from("None"));

                            writeln!(fmt, "// Parent: {}", parent_name)?;
                            writeln!(fmt, "// Field count: {}", class.fields.len())?;

                            write_metadata(fmt, &class.metadata)?;

                            fmt.block(
                                &format!("public static class {}", slugify(&class.name)),
                                false,
                                |fmt| {
                                    for field in &class.fields {
                                        writeln!(
                                            fmt,
                                            "public const nint {} = {:#X}; // {}",
                                            field.name, field.offset, field.type_name
                                        )?;
                                    }

                                    Ok(())
                                },
                            )?;
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
            fmt.block("namespace schemas", false, |fmt| {
                for (module_name, (classes, enums)) in self {
                    writeln!(fmt, "// Module: {}", module_name)?;
                    writeln!(fmt, "// Class count: {}", classes.len())?;
                    writeln!(fmt, "// Enum count: {}", enums.len())?;

                    fmt.block(
                        &format!("namespace {}", AsSnakeCase(slugify(module_name))),
                        false,
                        |fmt| {
                            for enum_ in enums {
                                let type_name = match enum_.alignment {
                                    1 => "uint8_t",
                                    2 => "uint16_t",
                                    4 => "uint32_t",
                                    8 => "uint64_t",
                                    _ => continue,
                                };

                                writeln!(fmt, "// Alignment: {}", enum_.alignment)?;
                                writeln!(fmt, "// Member count: {}", enum_.size)?;

                                fmt.block(
                                    &format!("enum class {} : {}", slugify(&enum_.name), type_name),
                                    true,
                                    |fmt| {
                                        let members = enum_
                                            .members
                                            .iter()
                                            .map(|member| {
                                                format!("{} = {:#X}", member.name, member.value)
                                            })
                                            .collect::<Vec<_>>()
                                            .join(",\n");

                                        writeln!(fmt, "{}", members)
                                    },
                                )?;
                            }

                            for class in classes {
                                let parent_name = class
                                    .parent
                                    .as_ref()
                                    .map(|parent| slugify(&parent.name))
                                    .unwrap_or_else(|| String::from("None"));

                                writeln!(fmt, "// Parent: {}", parent_name)?;
                                writeln!(fmt, "// Field count: {}", class.fields.len())?;

                                write_metadata(fmt, &class.metadata)?;

                                fmt.block(
                                    &format!("namespace {}", slugify(&class.name)),
                                    false,
                                    |fmt| {
                                        for field in &class.fields {
                                            writeln!(
                                                fmt,
                                                "constexpr std::ptrdiff_t {} = {:#X}; // {}",
                                                field.name, field.offset, field.type_name
                                            )?;
                                        }

                                        Ok(())
                                    },
                                )?;
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
            .map(|(module_name, (classes, enums))| {
                let classes: BTreeMap<_, _> = classes
                    .iter()
                    .map(|class| {
                        let fields: BTreeMap<_, _> = class
                            .fields
                            .iter()
                            .map(|field| (&field.name, field.offset))
                            .collect();

                        let metadata: Vec<_> = class
                            .metadata
                            .iter()
                            .map(|metadata| match metadata {
                                ClassMetadata::NetworkChangeCallback { name } => json!({
                                    "type": "NetworkChangeCallback",
                                    "name": name,
                                }),
                                ClassMetadata::NetworkVarNames { name, type_name } => json!({
                                    "type": "NetworkVarNames",
                                    "name": name,
                                    "type_name": type_name,
                                }),
                                ClassMetadata::Unknown { name } => json!({
                                    "type": "Unknown",
                                    "name": name,
                                }),
                            })
                            .collect();

                        (
                            slugify(&class.name),
                            json!({
                                "parent": class.parent.as_ref().map(|parent| &parent.name),
                                "fields": fields,
                                "metadata": metadata
                            }),
                        )
                    })
                    .collect();

                let enums: BTreeMap<_, _> = enums
                    .iter()
                    .map(|enum_| {
                        let members: BTreeMap<_, _> = enum_
                            .members
                            .iter()
                            .map(|member| (&member.name, member.value))
                            .collect();

                        let type_name = match enum_.alignment {
                            1 => "uint8",
                            2 => "uint16",
                            4 => "uint32",
                            8 => "uint64",
                            _ => "unknown",
                        };

                        (
                            slugify(&enum_.name),
                            json!({
                                "alignment": enum_.alignment,
                                "type": type_name,
                                "members": members,
                            }),
                        )
                    })
                    .collect();

                (
                    module_name,
                    json!({
                        "classes": classes,
                        "enums": enums,
                    }),
                )
            })
            .collect();

        fmt.write_str(&serde_json::to_string_pretty(&content).unwrap())
    }

    fn write_rs(&self, fmt: &mut Formatter<'_>) -> fmt::Result {
        writeln!(
            fmt,
            "#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]\n"
        )?;

        fmt.block("pub mod cs2_dumper", false, |fmt| {
            fmt.block("pub mod schemas", false, |fmt| {
                for (module_name, (classes, enums)) in self {
                    writeln!(fmt, "// Module: {}", module_name)?;
                    writeln!(fmt, "// Class count: {}", classes.len())?;
                    writeln!(fmt, "// Enum count: {}", enums.len())?;

                    fmt.block(
                        &format!("pub mod {}", AsSnakeCase(slugify(module_name))),
                        false,
                        |fmt| {
                            for enum_ in enums {
                                let type_name = match enum_.alignment {
                                    1 => "u8",
                                    2 => "u16",
                                    4 => "u32",
                                    8 => "u64",
                                    _ => continue,
                                };

                                writeln!(fmt, "// Alignment: {}", enum_.alignment)?;
                                writeln!(fmt, "// Member count: {}", enum_.size)?;

                                fmt.block(
                                    &format!(
                                        "#[repr({})]\npub enum {}",
                                        type_name,
                                        slugify(&enum_.name),
                                    ),
                                    false,
                                    |fmt| {
                                        let mut used_values = HashSet::new();

                                        let members = enum_
                                            .members
                                            .iter()
                                            .filter_map(|member| {
                                                // Filter out duplicate values.
                                                if used_values.insert(member.value) {
                                                    let value = if member.value == -1 {
                                                        format!("{}::MAX", type_name)
                                                    } else {
                                                        format!("{:#X}", member.value)
                                                    };

                                                    Some(format!("{} = {}", member.name, value))
                                                } else {
                                                    None
                                                }
                                            })
                                            .collect::<Vec<_>>()
                                            .join(",\n");

                                        writeln!(fmt, "{}", members)
                                    },
                                )?;
                            }

                            for class in classes {
                                let parent_name = class
                                    .parent
                                    .as_ref()
                                    .map(|parent| slugify(&parent.name))
                                    .unwrap_or_else(|| String::from("None"));

                                writeln!(fmt, "// Parent: {}", parent_name)?;
                                writeln!(fmt, "// Field count: {}", class.fields.len())?;

                                write_metadata(fmt, &class.metadata)?;

                                fmt.block(
                                    &format!("pub mod {}", slugify(&class.name)),
                                    false,
                                    |fmt| {
                                        for field in &class.fields {
                                            writeln!(
                                                fmt,
                                                "pub const {}: usize = {:#X}; // {}",
                                                field.name, field.offset, field.type_name
                                            )?;
                                        }

                                        Ok(())
                                    },
                                )?;
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

fn write_metadata(fmt: &mut Formatter<'_>, metadata: &[ClassMetadata]) -> fmt::Result {
    if metadata.is_empty() {
        return Ok(());
    }

    writeln!(fmt, "//")?;
    writeln!(fmt, "// Metadata:")?;

    for metadata in metadata {
        match metadata {
            ClassMetadata::NetworkChangeCallback { name } => {
                writeln!(fmt, "// NetworkChangeCallback: {}", name)?;
            }
            ClassMetadata::NetworkVarNames { name, type_name } => {
                writeln!(fmt, "// NetworkVarNames: {} ({})", name, type_name)?;
            }
            ClassMetadata::Unknown { name } => {
                writeln!(fmt, "// {}", name)?;
            }
        }
    }

    Ok(())
}
