use serde::{Deserialize, Serialize};

#[derive(Debug, Deserialize, Serialize)]
#[serde(tag = "type", rename_all = "camelCase")]
pub enum Operation {
    Add {
        value: usize,
    },
    Deref {
        times: Option<usize>,
        size: Option<usize>,
    },
    Jmp {
        offset: Option<usize>,
        length: Option<usize>,
    },
    Rip {
        offset: Option<usize>,
        length: Option<usize>,
    },
    Slice {
        start: usize,
        end: usize,
    },
    Sub {
        value: usize,
    },
}

#[derive(Debug, Deserialize, Serialize)]
pub struct Config {
    pub signatures: Vec<Signature>,
}

#[derive(Debug, Deserialize, Serialize)]
pub struct Signature {
    pub name: String,
    pub module: String,
    pub pattern: String,
    pub operations: Vec<Operation>,
}
