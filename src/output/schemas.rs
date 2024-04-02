use std::collections::BTreeMap;
use std::fmt::{self, Write};

use heck::{AsPascalCase, AsSnakeCase};

use serde_json::json;

use super::{CodeGen, Formatter, Results, SchemaMap};

use crate::analysis::ClassMetadata;
use crate::error::Result;

impl CodeGen for SchemaMap {
    fn to_cs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            fmt.block("namespace CS2Dumper.Schemas", false, |fmt| {
                for (module_name, (classes, enums)) in self {
                    // Skip empty modules.
                    if classes.is_empty() && enums.is_empty() {
                        continue;
                    }

                    writeln!(fmt, "// Module: {}", module_name)?;
                    writeln!(fmt, "// Classes count: {}", classes.len())?;
                    writeln!(fmt, "// Enums count: {}", enums.len())?;

                    fmt.block(
                        &format!(
                            "public static class {}",
                            AsPascalCase(Self::sanitize_name(module_name))
                        ),
                        false,
                        |fmt| {
                            for enum_ in enums {
                                let ty = match enum_.alignment {
                                    1 => "byte",
                                    2 => "ushort",
                                    4 => "uint",
                                    8 => "ulong",
                                    _ => continue,
                                };

                                writeln!(fmt, "// Alignment: {}", enum_.alignment)?;
                                writeln!(fmt, "// Members count: {}", enum_.size)?;

                                fmt.block(
                                    &format!(
                                        "public enum {} : {}",
                                        Self::sanitize_name(&enum_.name),
                                        ty
                                    ),
                                    false,
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
                                    .map(|parent| Self::sanitize_name(&parent.name))
                                    .unwrap_or_else(|| "None".to_string());

                                writeln!(fmt, "// Parent: {}", parent_name)?;
                                writeln!(fmt, "// Fields count: {}", class.fields.len())?;

                                if let Some(metadata) = &class.metadata {
                                    write_metadata(fmt, metadata)?;
                                }

                                fmt.block(
                                    &format!(
                                        "public static class {}",
                                        Self::sanitize_name(&class.name)
                                    ),
                                    false,
                                    |fmt| {
                                        for field in &class.fields {
                                            writeln!(
                                                fmt,
                                                "public const nint {} = {:#X}; // {}",
                                                field.name, field.offset, field.ty
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
            })?;

            Ok(())
        })
    }

    fn to_hpp(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            writeln!(fmt, "#pragma once\n")?;
            writeln!(fmt, "#include <cstddef>\n")?;

            fmt.block("namespace cs2_dumper", false, |fmt| {
                fmt.block("namespace schemas", false, |fmt| {
                    for (module_name, (classes, enums)) in self {
                        // Skip empty modules.
                        if classes.is_empty() && enums.is_empty() {
                            continue;
                        }

                        writeln!(fmt, "// Module: {}", module_name)?;
                        writeln!(fmt, "// Classes count: {}", classes.len())?;
                        writeln!(fmt, "// Enums count: {}", enums.len())?;

                        fmt.block(
                            &format!(
                                "namespace {}",
                                AsSnakeCase(Self::sanitize_name(module_name))
                            ),
                            false,
                            |fmt| {
                                for enum_ in enums {
                                    let ty = match enum_.alignment {
                                        1 => "uint8_t",
                                        2 => "uint16_t",
                                        4 => "uint32_t",
                                        8 => "uint64_t",
                                        _ => continue,
                                    };

                                    writeln!(fmt, "// Alignment: {}", enum_.alignment)?;
                                    writeln!(fmt, "// Members count: {}", enum_.size)?;

                                    fmt.block(
                                        &format!(
                                            "enum class {} : {}",
                                            Self::sanitize_name(&enum_.name),
                                            ty
                                        ),
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
                                        .map(|parent| Self::sanitize_name(&parent.name))
                                        .unwrap_or_else(|| "None".to_string());

                                    writeln!(fmt, "// Parent: {}", parent_name)?;
                                    writeln!(fmt, "// Fields count: {}", class.fields.len())?;

                                    if let Some(metadata) = &class.metadata {
                                        write_metadata(fmt, metadata)?;
                                    }

                                    fmt.block(
                                        &format!("namespace {}", Self::sanitize_name(&class.name)),
                                        false,
                                        |fmt| {
                                            for field in &class.fields {
                                                writeln!(
                                                    fmt,
                                                    "constexpr std::ptrdiff_t {} = {:#X}; // {}",
                                                    field.name, field.offset, field.ty
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
            })?;

            Ok(())
        })
    }

    fn to_json(&self, _results: &Results, _indent_size: usize) -> Result<String> {
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
                            .as_ref()
                            .unwrap_or(&vec![])
                            .iter()
                            .map(|metadata| match metadata {
                                ClassMetadata::NetworkChangeCallback { name } => json!({
                                    "type": "NetworkChangeCallback",
                                    "name": name,
                                }),
                                ClassMetadata::NetworkVarNames { name, ty } => json!({
                                    "type": "NetworkVarNames",
                                    "name": name,
                                    "ty": ty,
                                }),
                                ClassMetadata::Unknown { name } => json!({
                                    "type": "Unknown",
                                    "name": name,
                                }),
                            })
                            .collect();

                        (
                            Self::sanitize_name(&class.name),
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

                        let ty = match enum_.alignment {
                            1 => "uint8",
                            2 => "uint16",
                            4 => "uint32",
                            8 => "uint64",
                            _ => "unknown",
                        };

                        (
                            Self::sanitize_name(&enum_.name),
                            json!({
                                "alignment": enum_.alignment,
                                "type": ty,
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

        serde_json::to_string_pretty(&content).map_err(Into::into)
    }

    fn to_rs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            writeln!(
                fmt,
                "#![allow(non_upper_case_globals, non_camel_case_types, unused)]\n"
            )?;

            fmt.block("pub mod cs2_dumper", false, |fmt| {
                fmt.block("pub mod schemas", false, |fmt| {
                    for (module_name, (classes, enums)) in self {
                        // Skip empty modules.
                        if classes.is_empty() && enums.is_empty() {
                            continue;
                        }

                        writeln!(fmt, "// Module: {}", module_name)?;
                        writeln!(fmt, "// Classes count: {}", classes.len())?;
                        writeln!(fmt, "// Enums count: {}", enums.len())?;

                        fmt.block(
                            &format!("pub mod {}", AsSnakeCase(Self::sanitize_name(module_name))),
                            false,
                            |fmt| {
                                for enum_ in enums {
                                    let ty = match enum_.alignment {
                                        1 => "u8",
                                        2 => "u16",
                                        4 => "u32",
                                        8 => "u64",
                                        _ => continue,
                                    };

                                    writeln!(fmt, "// Alignment: {}", enum_.alignment)?;
                                    writeln!(fmt, "// Members count: {}", enum_.size)?;

                                    fmt.block(
                                        &format!(
                                            "#[repr({})]\npub enum {}",
                                            ty,
                                            Self::sanitize_name(&enum_.name),
                                        ),
                                        false,
                                        |fmt| {
                                            // TODO: Handle the case where multiple members share
                                            // the same value.
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
                                        .map(|parent| Self::sanitize_name(&parent.name))
                                        .unwrap_or_else(|| "None".to_string());

                                    writeln!(fmt, "// Parent: {}", parent_name)?;
                                    writeln!(fmt, "// Fields count: {}", class.fields.len())?;

                                    if let Some(metadata) = &class.metadata {
                                        write_metadata(fmt, metadata)?;
                                    }

                                    fmt.block(
                                        &format!("pub mod {}", Self::sanitize_name(&class.name)),
                                        false,
                                        |fmt| {
                                            for field in &class.fields {
                                                writeln!(
                                                    fmt,
                                                    "pub const {}: usize = {:#X}; // {}",
                                                    field.name, field.offset, field.ty
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
            })?;

            Ok(())
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
            ClassMetadata::NetworkVarNames { name, ty } => {
                writeln!(fmt, "// NetworkVarNames: {} ({})", name, ty)?;
            }
            ClassMetadata::Unknown { name } => {
                writeln!(fmt, "// {}", name)?;
            }
        }
    }

    Ok(())
}
