#pragma once

#include <cstddef>

namespace AABB_t {
    constexpr std::ptrdiff_t m_vMinBounds = 0x0; // Vector
    constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // Vector
}

namespace CFuseProgram {
    constexpr std::ptrdiff_t m_programBuffer = 0x0; // CUtlVector< uint8 >
    constexpr std::ptrdiff_t m_variablesRead = 0x18; // CUtlVector< FuseVariableIndex_t >
    constexpr std::ptrdiff_t m_variablesWritten = 0x30; // CUtlVector< FuseVariableIndex_t >
    constexpr std::ptrdiff_t m_nMaxTempVarsUsed = 0x48; // int32
}

namespace CFuseSymbolTable {
    constexpr std::ptrdiff_t m_constants = 0x0; // CUtlVector< ConstantInfo_t >
    constexpr std::ptrdiff_t m_variables = 0x18; // CUtlVector< VariableInfo_t >
    constexpr std::ptrdiff_t m_functions = 0x30; // CUtlVector< FunctionInfo_t >
    constexpr std::ptrdiff_t m_constantMap = 0x48; // CUtlHashtable< CUtlStringToken, int32 >
    constexpr std::ptrdiff_t m_variableMap = 0x68; // CUtlHashtable< CUtlStringToken, int32 >
    constexpr std::ptrdiff_t m_functionMap = 0x88; // CUtlHashtable< CUtlStringToken, int32 >
}

namespace ConstantInfo_t {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nameToken = 0x8; // CUtlStringToken
    constexpr std::ptrdiff_t m_flValue = 0xC; // float32
}

namespace FourQuaternions {
    constexpr std::ptrdiff_t x = 0x0; // fltx4
    constexpr std::ptrdiff_t y = 0x10; // fltx4
    constexpr std::ptrdiff_t z = 0x20; // fltx4
    constexpr std::ptrdiff_t w = 0x30; // fltx4
}

namespace FunctionInfo_t {
    constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_nameToken = 0x10; // CUtlStringToken
    constexpr std::ptrdiff_t m_nParamCount = 0x14; // int32
    constexpr std::ptrdiff_t m_nIndex = 0x18; // FuseFunctionIndex_t
    constexpr std::ptrdiff_t m_bIsPure = 0x1A; // bool
}

namespace FuseFunctionIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // uint16
}

namespace FuseVariableIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // uint16
}

namespace ManifestTestResource_t {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_child = 0x8; // CStrongHandle< InfoForResourceTypeManifestTestResource_t >
}

namespace PackedAABB_t {
    constexpr std::ptrdiff_t m_nPackedMin = 0x0; // uint32
    constexpr std::ptrdiff_t m_nPackedMax = 0x4; // uint32
}

namespace TestResource_t {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
}

namespace VariableInfo_t {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nameToken = 0x8; // CUtlStringToken
    constexpr std::ptrdiff_t m_nIndex = 0xC; // FuseVariableIndex_t
    constexpr std::ptrdiff_t m_nNumComponents = 0xE; // uint8
    constexpr std::ptrdiff_t m_eVarType = 0xF; // FuseVariableType_t
    constexpr std::ptrdiff_t m_eAccess = 0x10; // FuseVariableAccess_t
}