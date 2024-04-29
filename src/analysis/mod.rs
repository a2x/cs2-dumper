pub use buttons::*;
pub use interfaces::*;
pub use offsets::*;
pub use schemas::*;

use memflow::prelude::v1::*;

use crate::error::Result;

mod buttons;
mod interfaces;
mod offsets;
mod schemas;

pub struct AnalysisResult {
    pub buttons: Vec<Button>,
    pub interfaces: InterfaceMap,
    pub offsets: OffsetMap,
    pub schemas: SchemaMap,
}

pub fn analyze_all(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<AnalysisResult> {
    let buttons = buttons(process)?;
    let interfaces = interfaces(process)?;
    let offsets = offsets(process)?;
    let schemas = schemas(process)?;

    Ok(AnalysisResult {
        buttons,
        interfaces,
        offsets,
        schemas,
    })
}
