/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod CExampleSchemaVData_Monomorphic {
    pub const m_nExample1: usize = 0x0; // int32_t
    pub const m_nExample2: usize = 0x4; // int32_t
}

pub mod CExampleSchemaVData_PolymorphicBase {
    pub const m_nBase: usize = 0x8; // int32_t
}

pub mod CExampleSchemaVData_PolymorphicDerivedA { // CExampleSchemaVData_PolymorphicBase
    pub const m_nDerivedA: usize = 0x10; // int32_t
}

pub mod CExampleSchemaVData_PolymorphicDerivedB { // CExampleSchemaVData_PolymorphicBase
    pub const m_nDerivedB: usize = 0x10; // int32_t
}

pub mod CSchemaSystemInternalRegistration {
    pub const m_Vector2D: usize = 0x0; // Vector2D
    pub const m_Vector: usize = 0x8; // Vector
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
    pub const m_CUtlString: usize = 0x140; // CUtlString
    pub const m_CUtlSymbol: usize = 0x148; // CUtlSymbol
    pub const m_stringToken: usize = 0x14C; // CUtlStringToken
    pub const m_stringTokenWithStorage: usize = 0x150; // CUtlStringTokenWithStorage
    pub const m_ResourceTypes: usize = 0x168; // CResourceArray<CResourcePointer<CResourceString>>
    pub const m_KV3: usize = 0x170; // KeyValues3
}

pub mod InfoForResourceTypeCResourceManifestInternal {
}

pub mod ResourceId_t {
    pub const m_Value: usize = 0x0; // uint64_t
}