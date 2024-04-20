use std::path::PathBuf;
use std::str::FromStr;
use std::time::Instant;

use clap::*;

use log::{info, Level};

use memflow::prelude::v1::*;

use simplelog::{ColorChoice, TermLogger};

use error::Result;
use output::Output;

mod analysis;
mod error;
mod mem;
mod output;
mod source2;

#[derive(Debug, Parser)]
#[command(author, version)]
struct Args {
    /// The name of the memflow connector to use.
    #[arg(short, long)]
    connector: Option<String>,

    /// Additional arguments to pass to the memflow connector.
    #[arg(short = 'a', long)]
    connector_args: Option<String>,

    /// The types of files to generate.
    #[arg(short, long, value_delimiter = ',', default_values = ["cs", "hpp", "json", "rs"])]
    file_types: Vec<String>,

    /// The number of spaces to use per indentation level.
    #[arg(short, long, default_value_t = 4)]
    indent_size: usize,

    /// The output directory to write the generated files to.
    #[arg(short, long, default_value = "output")]
    output: PathBuf,

    /// The name of the game process.
    #[arg(short, long, default_value = "cs2.exe")]
    process_name: String,

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

    let conn_args = args
        .connector_args
        .map(|s| ConnectorArgs::from_str(&s).expect("unable to parse connector arguments"))
        .unwrap_or_default();

    let os = if let Some(conn) = args.connector {
        let inventory = Inventory::scan();

        inventory
            .builder()
            .connector(&conn)
            .args(conn_args)
            .os("win32")
            .build()?
    } else {
        // Fallback to the native OS layer if no connector name was specified.
        memflow_native::create_os(&Default::default(), Default::default())?
    };

    let mut process = os.into_process_by_name(&args.process_name)?;

    let result = analysis::analyze_all(&mut process)?;
    let output = Output::new(&args.file_types, args.indent_size, &args.output, &result)?;

    output.dump_all(&mut process)?;

    info!("finished in {:?}", now.elapsed());

    Ok(())
}
