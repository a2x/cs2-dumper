#![allow(dead_code)]

use std::fs;
use std::time::Instant;

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

fn main() -> Result<()> {
    SimpleLogger::new().init().unwrap();

    fs::create_dir_all("generated")?;

    let process = Process::new("cs2.exe")?;

    let mut builders: Vec<FileBuilderEnum> = vec![
        FileBuilderEnum::CppBuilder(CppBuilder),
        FileBuilderEnum::CSharpBuilder(CSharpBuilder),
        FileBuilderEnum::JsonFileBuilder(JsonFileBuilder::default()),
        FileBuilderEnum::RustFileBuilder(RustFileBuilder),
    ];

    let start_time = Instant::now();

    dump_schemas(&mut builders, &process)?;
    dump_interfaces(&mut builders, &process)?;
    dump_offsets(&mut builders, &process)?;

    let duration = start_time.elapsed();

    log::info!("Done! Time elapsed: {:?}", duration);

    Ok(())
}
