# cs2-dumper

An external offset/interface dumper for Counter-Strike 2 on Linux. Powered by
[memflow](https://github.com/memflow/memflow).

For a work-in-progress offline version, check out the [cs2-analyzer](https://github.com/a2x/cs2-analyzer) repository or
view its included web demo [here](https://a2x.github.io/cs2-analyzer).

## Getting Started

You can download the latest release from [Releases](https://github.com/a2x/cs2-dumper/releases) or compile it yourself.
Building from source requires Rust 1.85 or newer.

## Usage

1. Ensure CS2 is running (being in the main menu should suffice).
2. Run `cs2-dumper` from the directory containing `config.json`.

By default, the program uses the [memflow-native](https://github.com/memflow/memflow-native) Linux OS layer to read
CS2. Linux signatures and their address operations are configured in `config.json`; those signatures may need updates
after a game patch. You can select another installed memflow connector with `--connector` and pass connector options
with `--connector-args`. Some connectors require elevated privileges; follow the connector's documentation.

### Available Arguments

- `-c, --connector <connector>`: The name of the memflow connector to use.
- `-a, --connector-args <connector-args>`: Additional arguments to pass to the memflow connector.
- `-f, --file-types <file-types>`: The types of files to generate. Default: `cs`, `hpp`, `json`, `rs`, `zig`.
- `-i, --indent-size <indent-size>`: The number of spaces to use per indentation level. Default: `4`.
- `-o, --output <output>`: The output directory to write the generated files to. Default: `output`.
- `-p, --process-name <process-name>`: The name of the game process. Default: `cs2`.
- `-v...`: Increase logging verbosity. Can be specified multiple times.
- `-h, --help`: Print help.
- `-V, --version`: Print version.

## Running Tests

Run `cargo test` to validate the configured Linux signature patterns.

## License

Licensed under the MIT license ([LICENSE](./LICENSE)).
