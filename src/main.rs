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

fn main() -> Result<()> {
    let now = Instant::now();

    let matches = parse_args();
    let (file_types, indent_size, out_dir) = extract_args(&matches)?;

    let os = memflow_native::create_os(&Default::default(), Default::default())?;

    let mut process = os.into_process_by_name(&CONFIG.executable)?;

    let result = analysis::analyze_all(&mut process)?;
    let output = Output::new(&file_types, indent_size, &out_dir, &result)?;

    output.dump_all(&mut process)?;

    info!("finished in {:?}", now.elapsed());

    Ok(())
}

fn parse_args() -> ArgMatches {
    Command::new("cs2-dumper")
        .version(crate_version!())
        .author(crate_authors!())
        .arg(
            Arg::new("file-types")
                .help("The types of files to generate.")
                .long("file-types")
                .short('f')
                .action(ArgAction::Append)
                .default_values(["cs", "hpp", "json", "rs"])
                .value_parser(["cs", "hpp", "json", "rs"])
                .value_delimiter(',')
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
            Arg::new("verbose")
                .help("Increase logging verbosity. Can be specified multiple times.")
                .short('v')
                .action(ArgAction::Count),
        )
        .get_matches()
}

fn extract_args(matches: &ArgMatches) -> Result<(Vec<String>, usize, &PathBuf)> {
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

    let file_types = matches
        .get_many::<String>("file-types")
        .unwrap()
        .map(|s| s.to_string())
        .collect();

    let indent_size = *matches.get_one::<usize>("indent-size").unwrap();
    let out_dir = matches.get_one::<PathBuf>("output").unwrap();

    Ok((file_types, indent_size, out_dir))
}
