public static class CExampleSchemaVData_Monomorphic {
    public const nint m_nExample1 = 0x0;
    public const nint m_nExample2 = 0x4;
}

public static class CExampleSchemaVData_PolymorphicBase {
    public const nint m_nBase = 0x8;
}

public static class CExampleSchemaVData_PolymorphicDerivedA {
    public const nint m_nDerivedA = 0x10;
}

public static class CExampleSchemaVData_PolymorphicDerivedB {
    public const nint m_nDerivedB = 0x10;
}

public static class CSchemaSystemInternalRegistration {
    public const nint m_Vector2D = 0x0;
    public const nint m_Vector = 0x8;
    public const nint m_VectorAligned = 0x20;
    public const nint m_Quaternion = 0x30;
    public const nint m_QAngle = 0x40;
    public const nint m_RotationVector = 0x4C;
    public const nint m_RadianEuler = 0x58;
    public const nint m_DegreeEuler = 0x64;
    public const nint m_QuaternionStorage = 0x70;
    public const nint m_matrix3x4_t = 0x80;
    public const nint m_matrix3x4a_t = 0xB0;
    public const nint m_Color = 0xE0;
    public const nint m_Vector4D = 0xE4;
    public const nint m_CTransform = 0x100;
    public const nint m_pKeyValues = 0x120;
    public const nint m_CUtlBinaryBlock = 0x128;
    public const nint m_CUtlString = 0x140;
    public const nint m_CUtlSymbol = 0x148;
    public const nint m_stringToken = 0x14C;
    public const nint m_stringTokenWithStorage = 0x150;
    public const nint m_ResourceTypes = 0x168;
    public const nint m_KV3 = 0x170;
}

public static class ResourceId_t {
    public const nint m_Value = 0x0;
}