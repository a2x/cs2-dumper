use std::ffi::c_char;

use memflow::prelude::v1::*;

use super::{UtlTsHash, UtlVector};

pub type SchemaClassBinding = SchemaClassInfoData;
pub type SchemaEnumBinding = SchemaEnumInfoData;

#[repr(u8)]
pub enum SchemaAtomicCategory {
    Basic = 0,
    T,
    CollectionOfT,
    TF,
    TT,
    TTF,
    I,
    None,
}

#[repr(u8)]
pub enum SchemaTypeCategory {
    BuiltIn = 0,
    Ptr,
    Bitfield,
    FixedArray,
    Atomic,
    DeclaredClass,
    DeclaredEnum,
    None,
}

#[derive(Clone, Copy)]
#[repr(C)]
pub struct SchemaArrayT {
    pub array_size: u32,                // 0x0000
    pad_0004: [u8; 0x4],                // 0x0004
    pub element: Pointer64<SchemaType>, // 0x0008
}

#[derive(Clone, Copy)]
#[repr(C)]
pub struct SchemaAtomicI {
    pad_0000: [u8; 0x10], // 0x0000
    pub value: u64,       // 0x0010
}

#[derive(Clone, Copy)]
#[repr(C)]
pub struct SchemaAtomicT {
    pub element: Pointer64<SchemaType>,  // 0x0000
    pad_0008: [u8; 0x8],                 // 0x0008
    pub template: Pointer64<SchemaType>, // 0x0010
}

#[derive(Clone, Copy)]
#[repr(C)]
pub struct SchemaAtomicTT {
    pad_0000: [u8; 0x10],                      // 0x0000
    pub templates: [Pointer64<SchemaType>; 2], // 0x0010
}

#[derive(Clone, Copy)]
#[repr(C)]
pub struct SchemaAtomicTF {
    pad_0000: [u8; 0x10],                // 0x0000
    pub template: Pointer64<SchemaType>, // 0x0010
    pub size: i32,                       // 0x0018
}

#[derive(Clone, Copy)]
#[repr(C)]
pub struct SchemaAtomicTTF {
    pad_0000: [u8; 0x10],                      // 0x0000
    pub templates: [Pointer64<SchemaType>; 2], // 0x0010
    pub size: i32,                             // 0x0020
}

#[derive(Pod)]
#[repr(C)]
pub struct SchemaBaseClassInfoData {
    pub offset: i32,                          // 0x0000
    pad_0004: [u8; 0x4],                      // 0x0004
    pub prev: Pointer64<SchemaClassInfoData>, // 0x0008
}

#[derive(Pod)]
#[repr(C)]
pub struct SchemaClassFieldData {
    pub name: Pointer64<ReprCString>,                 // 0x0000
    pub schema_type: Pointer64<SchemaType>,           // 0x0008
    pub offset: i32,                                  // 0x0010
    pub num_metadata: i32,                            // 0x0014
    pub metadata: Pointer64<SchemaMetadataEntryData>, // 0x0018
}

#[rustfmt::skip]
#[derive(Pod)]
#[repr(C)]
pub struct SchemaClassInfoData {
    pub base: Pointer64<SchemaClassInfoData>,                  // 0x0000
    pub name: Pointer64<ReprCString>,                          // 0x0008
    pub module_name: Pointer64<ReprCString>,                   // 0x0010
    pub size: i32,                                             // 0x0018
    pub num_fields: i16,                                       // 0x001C
    pub num_static_fields: i16,                                // 0x001E
    pub num_static_metadata: i16,                              // 0x0020
    pub alignment: u8,                                         // 0x0022
    pub has_base_class: u8,                                    // 0x0023
    pub total_class_size: i16,                                 // 0x0024
    pub derived_class_size: i16,                               // 0x0026
    pub fields: Pointer64<[SchemaClassFieldData]>,             // 0x0028
    pub static_fields: Pointer64<[SchemaStaticFieldData]>,     // 0x0030
    pub base_classes: Pointer64<SchemaBaseClassInfoData>,      // 0x0038
    pad_0040: [u8; 0x8],                                       // 0x0040
    pub static_metadata: Pointer64<[SchemaMetadataEntryData]>, // 0x0048
    pub type_scope: Pointer64<SchemaSystemTypeScope>,          // 0x0050
    pub schema_type: Pointer64<SchemaType>,                    // 0x0058
    pad_0060: [u8; 0x10],                                      // 0x0060
}

#[rustfmt::skip]
#[derive(Pod)]
#[repr(C)]
pub struct SchemaEnumInfoData {
    pub base: Pointer64<SchemaEnumInfoData>,                 // 0x0000
    pub name: Pointer64<ReprCString>,                        // 0x0008
    pub module_name: Pointer64<ReprCString>,                 // 0x0010
    pub size: u8,                                            // 0x0018
    pub alignment: u8,                                       // 0x0019
    pad_001a: u16,                                           // 0x001A
    pub num_enumerators: i16,                                // 0x001C
    pub num_static_metadata: i16,                            // 0x001E
    pub enumerators: Pointer64<[SchemaEnumeratorInfoData]>,  // 0x0020
    pub static_metadata: Pointer64<SchemaMetadataEntryData>, // 0x0028
    pub type_scope: Pointer64<SchemaSystemTypeScope>,        // 0x0030
    pad_0038: [u8; 0x10],                                    // 0x0038
}

#[repr(C)]
pub struct SchemaEnumeratorInfoData {
    pub name: Pointer64<ReprCString>,                 // 0x0000
    pub u: SchemaEnumeratorInfoDataUnion,             // 0x0008
    pub num_metadata: u32,                            // 0x0010
    pub metadata: Pointer64<SchemaMetadataEntryData>, // 0x0018
}

unsafe impl Pod for SchemaEnumeratorInfoData {}

#[repr(C)]
pub union SchemaEnumeratorInfoDataUnion {
    pub uchar: u8,
    pub ushort: u16,
    pub uint: u32,
    pub ulong: u64,
}

#[derive(Pod)]
#[repr(C)]
pub struct SchemaMetadataEntryData {
    pub name: Pointer64<ReprCString>,                 // 0x0000
    pub network_value: Pointer64<SchemaNetworkValue>, // 0x0008
}

#[repr(C)]
pub struct SchemaNetworkValue {
    pub u: SchemaNetworkValueUnion, // 0x0000
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

#[derive(Pod)]
#[repr(C)]
pub struct SchemaStaticFieldData {
    pub name: Pointer64<ReprCString>, // 0x0000
    pub type_: Pointer64<SchemaType>, // 0x0008
    pub instance: Pointer64<()>,      // 0x0010
    pad_0018: [u8; 0x10],             // 0x0018
}

#[derive(Pod)]
#[repr(C)]
pub struct SchemaSystem {
    pad_0000: [u8; 0x1F8],                                        // 0x0000
    pub type_scopes: UtlVector<Pointer64<SchemaSystemTypeScope>>, // 0x01F8
    pad_0208: [u8; 0x120],                                        // 0x0208
    pub num_registrations: u32,                                   // 0x0328
    pad_02c4: [u8; 0x4],                                          // 0x032C
}

#[repr(C)]
pub struct SchemaSystemTypeScope {
    pad_0000: [u8; 0x8],                                          // 0x0000
    pub name: [c_char; 256],                                      // 0x0008
    pad_0108: [u8; 0x518],                                        // 0x0108
    pub class_bindings: UtlTsHash<Pointer64<SchemaClassBinding>>, // 0x0620
    pad_2eb0: [u8; 0x80e],                                        // 0x2EB0
    pub enum_bindings: UtlTsHash<Pointer64<SchemaEnumBinding>>,   // 0x36C0
}

unsafe impl Pod for SchemaSystemTypeScope {}

#[repr(C)]
pub struct SchemaType {
    pad_0000: [u8; 0x8],                              // 0x0000
    pub name: Pointer64<ReprCString>,                 // 0x0008
    pub type_scope: Pointer64<SchemaSystemTypeScope>, // 0x0010
    pub type_category: SchemaTypeCategory,            // 0x0018
    pub atomic_category: SchemaAtomicCategory,        // 0x0019
    pub u: SchemaTypeUnion,                           // 0x0020
}

unsafe impl Pod for SchemaType {}

pub union SchemaTypeUnion {
    pub schema_type: Pointer64<SchemaType>,
    pub class_binding: Pointer64<SchemaClassBinding>,
    pub enum_binding: Pointer64<SchemaEnumBinding>,
    pub array: SchemaArrayT,
    pub atomic: SchemaAtomicT,
    pub atomic_tt: SchemaAtomicTT,
    pub atomic_tf: SchemaAtomicTF,
    pub atomic_ttf: SchemaAtomicTTF,
    pub atomic_i: SchemaAtomicI,
}

#[derive(Pod, Clone, Copy)]
#[repr(C)]
pub struct SchemaVarName {
    pub name: Pointer64<ReprCString>,      // 0x0000
    pub type_name: Pointer64<ReprCString>, // 0x0008
}
