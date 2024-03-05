use serde::{Deserialize, Serialize};

#[derive(Debug, Deserialize, Serialize)]
#[serde(tag = "type", rename_all = "camelCase")]
pub enum Operation {
    Add {
        value: usize,
    },
    Deref {
        times: Option<usize>,
        size: Option<usize>,
    },
    Jmp {
        offset: Option<usize>,
        length: Option<usize>,
    },
    Rip {
        offset: Option<usize>,
        length: Option<usize>,
    },
    Slice {
        start: usize,
        end: usize,
    },
    Sub {
        value: usize,
    },
}

#[derive(Debug, Deserialize, Serialize)]
pub struct Config {
    pub signatures: Vec<Signature>,
}

#[derive(Debug, Deserialize, Serialize)]
pub struct Signature {
    pub name: String,
    pub module: String,
    pub pattern: String,
    pub operations: Vec<Operation>,
}

#[derive(Debug)]
pub struct SchemaSystemConfig {
    pub module_name: &'static str,
    pub pattern: &'static str,
    pub type_scope_size_offset: usize,
    pub type_scope_data_offset: usize,
    pub declared_classes_offset: usize,
}

#[cfg(target_os = "windows")]
pub const SCHEMA_CONF: SchemaSystemConfig = SchemaSystemConfig {
    module_name: "schemasystem.dll",
    pattern: "48 8D 0D ? ? ? ? E9 ? ? ? ? CC CC CC CC 48 8D 0D ? ? ? ? E9 ? ? ? ? CC CC CC CC 48 83 EC 28",
    type_scope_size_offset: 0x190,
    type_scope_data_offset: 0x198,
    declared_classes_offset: 0x5B8,
};

#[cfg(target_os = "linux")]
pub const SCHEMA_CONF: SchemaSystemConfig = SchemaSystemConfig {
    module_name: "libschemasystem.so",
    pattern: "48 8D 05 ? ? ? ? c3 ? ? ? 00 00 00 00 00 48 8d 05 ? ? ? ? c3 ? ? ? 00 00 00 00 00 48 ? ? ? c3",
    type_scope_size_offset: 0x1f8,
    type_scope_data_offset: 0x200,
    declared_classes_offset: 0x620,
};

#[cfg(target_os = "windows")]
pub const PROC_NAME: &str = "cs2.exe";

#[cfg(target_os = "linux")]
pub const PROC_NAME: &str = "cs2";
