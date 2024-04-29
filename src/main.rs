#![feature(lazy_cell)]

use std::path::PathBuf;
use std::time::Instant;

use clap::*;

use log::{info, Level};

use memflow::prelude::v1::*;

use simplelog::{ColorChoice, TermLogger};

use config::CONFIG;
use error::Result;
use output::Output;

mod analysis;
mod config;
mod error;
mod mem;
mod output;
mod source2;

#[derive(Debug, Parser)]
#[command(author, version)]
struct Args {
    /// The types of files to generate.
    #[arg(short, long, value_delimiter = ',', default_values = ["cs", "hpp", "json", "rs"])]
    file_types: Vec<String>,

    /// The number of spaces to use per indentation level.
    #[arg(short, long, default_value_t = 4)]
    indent_size: usize,

    /// The output directory to write the generated files to.
    #[arg(short, long, default_value = "output")]
    output: PathBuf,

    /// Increase logging verbosity. Can be specified multiple times.
    #[arg(short, action = ArgAction::Count)]
    verbose: u8,
}

fn main() -> Result<()> {
    let args = Args::parse();
    let now = Instant::now();

    let log_level = match args.verbose {
        0 => Level::Error,
        1 => Level::Warn,
        2 => Level::Info,
        3 => Level::Debug,
        _ => Level::Trace,
    };

    TermLogger::init(
        log_level.to_level_filter(),
        Default::default(),
        Default::default(),
        ColorChoice::Auto,
    )
    .unwrap();

    let os = memflow_native::create_os(&Default::default(), Default::default())?;

    let mut process = os.into_process_by_name(&CONFIG.executable)?;

    let result = analysis::analyze_all(&mut process)?;
    let output = Output::new(&args.file_types, args.indent_size, &args.output, &result)?;

    output.dump_all(&mut process)?;

    info!("finished in {:?}", now.elapsed());

    Ok(())
}
