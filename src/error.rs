use std::io;
use std::string::FromUtf8Error;

use serde_json::Error as SerdeError;

use thiserror::Error;

use windows::core::Error as WindowsError;

#[derive(Debug, Error)]
pub enum Error {
    #[error("Buffer size mismatch. Expected {0}, got {1}")]
    BufferSizeMismatch(usize, usize),

    #[error("Invalid magic: {0:#X}")]
    InvalidMagic(u32),

    #[error("IO error: {0}")]
    IOError(#[from] io::Error),

    #[error("Module not found: {0}")]
    ModuleNotFound(String),

    #[error("Pattern not found: {0}")]
    PatternNotFound(String),

    #[error("Process not found: {0}")]
    ProcessNotFound(String),

    #[error("Serde error: {0}")]
    SerdeError(#[from] SerdeError),

    #[error("UTF-8 error: {0}")]
    Utf8Error(#[from] FromUtf8Error),

    #[error("Windows error: {0}")]
    WindowsError(#[from] WindowsError),
}

pub type Result<T> = std::result::Result<T, Error>;
