use serde::{Deserialize, Serialize};

#[derive(Debug, Deserialize, Serialize)]
#[serde(tag = "type", rename_all = "camelCase")]
pub enum Operation {
    Add {
        value: usize,
    },
    Dereference {
        times: Option<usize>,
        size: Option<usize>,
    },
    Jmp {
        offset: Option<usize>,
        length: Option<usize>,
    },
    RipRelative {
        offset: Option<usize>,
        length: Option<usize>,
    },
    Slice {
        start: usize,
        end: usize,
    },
    Subtract {
        value: usize,
    },
}

#[derive(Debug, Deserialize, Serialize)]
pub struct Signature {
    pub name: String,
    pub module: String,
    pub pattern: String,
    pub operations: Vec<Operation>,
}

#[derive(Debug, Deserialize, Serialize)]
pub struct Config {
    pub signatures: Vec<Signature>,
}
