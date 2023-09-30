use std::io;

#[derive(Debug)]
pub enum Error {
    BufferSizeMismatch(usize, usize),
    InvalidMagic(u32),
    IOError(io::Error),
    ModuleNotFound,
    PatternNotFound,
    ProcessNotFound,
    SectionNotFound,
    SerdeError(serde_json::Error),
    Utf8Error(std::string::FromUtf8Error),
    WindowsError(windows::core::Error),
}

impl From<io::Error> for Error {
    fn from(err: io::Error) -> Self {
        Self::IOError(err)
    }
}

impl From<std::string::FromUtf8Error> for Error {
    fn from(err: std::string::FromUtf8Error) -> Self {
        Self::Utf8Error(err)
    }
}

impl From<windows::core::Error> for Error {
    fn from(err: windows::core::Error) -> Self {
        Self::WindowsError(err)
    }
}

impl std::fmt::Display for Error {
    fn fmt(&self, fmt: &mut std::fmt::Formatter) -> std::fmt::Result {
        match self {
            Self::BufferSizeMismatch(expected, actual) => write!(
                fmt,
                "Buffer size mismatch: expected {}, got {}",
                expected, actual
            ),
            Self::InvalidMagic(magic) => write!(fmt, "Invalid magic: {:#X}", magic),
            Self::IOError(err) => write!(fmt, "IO error: {}", err),
            Self::ModuleNotFound => write!(fmt, "Module not found"),
            Self::PatternNotFound => write!(fmt, "Pattern not found"),
            Self::ProcessNotFound => write!(fmt, "Process not found"),
            Self::SectionNotFound => write!(fmt, "Section not found"),
            Self::SerdeError(err) => write!(fmt, "Serde error: {}", err),
            Self::Utf8Error(err) => write!(fmt, "UTF-8 error: {}", err),
            Self::WindowsError(err) => write!(fmt, "Windows error: {}", err),
        }
    }
}

pub type Result<T> = std::result::Result<T, Error>;
