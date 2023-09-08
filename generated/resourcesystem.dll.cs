public static class AABB_t {
    public const ulong m_vMinBounds = 0x0;
    public const ulong m_vMaxBounds = 0xc;
}

public static class CFuseProgram {
    public const ulong m_programBuffer = 0x0;
    public const ulong m_variablesRead = 0x18;
    public const ulong m_variablesWritten = 0x30;
    public const ulong m_nMaxTempVarsUsed = 0x48;
}

public static class CFuseSymbolTable {
    public const ulong m_constants = 0x0;
    public const ulong m_variables = 0x18;
    public const ulong m_functions = 0x30;
    public const ulong m_constantMap = 0x48;
    public const ulong m_variableMap = 0x68;
    public const ulong m_functionMap = 0x88;
}

public static class ConstantInfo_t {
    public const ulong m_name = 0x0;
    public const ulong m_nameToken = 0x8;
    public const ulong m_flValue = 0xc;
}

public static class FourQuaternions {
    public const ulong x = 0x0;
    public const ulong y = 0x10;
    public const ulong z = 0x20;
    public const ulong w = 0x30;
}

public static class FunctionInfo_t {
    public const ulong m_name = 0x8;
    public const ulong m_nameToken = 0x10;
    public const ulong m_nParamCount = 0x14;
    public const ulong m_nIndex = 0x18;
    public const ulong m_bIsPure = 0x1a;
}

public static class FuseFunctionIndex_t {
    public const ulong m_Value = 0x0;
}

public static class FuseVariableIndex_t {
    public const ulong m_Value = 0x0;
}

public static class ManifestTestResource_t {
    public const ulong m_name = 0x0;
    public const ulong m_child = 0x8;
}

public static class PackedAABB_t {
    public const ulong m_nPackedMin = 0x0;
    public const ulong m_nPackedMax = 0x4;
}

public static class TestResource_t {
    public const ulong m_name = 0x0;
}

public static class VariableInfo_t {
    public const ulong m_name = 0x0;
    public const ulong m_nameToken = 0x8;
    public const ulong m_nIndex = 0xc;
    public const ulong m_nNumComponents = 0xe;
    public const ulong m_eVarType = 0xf;
    public const ulong m_eAccess = 0x10;
}