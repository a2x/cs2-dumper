/*
 * https://github.com/a2x/cs2-dumper
 * 2023-10-20 05:22:29.450005300 UTC
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod CAnimScriptBase {
    pub const m_bIsValid: usize = 0x8; // bool
}

pub mod EmptyTestScript { // CAnimScriptBase
    pub const m_hTest: usize = 0x10; // CAnimScriptParam<float>
}