use std::collections::HashMap;

use anyhow::Result;

use lazy_static::lazy_static;

use regex::Regex;

use crate::os::Process;

const TYPE_MAP: &[(&'static str, &'static str)] = &[
    ("uint8", "uint8_t"),
    ("uint16", "uint16_t"),
    ("uint32", "uint32_t"),
    ("uint64", "uint64_t"),
    ("int8", "int8_t"),
    ("int16", "int16_t"),
    ("int32", "int32_t"),
    ("int64", "int64_t"),
    ("float32", "float"),
    ("float64", "double"),
];

lazy_static! {
    static ref REGEX_MAP: HashMap<&'static str, Regex> = {
        let mut map = HashMap::with_capacity(TYPE_MAP.len());

        for (k, _v) in TYPE_MAP.iter() {
            map.insert(*k, Regex::new(&format!(r"\b{}\b", k)).unwrap());
        }

        map
    };
}

pub struct SchemaType<'a> {
    process: &'a Process,
    address: usize,
}

impl<'a> SchemaType<'a> {
    pub fn new(process: &'a Process, address: usize) -> Self {
        Self { process, address }
    }

    pub fn name(&self) -> Result<String> {
        let name_ptr = self.process.read_memory::<usize>(self.address + 0x8)?;

        let name = self
            .process
            .read_string(name_ptr.into())?
            .replace(" ", "")
            .to_string();

        Ok(Self::convert_type_name(&name))
    }

    fn convert_type_name(type_name: &str) -> String {
        let mut result = type_name.to_string();

        for (k, v) in TYPE_MAP.iter() {
            let re = REGEX_MAP.get(*k).unwrap();

            result = re.replace_all(&result, &v.to_string()).to_string();
        }

        result
    }
}
