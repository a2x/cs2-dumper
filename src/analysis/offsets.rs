use std::collections::{BTreeMap, HashMap};

use anyhow::Result;
use log::{debug, error};
use memflow::prelude::v1::*;
use pelite::pattern::{self, save_len};
use pelite::pe64::{Pe, PeView, Rva};

use crate::config::load_signatures;
use crate::config::pattern::{Action, FindCodeAction, InsertAction, Operation, ValueSource};

pub type OffsetMap = BTreeMap<String, BTreeMap<String, Rva>>;

fn handle_find_code_action(
    view: &PeView,
    action: &FindCodeAction,
    saved_values: &mut HashMap<String, Vec<u32>>,
) -> Result<()> {
    let pattern = pattern::parse(&action.pattern)?;
    let mut save = vec![0; action.size];

    if view.scanner().finds_code(&pattern, &mut save) {
        saved_values.insert(action.save_to.clone(), save);
    }

    Ok(())
}

fn get_value_from_source(
    source: &ValueSource,
    rva: u32,
    saved_values: &HashMap<String, Vec<u32>>,
) -> Result<u32> {
    match source.source.as_str() {
        "rva" => Ok(rva),
        saved_name => saved_values
            .get(saved_name)
            .and_then(|values| values.get(source.index))
            .copied()
            .ok_or_else(|| anyhow::anyhow!("Saved value not found: {}", saved_name)),
    }
}

fn calculate_value(
    op: &Operation,
    rva: u32,
    saved_values: &HashMap<String, Vec<u32>>,
) -> Result<u32> {
    let args: Result<Vec<u32>> = op
        .args
        .iter()
        .map(|value_source| get_value_from_source(value_source, rva, saved_values))
        .collect();

    match op.op.as_str() {
        "add" => Ok(args?.iter().sum()),
        _ => Err(anyhow::anyhow!("Unsupported operation: {}", op.op)),
    }
}

fn handle_insert_action(
    action: &InsertAction,
    data: &mut BTreeMap<String, u32>,
    rva: u32,
    saved_values: &HashMap<String, Vec<u32>>,
) -> Result<()> {
    let value = calculate_value(&action.value, rva, saved_values)?;
    data.insert(action.name.clone(), value);
    Ok(())
}

pub fn generate_offsets(view: &PeView, module_name: &str) -> Result<BTreeMap<String, Rva>> {
    let signatures = load_signatures()?;
    let mut data = BTreeMap::new();

    let module_name_without_ext = module_name.strip_suffix(".dll").unwrap_or(module_name);

    if let Some(module_signatures) = signatures.get(module_name_without_ext) {
        for signature in module_signatures {
            let pattern = pattern::parse(&signature.pattern)?;
            let mut save = vec![0; save_len(&pattern)];

            if view.scanner().finds_code(&pattern, &mut save) {
                let rva = save[1];

                data.insert(signature.name.clone(), rva);

                if !signature.actions.is_empty() {
                    let mut saved_values: HashMap<String, Vec<u32>> = HashMap::new();

                    for action in &signature.actions {
                        match action {
                            Action::FindCode(find_action) => {
                                handle_find_code_action(view, find_action, &mut saved_values)?;
                            }
                            Action::Insert(insert_action) => {
                                handle_insert_action(insert_action, &mut data, rva, &saved_values)?;
                            }
                        }
                    }
                }
            } else {
                error!("outdated pattern: {}", signature.name);
            }
        }
    }

    for (name, value) in &data {
        debug!(
            "found offset: {} at {:#X} ({}.dll + {:#X})",
            name,
            *value as u64 + view.optional_header().ImageBase,
            module_name_without_ext,
            value
        );
    }

    Ok(data)
}

pub fn offsets<P: Process + MemoryView>(process: &mut P) -> Result<OffsetMap> {
    let mut map = BTreeMap::new();

    let module_names = [
        "client.dll",
        "engine2.dll",
        "inputsystem.dll",
        "matchmaking.dll",
        "schemasystem.dll",
        "soundsystem.dll",
    ];

    for &module_name in &module_names {
        let module = process.module_by_name(module_name)?;
        let buf = process.read_raw(module.base, module.size as _).data_part()?;
        let view = PeView::from_bytes(&buf)?;

        let offsets = generate_offsets(&view, module_name)?;
        map.insert(module_name.to_string(), offsets);
    }

    Ok(map)
}
