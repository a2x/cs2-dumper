#pragma once

#include <cstddef>

namespace CSchemaSystemInternalRegistration {
    constexpr std::ptrdiff_t m_Vector2D = 0x0;
    constexpr std::ptrdiff_t m_Vector = 0x8;
    constexpr std::ptrdiff_t m_VectorAligned = 0x20;
    constexpr std::ptrdiff_t m_Quaternion = 0x30;
    constexpr std::ptrdiff_t m_QAngle = 0x40;
    constexpr std::ptrdiff_t m_RotationVector = 0x4c;
    constexpr std::ptrdiff_t m_RadianEuler = 0x58;
    constexpr std::ptrdiff_t m_DegreeEuler = 0x64;
    constexpr std::ptrdiff_t m_QuaternionStorage = 0x70;
    constexpr std::ptrdiff_t m_matrix3x4_t = 0x80;
    constexpr std::ptrdiff_t m_matrix3x4a_t = 0xb0;
    constexpr std::ptrdiff_t m_Color = 0xe0;
    constexpr std::ptrdiff_t m_Vector4D = 0xe4;
    constexpr std::ptrdiff_t m_CTransform = 0x100;
    constexpr std::ptrdiff_t m_pKeyValues = 0x120;
    constexpr std::ptrdiff_t m_CUtlBinaryBlock = 0x128;
    constexpr std::ptrdiff_t m_CUtlString = 0x140;
    constexpr std::ptrdiff_t m_CUtlSymbol = 0x148;
    constexpr std::ptrdiff_t m_stringToken = 0x14c;
    constexpr std::ptrdiff_t m_stringTokenWithStorage = 0x150;
    constexpr std::ptrdiff_t m_ResourceTypes = 0x168;
    constexpr std::ptrdiff_t m_KV3 = 0x170;
}

namespace InfoForResourceTypeCResourceManifestInternal {
}

namespace ResourceId_t {
    constexpr std::ptrdiff_t m_Value = 0x0;
}

namespace CExampleSchemaVData_Monomorphic {
    constexpr std::ptrdiff_t m_nExample1 = 0x0;
    constexpr std::ptrdiff_t m_nExample2 = 0x4;
}

namespace CExampleSchemaVData_PolymorphicBase {
    constexpr std::ptrdiff_t m_nBase = 0x8;
}

namespace CExampleSchemaVData_PolymorphicDerivedA {
    constexpr std::ptrdiff_t m_nDerivedA = 0x10;
}

namespace CExampleSchemaVData_PolymorphicDerivedB {
    constexpr std::ptrdiff_t m_nDerivedB = 0x10;
}

