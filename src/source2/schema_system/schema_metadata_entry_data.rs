use std::ffi::c_char;

use memflow::prelude::v1::*;

#[repr(C)]
pub struct SchemaMetadataEntryData {
    pub name: Pointer64<ReprCString>,
    pub network_value: Pointer64<SchemaNetworkValue>,
}

unsafe impl Pod for SchemaMetadataEntryData {}

#[repr(C)]
pub struct SchemaNetworkValue {
    pub u: SchemaNetworkValueUnion,
}

unsafe impl Pod for SchemaNetworkValue {}

#[repr(C)]
pub union SchemaNetworkValueUnion {
    pub name_ptr: Pointer64<ReprCString>,
    pub int_value: i32,
    pub float_value: f32,
    pub ptr: Pointer64<()>,
    pub var_value: SchemaVarName,
    pub name_value: [c_char; 32],
}

#[derive(Clone, Copy)]
#[repr(C)]
pub struct SchemaVarName {
    pub name: Pointer64<ReprCString>,
    pub ty: Pointer64<ReprCString>,
}
