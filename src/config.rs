use std::collections::HashMap;
use std::fs;
use std::sync::LazyLock;

use serde::{Deserialize, Serialize};

pub static CONFIG: LazyLock<Config> = LazyLock::new(|| {
    let content = fs::read_to_string("config.json").unwrap();

    serde_json::from_str(&content).unwrap()
});

#[derive(Debug, Deserialize, Serialize)]
#[serde(rename_all = "snake_case", tag = "type")]
pub enum Operation {
    /// Adds the specified value to the current address.
    Add { value: usize },

    /// Resolves the absolute address of a RIP-relative address.
    Rip {
        /// The offset of the displacement value.
        offset: Option<usize>,

        /// The total length of the instruction.
        len: Option<usize>,
    },

    /// Reads the value at the current address, treating it as a pointer.
    Read,

    /// Extracts a range of bytes from the current address and interprets them as a value.
    Slice { start: usize, end: usize },

    /// Subtracts the specified value from the current address.
    Sub { value: usize },
}

#[derive(Debug, Deserialize, Serialize)]
pub struct Config {
    pub executable: String,
    pub signatures: Vec<HashMap<String, Vec<Signature>>>,
}

#[derive(Debug, Deserialize, Serialize)]
pub struct Signature {
    pub name: String,
    pub pattern: String,
    pub operations: Vec<Operation>,
}
