// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-29 21:16:02.890657436 UTC

namespace CS2Dumper.Schemas {
    // Module: libschemasystem.so
    // Classes count: 5
    // Enums count: 0
    public static class Libschemasystem {
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MResourceTypeForInfoType
        public static class InfoForResourceTypeCResourceManifestInternal {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVData_Monomorphic {
            public const nint m_nExample1 = 0x0; // int32
            public const nint m_nExample2 = 0x4; // int32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVData_PolymorphicBase {
            public const nint m_nBase = 0x8; // int32
        }
        // Parent: CExampleSchemaVData_PolymorphicBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVData_PolymorphicDerivedA {
            public const nint m_nDerivedA = 0xC; // int32
        }
        // Parent: CExampleSchemaVData_PolymorphicBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExampleSchemaVData_PolymorphicDerivedB {
            public const nint m_nDerivedB = 0xC; // int32
        }
    }
}
