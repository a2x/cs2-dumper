use serde::{Deserialize, Serialize};

/// Represents an operation that can be performed on a memory address.
#[derive(Debug, Deserialize, Serialize)]
#[serde(tag = "type", rename_all = "camelCase")]
pub enum Operation {
    /// Represents an "add" operation with a given value.
    ///
    /// `value` is the value to add.
    Add { value: usize },

    /// Represents a "dereference" operation with optional parameters for the number of times to dereference
    /// and the size of the resulting value.
    ///
    /// `times` is the number of times to dereference the address. If `None`, the number of times will be `1`.
    /// `size` is the size of the resulting value. If `None`, the size will be `8`.
    Dereference {
        times: Option<usize>,
        size: Option<usize>,
    },

    /// Represents an operation to resolve the absolute address of a relative "jmp" with an optional
    /// offset and length.
    ///
    /// `offset` is the offset of the displacement value. If `None`, the offset will be `0x1`.
    /// `length` is the length of the instruction. If `None`, the length will be `0x5`.
    ResolveJmp {
        offset: Option<usize>,
        length: Option<usize>,
    },

    /// Represents an operation to resolve the absolute address of a RIP-relative address with an optional
    /// offset and length.
    ///
    /// `offset` is the offset of the displacement value. If `None`, the offset will be `0x3`.
    /// `length` is the length of the instruction. If `None`, the length will be `0x7`.
    ResolveRip {
        offset: Option<usize>,
        length: Option<usize>,
    },

    /// Represents a "slice" operation with a start and end index.
    ///
    /// `start` is the start index of the slice.
    /// `end` is the end index of the slice.
    Slice { start: usize, end: usize },

    /// Represents a "subtract" operation with a given value.
    ///
    /// `value` is the value to subtract.
    Subtract { value: usize },
}

/// Represents a signature for a specific module.
#[derive(Debug, Deserialize, Serialize)]
pub struct Signature {
    /// The name of the signature.
    pub name: String,

    /// The name of the module.
    pub module: String,

    /// The pattern of the signature.
    pub pattern: String,

    /// The list of operations to perform on the signature.
    pub operations: Vec<Operation>,
}

/// Configuration struct that holds a vector of `Signature` structs.
#[derive(Debug, Deserialize, Serialize)]
pub struct Config {
    pub signatures: Vec<Signature>,
}
