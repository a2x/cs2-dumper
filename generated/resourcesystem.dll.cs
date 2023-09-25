public static class AABB_t {
    public const nint m_vMinBounds = 0x0;
    public const nint m_vMaxBounds = 0xC;
}

public static class CFuseProgram {
    public const nint m_programBuffer = 0x0;
    public const nint m_variablesRead = 0x18;
    public const nint m_variablesWritten = 0x30;
    public const nint m_nMaxTempVarsUsed = 0x48;
}

public static class CFuseSymbolTable {
    public const nint m_constants = 0x0;
    public const nint m_variables = 0x18;
    public const nint m_functions = 0x30;
    public const nint m_constantMap = 0x48;
    public const nint m_variableMap = 0x68;
    public const nint m_functionMap = 0x88;
}

public static class ConstantInfo_t {
    public const nint m_name = 0x0;
    public const nint m_nameToken = 0x8;
    public const nint m_flValue = 0xC;
}

public static class FourQuaternions {
    public const nint x = 0x0;
    public const nint y = 0x10;
    public const nint z = 0x20;
    public const nint w = 0x30;
}

public static class FunctionInfo_t {
    public const nint m_name = 0x8;
    public const nint m_nameToken = 0x10;
    public const nint m_nParamCount = 0x14;
    public const nint m_nIndex = 0x18;
    public const nint m_bIsPure = 0x1A;
}

public static class FuseFunctionIndex_t {
    public const nint m_Value = 0x0;
}

public static class FuseVariableIndex_t {
    public const nint m_Value = 0x0;
}

public static class ManifestTestResource_t {
    public const nint m_name = 0x0;
    public const nint m_child = 0x8;
}

public static class PackedAABB_t {
    public const nint m_nPackedMin = 0x0;
    public const nint m_nPackedMax = 0x4;
}

public static class TestResource_t {
    public const nint m_name = 0x0;
}

public static class VariableInfo_t {
    public const nint m_name = 0x0;
    public const nint m_nameToken = 0x8;
    public const nint m_nIndex = 0xC;
    public const nint m_nNumComponents = 0xE;
    public const nint m_eVarType = 0xF;
    public const nint m_eAccess = 0x10;
}