/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 1 Dec 2023 04:38:02 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod CAnimScriptBase {
    pub const m_bIsValid: usize = 0x8; // bool
}

pub mod EmptyTestScript { // CAnimScriptBase
    pub const m_hTest: usize = 0x10; // CAnimScriptParam<float>
}