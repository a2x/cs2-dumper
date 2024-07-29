use std::fs::File;
use std::path::PathBuf;
use std::str::FromStr;
use std::time::Instant;

use anyhow::Result;

use clap::*;

use log::{info, LevelFilter};

use memflow::prelude::v1::*;

use simplelog::{ColorChoice, CombinedLogger, Config, TermLogger, TerminalMode, WriteLogger};

use output::Output;

mod analysis;
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

    let level_filter = match args.verbose {
        0 => LevelFilter::Error,
        1 => LevelFilter::Warn,
        2 => LevelFilter::Info,
        3 => LevelFilter::Debug,
        _ => LevelFilter::Trace,
    };

    CombinedLogger::init(vec![
        TermLogger::new(
            level_filter,
            Config::default(),
            TerminalMode::Mixed,
            ColorChoice::Auto,
        ),
        WriteLogger::new(
            LevelFilter::Info,
            Config::default(),
            File::create("cs2-dumper.log").unwrap(),
        ),
    ])
    .unwrap();

    let conn_args = args
        .connector_args
        .map(|s| ConnectorArgs::from_str(&s).expect("unable to parse connector arguments"))
        .unwrap_or_default();

    let os = match args.connector {
        Some(conn) => {
            let inventory = Inventory::scan();

            inventory
                .builder()
                .connector(&conn)
                .args(conn_args)
                .os("win32")
                .build()?
        }
        None => {
            #[cfg(windows)]
            {
                memflow_native::create_os(&OsArgs::default(), LibArc::default())?
            }
            #[cfg(not(windows))]
            {
                panic!("no connector specified")
            }
        }
    };

    let mut process = os.into_process_by_name(&args.process_name)?;

    let now = Instant::now();

    let result = analysis::analyze_all(&mut process)?;

    let output = Output::new(&args.file_types, args.indent_size, &args.output, &result)?;

    output.dump_all(&mut process)?;

    info!(
        "analysis completed in {} seconds",
        now.elapsed().as_secs_f64()
    );

    Ok(())
}
