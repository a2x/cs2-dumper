use std::collections::BTreeMap;
use std::ffi::CStr;

use log::debug;

use memflow::prelude::v1::*;

use serde::{Deserialize, Serialize};

use skidscan_macros::signature;

use crate::error::{Error, Result};
use crate::mem::{MemoryViewExt, PointerExt};
use crate::source2::*;

pub type SchemaMap = BTreeMap<String, (Vec<Class>, Vec<Enum>)>;

#[derive(Clone, Deserialize, Serialize)]
pub enum ClassMetadata {
    Unknown { name: String },
    NetworkChangeCallback { name: String },
    NetworkVarNames { name: String, type_name: String },
}

#[derive(Clone, Deserialize, Serialize)]
pub struct Class {
    pub name: String,
    pub module_name: String,
    pub parent_name: Option<String>,
    pub metadata: Vec<ClassMetadata>,
    pub fields: Vec<ClassField>,
}

#[derive(Clone, Deserialize, Serialize)]
pub struct ClassField {
    pub name: String,
    pub type_name: String,
    pub offset: i32,
}

#[derive(Clone, Deserialize, Serialize)]
pub struct Enum {
    pub name: String,
    pub alignment: u8,
    pub size: i16,
    pub members: Vec<EnumMember>,
}

#[derive(Clone, Deserialize, Serialize)]
pub struct EnumMember {
    pub name: String,
    pub value: i64,
}

#[derive(Clone, Deserialize, Serialize)]
pub struct TypeScope {
    pub module_name: String,
    pub classes: Vec<Class>,
    pub enums: Vec<Enum>,
}

pub fn schemas(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<SchemaMap> {
    let schema_system = read_schema_system(process)?;
    println!("SchemaSystem.registration_count = {}", schema_system.registration_count);
    println!("SchemaSystem.type_scopes.size = {}", schema_system.type_scopes.size);

    let type_scopes = read_type_scopes(process, &schema_system)?;

    let mut map = BTreeMap::new();

    for type_scope in type_scopes {
        println!("TypeScope: {}, classes: {}, enums: {}", type_scope.module_name, type_scope.classes.len(), type_scope.enums.len());
        map.insert(
            type_scope.module_name,
            (type_scope.classes, type_scope.enums),
        );
    }

    Ok(map)
}

fn read_class_binding(
    process: &mut IntoProcessInstanceArcBox<'_>,
    binding_ptr: Pointer64<SchemaClassBinding>,
) -> Result<Class> {
    let binding = binding_ptr.read(process)?;

    let module_name = binding
        .module_name
        .read_string(process)
        .map(|s| format!("{}.so", s))?;

    let name = binding.name.read_string(process)?.to_string();

    if name.is_empty() {
        return Err(Error::Other("empty class name"));
    }

    let parent_name = binding.base_classes.non_null().and_then(|ptr| {
        let base_class = ptr.read(process).ok()?;
        let parent_class = base_class.class.read(process).ok()?;

        let parent_name = parent_class.name.read_string(process).ok()?.to_string();

        (!parent_name.is_empty()).then_some(parent_name)
    });

    let fields = read_class_binding_fields(process, &binding)?;
    let metadata = read_class_binding_metadata(process, &binding)?;

    debug!(
        "found class: {} at {:#X} (module name: {}) (parent name: {:?}) (metadata count: {}) (fields count: {})",
        name,
        binding_ptr.to_umem(),
        module_name,
        parent_name,
        metadata.len(),
        fields.len(),
    );

    Ok(Class {
        name,
        module_name,
        parent_name,
        metadata,
        fields,
    })
}

fn read_class_binding_fields(
    process: &mut IntoProcessInstanceArcBox<'_>,
    binding: &SchemaClassBinding,
) -> Result<Vec<ClassField>> {
    if binding.fields.is_null() {
        return Ok(Vec::new());
    }

    (0..binding.field_count).try_fold(Vec::new(), |mut acc, i| {
        let field = binding.fields.at(i as _).read(process)?;

        if field.r#type.is_null() {
            return Ok(acc);
        }

        let name = field.name.read_string(process)?.to_string();
        let schema_type = field.r#type.read(process)?;

        // TODO: Parse this properly.
        let type_name = schema_type.name.read_string(process)?.replace(" ", "");

        acc.push(ClassField {
            name,
            type_name,
            offset: field.offset,
        });

        Ok(acc)
    })
}

fn read_class_binding_metadata(
    process: &mut IntoProcessInstanceArcBox<'_>,
    binding: &SchemaClassBinding,
) -> Result<Vec<ClassMetadata>> {
    if binding.static_metadata.is_null() {
        return Ok(Vec::new());
    }

    (0..binding.static_metadata_count).try_fold(Vec::new(), |mut acc, i| {
        let metadata = binding.static_metadata.at(i as _).read(process)?;

        if metadata.network_value.is_null() {
            return Ok(acc);
        }

        let name = metadata.name.read_string(process)?.to_string();
        let network_value = metadata.network_value.read(process)?;

        let metadata = match name.as_str() {
            "MNetworkChangeCallback" => unsafe {
                let name = network_value
                    .value
                    .name_ptr
                    .read_string(process)?
                    .to_string();

                ClassMetadata::NetworkChangeCallback { name }
            },
            "MNetworkVarNames" => unsafe {
                let var_value = network_value.value.var_value;

                let name = var_value.name.read_string(process)?.to_string();
                let type_name = var_value.type_name.read_string(process)?.replace(" ", "");

                ClassMetadata::NetworkVarNames { name, type_name }
            },
            _ => ClassMetadata::Unknown { name },
        };

        acc.push(metadata);

        Ok(acc)
    })
}

fn read_enum_binding(
    process: &mut IntoProcessInstanceArcBox<'_>,
    binding_ptr: Pointer64<SchemaEnumBinding>,
) -> Result<Enum> {
    let binding = binding_ptr.read(process)?;
    let name = binding.name.read_string(process)?.to_string();

    if name.is_empty() {
        return Err(Error::Other("empty enum name"));
    }

    let members = read_enum_binding_members(process, &binding)?;

    debug!(
        "found enum: {} at {:#X} (alignment: {}) (members count: {})",
        name,
        binding_ptr.to_umem(),
        binding.alignment,
        binding.enumerator_count,
    );

    Ok(Enum {
        name,
        alignment: binding.alignment,
        size: binding.enumerator_count as i16,
        members,
    })
}

fn read_enum_binding_members(
    process: &mut IntoProcessInstanceArcBox<'_>,
    binding: &SchemaEnumBinding,
) -> Result<Vec<EnumMember>> {
    if binding.enumerators.is_null() {
        return Ok(Vec::new());
    }

    (0..binding.enumerator_count).try_fold(Vec::new(), |mut acc, i| {
        let enumerator = binding.enumerators.at(i as _).read(process)?;
        let name = enumerator.name.read_string(process)?.to_string();

        acc.push(EnumMember {
            name,
            value: unsafe { enumerator.value.ulong } as i64,
        });

        Ok(acc)
    })
}

fn read_schema_system(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<SchemaSystem> {
    let module = process.module_by_name("libschemasystem.so")?;
    let buf = process.read_raw(module.base, module.size as _)?;

    let list_addr = signature!("48 8B 1D ? ? ? ? 48 85 DB 74 ? 49 89 FC")
        .scan(&buf)
        .and_then(|result| process.read_addr64_rip(module.base + result).ok())
        .ok_or(Error::Other("unable to find interface list address in libschemasystem.so"))?;

    let mut cur_reg = Pointer64::<InterfaceReg>::from(process.read_addr64(list_addr)?);
    while !cur_reg.is_null() {
        let reg = cur_reg.read(process)?;
        let name = reg.name.read_string(process)?;
        if name == "SchemaSystem_001" {
            let code = process.read_raw(reg.create_fn.address(), 7)?;
            if code.starts_with(&[0x48, 0x8B, 0x05]) || code.starts_with(&[0x48, 0x8D, 0x05]) {
                let disp = i32::from_le_bytes(code[3..7].try_into().unwrap());
                let instance_addr = Address::from(reg.create_fn.address().to_umem() + 7 + disp as i64 as u64);
                if code.starts_with(&[0x48, 0x8D, 0x05]) {
                    let schema_system: SchemaSystem = process.read(instance_addr)?;
                    if schema_system.registration_count > 0 {
                        return Ok(schema_system);
                    }
                } else {
                    let ptr = process.read::<Pointer64<SchemaSystem>>(instance_addr)?;
                    if !ptr.is_null() {
                        let schema_system = ptr.read(process)?;
                        if schema_system.registration_count > 0 {
                            return Ok(schema_system);
                        }
                    }
                }
            }
        }
        cur_reg = reg.next;
    }

    Err(Error::Other("unable to read schema system address via interfaces"))
}

fn read_type_scopes(
    process: &mut IntoProcessInstanceArcBox<'_>,
    schema_system: &SchemaSystem,
) -> Result<Vec<TypeScope>> {
    let type_scopes = &schema_system.type_scopes;

    (0..type_scopes.size).try_fold(Vec::new(), |mut acc, i| {
        let type_scope_ptr = type_scopes.element(process, i as _)?;
        let type_scope = type_scope_ptr.read(process)?;

        let module_name = unsafe { CStr::from_ptr(type_scope.name.as_ptr()) }
            .to_string_lossy()
            .to_string();

        let classes: Vec<_> = type_scope
            .class_bindings
            .elements(process)
            .iter()
            .filter_map(|ptr| read_class_binding(process, *ptr).ok())
            .collect();

        let enums: Vec<_> = type_scope
            .enum_bindings
            .elements(process)
            .iter()
            .filter_map(|ptr| read_enum_binding(process, *ptr).ok())
            .collect();

        if classes.is_empty() && enums.is_empty() {
            return Ok(acc);
        }

        debug!(
            "found type scope: {} at {:#X} (classes count: {}) (enums count: {})",
            module_name,
            type_scope_ptr.to_umem(),
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
