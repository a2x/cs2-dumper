use memflow::prelude::v1::*;

use super::{SchemaClassBinding, SchemaEnumBinding, SchemaSystemTypeScope};

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

#[repr(C)]
pub struct SchemaType {
    pad_0000: [u8; 0x8],                              // 0x0000
    pub name: Pointer64<ReprCString>,                 // 0x0008
    pub type_scope: Pointer64<SchemaSystemTypeScope>, // 0x0010
    pub type_category: SchemaTypeCategory,            // 0x0018
    pub atomic_category: SchemaAtomicCategory,        // 0x0019
    pub value: SchemaTypeUnion,                       // 0x0020
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
