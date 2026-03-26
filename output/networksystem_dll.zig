// Generated using https://github.com/a2x/cs2-dumper
// 2026-03-26 05:30:26.200384300 UTC

pub const cs2_dumper = struct {
    pub const schemas = struct {
        // Module: networksystem.dll
        // Class count: 1
        // Enum count: 1
        pub const networksystem_dll = struct {
            // Alignment: 4
            // Member count: 4
            pub const OutOfPVSUpdates_t = enum(u32) {
                OOPVSUpdates_OptOut = 0x0,
                OOPVSUpdates_OptIn = 0x1,
                OOPVSUpdates_Default = 0x2,
                OOPVSUpdates_Count = 0x3
            };
            // Parent: None
            // Field count: 1
            pub const ChangeAccessorFieldPathIndex_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
        };
    };
};
