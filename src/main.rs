use std::path::PathBuf;
use std::time::Instant;
use std::{fs, os::unix::fs::MetadataExt};

use clap::{ArgAction, Parser, Subcommand, ValueEnum};
use log::{info, Level};
use memflow::prelude::v1::*;
use procfs::process::all_processes;
use serde_json::Value;
use simplelog::{ColorChoice, Config, TermLogger, TerminalMode};

use config::CONFIG;
use error::Result;
use output::Output;
use reader::GameData;

mod analysis;
mod config;
mod error;
mod mem;
mod output;
mod reader;
mod source2;

#[derive(Clone, Debug, Subcommand)]
enum Command {
    /// Wypisz moduły procesu gry.
    Modules,

    /// Wypisz live nagłówki type scope'ów schema systemu.
    SchemaScopes,

    /// Wypisz wykryte interfejsy z aktualnego procesu.
    Interfaces(InterfacesArgs),

    /// Rozwiąż singleton zwracany przez create_fn interfejsu.
    Singleton(SingletonArgs),

    /// Wypisz żywe sloty encji z GameEntitySystem.
    Entities(EntitiesArgs),

    /// Wypisz live kamerę lokalnego gracza z ViewRender.
    Camera,

    /// Wypisz minimalny live snapshot readera.
    Snapshot,

    /// Zweryfikuj semantykę kandydata na root.
    VerifyRoot(VerifyRootArgs),

    /// Wydrukuj gotowy snippet sygnatury do config.json.
    SignatureSnippet(SignatureSnippetArgs),

    /// Wypisz sloty encji z podanego chunk address.
    EntityChunk(EntityChunkArgs),

    /// Rozwiąż pojedynczy CHandle przez GameEntitySystem.
    Handle(HandleArgs),

    /// Przeskanuj zakres pól obiektu pod kandydatów CHandle.
    HandleScan(HandleScanArgs),

    /// Rozwiąż offset i opcjonalnie odczytaj spod niego dane.
    Probe(ProbeArgs),

    /// Odczytaj spod absolutnego adresu.
    Addr(AddrArgs),

    /// Szukaj surowego patternu bajtowego w module.
    Scan(ScanArgs),
}

#[derive(Clone, Debug, Parser)]
struct ProbeArgs {
    /// Nazwa modułu, np. libclient.so.
    module: String,

    /// Nazwa offsetu lub sygnatury, np. dwEntityList.
    name: String,

    /// Źródło offsetu: config.json albo output/offsets.json.
    #[arg(long, default_value = "generated")]
    source: OffsetSource,

    /// Typ odczytu spod wyliczonego adresu.
    #[arg(long)]
    read: Option<ProbeRead>,

    /// Dodatkowy offset od wyliczonego adresu. Obsługuje np. 0x230.
    #[arg(long, value_parser = parse_isize, default_value = "0")]
    add: isize,

    /// Długość odczytu dla trybu bytes. Obsługuje np. 0x40.
    #[arg(long, value_parser = parse_usize, default_value = "64")]
    len: usize,
}

#[derive(Clone, Debug, Parser)]
struct AddrArgs {
    /// Absolutny adres procesu, np. 0x7F00...
    #[arg(value_parser = parse_u64)]
    address: u64,

    /// Typ odczytu spod adresu.
    #[arg(long)]
    read: ProbeRead,

    /// Długość odczytu dla trybu bytes. Obsługuje np. 0x40.
    #[arg(long, value_parser = parse_usize, default_value = "64")]
    len: usize,
}

#[derive(Clone, Debug, Parser)]
struct VerifyRootArgs {
    /// Absolutny adres globala albo adresu-value.
    #[arg(long, value_parser = parse_u64)]
    address: Option<u64>,

    /// Nazwa modułu dla weryfikacji przez istniejący offset.
    #[arg(long)]
    module: Option<String>,

    /// Nazwa offsetu dla weryfikacji przez istniejący offset.
    #[arg(long)]
    name: Option<String>,

    /// Źródło offsetu, gdy używasz --module/--name.
    #[arg(long, default_value = "generated")]
    source: OffsetSource,

    /// Semantyka kandydata.
    #[arg(long)]
    kind: analysis::RootKind,
}

#[derive(Clone, Debug, Parser)]
struct SignatureSnippetArgs {
    /// Nazwa offsetu, np. dwGlobalVars.
    name: String,

    /// Pattern w stylu: 48 8D 05 ? ? ? ? 49 89 04 24
    pattern: String,

    /// Dodaj operację RIP-relative.
    #[arg(long)]
    rip: bool,

    /// Offset displacement dla trybu --rip.
    #[arg(long, value_parser = parse_usize, default_value = "3")]
    rip_offset: usize,

    /// Długość instrukcji dla trybu --rip.
    #[arg(long, value_parser = parse_usize, default_value = "7")]
    rip_len: usize,

    /// Dodaj operację dereference.
    #[arg(long)]
    read: bool,

    /// Dodaj operację add.
    #[arg(long, value_parser = parse_isize)]
    add: Option<isize>,

    /// Dodaj operację slice start.
    #[arg(long, value_parser = parse_usize)]
    slice_start: Option<usize>,

    /// Dodaj operację slice end.
    #[arg(long, value_parser = parse_usize)]
    slice_end: Option<usize>,
}

#[derive(Clone, Debug, Parser)]
struct ScanArgs {
    /// Nazwa modułu, np. libclient.so.
    module: String,

    /// Pattern w stylu: 48 8D 05 ? ? ? ? 49 89 04 24
    pattern: String,

    /// Maksymalna liczba wyników.
    #[arg(long, default_value_t = 10)]
    limit: usize,

    /// Rozwiąż RIP-relative displacement od początku matcha.
    #[arg(long)]
    rip: bool,

    /// Offset displacement dla trybu --rip.
    #[arg(long, value_parser = parse_usize, default_value = "3")]
    rip_offset: usize,

    /// Długość instrukcji dla trybu --rip.
    #[arg(long, value_parser = parse_usize, default_value = "7")]
    rip_len: usize,
}

#[derive(Clone, Debug, Parser)]
struct InterfacesArgs {
    /// Opcjonalna nazwa modułu do zawężenia skanu, np. libschemasystem.so.
    module: Option<String>,
}

#[derive(Clone, Debug, Parser)]
struct SingletonArgs {
    /// Nazwa modułu, np. libengine2.so.
    module: String,

    /// Nazwa interfejsu, np. NetworkClientService_001.
    name: String,

    /// Opcjonalny typ odczytu spod singletona.
    #[arg(long)]
    read: Option<ProbeRead>,

    /// Dodatkowy offset od singletona.
    #[arg(long, value_parser = parse_isize, default_value = "0")]
    add: isize,

    /// Długość odczytu dla trybu bytes.
    #[arg(long, value_parser = parse_usize, default_value = "64")]
    len: usize,
}

#[derive(Clone, Debug, Parser)]
struct EntitiesArgs {
    /// Pierwszy slot do odczytu.
    #[arg(long, value_parser = parse_usize, default_value = "0")]
    start: usize,

    /// Liczba slotów do odczytu.
    #[arg(long, value_parser = parse_usize, default_value = "64")]
    count: usize,

    /// Pokaż także puste sloty.
    #[arg(long)]
    include_empty: bool,

    /// Filtr po fragmencie designer name.
    #[arg(long)]
    contains: Option<String>,
}

#[derive(Clone, Debug, Parser)]
struct EntityChunkArgs {
    /// Adres chunka z rekordami encji.
    #[arg(value_parser = parse_u64)]
    address: u64,

    /// Pierwszy slot do odczytu w obrębie chunka.
    #[arg(long, value_parser = parse_usize, default_value = "0")]
    start: usize,

    /// Liczba slotów do odczytu.
    #[arg(long, value_parser = parse_usize, default_value = "64")]
    count: usize,

    /// Pokaż także puste sloty.
    #[arg(long)]
    include_empty: bool,

    /// Filtr po fragmencie designer name.
    #[arg(long)]
    contains: Option<String>,
}

#[derive(Clone, Debug, Parser)]
struct HandleArgs {
    /// Wartość CHandle.
    #[arg(value_parser = parse_u64)]
    handle: u64,
}

#[derive(Clone, Debug, Parser)]
struct HandleScanArgs {
    /// Bazowy adres obiektu.
    #[arg(value_parser = parse_u64)]
    address: u64,

    /// Początek zakresu skanu.
    #[arg(long, value_parser = parse_usize, default_value = "0")]
    start: usize,

    /// Koniec zakresu skanu.
    #[arg(long, value_parser = parse_usize, default_value = "0x400")]
    end: usize,

    /// Krok skanu, domyślnie co 4 bajty.
    #[arg(long, value_parser = parse_usize, default_value = "4")]
    step: usize,

    /// Filtr po fragmencie designer name z rozwiązanego handle'a.
    #[arg(long)]
    contains: Option<String>,
}

#[derive(Clone, Copy, Debug, Eq, PartialEq, ValueEnum)]
enum OffsetSource {
    Config,
    Generated,
}

#[derive(Clone, Copy, Debug, Eq, PartialEq, ValueEnum)]
enum ProbeRead {
    Bytes,
    U32,
    U64,
    Ptr,
    F32,
    Vec3,
    Mat4,
    StringPtr,
}

#[derive(Debug, Parser)]
#[command(author, version)]
struct Args {
    #[command(subcommand)]
    command: Option<Command>,

    /// The types of files to generate.
    #[arg(short, long, value_delimiter = ',', default_values = ["cs", "hpp", "json", "rs"])]
    file_types: Vec<String>,

    /// The number of spaces to use per indentation level.
    #[arg(short, long, default_value_t = 4)]
    indent_size: usize,

    /// The output directory to write the generated files to.
    #[arg(short, long, default_value = "output")]
    output: PathBuf,

    /// PID procesu gry. Omija skanowanie wszystkich procesow.
    #[arg(long)]
    pid: Option<Pid>,

    /// Increase logging verbosity. Can be specified multiple times.
    #[arg(short, action = ArgAction::Count)]
    verbose: u8,
}

#[derive(Clone, Copy, Debug, Pod)]
#[repr(C)]
struct Vec3 {
    x: f32,
    y: f32,
    z: f32,
}

fn parse_usize(value: &str) -> std::result::Result<usize, String> {
    let trimmed = value.trim();

    if let Some(hex) = trimmed
        .strip_prefix("0x")
        .or_else(|| trimmed.strip_prefix("0X"))
    {
        usize::from_str_radix(hex, 16).map_err(|err| err.to_string())
    } else {
        trimmed.parse::<usize>().map_err(|err| err.to_string())
    }
}

fn parse_isize(value: &str) -> std::result::Result<isize, String> {
    let trimmed = value.trim();
    let (negative, body) = if let Some(rest) = trimmed.strip_prefix('-') {
        (true, rest)
    } else if let Some(rest) = trimmed.strip_prefix('+') {
        (false, rest)
    } else {
        (false, trimmed)
    };

    let parsed = if let Some(hex) = body.strip_prefix("0x").or_else(|| body.strip_prefix("0X")) {
        isize::from_str_radix(hex, 16).map_err(|err| err.to_string())?
    } else {
        body.parse::<isize>().map_err(|err| err.to_string())?
    };

    Ok(if negative { -parsed } else { parsed })
}

fn parse_u64(value: &str) -> std::result::Result<u64, String> {
    let trimmed = value.trim();

    if let Some(hex) = trimmed
        .strip_prefix("0x")
        .or_else(|| trimmed.strip_prefix("0X"))
    {
        u64::from_str_radix(hex, 16).map_err(|err| err.to_string())
    } else {
        trimmed.parse::<u64>().map_err(|err| err.to_string())
    }
}

fn parse_pattern(pattern: &str) -> std::result::Result<Vec<Option<u8>>, String> {
    pattern
        .split_whitespace()
        .map(|token| {
            if token == "?" || token == "??" {
                Ok(None)
            } else {
                u8::from_str_radix(token, 16)
                    .map(Some)
                    .map_err(|err| err.to_string())
            }
        })
        .collect()
}

fn find_process_pid(name: &str) -> Result<Pid> {
    let current_uid = unsafe { libc::geteuid() };

    all_processes()?
        .filter_map(|proc| proc.ok())
        .find_map(|proc| {
            let cmdline = proc.cmdline().ok()?;
            let first = cmdline.first()?;
            let process_name = first.rsplit('/').next().unwrap_or(first);
            let metadata = fs::metadata(format!("/proc/{}", proc.pid())).ok()?;
            let owner_uid = metadata.uid();

            (process_name == name && owner_uid == current_uid)
                .then(|| proc.pid().try_into().ok())
                .flatten()
        })
        .ok_or_else(|| {
            std::io::Error::new(
                std::io::ErrorKind::NotFound,
                format!("could not find process: {name}"),
            )
            .into()
        })
}

fn env_process_pid() -> Option<Pid> {
    std::env::var("CS2_PID").ok()?.parse().ok()
}

fn open_process(args: &Args) -> Result<IntoProcessInstanceArcBox<'static>> {
    let os = memflow_native::create_os(&OsArgs::default(), LibArc::default())?;

    if let Some(pid) = args.pid {
        info!("opening process by pid: {}", pid);

        return Ok(os.into_process_by_pid(pid)?);
    }

    if let Some(pid) = env_process_pid() {
        info!("opening process by pid from CS2_PID: {}", pid);

        return Ok(os.into_process_by_pid(pid)?);
    }

    if let Ok(pid) = find_process_pid(&CONFIG.executable) {
        info!(
            "resolved process '{}' to pid {} via procfs lookup",
            CONFIG.executable, pid
        );

        return Ok(os.into_process_by_pid(pid)?);
    }

    match os.clone().into_process_by_name(&CONFIG.executable) {
        Ok(process) => Ok(process),
        Err(err) => {
            info!("opening process by name failed ({})", err);
            Err(err.into())
        }
    }
}

fn generated_offset(module_name: &str, offset_name: &str) -> Result<usize> {
    let content = std::fs::read_to_string("output/offsets.json")?;
    let value: Value = serde_json::from_str(&content)?;
    let offsets = value
        .get(module_name)
        .and_then(Value::as_array)
        .ok_or(error::Error::Other(
            "module not found in output/offsets.json",
        ))?;

    offsets
        .iter()
        .find_map(|offset| {
            (offset.get("name")?.as_str()? == offset_name).then(|| offset.get("value")?.as_u64())
        })
        .flatten()
        .map(|value| value as usize)
        .ok_or(error::Error::Other(
            "offset not found in output/offsets.json",
        ))
}

fn apply_signed_offset(address: Address, add: isize) -> Result<Address> {
    if add >= 0 {
        address
            .to_umem()
            .checked_add(add as u64)
            .map(Address::from)
            .ok_or(error::Error::Other("address overflow"))
    } else {
        address
            .to_umem()
            .checked_sub(add.unsigned_abs() as u64)
            .map(Address::from)
            .ok_or(error::Error::Other("address underflow"))
    }
}

fn read_probe_value(
    process: &mut IntoProcessInstanceArcBox<'_>,
    address: Address,
    read: ProbeRead,
    len: usize,
) -> Result<()> {
    match read {
        ProbeRead::Bytes => {
            let bytes = process.read_raw(address, len)?;
            let rendered = bytes
                .iter()
                .map(|byte| format!("{byte:02X}"))
                .collect::<Vec<_>>()
                .join(" ");

            println!("bytes[{:#X}]={rendered}", len);
        }
        ProbeRead::U32 => {
            let value: u32 = process.read(address)?;
            println!("u32={value} (0x{value:X})");
        }
        ProbeRead::U64 => {
            let value: u64 = process.read(address)?;
            println!("u64={value} (0x{value:X})");
        }
        ProbeRead::Ptr => {
            let value = process.read_addr64(address)?;
            println!("ptr={:#016X}", value.to_umem());
        }
        ProbeRead::F32 => {
            let value: f32 = process.read(address)?;
            println!("f32={value}");
        }
        ProbeRead::Vec3 => {
            let value: Vec3 = process.read(address)?;
            println!("vec3=({}, {}, {})", value.x, value.y, value.z);
        }
        ProbeRead::Mat4 => {
            let value: [f32; 16] = process.read(address)?;
            println!("mat4={value:?}");
        }
        ProbeRead::StringPtr => {
            let value = process.read_addr64(address)?;
            let string = process.read_char_string(value)?;
            println!("ptr={:#016X}", value.to_umem());
            println!("string={string}");
        }
    }

    Ok(())
}

fn list_modules(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<()> {
    let mut modules = process.module_list()?;
    modules.sort_unstable_by_key(|module| module.base.to_umem());

    for module in modules {
        println!(
            "{:#016X} size={:#X} name={} path={}",
            module.base.to_umem(),
            module.size,
            module.name,
            module.path
        );
    }

    Ok(())
}

fn list_interfaces(
    process: &mut IntoProcessInstanceArcBox<'_>,
    args: &InterfacesArgs,
) -> Result<()> {
    if let Some(module_name) = &args.module {
        let module = process.module_by_name(module_name)?;

        if let Some((module_name, entries)) = analysis::interfaces_for_module(process, &module)? {
            println!("[{module_name}]");
            for entry in entries {
                println!("  {} = {:#X}", entry.name, entry.value);
            }
        }

        return Ok(());
    }

    let interfaces = analysis::interfaces(process)?;

    for (module_name, entries) in interfaces {
        println!("[{module_name}]");
        for entry in entries {
            println!("  {} = {:#X}", entry.name, entry.value);
        }
    }

    Ok(())
}

fn resolve_interface_singleton(
    process: &mut IntoProcessInstanceArcBox<'_>,
    module_name: &str,
    interface_name: &str,
) -> Result<(ModuleInfo, u32, Address)> {
    analysis::resolve_interface_singleton(process, module_name, interface_name)
}

fn probe_singleton(
    process: &mut IntoProcessInstanceArcBox<'_>,
    args: &SingletonArgs,
) -> Result<()> {
    let (module, create_fn_rva, singleton) =
        resolve_interface_singleton(process, &args.module, &args.name)?;
    let address = apply_signed_offset(singleton, args.add)?;

    println!(
        "module={} interface={} create_fn_rva={:#X} create_fn={:#016X} singleton={:#016X} add={:#X} address={:#016X}",
        args.module,
        args.name,
        create_fn_rva,
        (module.base + create_fn_rva as usize).to_umem(),
        singleton.to_umem(),
        args.add,
        address.to_umem()
    );

    if let Some(read) = args.read {
        read_probe_value(process, address, read, args.len)?;
    }

    Ok(())
}

fn list_schema_scopes(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<()> {
    for scope in analysis::schema_scope_headers(process)? {
        println!(
            "{:#016X} module={} class(blocks_alloc={}, peak_alloc={}) enum(blocks_alloc={}, peak_alloc={})",
            scope.address,
            scope.module_name,
            scope.class_blocks_alloc,
            scope.class_peak_alloc,
            scope.enum_blocks_alloc,
            scope.enum_peak_alloc
        );
    }

    Ok(())
}

fn list_entities(process: &mut IntoProcessInstanceArcBox<'_>, args: &EntitiesArgs) -> Result<()> {
    let slots = analysis::read_live_entity_slots(process, args.start, args.count)?;
    print_entity_slots(slots, args.include_empty, args.contains.as_deref());

    Ok(())
}

fn print_camera(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<()> {
    let camera = analysis::read_local_view_render_camera(process)?;

    println!("view_render={:#016X}", camera.view_render.to_umem());
    println!("camera_origin={:?}", camera.camera_origin);
    println!("view_offset={:?}", camera.view_offset);
    println!("vertical_fov={}", camera.vertical_fov);
    println!("horizontal_fov={}", camera.horizontal_fov);
    println!("aspect={}", camera.aspect);
    println!("forward={:?}", camera.basis.forward);
    println!("right={:?}", camera.basis.right);
    println!("up={:?}", camera.basis.up);
    println!("view_angles={:?}", camera.view_angles);
    println!("synthetic_view_matrix={:?}", camera.synthetic_view_matrix);

    Ok(())
}

fn print_snapshot(process: &mut IntoProcessInstanceArcBox<'_>) -> Result<()> {
    let snapshot: GameData = reader::read_game_data(process)?;
    println!("{}", serde_json::to_string_pretty(&snapshot)?);

    Ok(())
}

fn resolve_verify_root_address(
    process: &mut IntoProcessInstanceArcBox<'_>,
    args: &VerifyRootArgs,
) -> Result<Address> {
    if let Some(address) = args.address {
        return Ok(Address::from(address));
    }

    let module_name = args.module.as_deref().ok_or(error::Error::Other(
        "verify-root requires --address or --module/--name",
    ))?;
    let offset_name = args.name.as_deref().ok_or(error::Error::Other(
        "verify-root requires --address or --module/--name",
    ))?;
    let module = process.module_by_name(module_name)?;
    let offset = match args.source {
        OffsetSource::Config => {
            analysis::resolve_config_offset(process, module_name, offset_name)?.value as usize
        }
        OffsetSource::Generated => generated_offset(module_name, offset_name)?,
    };

    Ok(module.base + offset)
}

fn verify_root(process: &mut IntoProcessInstanceArcBox<'_>, args: &VerifyRootArgs) -> Result<()> {
    let address = resolve_verify_root_address(process, args)?;
    let verification = analysis::verify_root_address(process, args.kind, address)?;
    let resolved = verification
        .resolved_address
        .map(|value| format!("{:#016X}", value.to_umem()))
        .unwrap_or_else(|| "<none>".to_string());

    println!(
        "kind={:?} address={:#016X} resolved={} summary={}",
        args.kind,
        address.to_umem(),
        resolved,
        verification.summary
    );

    Ok(())
}

fn print_signature_snippet(args: &SignatureSnippetArgs) -> Result<()> {
    let mut operations = Vec::new();

    if args.rip {
        let mut rip = serde_json::Map::new();
        rip.insert("type".to_string(), Value::String("rip".to_string()));
        if args.rip_offset != 3 {
            rip.insert("offset".to_string(), Value::from(args.rip_offset));
        }
        if args.rip_len != 7 {
            rip.insert("len".to_string(), Value::from(args.rip_len));
        }
        operations.push(Value::Object(rip));
    }

    if args.read {
        operations.push(serde_json::json!({ "type": "read" }));
    }

    if let Some(add) = args.add {
        operations.push(serde_json::json!({ "type": "add", "value": add }));
    }

    match (args.slice_start, args.slice_end) {
        (Some(start), Some(end)) => {
            operations.push(serde_json::json!({ "type": "slice", "start": start, "end": end }));
        }
        (None, None) => {}
        _ => {
            return Err(error::Error::Other(
                "slice requires both --slice-start and --slice-end",
            ))
        }
    }

    let snippet = serde_json::json!({
        "name": args.name,
        "pattern": args.pattern,
        "operations": operations,
    });

    println!("{}", serde_json::to_string_pretty(&snippet)?);

    Ok(())
}

fn list_entity_chunk(
    process: &mut IntoProcessInstanceArcBox<'_>,
    args: &EntityChunkArgs,
) -> Result<()> {
    let slots = analysis::read_entity_slots_from_chunk(
        process,
        Address::from(args.address),
        args.start,
        args.count,
    )?;
    print_entity_slots(slots, args.include_empty, args.contains.as_deref());

    Ok(())
}

fn print_entity_slots(
    slots: Vec<analysis::LiveEntitySlot>,
    include_empty: bool,
    contains: Option<&str>,
) {
    for slot in slots {
        let matches_filter = contains.is_none_or(|needle| {
            slot.designer_name
                .as_deref()
                .is_some_and(|name| name.contains(needle))
        });

        if !matches_filter {
            continue;
        }

        if !include_empty && slot.entity.is_none() {
            continue;
        }

        let entity = slot.entity.map(|address| address.to_umem());
        let identity = slot.identity.map(|address| address.to_umem());
        let chunk = slot.chunk.map(|address| address.to_umem());
        let designer_name = slot.designer_name.as_deref().unwrap_or("<none>");

        println!(
            "slot={} chunk_index={} entry_index={} chunk={} entity={} identity={} name={}",
            slot.slot,
            slot.chunk_index,
            slot.entry_index,
            chunk
                .map(|value| format!("{value:#016X}"))
                .unwrap_or_else(|| "<none>".to_string()),
            entity
                .map(|value| format!("{value:#016X}"))
                .unwrap_or_else(|| "<none>".to_string()),
            identity
                .map(|value| format!("{value:#016X}"))
                .unwrap_or_else(|| "<none>".to_string()),
            designer_name
        );
    }
}

fn print_handle_resolution(
    process: &mut IntoProcessInstanceArcBox<'_>,
    handle: u32,
    prefix: &str,
) -> Result<()> {
    let slot = analysis::resolve_handle(process, handle)?;
    let entity = slot.entity.map(|address| address.to_umem());
    let identity = slot.identity.map(|address| address.to_umem());
    let chunk = slot.chunk.map(|address| address.to_umem());
    let designer_name = slot.designer_name.as_deref().unwrap_or("<none>");

    println!(
        "{prefix} handle={:#X} index={} chunk_index={} entry_index={} chunk={} entity={} identity={} name={}",
        handle,
        analysis::handle_to_index(handle),
        slot.chunk_index,
        slot.entry_index,
        chunk
            .map(|value| format!("{value:#016X}"))
            .unwrap_or_else(|| "<none>".to_string()),
        entity
            .map(|value| format!("{value:#016X}"))
            .unwrap_or_else(|| "<none>".to_string()),
        identity
            .map(|value| format!("{value:#016X}"))
            .unwrap_or_else(|| "<none>".to_string()),
        designer_name
    );

    Ok(())
}

fn resolve_handle(process: &mut IntoProcessInstanceArcBox<'_>, args: &HandleArgs) -> Result<()> {
    let handle =
        u32::try_from(args.handle).map_err(|_| error::Error::Other("handle exceeds u32"))?;
    print_handle_resolution(process, handle, "resolved")
}

fn scan_handle_fields(
    process: &mut IntoProcessInstanceArcBox<'_>,
    args: &HandleScanArgs,
) -> Result<()> {
    if args.step == 0 {
        return Err(error::Error::Other("handle scan step cannot be zero"));
    }

    for offset in (args.start..args.end).step_by(args.step) {
        let handle: u32 = match process.read(Address::from(args.address + offset as u64)) {
            Ok(handle) => handle,
            Err(_) => continue,
        };

        if handle == 0 || handle == u32::MAX {
            continue;
        }

        let slot = match analysis::resolve_handle(process, handle) {
            Ok(slot) => slot,
            Err(_) => continue,
        };

        let matches_filter = args.contains.as_ref().is_none_or(|needle| {
            slot.designer_name
                .as_deref()
                .is_some_and(|name| name.contains(needle))
        });

        if !matches_filter {
            continue;
        }

        let entity = slot.entity.map(|address| address.to_umem());
        let designer_name = slot.designer_name.as_deref().unwrap_or("<none>");

        println!(
            "offset={:#X} handle={:#X} index={} entity={} name={}",
            offset,
            handle,
            analysis::handle_to_index(handle),
            entity
                .map(|value| format!("{value:#016X}"))
                .unwrap_or_else(|| "<none>".to_string()),
            designer_name
        );
    }

    Ok(())
}

fn probe_offset(process: &mut IntoProcessInstanceArcBox<'_>, args: &ProbeArgs) -> Result<()> {
    let module = process.module_by_name(&args.module)?;
    let offset = match args.source {
        OffsetSource::Config => {
            analysis::resolve_config_offset(process, &args.module, &args.name)?.value as usize
        }
        OffsetSource::Generated => generated_offset(&args.module, &args.name)?,
    };

    let address = apply_signed_offset(module.base + offset, args.add)?;

    println!(
        "module={} base={:#016X} offset={:#X} add={:#X} address={:#016X} source={:?}",
        args.module,
        module.base.to_umem(),
        offset,
        args.add,
        address.to_umem(),
        args.source
    );

    if let Some(read) = args.read {
        read_probe_value(process, address, read, args.len)?;
    }

    Ok(())
}

fn probe_address(process: &mut IntoProcessInstanceArcBox<'_>, args: &AddrArgs) -> Result<()> {
    let address = Address::from(args.address);

    println!("address={:#016X}", address.to_umem());
    read_probe_value(process, address, args.read, args.len)
}

fn scan_module(process: &mut IntoProcessInstanceArcBox<'_>, args: &ScanArgs) -> Result<()> {
    let module = process.module_by_name(&args.module)?;
    let buf = process.read_raw(module.base, module.size as _)?;
    let pattern =
        parse_pattern(&args.pattern).map_err(|_| error::Error::Other("invalid pattern"))?;

    if pattern.is_empty() {
        return Err(error::Error::Other("empty pattern"));
    }

    let mut hits = 0usize;
    for start in 0..=buf.len().saturating_sub(pattern.len()) {
        let matched = pattern
            .iter()
            .enumerate()
            .all(|(idx, expected)| expected.is_none_or(|byte| buf[start + idx] == byte));

        if !matched {
            continue;
        }

        let match_address = module.base + start;
        print!(
            "match[{hits}] module={} rva={:#X} address={:#016X}",
            args.module,
            start,
            match_address.to_umem()
        );

        if args.rip {
            let displacement_addr = match_address + args.rip_offset;
            let displacement: i32 = process.read(displacement_addr)?;
            let resolved = match_address + displacement + args.rip_len;

            print!(
                " rip(offset={:#X}, len={:#X})={:#016X}",
                args.rip_offset,
                args.rip_len,
                resolved.to_umem()
            );
        }

        println!();
        hits += 1;

        if hits >= args.limit {
            break;
        }
    }

    println!("matches={hits}");

    Ok(())
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
        Config::default(),
        TerminalMode::Mixed,
        ColorChoice::Auto,
    )
    .unwrap();

    let mut process = open_process(&args)?;

    match &args.command {
        Some(Command::Modules) => list_modules(&mut process)?,
        Some(Command::SchemaScopes) => list_schema_scopes(&mut process)?,
        Some(Command::Interfaces(interface_args)) => list_interfaces(&mut process, interface_args)?,
        Some(Command::Singleton(singleton_args)) => probe_singleton(&mut process, singleton_args)?,
        Some(Command::Entities(entity_args)) => list_entities(&mut process, entity_args)?,
        Some(Command::Camera) => print_camera(&mut process)?,
        Some(Command::Snapshot) => print_snapshot(&mut process)?,
        Some(Command::VerifyRoot(verify_args)) => verify_root(&mut process, verify_args)?,
        Some(Command::SignatureSnippet(signature_args)) => print_signature_snippet(signature_args)?,
        Some(Command::EntityChunk(entity_chunk_args)) => {
            list_entity_chunk(&mut process, entity_chunk_args)?
        }
        Some(Command::Handle(handle_args)) => resolve_handle(&mut process, handle_args)?,
        Some(Command::HandleScan(handle_scan_args)) => {
            scan_handle_fields(&mut process, handle_scan_args)?
        }
        Some(Command::Probe(probe_args)) => probe_offset(&mut process, probe_args)?,
        Some(Command::Addr(addr_args)) => probe_address(&mut process, addr_args)?,
        Some(Command::Scan(scan_args)) => scan_module(&mut process, scan_args)?,
        None => {
            let result = analysis::analyze_all(&mut process)?;

            let output = Output::new(&args.file_types, args.indent_size, &args.output, &result)?;

            output.dump_all(&mut process)?;
        }
    }

    info!("finished in {:?}", now.elapsed());

    Ok(())
}
