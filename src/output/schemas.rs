use std::collections::BTreeMap;
use std::fmt::{self, Write};

use heck::{AsPascalCase, AsSnakeCase};

use serde_json::json;

use super::{format_module_name, sanitize_name, CodeGen, Formatter, Results, SchemaMap};

use crate::analysis::ClassMetadata;
use crate::error::Result;

impl CodeGen for SchemaMap {
    fn to_cs(&self, results: &Results, indent_size: usize) -> Result<String> {
        self.write_content(results, indent_size, |fmt| {
            fmt.block("namespace CS2Dumper.Schemas", |fmt| {
                for (module_name, (classes, enums)) in self {
                    writeln!(fmt, "// Module: {}", module_name)?;
                    writeln!(fmt, "// Classes count: {}", classes.len())?;
                    writeln!(fmt, "// Enums count: {}", enums.len())?;

                    fmt.block(
                        &format!(
                            "public static class {}",
                            AsPascalCase(format_module_name(module_name))
                        ),
                        |fmt| {
                            for enum_ in enums {
                                let ty = match enum_.ty.as_str() {
                                    "int8" => "sbyte",
                                    "int16" => "short",
                                    "int32" => "int",
                                    "int64" => "long",
                                    _ => continue,
                                };

                                writeln!(fmt, "// Alignment: {}", enum_.alignment)?;
                                writeln!(fmt, "// Members count: {}", enum_.size)?;

                                fmt.block(
                                    &format!("public enum {} : {}", sanitize_name(&enum_.name), ty),
                                    |fmt| {
                                        let members: Vec<_> = enum_
                                            .members
                                            .iter()
                                            .map(|member| {
                                                format!("{} = {}", member.name, member.value)
                                            })
                                            .collect()
                                            .join(",\n");

                                        writeln!(fmt, "{}", members)
                                    },
                                )?;
                            }

                            for class in classes {
                                let parent_name = class
                                    .parent
                                    .as_ref()
                                    .map(|parent| format!("{}", sanitize_name(&parent.name)))
                                    .unwrap_or_else(|| "None".to_string());

                                writeln!(fmt, "// Parent: {}", parent_name)?;
                                writeln!(fmt, "// Fields count: {}", class.fields.len())?;

                                write_metadata(fmt, &class.metadata)?;

                                fmt.block(
                                    &format!("public static class {}", sanitize_name(&class.name)),
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

            fmt.block("namespace cs2_dumper", |fmt| {
                fmt.block("namespace schemas", |fmt| {
                    for (module_name, (classes, enums)) in self {
                        writeln!(fmt, "// Module: {}", module_name)?;
                        writeln!(fmt, "// Classes count: {}", classes.len())?;
                        writeln!(fmt, "// Enums count: {}", enums.len())?;

                        fmt.block(
                            &format!("namespace {}", AsSnakeCase(format_module_name(module_name))),
                            |fmt| {
                                for enum_ in enums {
                                    let ty = match enum_.ty.as_str() {
                                        "int8" => "int8_t",
                                        "int16" => "int16_t",
                                        "int32" => "int32_t",
                                        "int64" => "int64_t",
                                        _ => continue,
                                    };

                                    writeln!(fmt, "// Alignment: {}", enum_.alignment)?;
                                    writeln!(fmt, "// Members count: {}", enum_.size)?;

                                    fmt.block(
                                        &format!(
                                            "enum class {} : {}",
                                            sanitize_name(&enum_.name),
                                            ty
                                        ),
                                        |fmt| {
                                            let members: Vec<_> = enum_
                                                .members
                                                .iter()
                                                .map(|member| {
                                                    format!("{} = {}", member.name, member.value)
                                                })
                                                .collect()
                                                .join(",\n");

                                            writeln!(fmt, "{}", members)
                                        },
                                    )?;
                                }

                                for class in classes {
                                    let parent_name = class
                                        .parent
                                        .as_ref()
                                        .map(|parent| format!("{}", sanitize_name(&parent.name)))
                                        .unwrap_or_else(|| "None".to_string());

                                    writeln!(fmt, "// Parent: {}", parent_name)?;
                                    writeln!(fmt, "// Fields count: {}", class.fields.len())?;

                                    write_metadata(fmt, &class.metadata)?;

                                    fmt.block(
                                        &format!("namespace {}", sanitize_name(&class.name)),
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
                            sanitize_name(&class.name),
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

                        (
                            sanitize_name(&enum_.name),
                            json!({
                                "alignment": enum_.alignment,
                                "type": enum_.ty,
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
            writeln!(fmt, "#![allow(non_upper_case_globals, unused)]\n")?;

            fmt.block("pub mod cs2_dumper", |fmt| {
                fmt.block("pub mod schemas", |fmt| {
                    for (module_name, (classes, enums)) in self {
                        writeln!(fmt, "// Module: {}", module_name)?;
                        writeln!(fmt, "// Classes count: {}", classes.len())?;
                        writeln!(fmt, "// Enums count: {}", enums.len())?;

                        fmt.block(
                            &format!("pub mod {}", AsSnakeCase(format_module_name(module_name))),
                            |fmt| {
                                for enum_ in enums {
                                    let ty = match enum_.ty.as_str() {
                                        "int8" => "i8",
                                        "int16" => "i16",
                                        "int32" => "i32",
                                        "int64" => "i64",
                                        _ => continue,
                                    };

                                    writeln!(fmt, "// Alignment: {}", enum_.alignment)?;
                                    writeln!(fmt, "// Members count: {}", enum_.size)?;

                                    fmt.block(
                                        &format!(
                                            "#[repr({})]\npub enum {}",
                                            ty,
                                            sanitize_name(&enum_.name),
                                        ),
                                        |fmt| {
                                            // TODO: Handle the case where multiple members share
                                            // the same value.
                                            let members: Vec<_> = enum_
                                                .members
                                                .iter()
                                                .map(|member| {
                                                    format!("{} = {}", member.name, member.value)
                                                })
                                                .collect()
                                                .join(",\n");

                                            writeln!(fmt, "{}", members)
                                        },
                                    )?;
                                }

                                for class in classes {
                                    let parent_name = class
                                        .parent
                                        .as_ref()
                                        .map(|parent| format!("{}", sanitize_name(&parent.name)))
                                        .unwrap_or_else(|| "None".to_string());

                                    writeln!(fmt, "// Parent: {}", parent_name)?;
                                    writeln!(fmt, "// Fields count: {}", class.fields.len())?;

                                    write_metadata(fmt, &class.metadata)?;

                                    fmt.block(
                                        &format!("pub mod {}", sanitize_name(&class.name)),
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
