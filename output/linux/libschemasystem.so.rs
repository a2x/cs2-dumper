// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-29 21:16:02.890657436 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: libschemasystem.so
        // Classes count: 5
        // Enums count: 0
        pub mod libschemasystem {
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            pub mod InfoForResourceTypeCResourceManifestInternal {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExampleSchemaVData_Monomorphic {
                pub const m_nExample1: usize = 0x0; // int32
                pub const m_nExample2: usize = 0x4; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExampleSchemaVData_PolymorphicBase {
                pub const m_nBase: usize = 0x8; // int32
            }
            // Parent: CExampleSchemaVData_PolymorphicBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExampleSchemaVData_PolymorphicDerivedA {
                pub const m_nDerivedA: usize = 0xC; // int32
            }
            // Parent: CExampleSchemaVData_PolymorphicBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CExampleSchemaVData_PolymorphicDerivedB {
                pub const m_nDerivedB: usize = 0xC; // int32
            }
        }
    }
}
