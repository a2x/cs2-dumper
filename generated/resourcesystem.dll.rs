#[allow(non_snake_case, non_upper_case_globals)]
pub mod AABB_t {
    pub const m_vMinBounds: usize = 0x0;
    pub const m_vMaxBounds: usize = 0xc;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CFuseProgram {
    pub const m_programBuffer: usize = 0x0;
    pub const m_variablesRead: usize = 0x18;
    pub const m_variablesWritten: usize = 0x30;
    pub const m_nMaxTempVarsUsed: usize = 0x48;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CFuseSymbolTable {
    pub const m_constants: usize = 0x0;
    pub const m_variables: usize = 0x18;
    pub const m_functions: usize = 0x30;
    pub const m_constantMap: usize = 0x48;
    pub const m_variableMap: usize = 0x68;
    pub const m_functionMap: usize = 0x88;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod ConstantInfo_t {
    pub const m_name: usize = 0x0;
    pub const m_nameToken: usize = 0x8;
    pub const m_flValue: usize = 0xc;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod FourQuaternions {
    pub const x: usize = 0x0;
    pub const y: usize = 0x10;
    pub const z: usize = 0x20;
    pub const w: usize = 0x30;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod FunctionInfo_t {
    pub const m_name: usize = 0x8;
    pub const m_nameToken: usize = 0x10;
    pub const m_nParamCount: usize = 0x14;
    pub const m_nIndex: usize = 0x18;
    pub const m_bIsPure: usize = 0x1a;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod FuseFunctionIndex_t {
    pub const m_Value: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod FuseVariableIndex_t {
    pub const m_Value: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod ManifestTestResource_t {
    pub const m_name: usize = 0x0;
    pub const m_child: usize = 0x8;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PackedAABB_t {
    pub const m_nPackedMin: usize = 0x0;
    pub const m_nPackedMax: usize = 0x4;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod TestResource_t {
    pub const m_name: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod VariableInfo_t {
    pub const m_name: usize = 0x0;
    pub const m_nameToken: usize = 0x8;
    pub const m_nIndex: usize = 0xc;
    pub const m_nNumComponents: usize = 0xe;
    pub const m_eVarType: usize = 0xf;
    pub const m_eAccess: usize = 0x10;
}