use crate::util::{Address, Process};

use anyhow::Result;

use lazy_static::lazy_static;

use regex::Regex;

use std::collections::HashMap;

/// Map of type names to their `C` equivalents.
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
    /// A static HashMap that maps a string to a Regex pattern.
    /// The Regex pattern is created by wrapping the string with word boundaries `(\b)`.
    static ref REGEX_MAP: HashMap<&'static str, Regex> = {
        let mut map = HashMap::with_capacity(TYPE_MAP.len());

        for (k, _v) in TYPE_MAP.iter() {
            map.insert(*k, Regex::new(&format!(r"\b{}\b", k)).unwrap());
        }

        map
    };
}

/// Represents a type in the schema.
pub struct SchemaType<'a> {
    process: &'a Process,
    address: Address,
}

impl<'a> SchemaType<'a> {
    /// Creates a new `SchemaType` instance.
    ///
    /// # Arguments
    ///
    /// * `process` - A reference to the `Process` struct.
    /// * `address` - The address of the `SchemaType` instance.
    ///
    /// # Returns
    ///
    /// * `SchemaType` - The new `SchemaType` instance.
    pub fn new(process: &'a Process, address: Address) -> Self {
        Self { process, address }
    }

    /// Returns the name of the schema type.
    ///
    /// # Arguments
    ///
    /// * `&self` - A reference to the `SchemaType` instance.
    ///
    /// # Returns
    ///
    /// * `Result<String>` - The name of the schema type, wrapped in a `Result` object.
    pub fn name(&self) -> Result<String> {
        let name_ptr = self.process.read_memory::<usize>(self.address + 0x8)?;

        let name = self
            .process
            .read_string(name_ptr.into())?
            .replace(" ", "")
            .to_string();

        Ok(Self::convert_type_name(&name))
    }

    /// Converts a schema type name to its `C` equivalent.
    ///
    /// # Arguments
    ///
    /// * `type_name` - A string slice that holds the name of the schema type.
    ///
    /// # Returns
    ///
    /// * `String` - The `C` equivalent of the schema type name.
    fn convert_type_name(type_name: &str) -> String {
        let mut result = type_name.to_string();

        for (k, v) in TYPE_MAP.iter() {
            let re = REGEX_MAP.get(*k).unwrap();

            result = re.replace_all(&result, &v.to_string()).to_string();
        }

        result
    }
}
