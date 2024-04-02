use std::env;
use std::path::PathBuf;
use std::time::Instant;

use clap::*;

use log::{info, Level};

use memflow::prelude::v1::*;

use simplelog::{ColorChoice, TermLogger};

use error::Result;
use output::Results;

mod analysis;
mod error;
mod output;
mod source2;

const PROCESS_NAME: &str = "cs2.exe";

fn main() -> Result<()> {
    let start_time = Instant::now();

    let matches = parse_args();
    let (conn_name, conn_args, indent_size, out_dir) = extract_args(&matches)?;

    let os = if let Some(conn_name) = conn_name {
        let inventory = Inventory::scan();

        inventory
            .builder()
            .connector(&conn_name)
            .args(conn_args)
            .os("win32")
            .build()?
    } else {
        // Fallback to the native OS layer if no connector name was provided.
        memflow_native::create_os(&Default::default(), Default::default())?
    };

    let mut process = os.into_process_by_name(PROCESS_NAME)?;

    let buttons = analysis::buttons(&mut process)?;
    let interfaces = analysis::interfaces(&mut process)?;
    let offsets = analysis::offsets(&mut process)?;
    let schemas = analysis::schemas(&mut process)?;

    let results = Results::new(buttons, interfaces, offsets, schemas);

    results.dump_all(&mut process, &out_dir, indent_size)?;

    info!("finished in {:?}", start_time.elapsed());

    Ok(())
}

fn parse_args() -> ArgMatches {
    Command::new("cs2-dumper")
        .version(crate_version!())
        .author(crate_authors!())
        .arg(
            Arg::new("verbose")
                .help("Increase logging verbosity. Can be specified multiple times.")
                .short('v')
                .action(ArgAction::Count),
        )
        .arg(
            Arg::new("connector")
                .help("The name of the memflow connector to use.")
                .long("connector")
                .short('c')
                .required(false),
        )
        .arg(
            Arg::new("connector-args")
                .help("Additional arguments to supply to the connector.")
                .long("connector-args")
                .short('a')
                .required(false),
        )
        .arg(
            Arg::new("output")
                .help("The output directory to write the generated files to.")
                .long("output")
                .short('o')
                .default_value("output")
                .value_parser(value_parser!(PathBuf))
                .required(false),
        )
        .arg(
            Arg::new("indent-size")
                .help("The number of spaces to use per indentation level.")
                .long("indent-size")
                .short('i')
                .default_value("4")
                .value_parser(value_parser!(usize))
                .required(false),
        )
        .get_matches()
}

fn extract_args(matches: &ArgMatches) -> Result<(Option<String>, ConnectorArgs, usize, &PathBuf)> {
    use std::str::FromStr;

    let log_level = match matches.get_count("verbose") {
        0 => Level::Error,
        1 => Level::Warn,
        2 => Level::Info,
        3 => Level::Debug,
        4 => Level::Trace,
        _ => Level::Trace,
    };

    TermLogger::init(
        log_level.to_level_filter(),
        Default::default(),
        Default::default(),
        ColorChoice::Auto,
    )
    .unwrap();

    let conn_name = matches
        .get_one::<String>("connector")
        .map(|s| s.to_string());

    let conn_args = matches
        .get_one::<String>("connector-args")
        .map(|s| ConnectorArgs::from_str(&s).expect("unable to parse connector arguments"))
        .unwrap_or_default();

    let indent_size = *matches.get_one::<usize>("indent-size").unwrap();
    let out_dir = matches.get_one::<PathBuf>("output").unwrap();

    Ok((conn_name, conn_args, indent_size, out_dir))
}
