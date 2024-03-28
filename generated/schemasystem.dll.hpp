/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

#pragma once

#include <cstddef>

namespace CExampleSchemaVData_Monomorphic {
    constexpr std::ptrdiff_t m_nExample1 = 0x0; // int32_t
    constexpr std::ptrdiff_t m_nExample2 = 0x4; // int32_t
}

namespace CExampleSchemaVData_PolymorphicBase {
    constexpr std::ptrdiff_t m_nBase = 0x8; // int32_t
}

namespace CExampleSchemaVData_PolymorphicDerivedA { // CExampleSchemaVData_PolymorphicBase
    constexpr std::ptrdiff_t m_nDerivedA = 0x10; // int32_t
}

namespace CExampleSchemaVData_PolymorphicDerivedB { // CExampleSchemaVData_PolymorphicBase
    constexpr std::ptrdiff_t m_nDerivedB = 0x10; // int32_t
}

namespace CSchemaSystemInternalRegistration {
    constexpr std::ptrdiff_t m_Vector2D = 0x0; // Vector2D
    constexpr std::ptrdiff_t m_Vector = 0x8; // Vector
    constexpr std::ptrdiff_t m_VectorAligned = 0x20; // VectorAligned
    constexpr std::ptrdiff_t m_Quaternion = 0x30; // Quaternion
    constexpr std::ptrdiff_t m_QAngle = 0x40; // QAngle
    constexpr std::ptrdiff_t m_RotationVector = 0x4C; // RotationVector
    constexpr std::ptrdiff_t m_RadianEuler = 0x58; // RadianEuler
    constexpr std::ptrdiff_t m_DegreeEuler = 0x64; // DegreeEuler
    constexpr std::ptrdiff_t m_QuaternionStorage = 0x70; // QuaternionStorage
    constexpr std::ptrdiff_t m_matrix3x4_t = 0x80; // matrix3x4_t
    constexpr std::ptrdiff_t m_matrix3x4a_t = 0xB0; // matrix3x4a_t
    constexpr std::ptrdiff_t m_Color = 0xE0; // Color
    constexpr std::ptrdiff_t m_Vector4D = 0xE4; // Vector4D
    constexpr std::ptrdiff_t m_CTransform = 0x100; // CTransform
    constexpr std::ptrdiff_t m_pKeyValues = 0x120; // KeyValues*
    constexpr std::ptrdiff_t m_CUtlBinaryBlock = 0x128; // CUtlBinaryBlock
    constexpr std::ptrdiff_t m_CUtlString = 0x140; // CUtlString
    constexpr std::ptrdiff_t m_CUtlSymbol = 0x148; // CUtlSymbol
    constexpr std::ptrdiff_t m_stringToken = 0x14C; // CUtlStringToken
    constexpr std::ptrdiff_t m_stringTokenWithStorage = 0x150; // CUtlStringTokenWithStorage
    constexpr std::ptrdiff_t m_ResourceTypes = 0x168; // CResourceArray<CResourcePointer<CResourceString>>
    constexpr std::ptrdiff_t m_KV3 = 0x170; // KeyValues3
}

namespace InfoForResourceTypeCResourceManifestInternal {
}

namespace ResourceId_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // uint64_t
}