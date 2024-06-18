use std::ffi::c_char;

use memflow::prelude::v1::*;

#[derive(Pod)]
#[repr(C)]
pub struct SchemaMetadataEntryData {
    pub name: Pointer64<ReprCString>,                 // 0x0000
    pub network_value: Pointer64<SchemaNetworkValue>, // 0x0008
}

#[derive(Pod)]
#[repr(C)]
pub struct SchemaNetworkValue {
    pub value: SchemaNetworkValueUnion, // 0x0000
}

#[repr(C)]
pub union SchemaNetworkValueUnion {
    pub name_ptr: Pointer64<ReprCString>,
    pub int_value: i32,
    pub float_value: f32,
    pub ptr: Pointer64<()>,
    pub var_value: SchemaVarName,
    pub name_value: [c_char; 32],
}

unsafe impl Pod for SchemaNetworkValueUnion {}

#[derive(Clone, Copy, Pod)]
#[repr(C)]
pub struct SchemaVarName {
    pub name: Pointer64<ReprCString>,      // 0x0000
    pub type_name: Pointer64<ReprCString>, // 0x0008
}
