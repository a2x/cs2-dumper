#![allow(dead_code)]
#![feature(offset_of)]

use anyhow::{bail, Result};

use builder::*;

use clap::Parser;

use dumper::{dump_interfaces, dump_offsets, dump_schemas};

use log::LevelFilter;

use simplelog::{info, ColorChoice, ConfigBuilder, TermLogger, TerminalMode};

use std::fs;
use std::path::Path;
use std::time::Instant;

use util::Process;

mod builder;
mod config;
mod dumper;
mod sdk;
mod util;

/// Command line arguments for the program.
#[derive(Debug, Parser)]
#[command(name = "cs2-dumper")]
#[command(author = "a2x")]
#[command(version = "1.1.5")]
struct Args {
    /// Dump interfaces.
    #[arg(short, long)]
    interfaces: bool,

    /// Dump offsets.
    #[arg(short, long)]
    offsets: bool,

    /// Dump schema system classes.
    #[arg(short, long)]
    schemas: bool,

    /// List of file builders to use.
    /// Valid values: `.cs`, `.hpp`, `.json`, `.py`, `.rs`, `.yaml`.
    #[arg(
        short,
        long,
        value_parser = parse_extension,
        value_delimiter = ',',
        default_values = [".cs", ".hpp", ".json", ".py", ".rs", ".yaml"],
    )]
    builders: Vec<FileBuilderEnum>,

    /// Indentation level for generated files.
    /// Defaults to 4 spaces.
    #[arg(long, default_value_t = 4)]
    indent: usize,

    /// Output directory for generated files.
    /// Defaults to `generated`.
    #[arg(long, default_value = "generated")]
    output: String,

    /// Enable verbose output.
    #[arg(short, long)]
    verbose: bool,
}

fn main() -> Result<()> {
    let Args {
        interfaces,
        offsets,
        schemas,
        mut builders,
        indent,
        output,
        verbose,
    } = Args::parse();

    let log_level = if verbose {
        LevelFilter::Debug
    } else {
        LevelFilter::Info
    };

    let config = ConfigBuilder::new().add_filter_ignore_str("goblin").build();

    TermLogger::init(log_level, config, TerminalMode::Mixed, ColorChoice::Auto)?;

    // Check if the config file exists.
    if !Path::new("config.json").exists() {
        bail!("Missing config.json file");
    }

    // Create the output directory if it doesn't exist.
    fs::create_dir_all(&output)?;

    // Open a handle to the game process.
    let mut process = Process::new("cs2.exe")?;

    process.initialize()?;

    // Start the timer.
    let now = Instant::now();

    let all = !(interfaces || offsets || schemas);

    if schemas || all {
        dump_schemas(&mut process, &mut builders, &output, indent)?;
    }

    if interfaces || all {
        dump_interfaces(&mut process, &mut builders, &output, indent)?;
    }

    if offsets || all {
        dump_offsets(&mut process, &mut builders, &output, indent)?;
    }

    // Stop the timer.
    info!(
        "<on-green>Done!</> <green>Time elapsed: <b>{:?}</></>",
        now.elapsed()
    );

    Ok(())
}

/// Parses the given file extension and returns the corresponding `FileBuilderEnum`.
///
/// # Arguments
///
/// * `extension` - A string slice that represents the file extension.
///
/// # Returns
///
/// * `Ok(FileBuilderEnum)` - If the extension is valid, returns the corresponding `FileBuilderEnum`.
/// * `Err(&'static str)` - If the extension is invalid, returns an error message.
fn parse_extension(extension: &str) -> Result<FileBuilderEnum, &'static str> {
    match extension {
        ".cs" => Ok(FileBuilderEnum::CSharpFileBuilder(CSharpFileBuilder)),
        ".hpp" => Ok(FileBuilderEnum::CppFileBuilder(CppFileBuilder)),
        ".json" => Ok(FileBuilderEnum::JsonFileBuilder(JsonFileBuilder::default())),
        ".py" => Ok(FileBuilderEnum::PythonFileBuilder(PythonFileBuilder)),
        ".rs" => Ok(FileBuilderEnum::RustFileBuilder(RustFileBuilder)),
        ".yaml" => Ok(FileBuilderEnum::YamlFileBuilder(YamlFileBuilder)),
        _ => Err("Invalid file extension"),
    }
}
