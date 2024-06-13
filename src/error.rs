use thiserror::Error;

pub type Result<T> = std::result::Result<T, Error>;

#[derive(Debug, Error)]
pub enum Error {
    #[error(transparent)]
    Fmt(#[from] std::fmt::Error),

    #[error(transparent)]
    Io(#[from] std::io::Error),

    #[error(transparent)]
    Memflow(#[from] memflow::error::Error),

    #[error(transparent)]
    Serde(#[from] serde_json::Error),

    #[error("unable to parse signature")]
    SignatureParseError,

    #[error("unable to find signature for: {0}")]
    SignatureNotFound(String),

    #[error("{0}")]
    Other(&'static str),
}

impl<T> From<memflow::error::PartialError<T>> for Error {
    fn from(e: memflow::error::PartialError<T>) -> Self {
        Error::Memflow(e.into())
    }
}

impl From<skidscan::SignatureParseError> for Error {
    fn from(_e: skidscan::SignatureParseError) -> Self {
        Error::SignatureParseError
    }
}
