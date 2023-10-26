#![allow(dead_code)]
#![feature(offset_of)]

use anyhow::Result;

use builder::*;

use clap::Parser;

use dumper::{dump_interfaces, dump_offsets, dump_schemas};

use log::LevelFilter;

use simplelog::{info, ColorChoice, ConfigBuilder, TermLogger, TerminalMode};

use std::fs;
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
#[command(version = "1.1.4")]
struct Args {
    /// Dump interfaces.
    #[arg(short, long)]
    interfaces: bool,

    /// Dump offsets.
    #[arg(short, long)]
    offsets: bool,

    /// Dump schemas.
    #[arg(short, long)]
    schemas: bool,

    /// Enable verbose output.
    #[arg(short, long)]
    verbose: bool,

    /// Output folder.
    #[arg(short, long, default_value = "generated")]
    output: String,

    /// Indentation level.
    #[arg(long, default_value = "4")]
    indent: usize,
}

fn main() -> Result<()> {
    let Args {
        interfaces,
        offsets,
        schemas,
        verbose,
        output,
        indent,
    } = Args::parse();

    let log_level = if verbose {
        LevelFilter::Debug
    } else {
        LevelFilter::Info
    };

    let config = ConfigBuilder::new().add_filter_ignore_str("goblin").build();

    TermLogger::init(log_level, config, TerminalMode::Mixed, ColorChoice::Auto)?;

    let now = Instant::now();

    fs::create_dir_all(&output)?;

    let mut process = Process::new("cs2.exe")?;

    process.initialize()?;

    let mut builders: Vec<FileBuilderEnum> = vec![
        FileBuilderEnum::CppFileBuilder(CppFileBuilder),
        FileBuilderEnum::CSharpFileBuilder(CSharpFileBuilder),
        FileBuilderEnum::JsonFileBuilder(JsonFileBuilder::default()),
        FileBuilderEnum::PythonFileBuilder(PythonFileBuilder),
        FileBuilderEnum::RustFileBuilder(RustFileBuilder),
    ];

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
        "<on-green>Done!</> <green>Time elapsed: {:?}</>",
        now.elapsed()
    );

    Ok(())
}
