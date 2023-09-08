#pragma once

#include <cstddef>

namespace AABB_t {
    constexpr std::ptrdiff_t m_vMinBounds = 0x0;
    constexpr std::ptrdiff_t m_vMaxBounds = 0xc;
}

namespace CFuseProgram {
    constexpr std::ptrdiff_t m_programBuffer = 0x0;
    constexpr std::ptrdiff_t m_variablesRead = 0x18;
    constexpr std::ptrdiff_t m_variablesWritten = 0x30;
    constexpr std::ptrdiff_t m_nMaxTempVarsUsed = 0x48;
}

namespace CFuseSymbolTable {
    constexpr std::ptrdiff_t m_constants = 0x0;
    constexpr std::ptrdiff_t m_variables = 0x18;
    constexpr std::ptrdiff_t m_functions = 0x30;
    constexpr std::ptrdiff_t m_constantMap = 0x48;
    constexpr std::ptrdiff_t m_variableMap = 0x68;
    constexpr std::ptrdiff_t m_functionMap = 0x88;
}

namespace ConstantInfo_t {
    constexpr std::ptrdiff_t m_name = 0x0;
    constexpr std::ptrdiff_t m_nameToken = 0x8;
    constexpr std::ptrdiff_t m_flValue = 0xc;
}

namespace FourQuaternions {
    constexpr std::ptrdiff_t x = 0x0;
    constexpr std::ptrdiff_t y = 0x10;
    constexpr std::ptrdiff_t z = 0x20;
    constexpr std::ptrdiff_t w = 0x30;
}

namespace FunctionInfo_t {
    constexpr std::ptrdiff_t m_name = 0x8;
    constexpr std::ptrdiff_t m_nameToken = 0x10;
    constexpr std::ptrdiff_t m_nParamCount = 0x14;
    constexpr std::ptrdiff_t m_nIndex = 0x18;
    constexpr std::ptrdiff_t m_bIsPure = 0x1a;
}

namespace FuseFunctionIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0;
}

namespace FuseVariableIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0;
}

namespace ManifestTestResource_t {
    constexpr std::ptrdiff_t m_name = 0x0;
    constexpr std::ptrdiff_t m_child = 0x8;
}

namespace PackedAABB_t {
    constexpr std::ptrdiff_t m_nPackedMin = 0x0;
    constexpr std::ptrdiff_t m_nPackedMax = 0x4;
}

namespace TestResource_t {
    constexpr std::ptrdiff_t m_name = 0x0;
}

namespace VariableInfo_t {
    constexpr std::ptrdiff_t m_name = 0x0;
    constexpr std::ptrdiff_t m_nameToken = 0x8;
    constexpr std::ptrdiff_t m_nIndex = 0xc;
    constexpr std::ptrdiff_t m_nNumComponents = 0xe;
    constexpr std::ptrdiff_t m_eVarType = 0xf;
    constexpr std::ptrdiff_t m_eAccess = 0x10;
}