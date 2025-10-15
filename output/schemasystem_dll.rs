// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: schemasystem.dll
        // Class count: 7
        // Enum count: 2
        pub mod schemasystem_dll {
            // Alignment: 1
            // Member count: 82
            #[repr(u8)]
            pub enum fieldtype_t {
                FIELD_VOID = 0x0,
                FIELD_FLOAT32 = 0x1,
                FIELD_STRING = 0x2,
                FIELD_VECTOR = 0x3,
                FIELD_QUATERNION = 0x4,
                FIELD_INT32 = 0x5,
                FIELD_BOOLEAN = 0x6,
                FIELD_INT16 = 0x7,
                FIELD_CHARACTER = 0x8,
                FIELD_COLOR32 = 0x9,
                FIELD_EMBEDDED = 0xA,
                FIELD_CUSTOM = 0xB,
                FIELD_CLASSPTR = 0xC,
                FIELD_EHANDLE = 0xD,
                FIELD_POSITION_VECTOR = 0xE,
                FIELD_TIME = 0xF,
                FIELD_TICK = 0x10,
                FIELD_SOUNDNAME = 0x11,
                FIELD_INPUT = 0x12,
                FIELD_FUNCTION = 0x13,
                FIELD_VMATRIX = 0x14,
                FIELD_VMATRIX_WORLDSPACE = 0x15,
                FIELD_MATRIX3X4_WORLDSPACE = 0x16,
                FIELD_INTERVAL = 0x17,
                FIELD_UNUSED = 0x18,
                FIELD_VECTOR2D = 0x19,
                FIELD_INT64 = 0x1A,
                FIELD_VECTOR4D = 0x1B,
                FIELD_RESOURCE = 0x1C,
                FIELD_TYPEUNKNOWN = 0x1D,
                FIELD_CSTRING = 0x1E,
                FIELD_HSCRIPT = 0x1F,
                FIELD_VARIANT = 0x20,
                FIELD_UINT64 = 0x21,
                FIELD_FLOAT64 = 0x22,
                FIELD_POSITIVEINTEGER_OR_NULL = 0x23,
                FIELD_HSCRIPT_NEW_INSTANCE = 0x24,
                FIELD_UINT32 = 0x25,
                FIELD_UTLSTRINGTOKEN = 0x26,
                FIELD_QANGLE = 0x27,
                FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 0x28,
                FIELD_HMATERIAL = 0x29,
                FIELD_HMODEL = 0x2A,
                FIELD_NETWORK_QUANTIZED_VECTOR = 0x2B,
                FIELD_NETWORK_QUANTIZED_FLOAT = 0x2C,
                FIELD_DIRECTION_VECTOR_WORLDSPACE = 0x2D,
                FIELD_QANGLE_WORLDSPACE = 0x2E,
                FIELD_QUATERNION_WORLDSPACE = 0x2F,
                FIELD_HSCRIPT_LIGHTBINDING = 0x30,
                FIELD_V8_VALUE = 0x31,
                FIELD_V8_OBJECT = 0x32,
                FIELD_V8_ARRAY = 0x33,
                FIELD_V8_CALLBACK_INFO = 0x34,
                FIELD_UTLSTRING = 0x35,
                FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 0x36,
                FIELD_HRENDERTEXTURE = 0x37,
                FIELD_HPARTICLESYSTEMDEFINITION = 0x38,
                FIELD_UINT8 = 0x39,
                FIELD_UINT16 = 0x3A,
                FIELD_CTRANSFORM = 0x3B,
                FIELD_CTRANSFORM_WORLDSPACE = 0x3C,
                FIELD_HPOSTPROCESSING = 0x3D,
                FIELD_MATRIX3X4 = 0x3E,
                FIELD_SHIM = 0x3F,
                FIELD_CMOTIONTRANSFORM = 0x40,
                FIELD_CMOTIONTRANSFORM_WORLDSPACE = 0x41,
                FIELD_ATTACHMENT_HANDLE = 0x42,
                FIELD_AMMO_INDEX = 0x43,
                FIELD_CONDITION_ID = 0x44,
                FIELD_AI_SCHEDULE_BITS = 0x45,
                FIELD_MODIFIER_HANDLE = 0x46,
                FIELD_ROTATION_VECTOR = 0x47,
                FIELD_ROTATION_VECTOR_WORLDSPACE = 0x48,
                FIELD_HVDATA = 0x49,
                FIELD_SCALE32 = 0x4A,
                FIELD_STRING_AND_TOKEN = 0x4B,
                FIELD_ENGINE_TIME = 0x4C,
                FIELD_ENGINE_TICK = 0x4D,
                FIELD_WORLD_GROUP_ID = 0x4E,
                FIELD_GLOBALSYMBOL = 0x4F,
                FIELD_HNMGRAPHDEFINITION = 0x50,
                FIELD_TYPECOUNT = 0x51
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ThreeState_t {
                TRS_FALSE = 0x0,
                TRS_TRUE = 0x1,
                TRS_NONE = 0x2
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCResourceManifestInternal {
            }
            // Parent: None
            // Field count: 23
            pub mod CSchemaSystemInternalRegistration {
                pub const m_Vector2D: usize = 0x0; // Vector2D
                pub const m_Vector: usize = 0x8; // Vector
                pub const m_VectorWS: usize = 0x14; // VectorWS
                pub const m_VectorAligned: usize = 0x20; // VectorAligned
                pub const m_Quaternion: usize = 0x30; // Quaternion
                pub const m_QAngle: usize = 0x40; // QAngle
                pub const m_RotationVector: usize = 0x4C; // RotationVector
                pub const m_RadianEuler: usize = 0x58; // RadianEuler
                pub const m_DegreeEuler: usize = 0x64; // DegreeEuler
                pub const m_QuaternionStorage: usize = 0x70; // QuaternionStorage
                pub const m_matrix3x4_t: usize = 0x80; // matrix3x4_t
                pub const m_matrix3x4a_t: usize = 0xB0; // matrix3x4a_t
                pub const m_Color: usize = 0xE0; // Color
                pub const m_Vector4D: usize = 0xE4; // Vector4D
                pub const m_CTransform: usize = 0x100; // CTransform
                pub const m_pKeyValues: usize = 0x120; // KeyValues*
                pub const m_CUtlBinaryBlock: usize = 0x128; // CUtlBinaryBlock
                pub const m_CUtlString: usize = 0x138; // CUtlString
                pub const m_CUtlSymbol: usize = 0x140; // CUtlSymbol
                pub const m_stringToken: usize = 0x144; // CUtlStringToken
                pub const m_stringTokenWithStorage: usize = 0x148; // CUtlStringTokenWithStorage
                pub const m_ResourceTypes: usize = 0x160; // CResourceArray<CResourcePointer<CResourceString>>
                pub const m_KV3: usize = 0x168; // KeyValues3
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExampleSchemaVData_PolymorphicDerivedA {
                pub const m_nDerivedA: usize = 0x10; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExampleSchemaVData_PolymorphicBase {
                pub const m_nBase: usize = 0x8; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExampleSchemaVData_PolymorphicDerivedB {
                pub const m_nDerivedB: usize = 0x10; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod ResourceId_t {
                pub const m_Value: usize = 0x0; // uint64
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExampleSchemaVData_Monomorphic {
                pub const m_nExample1: usize = 0x0; // int32
                pub const m_nExample2: usize = 0x4; // int32
            }
        }
    }
}
