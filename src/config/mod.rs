pub mod pattern;

use std::collections::HashMap;
use std::fs::File;
use std::io::BufReader;

use anyhow::Result;

use self::pattern::Signature;

pub fn load_signatures() -> Result<HashMap<String, Vec<Signature>>> {
    let file = File::open("signatures.json")?;
    let reader = BufReader::new(file);
    let signatures = serde_json::from_reader(reader)?;

    Ok(signatures)
}