use serde::{Deserialize, Serialize};

/// Represents an operation that can be performed on a memory address.
#[derive(Debug, Deserialize, Serialize)]
#[serde(tag = "type", rename_all = "camelCase")]
pub enum Operation {
    /// Represents an `add` operation.
    ///
    /// `value` is the value to add.
    Add { value: usize },

    /// Represents a `dereference` operation.
    ///
    /// `times` is the number of times to dereference the address. If `None`, the number of times will be `1`.
    /// `size` is the size of the resulting value. If `None`, the size will be `8`.
    Deref {
        times: Option<usize>,
        size: Option<usize>,
    },

    /// Represents an operation to resolve the absolute address of a relative call.
    ///
    /// `offset` is the offset of the displacement value. If `None`, the offset will be `0x1`.
    /// `length` is the length of the instruction. If `None`, the length will be `0x5`.
    Jmp {
        offset: Option<usize>,
        length: Option<usize>,
    },

    /// Represents an operation to resolve the absolute address of a RIP-relative address.
    ///
    /// `offset` is the offset of the displacement value. If `None`, the offset will be `0x3`.
    /// `length` is the length of the instruction. If `None`, the length will be `0x7`.
    Rip {
        offset: Option<usize>,
        length: Option<usize>,
    },

    /// Represents a `slice` operation.
    ///
    /// `start` is the start index of the slice.
    /// `end` is the end index of the slice.
    Slice { start: usize, end: usize },

    /// Represents a `subtract` operation.
    ///
    /// `value` is the value to subtract.
    Sub { value: usize },
}

/// Represents a signature specified in the `config.json` file.
#[derive(Debug, Deserialize, Serialize)]
pub struct Signature {
    /// The name of the signature.
    pub name: String,

    /// The name of the module.
    pub module: String,

    /// The pattern of the signature.
    pub pattern: String,

    /// The list of operations to perform on the target address.
    pub operations: Vec<Operation>,
}

/// Represents the `config.json` file.
#[derive(Debug, Deserialize, Serialize)]
pub struct Config {
    /// The list of signatures specified in the `config.json` file.
    pub signatures: Vec<Signature>,
}
