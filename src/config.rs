use serde::{Deserialize, Serialize};

#[derive(Debug, Deserialize, Serialize)]
pub struct Signature {
    pub name: String,
    pub module: String,
    pub pattern: String,
    pub relative: bool,
    pub levels: i32,
    pub offset: i32,
}

#[derive(Debug, Deserialize, Serialize)]
pub struct Config {
    pub signatures: Vec<Signature>,
}
