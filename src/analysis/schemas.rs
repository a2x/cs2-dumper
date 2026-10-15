use std::collections::BTreeMap;
use std::ffi::CStr;

use anyhow::{Result, bail};

use log::debug;

use memflow::prelude::v1::*;

use serde::{Deserialize, Serialize};
use skidscan_macros::signature;

use crate::mem::{MemoryViewExt, PointerExt};
use crate::source2::*;

pub type SchemaMap = BTreeMap<String, (Vec<Class>, Vec<Enum>)>;

#[derive(Clone, Debug, Deserialize, Serialize)]
pub enum ClassMetadata {
    Unknown { name: String },
    NetworkChangeCallback { name: String },
    NetworkVarNames { name: String, type_name: String },
}

#[derive(Clone, Debug, Deserialize, Serialize)]
pub struct Class {
    pub name: String,
    pub module_name: String,
    pub parent_name: Option<String>,
    pub metadata: Vec<ClassMetadata>,
    pub fields: Vec<ClassField>,
}

#[derive(Clone, Debug, Deserialize, Serialize)]
pub struct ClassField {
    pub name: String,
    pub type_name: String,
    pub offset: i32,
}

#[derive(Clone, Debug, Deserialize, Serialize)]
pub struct Enum {
    pub name: String,
    pub alignment: u8,
    pub size: u16,
    pub members: Vec<EnumMember>,
}

#[derive(Clone, Debug, Deserialize, Serialize)]
pub struct EnumMember {
    pub name: String,
    pub value: i64,
}

#[derive(Clone, Debug, Deserialize, Serialize)]
pub struct TypeScope {
    pub module_name: String,
    pub classes: Vec<Class>,
    pub enums: Vec<Enum>,
}

pub fn schemas<P: Process + MemoryView>(process: &mut P) -> Result<SchemaMap> {
    let schema_system = read_schema_system(process)?;
    let type_scopes = read_type_scopes(process, &schema_system)?;

    Ok(type_scopes
        .into_iter()
        .map(|type_scope| {
            (
                type_scope.module_name,
                (type_scope.classes, type_scope.enums),
            )
        })
        .collect())
}

fn read_class_binding(
    mem: &mut impl MemoryView,
    binding_ptr: Pointer64<SchemaClassBinding>,
) -> Result<Class> {
    let binding = mem.read_ptr(binding_ptr).data_part()?;

    let module_name = mem
        .read_utf8_lossy(binding.module_name.address(), 128)
        .data_part()
        .map(|m| format!("{}.so", m))?;

    let name = mem
        .read_utf8_lossy(binding.name.address(), 128)
        .data_part()?;

    if name.is_empty() {
        bail!("invalid class name");
    }

    let parent_name = binding.base_classes.non_null().and_then(|ptr| {
        let base_class = mem.read_ptr(ptr).data_part().ok()?;
        let parent_class = mem.read_ptr(base_class.class).data_part().ok()?;

        let parent_name = mem
            .read_utf8_lossy(parent_class.name.address(), 128)
            .data_part()
            .ok()?;

        (!parent_name.is_empty()).then_some(parent_name)
    });

    let fields = read_class_binding_fields(mem, &binding)?;
    let metadata = read_class_binding_metadata(mem, &binding)?;

    Ok(Class {
        name,
        module_name,
        parent_name,
        metadata,
        fields,
    })
}

fn read_class_binding_fields(
    mem: &mut impl MemoryView,
    binding: &SchemaClassBinding,
) -> Result<Vec<ClassField>> {
    if binding.fields.is_null() {
        return Ok(Vec::new());
    }

    (0..binding.field_count).try_fold(Vec::new(), |mut acc, i| {
        let field = mem.read_ptr(binding.fields.at(i as _)).data_part()?;

        if field.r#type.is_null() {
            return Ok(acc);
        }

        let name = mem.read_utf8_lossy(field.name.address(), 128).data_part()?;
        let r#type = mem.read_ptr(field.r#type).data_part()?;

        let type_name = mem
            .read_utf8_lossy(r#type.name.address(), 128)
            .data_part()?
            .replace(" ", "");

        acc.push(ClassField {
            name,
            type_name,
            offset: field.offset,
        });

        Ok(acc)
    })
}

fn read_class_binding_metadata(
    mem: &mut impl MemoryView,
    binding: &SchemaClassBinding,
) -> Result<Vec<ClassMetadata>> {
    if binding.static_metadata.is_null() {
        return Ok(Vec::new());
    }

    (0..binding.static_metadata_count).try_fold(Vec::new(), |mut acc, i| {
        let metadata = mem
            .read_ptr(binding.static_metadata.at(i as _))
            .data_part()?;

        if metadata.network_value.is_null() {
            return Ok(acc);
        }

        let name = mem
            .read_utf8_lossy(metadata.name.address(), 128)
            .data_part()?;

        let network_value = mem.read_ptr(metadata.network_value).data_part()?;

        let metadata = match name.as_str() {
            "MNetworkChangeCallback" => unsafe {
                let name = mem
                    .read_utf8_lossy(network_value.value.name_ptr.address(), 128)
                    .data_part()?;

                ClassMetadata::NetworkChangeCallback { name }
            },
            "MNetworkVarNames" => unsafe {
                let var_value = network_value.value.var_value;

                let name = mem
                    .read_utf8_lossy(var_value.name.address(), 128)
                    .data_part()?;

                let type_name = mem
                    .read_utf8_lossy(var_value.type_name.address(), 128)
                    .data_part()?
                    .replace(" ", "");

                ClassMetadata::NetworkVarNames { name, type_name }
            },
            _ => ClassMetadata::Unknown { name },
        };

        acc.push(metadata);

        Ok(acc)
    })
}

fn read_enum_binding(
    mem: &mut impl MemoryView,
    binding_ptr: Pointer64<SchemaEnumBinding>,
) -> Result<Enum> {
    let binding = mem.read_ptr(binding_ptr).data_part()?;

    let name = mem
        .read_utf8_lossy(binding.name.address(), 128)
        .data_part()?;

    if name.is_empty() {
        bail!("invalid enum name");
    }

    let members = read_enum_binding_members(mem, &binding)?;

    Ok(Enum {
        name,
        alignment: binding.alignment,
        size: binding.enumerator_count,
        members,
    })
}

fn read_enum_binding_members(
    mem: &mut impl MemoryView,
    binding: &SchemaEnumBinding,
) -> Result<Vec<EnumMember>> {
    if binding.enumerators.is_null() {
        return Ok(Vec::new());
    }

    (0..binding.enumerator_count).try_fold(Vec::new(), |mut acc, i| {
        let r#enum = mem.read_ptr(binding.enumerators.at(i as _)).data_part()?;

        let name = mem
            .read_utf8_lossy(r#enum.name.address(), 128)
            .data_part()?;

        acc.push(EnumMember {
            name,
            value: unsafe { r#enum.value.ulong } as i64,
        });

        Ok(acc)
    })
}

fn read_schema_system<P: Process + MemoryView>(process: &mut P) -> Result<SchemaSystem> {
    let module = process.module_by_name("libschemasystem.so")?;
    let buf = process
        .read_raw(module.base, module.size as _)
        .data_part()?;

    let list_addr = signature!("48 8B 1D ? ? ? ? 48 85 DB 74 ? 49 89 FC")
        .scan(&buf)
        .and_then(|result| process.read_addr64_rip(module.base + result).ok())
        .ok_or_else(|| anyhow::anyhow!("unable to locate SchemaSystem interface list"))?;

    let list_head = process.read_addr64(list_addr).data_part()?;
    let mut reg_ptr = Pointer64::<InterfaceReg>::from(list_head);

    while !reg_ptr.is_null() {
        let reg = process.read_ptr(reg_ptr).data_part()?;

        if reg.name.read_string(process)?.to_string() == "SchemaSystem_001" {
            let code = process.read_raw(reg.create_fn.address(), 7).data_part()?;
            let is_mov = code.starts_with(&[0x48, 0x8B, 0x05]);
            let is_lea = code.starts_with(&[0x48, 0x8D, 0x05]);

            if is_mov || is_lea {
                let instance_addr = process.read_addr64_rip(reg.create_fn.address())?;
                let schema_system = if is_mov {
                    let ptr: Pointer64<SchemaSystem> = process.read(instance_addr).data_part()?;

                    if ptr.is_null() {
                        None
                    } else {
                        Some(process.read_ptr(ptr).data_part()?)
                    }
                } else {
                    Some(process.read(instance_addr).data_part()?)
                };

                if let Some(schema_system) =
                    schema_system.filter(|schema_system| schema_system.registration_count != 0)
                {
                    return Ok(schema_system);
                }
            }
        }

        reg_ptr = reg.next;
    }

    bail!("unable to read SchemaSystem through SchemaSystem_001")
}

fn read_type_scopes(
    mem: &mut impl MemoryView,
    schema_system: &SchemaSystem,
) -> Result<Vec<TypeScope>> {
    let type_scopes = &schema_system.type_scopes;

    (0..type_scopes.count).try_fold(Vec::new(), |mut acc, i| {
        let type_scope_ptr = type_scopes.element(mem, i as _)?;
        let type_scope = mem.read_ptr(type_scope_ptr).data_part()?;

        let module_name = unsafe { CStr::from_ptr(type_scope.name.as_ptr()) }
            .to_string_lossy()
            .to_string();

        let classes: Vec<_> = type_scope
            .class_bindings
            .elements(mem)
            .iter()
            .filter_map(|ptr| read_class_binding(mem, *ptr).ok())
            .collect();

        let enums: Vec<_> = type_scope
            .enum_bindings
            .elements(mem)
            .iter()
            .filter_map(|ptr| read_enum_binding(mem, *ptr).ok())
            .collect();

        if classes.is_empty() && enums.is_empty() {
            return Ok(acc);
        }

        debug!(
            "module \"{}\" contains {} class(es) and {} enum(s)",
            module_name,
            classes.len(),
            enums.len(),
        );

        acc.push(TypeScope {
            module_name,
            classes,
            enums,
        });

        Ok(acc)
    })
}
