use thiserror::Error;

#[derive(Debug, Error)]
pub enum Error {
    #[error(transparent)]
    Fmt(#[from] std::fmt::Error),

    #[error(transparent)]
    Io(#[from] std::io::Error),

    #[error(transparent)]
    Memflow(#[from] memflow::error::Error),

    #[error(transparent)]
    Pelite(#[from] pelite::Error),

    #[error(transparent)]
    Serde(#[from] serde_json::Error),

    #[error("index {idx} is out of bounds for array with length {len}")]
    OutOfBounds { idx: usize, len: usize },

    #[error("{0}")]
    Other(&'static str),
}

impl<T> From<memflow::error::PartialError<T>> for Error {
    #[inline]
    fn from(err: memflow::error::PartialError<T>) -> Self {
        Error::Memflow(err.into())
    }
}

pub type Result<T> = std::result::Result<T, Error>;
