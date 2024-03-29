use std::collections::BTreeMap;
use std::ffi::CStr;
use std::ops::Add;
use std::{env, mem};

use log::debug;

use memflow::prelude::v1::*;

use serde::{Deserialize, Serialize};

use skidscan_macros::signature;

use crate::error::{Error, Result};
use crate::source_engine::*;

pub type SchemaMap = BTreeMap<String, (Vec<Class>, Vec<Enum>)>;

#[derive(Debug, Eq, Ord, PartialEq, PartialOrd, Deserialize, Serialize)]
pub enum ClassMetadata {
    Unknown { name: String },
    NetworkChangeCallback { name: String },
    NetworkVarNames { name: String, ty: String },
}

#[derive(Debug, Deserialize, Serialize)]
pub struct Class {
    pub name: String,
    pub module_name: String,
    pub parent: Option<Box<Class>>,
    pub metadata: Vec<ClassMetadata>,
    pub fields: Vec<ClassField>,
}

#[derive(Debug, Deserialize, Serialize)]
pub struct ClassField {
    pub name: String,
    pub ty: String,
    pub offset: u32,
}

#[derive(Debug, Deserialize, Serialize)]
pub struct Enum {
    pub name: String,
    pub ty: String,
    pub alignment: u8,
    pub size: u16,
    pub members: Vec<EnumMember>,
}

#[derive(Debug, Deserialize, Serialize)]
pub struct EnumMember {
    pub name: String,
    pub value: i64,
}

#[derive(Debug, Deserialize, Serialize)]
pub struct TypeScope {
    pub name: String,
    pub classes: Vec<Class>,
    pub enums: Vec<Enum>,
}

pub fn schemas(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<SchemaMap> {
    let schema_system = read_schema_system(process)?;
    let type_scopes = read_type_scopes(process, &schema_system)?;

    let map: BTreeMap<_, _> = type_scopes
        .into_iter()
        .map(|type_scope| (type_scope.name, (type_scope.classes, type_scope.enums)))
        .collect();

    Ok(map)
}

fn read_class_binding(
    process: &mut IntoProcessInstanceArcBox<'_>,
    binding_ptr: Pointer64<SchemaClassBinding>,
) -> Result<Class> {
    let binding = binding_ptr.read(process)?;

    let module_name = binding.module_name.read_string(process).map(|s| {
        let file_ext = match env::consts::OS {
            "linux" => "so",
            "windows" => "dll",
            _ => panic!("unsupported os"),
        };

        format!("{}.{}", s, file_ext)
    })?;

    let name = binding.name.read_string(process)?.to_string();

    let parent = binding.base_classes.non_null().and_then(|ptr| {
        let base_class = ptr.read(process).ok()?;

        read_class_binding(process, base_class.prev)
            .ok()
            .map(Box::new)
    });

    let metadata = read_class_binding_metadata(process, &binding)?;
    let fields = read_class_binding_fields(process, &binding)?;

    debug!(
        "found class: {} at {:#X} (module name: {}) (parent name: {:?}) (metadata count: {}) (fields count: {})",
        name,
        binding_ptr.to_umem(),
        module_name,
        parent.as_ref().map(|parent| parent.name.clone()),
        metadata.len(),
        fields.len()
    );

    Ok(Class {
        name,
        module_name,
        parent,
        metadata,
        fields,
    })
}

fn read_class_binding_fields(
    process: &mut IntoProcessInstanceArcBox<'_>,
    binding: &SchemaClassBinding,
) -> Result<Vec<ClassField>> {
    (0..binding.fields_count)
        .map(|i| {
            let field_ptr: Pointer64<SchemaClassFieldData> = binding
                .fields
                .address()
                .add(i * mem::size_of::<SchemaClassFieldData>() as u16)
                .into();

            let field = field_ptr.read(process)?;

            if field.schema_type.is_null() {
                return Err(Error::Other("field schema type is null"));
            }

            let name = field.name.read_string(process)?.to_string();
            let schema_type = field.schema_type.read(process)?;

            // TODO: Parse this properly.
            let ty = schema_type.name.read_string(process)?.replace(" ", "");

            Ok(ClassField {
                name,
                ty,
                offset: field.offset,
            })
        })
        .collect()
}

fn read_class_binding_metadata(
    process: &mut IntoProcessInstanceArcBox<'_>,
    binding: &SchemaClassBinding,
) -> Result<Vec<ClassMetadata>> {
    if binding.static_metadata.is_null() {
        return Ok(Vec::new());
    }

    (0..binding.static_metadata_count)
        .map(|i| {
            let metadata_ptr: Pointer64<SchemaMetadataEntryData> =
                binding.static_metadata.offset(i as _).into();

            let metadata = metadata_ptr.read(process)?;

            if metadata.network_value.is_null() {
                return Err(Error::Other("class metadata network value is null"));
            }

            let name = metadata.name.read_string(process)?.to_string();
            let network_value = metadata.network_value.read(process)?;

            let metadata = match name.as_str() {
                "MNetworkChangeCallback" => unsafe {
                    let name = network_value
                        .union_data
                        .name_ptr
                        .read_string(process)?
                        .to_string();

                    ClassMetadata::NetworkChangeCallback { name }
                },
                "MNetworkVarNames" => unsafe {
                    let var_value = network_value.union_data.var_value;

                    let name = var_value.name.read_string(process)?.to_string();
                    let ty = var_value.ty.read_string(process)?.to_string();

                    ClassMetadata::NetworkVarNames { name, ty }
                },
                _ => ClassMetadata::Unknown { name },
            };

            Ok(metadata)
        })
        .collect()
}

fn read_enum_binding(
    process: &mut IntoProcessInstanceArcBox<'_>,
    binding_ptr: Pointer64<SchemaEnumBinding>,
) -> Result<Enum> {
    let binding = binding_ptr.read(process)?;
    let name = binding.name.read_string(process)?.to_string();

    let members = read_enum_binding_members(process, &binding)?;

    debug!(
        "found enum: {} at {:#X} (type name: {}) (alignment: {}) (members count: {})",
        name,
        binding_ptr.to_umem(),
        binding.type_name(),
        binding.alignment,
        binding.size,
    );

    Ok(Enum {
        name,
        ty: binding.type_name().to_string(),
        alignment: binding.alignment,
        size: binding.size,
        members,
    })
}

fn read_enum_binding_members(
    process: &mut IntoProcessInstanceArcBox<'_>,
    binding: &SchemaEnumBinding,
) -> Result<Vec<EnumMember>> {
    (0..binding.size)
        .map(|i| {
            let enumerator_info_ptr: Pointer64<SchemaEnumeratorInfoData> = binding
                .enum_info
                .address()
                .add(i * mem::size_of::<SchemaEnumeratorInfoData>() as u16)
                .into();

            let enumerator_info = enumerator_info_ptr.read(process)?;
            let name = enumerator_info.name.read_string(process)?.to_string();

            let value = {
                let value = unsafe { enumerator_info.union_data.ulong } as i64;

                if value == i64::MAX {
                    -1
                } else {
                    value
                }
            };

            Ok(EnumMember { name, value })
        })
        .collect()
}

fn read_schema_system(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<SchemaSystem> {
    let (module_name, sig) = match env::consts::OS {
        "linux" => (
            "libschemasystem.so",
            signature!("48 8D 35 ? ? ? ? 48 8D 3D ? ? ? ? E8 ? ? ? ? 48 8D 15 ? ? ? ? 48 8D 35 ? ? ? ? 48 8D 3D"),
        ),
        "windows" => (
            "schemasystem.dll",
            signature!("48 89 05 ? ? ? ? 4C 8D 45"),
        ),
        _ => panic!("unsupported os"),
    };

    let module = process.module_by_name(&module_name)?;
    let buf = process.read_raw(module.base, module.size as _)?;

    let addr = sig
        .scan(&buf)
        .and_then(|ptr| process.read_addr64_rip(module.base + ptr).ok())
        .ok_or_else(|| Error::Other("unable to read schema system address"))?;

    let schema_system: SchemaSystem = process.read(addr)?;

    if schema_system.num_registrations == 0 {
        return Err(Error::Other("no schema system registrations found"));
    }

    Ok(schema_system)
}

fn read_type_scopes(
    process: &mut IntoProcessInstanceArcBox<'_>,
    schema_system: &SchemaSystem,
) -> Result<Vec<TypeScope>> {
    let type_scopes = &schema_system.type_scopes;

    (0..type_scopes.size)
        .map(|i| {
            let type_scope_ptr = type_scopes.get(process, i as _)?;
            let type_scope = type_scope_ptr.read(process)?;

            let name = unsafe { CStr::from_ptr(type_scope.name.as_ptr()) }
                .to_string_lossy()
                .to_string();

            let classes: Vec<_> = type_scope
                .class_bindings
                .elements(process)?
                .iter()
                .filter_map(|ptr| read_class_binding(process, *ptr).ok())
                .collect();

            let enums: Vec<_> = type_scope
                .enum_bindings
                .elements(process)?
                .iter()
                .filter_map(|ptr| read_enum_binding(process, *ptr).ok())
                .collect();

            debug!(
                "found type scope: {} at {:#X} (classes count: {}) (enums count: {})",
                name,
                type_scope_ptr.to_umem(),
                classes.len(),
                enums.len()
            );

            Ok(TypeScope {
                name,
                classes,
                enums,
            })
        })
        .collect()
}
