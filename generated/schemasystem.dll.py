'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:03 +0000
'''

class CExampleSchemaVData_Monomorphic:
    m_nExample1 = 0x0 # int32_t
    m_nExample2 = 0x4 # int32_t

class CExampleSchemaVData_PolymorphicBase:
    m_nBase = 0x8 # int32_t

class CExampleSchemaVData_PolymorphicDerivedA: # CExampleSchemaVData_PolymorphicBase
    m_nDerivedA = 0x10 # int32_t

class CExampleSchemaVData_PolymorphicDerivedB: # CExampleSchemaVData_PolymorphicBase
    m_nDerivedB = 0x10 # int32_t

class CSchemaSystemInternalRegistration:
    m_Vector2D = 0x0 # Vector2D
    m_Vector = 0x8 # Vector
    m_VectorAligned = 0x20 # VectorAligned
    m_Quaternion = 0x30 # Quaternion
    m_QAngle = 0x40 # QAngle
    m_RotationVector = 0x4C # RotationVector
    m_RadianEuler = 0x58 # RadianEuler
    m_DegreeEuler = 0x64 # DegreeEuler
    m_QuaternionStorage = 0x70 # QuaternionStorage
    m_matrix3x4_t = 0x80 # matrix3x4_t
    m_matrix3x4a_t = 0xB0 # matrix3x4a_t
    m_Color = 0xE0 # Color
    m_Vector4D = 0xE4 # Vector4D
    m_CTransform = 0x100 # CTransform
    m_pKeyValues = 0x120 # KeyValues*
    m_CUtlBinaryBlock = 0x128 # CUtlBinaryBlock
    m_CUtlString = 0x140 # CUtlString
    m_CUtlSymbol = 0x148 # CUtlSymbol
    m_stringToken = 0x14C # CUtlStringToken
    m_stringTokenWithStorage = 0x150 # CUtlStringTokenWithStorage
    m_ResourceTypes = 0x168 # CResourceArray<CResourcePointer<CResourceString>>
    m_KV3 = 0x170 # KeyValues3

class InfoForResourceTypeCResourceManifestInternal:

class ResourceId_t:
    m_Value = 0x0 # uint64_t
