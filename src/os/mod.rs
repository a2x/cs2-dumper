#[cfg(target_os = "linux")]
pub use module::ModuleEntry;

pub use module::Module;
pub use process::Process;

pub mod module;
pub mod process;
