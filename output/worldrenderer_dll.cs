// Generated using https://github.com/a2x/cs2-dumper
// 2026-01-22 12:23:57.753951800 UTC

namespace CS2Dumper.Schemas {
    // Module: worldrenderer.dll
    // Class count: 4
    // Enum count: 3
    public static class WorldrendererDll {
        // Alignment: 1
        // Member count: 2
        public enum RTProxyInstanceFlags_t : byte {
            RTPROXY_INSTANCE_FLAG_NONE = 0x0,
            RTPROXY_INSTANCE_UNIQUE_MESH = 0x1
        }
        // Alignment: 4
        // Member count: 15
        public enum ObjectTypeFlags_t : uint {
            OBJECT_TYPE_NONE = 0x0,
            OBJECT_TYPE_MODEL = 0x8,
            OBJECT_TYPE_BLOCK_LIGHT = 0x10,
            OBJECT_TYPE_NO_SHADOWS = 0x20,
            OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 0x40,
            OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 0x80,
            OBJECT_TYPE_NO_SUN_SHADOWS = 0x100,
            OBJECT_TYPE_RENDER_WITH_DYNAMIC = 0x200,
            OBJECT_TYPE_RENDER_TO_CUBEMAPS = 0x400,
            OBJECT_TYPE_MODEL_HAS_LODS = 0x800,
            OBJECT_TYPE_OVERLAY = 0x2000,
            OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
            OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000,
            OBJECT_TYPE_DISABLE_VIS_CULLING = 0x10000,
            OBJECT_TYPE_BAKED_GEOMETRY = 0x20000
        }
        // Alignment: 1
        // Member count: 4
        public enum AggregateInstanceStream_t : byte {
            AGGREGATE_INSTANCE_STREAM_NONE = 0x0,
            AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 0x1,
            AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8 = 0x2,
            AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 0x4
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_pEntity (CEntityIdentity*)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x30; // CScriptComponent*
        }
        // Parent: 
        // Field count: 0
        public static class CEntityComponent {
        }
        // Parent: CEntityComponent
        // Field count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: 
        // Field count: 12
        //
        // Metadata:
        // NetworkVarNames: m_nameStringableIndex (int32)
        public static class CEntityIdentity {
            public const nint m_nameStringableIndex = 0x14; // int32
            public const nint m_name = 0x18; // CUtlSymbolLarge
            public const nint m_designerName = 0x20; // CUtlSymbolLarge
            public const nint m_flags = 0x30; // uint32
            public const nint m_worldGroupId = 0x38; // WorldGroupId_t
            public const nint m_fDataObjectTypes = 0x3C; // uint32
            public const nint m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
            public const nint m_pAttributes = 0x48; // CEntityAttributeTable*
            public const nint m_pPrev = 0x50; // CEntityIdentity*
            public const nint m_pNext = 0x58; // CEntityIdentity*
            public const nint m_pPrevByClass = 0x60; // CEntityIdentity*
            public const nint m_pNextByClass = 0x68; // CEntityIdentity*
        }
    }
}
