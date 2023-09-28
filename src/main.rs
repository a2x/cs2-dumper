#![allow(dead_code)]

use std::fs;
use std::time::Instant;

use clap::Parser;

use simple_logger::SimpleLogger;

use builder::*;
use dumpers::*;
use error::Result;
use remote::Process;

mod builder;
mod config;
mod dumpers;
mod error;
mod remote;
mod sdk;

#[derive(Parser, Debug)]
#[command(author, version, about, long_about = None)]
struct Args {
    #[arg(long)]
    all: bool,

    #[arg(short, long)]
    interfaces: bool,

    #[arg(short, long)]
    offsets: bool,

    #[arg(short, long)]
    schemas: bool,
}

fn main() -> Result<()> {
    SimpleLogger::new().init().unwrap();

    let Args {
        all,
        interfaces,
        offsets,
        schemas,
    } = Args::parse();

    let start_time = Instant::now();

    fs::create_dir_all("generated")?;

    let process = Process::new("cs2.exe")?;

    let mut builders: Vec<FileBuilderEnum> = vec![
        FileBuilderEnum::CppBuilder(CppBuilder),
        FileBuilderEnum::CSharpBuilder(CSharpBuilder),
        FileBuilderEnum::JsonFileBuilder(JsonFileBuilder::default()),
        FileBuilderEnum::RustFileBuilder(RustFileBuilder),
    ];

    let all = all || !(interfaces || offsets || schemas);

    if schemas || all {
        dump_schemas(&mut builders, &process)?;
    }

    if interfaces || all {
        dump_interfaces(&mut builders, &process)?;
    }

    if offsets || all {
        dump_offsets(&mut builders, &process)?;
    }

    let duration = start_time.elapsed();

    log::info!("Done! Time elapsed: {:?}", duration);

    Ok(())
}
