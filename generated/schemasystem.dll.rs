#![allow(non_snake_case, non_upper_case_globals)]

pub mod CExampleSchemaVData_Monomorphic {
    pub const m_nExample1: usize = 0x0;
    pub const m_nExample2: usize = 0x4;
}

pub mod CExampleSchemaVData_PolymorphicBase {
    pub const m_nBase: usize = 0x8;
}

pub mod CExampleSchemaVData_PolymorphicDerivedA {
    pub const m_nDerivedA: usize = 0x10;
}

pub mod CExampleSchemaVData_PolymorphicDerivedB {
    pub const m_nDerivedB: usize = 0x10;
}

pub mod CSchemaSystemInternalRegistration {
    pub const m_Vector2D: usize = 0x0;
    pub const m_Vector: usize = 0x8;
    pub const m_VectorAligned: usize = 0x20;
    pub const m_Quaternion: usize = 0x30;
    pub const m_QAngle: usize = 0x40;
    pub const m_RotationVector: usize = 0x4C;
    pub const m_RadianEuler: usize = 0x58;
    pub const m_DegreeEuler: usize = 0x64;
    pub const m_QuaternionStorage: usize = 0x70;
    pub const m_matrix3x4_t: usize = 0x80;
    pub const m_matrix3x4a_t: usize = 0xB0;
    pub const m_Color: usize = 0xE0;
    pub const m_Vector4D: usize = 0xE4;
    pub const m_CTransform: usize = 0x100;
    pub const m_pKeyValues: usize = 0x120;
    pub const m_CUtlBinaryBlock: usize = 0x128;
    pub const m_CUtlString: usize = 0x140;
    pub const m_CUtlSymbol: usize = 0x148;
    pub const m_stringToken: usize = 0x14C;
    pub const m_stringTokenWithStorage: usize = 0x150;
    pub const m_ResourceTypes: usize = 0x168;
    pub const m_KV3: usize = 0x170;
}

pub mod ResourceId_t {
    pub const m_Value: usize = 0x0;
}