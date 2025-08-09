use serde::Deserialize;

#[derive(Debug, Deserialize)]
pub struct Signature {
    pub name: String,
    pub pattern: String,
    #[serde(default)]
    pub actions: Vec<Action>,
}

#[derive(Debug, Deserialize)]
#[serde(tag = "type")]
pub enum Action {
    #[serde(rename = "find_code")]
    FindCode(FindCodeAction),
    #[serde(rename = "insert")]
    Insert(InsertAction),
}

#[derive(Debug, Deserialize)]
pub struct FindCodeAction {
    pub pattern: String,
    pub save_to: String,
    pub size: usize,
}

#[derive(Debug, Deserialize)]
pub struct InsertAction {
    pub name: String,
    pub value: Operation,
}

#[derive(Debug, Deserialize)]
pub struct Operation {
    pub op: String,
    pub args: Vec<ValueSource>,
}

#[derive(Debug, Deserialize)]
pub struct ValueSource {
    pub source: String,
    #[serde(default)]
    pub index: usize,
}