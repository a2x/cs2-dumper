// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-29 20:26:00.560999200 UTC

namespace CS2Dumper.Schemas {
    // Module: schemasystem.dll
    // Class count: 7
    // Enum count: 0
    public static class SchemasystemDll {
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCResourceManifestInternal {
        }
        // Parent: None
        // Field count: 23
        public static class CSchemaSystemInternalRegistration {
            public const nint m_Vector2D = 0x0; // Vector2D
            public const nint m_Vector = 0x8; // Vector
            public const nint m_VectorWS = 0x14; // VectorWS
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
            public const nint m_CUtlString = 0x138; // CUtlString
            public const nint m_CUtlSymbol = 0x140; // CUtlSymbol
            public const nint m_stringToken = 0x144; // CUtlStringToken
            public const nint m_stringTokenWithStorage = 0x148; // CUtlStringTokenWithStorage
            public const nint m_ResourceTypes = 0x160; // CResourceArray<CResourcePointer<CResourceString>>
            public const nint m_KV3 = 0x168; // KeyValues3
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVData_PolymorphicDerivedA {
            public const nint m_nDerivedA = 0x10; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVData_PolymorphicBase {
            public const nint m_nBase = 0x8; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVData_PolymorphicDerivedB {
            public const nint m_nDerivedB = 0x10; // int32
        }
        // Parent: None
        // Field count: 1
        public static class ResourceId_t {
            public const nint m_Value = 0x0; // uint64
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVData_Monomorphic {
            public const nint m_nExample1 = 0x0; // int32
            public const nint m_nExample2 = 0x4; // int32
        }
    }
}
