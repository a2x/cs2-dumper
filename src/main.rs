#![allow(dead_code)]
#![feature(offset_of)]

use std::fs;
use std::time::Instant;

use anyhow::Result;

use clap::Parser;

use simple_logger::SimpleLogger;

use builder::*;
use dumpers::*;
use remote::Process;

mod builder;
mod config;
mod dumpers;
mod mem;
mod remote;
mod sdk;

#[derive(Debug, Parser)]
#[command(author, version, about)]
struct Args {
    #[arg(short, long)]
    interfaces: bool,

    #[arg(short, long)]
    offsets: bool,

    #[arg(short, long)]
    schemas: bool,

    #[arg(short, long, default_value = "all")]
    dbuilders: String,

    #[arg(short, long)]
    path: String,

    #[arg(short, long)]
    verbose: bool,
}

fn main() -> Result<()> {
    let Args {
        interfaces,
        offsets,
        schemas,
        dbuilders,
        path,
        verbose,
    } = Args::parse();

    let log_level = if verbose {
        log::LevelFilter::Debug
    } else {
        log::LevelFilter::Info
    };

    SimpleLogger::new()
        .with_level(log_level)
        .without_timestamps()
        .init()
        .unwrap();

    let start_time = Instant::now();

    let process = Process::new("cs2.exe")?;

    fs::create_dir_all(path.clone())?;

    let mut active_builders: Vec<FileBuilderEnum> = Vec::new();


    if dbuilders == "all" {
        active_builders = vec![
            FileBuilderEnum::CppFileBuilder(CppFileBuilder),
            FileBuilderEnum::CSharpFileBuilder(CSharpFileBuilder),
            FileBuilderEnum::JsonFileBuilder(JsonFileBuilder::default()),
            FileBuilderEnum::PythonFileBuilder(PythonFileBuilder),
            FileBuilderEnum::RustFileBuilder(RustFileBuilder),
        ];
    }

    let configured_builders = dbuilders.split(",");

    for active_builder in configured_builders {
        if active_builder.eq_ignore_ascii_case("JSON"){
            active_builders.push(FileBuilderEnum::JsonFileBuilder(JsonFileBuilder::default()));
        }else if active_builder.eq_ignore_ascii_case("CPP") {
            active_builders.push(FileBuilderEnum::CppFileBuilder(CppFileBuilder));
        }else if active_builder.eq_ignore_ascii_case("CSharp") {
            active_builders.push(FileBuilderEnum::CSharpFileBuilder(CSharpFileBuilder));
        } else if active_builder.eq_ignore_ascii_case("Python") {
            active_builders.push(FileBuilderEnum::PythonFileBuilder(PythonFileBuilder));
        }else if active_builder.eq_ignore_ascii_case("Rust") {
            active_builders.push(FileBuilderEnum::RustFileBuilder(RustFileBuilder));
        }
    }

    

    let all = !(interfaces || offsets || schemas);

    let test = path.clone();


    if schemas || all {
        dump_schemas(&mut active_builders, &process, &test)?;
    }

    if interfaces || all {
        dump_interfaces(&mut active_builders, &process, &&test)?;
    }

    if offsets || all {
        dump_offsets(&mut active_builders, &process, &&&test)?;
    }

    let duration = start_time.elapsed();

    log::info!("Done! Time elapsed: {:?}", duration);

    Ok(())
}
