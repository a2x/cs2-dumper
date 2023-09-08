public static class CExampleSchemaVData_Monomorphic {
    public const ulong m_nExample1 = 0x0;
    public const ulong m_nExample2 = 0x4;
}

public static class CExampleSchemaVData_PolymorphicBase {
    public const ulong m_nBase = 0x8;
}

public static class CExampleSchemaVData_PolymorphicDerivedA {
    public const ulong m_nDerivedA = 0x10;
}

public static class CExampleSchemaVData_PolymorphicDerivedB {
    public const ulong m_nDerivedB = 0x10;
}

public static class CSchemaSystemInternalRegistration {
    public const ulong m_Vector2D = 0x0;
    public const ulong m_Vector = 0x8;
    public const ulong m_VectorAligned = 0x20;
    public const ulong m_Quaternion = 0x30;
    public const ulong m_QAngle = 0x40;
    public const ulong m_RotationVector = 0x4c;
    public const ulong m_RadianEuler = 0x58;
    public const ulong m_DegreeEuler = 0x64;
    public const ulong m_QuaternionStorage = 0x70;
    public const ulong m_matrix3x4_t = 0x80;
    public const ulong m_matrix3x4a_t = 0xb0;
    public const ulong m_Color = 0xe0;
    public const ulong m_Vector4D = 0xe4;
    public const ulong m_CTransform = 0x100;
    public const ulong m_pKeyValues = 0x120;
    public const ulong m_CUtlBinaryBlock = 0x128;
    public const ulong m_CUtlString = 0x140;
    public const ulong m_CUtlSymbol = 0x148;
    public const ulong m_stringToken = 0x14c;
    public const ulong m_stringTokenWithStorage = 0x150;
    public const ulong m_ResourceTypes = 0x168;
    public const ulong m_KV3 = 0x170;
}

public static class ResourceId_t {
    public const ulong m_Value = 0x0;
}