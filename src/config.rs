use std::collections::HashMap;
use std::fs;
use std::sync::LazyLock;

use serde::{Deserialize, Serialize};

pub static CONFIG: LazyLock<Config> = LazyLock::new(|| {
    let content = fs::read_to_string("config.json").unwrap_or_else(|_| {
        panic!(
            "unable to read config.json file!\nmake sure the file is placed in the same directory as the cs2-dumper executable"
        )
    });

    serde_json::from_str(&content).expect("unable to parse config.json file")
});

#[derive(Debug, Deserialize, Serialize)]
#[serde(rename_all = "snake_case", tag = "type")]
pub enum Operation {
    /// Adds the specified value to the current address.
    Add { value: usize },

    /// Resolves the absolute address of a RIP-relative address.
    Rip {
        offset: Option<usize>,
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
    /// Name of the process.
    pub executable: String,

    /// List of signatures to search for.
    pub signatures: Vec<HashMap<String, Vec<Signature>>>,
}

#[derive(Debug, Deserialize, Serialize)]
pub struct Signature {
    /// Name of the signature.
    pub name: String,

    /// An IDA-style pattern containing the bytes to search for.
    pub pattern: String,

    /// List of operations to perform on the matched address.
    pub operations: Vec<Operation>,
}
