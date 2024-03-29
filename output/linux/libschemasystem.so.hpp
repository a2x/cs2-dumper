// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-29 21:16:02.890657436 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: libschemasystem.so
        // Classes count: 5
        // Enums count: 0
        namespace libschemasystem {
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCResourceManifestInternal {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExampleSchemaVData_Monomorphic {
                constexpr std::ptrdiff_t m_nExample1 = 0x0; // int32
                constexpr std::ptrdiff_t m_nExample2 = 0x4; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExampleSchemaVData_PolymorphicBase {
                constexpr std::ptrdiff_t m_nBase = 0x8; // int32
            }
            // Parent: CExampleSchemaVData_PolymorphicBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExampleSchemaVData_PolymorphicDerivedA {
                constexpr std::ptrdiff_t m_nDerivedA = 0xC; // int32
            }
            // Parent: CExampleSchemaVData_PolymorphicBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExampleSchemaVData_PolymorphicDerivedB {
                constexpr std::ptrdiff_t m_nDerivedB = 0xC; // int32
            }
        }
    }
}
