use thiserror::Error;

#[derive(Debug, Error)]
pub enum Error {
    #[error(transparent)]
    Fmt(#[from] std::fmt::Error),

    #[error("index {idx} is out of bounds for array with length {len}")]
    IndexOutOfBounds { idx: usize, len: usize },

    #[error(transparent)]
    Io(#[from] std::io::Error),

    #[error(transparent)]
    Memflow(#[from] memflow::error::Error),

    #[error(transparent)]
    Serde(#[from] serde_json::Error),

    #[error("unable to parse signature")]
    SignatureInvalid,

    #[error("unable to find signature for: {0}")]
    SignatureNotFound(String),

    #[error("{0}")]
    Other(&'static str),
}

impl<T> From<memflow::error::PartialError<T>> for Error {
    #[inline]
    fn from(err: memflow::error::PartialError<T>) -> Self {
        Error::Memflow(err.into())
    }
}

impl From<skidscan::SignatureParseError> for Error {
    #[inline]
    fn from(_err: skidscan::SignatureParseError) -> Self {
        Error::SignatureInvalid
    }
}

pub type Result<T> = std::result::Result<T, Error>;
