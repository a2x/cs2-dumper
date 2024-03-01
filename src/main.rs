#![allow(dead_code)]

use std::fs;
use std::path::Path;
use std::time::Instant;

use anyhow::{bail, Result};

use clap::Parser;

use log::LevelFilter;

use simplelog::{info, ColorChoice, ConfigBuilder, TermLogger, TerminalMode};

use builder::*;
use dumper::{dump_interfaces, dump_offsets, dump_schemas};
use os::Process;

mod builder;
mod config;
mod dumper;
mod os;
mod sdk;

#[derive(Debug, Parser)]
#[command(name = "cs2-dumper")]
#[command(author = "a2x")]
#[command(version = "1.1.5")]
struct Args {
    /// Whether to dump interfaces.
    #[arg(short, long)]
    interfaces: bool,

    /// Whether to dump offsets.
    #[arg(short, long)]
    offsets: bool,

    /// Whether to dump schema classes.
    #[arg(short, long)]
    schemas: bool,

    /// List of file builders to use.
    /// Valid values: `.cs`, `.hpp`, `.json`, `.py`, `.rs`, `.yaml`.
    #[arg(
        short,
        long,
        value_parser = map_file_extension_to_builder,
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

    if !Path::new("config.json").exists() {
        bail!("Missing config.json file");
    }

    // Create the output directory if it doesn't exist.
    fs::create_dir_all(&output)?;

    let mut process = Process::new("cs2.exe")?;

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

    info!(
        "<on-green>Done!</> <green>Time elapsed: <b>{:?}</></>",
        now.elapsed()
    );

    Ok(())
}

fn map_file_extension_to_builder(extension: &str) -> Result<FileBuilderEnum, &'static str> {
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
