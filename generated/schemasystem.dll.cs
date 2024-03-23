/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

public static class CExampleSchemaVData_Monomorphic {
    public const nint m_nExample1 = 0x0; // int32_t
    public const nint m_nExample2 = 0x4; // int32_t
}

public static class CExampleSchemaVData_PolymorphicBase {
    public const nint m_nBase = 0x8; // int32_t
}

public static class CExampleSchemaVData_PolymorphicDerivedA { // CExampleSchemaVData_PolymorphicBase
    public const nint m_nDerivedA = 0x10; // int32_t
}

public static class CExampleSchemaVData_PolymorphicDerivedB { // CExampleSchemaVData_PolymorphicBase
    public const nint m_nDerivedB = 0x10; // int32_t
}

public static class CSchemaSystemInternalRegistration {
    public const nint m_Vector2D = 0x0; // Vector2D
    public const nint m_Vector = 0x8; // Vector
    public const nint m_VectorAligned = 0x20; // VectorAligned
    public const nint m_Quaternion = 0x30; // Quaternion
    public const nint m_QAngle = 0x40; // QAngle
    public const nint m_RotationVector = 0x4C; // RotationVector
    public const nint m_RadianEuler = 0x58; // RadianEuler
    public const nint m_DegreeEuler = 0x64; // DegreeEuler
    public const nint m_QuaternionStorage = 0x70; // QuaternionStorage
    public const nint m_matrix3x4_t = 0x80; // matrix3x4_t
    public const nint m_matrix3x4a_t = 0xB0; // matrix3x4a_t
    public const nint m_Color = 0xE0; // Color
    public const nint m_Vector4D = 0xE4; // Vector4D
    public const nint m_CTransform = 0x100; // CTransform
    public const nint m_pKeyValues = 0x120; // KeyValues*
    public const nint m_CUtlBinaryBlock = 0x128; // CUtlBinaryBlock
    public const nint m_CUtlString = 0x140; // CUtlString
    public const nint m_CUtlSymbol = 0x148; // CUtlSymbol
    public const nint m_stringToken = 0x14C; // CUtlStringToken
    public const nint m_stringTokenWithStorage = 0x150; // CUtlStringTokenWithStorage
    public const nint m_ResourceTypes = 0x168; // CResourceArray<CResourcePointer<CResourceString>>
    public const nint m_KV3 = 0x170; // KeyValues3
}

public static class InfoForResourceTypeCResourceManifestInternal {
}

public static class ResourceId_t {
    public const nint m_Value = 0x0; // uint64_t
}