# cs2-dumper

An external offset/interface dumper for Counter-Strike 2, with support for both Windows & Linux. Powered by [memflow](https://github.com/memflow/memflow).

The native Linux version is available in the [linux](https://github.com/a2x/cs2-dumper/tree/linux) branch.

## Getting Started

You can download the latest release from [Releases](https://github.com/a2x/cs2-dumper/releases) or compile it yourself.
Note that compiling it yourself requires your Rust compiler version to be at least 1.74.0 or newer, and the nightly
toolchain must be installed.

## Usage

1. Ensure the game process is running (Being in the main menu should suffice).
2. Run the `cs2-dumper` executable (Note that some memflow connectors may require elevated privileges).

When running the executable without providing an optional memflow connector name, it will default to using the [memflow-native](https://github.com/memflow/memflow-native) cross-platform OS layer to read the memory of the game process. If you wish to use an existing memflow connector instead, pass the `connector` and optional `connector-args` arguments to the program.

E.g. `./cs2-dumper -c pcileech -a device=fpga -vvv`

### Available Arguments

- `-c, --connector <connector>`: The name of the memflow connector to use.
- `-a, --connector-args <connector-args>`: Additional arguments to pass to the memflow connector.
- `-f, --file-types <file-types>`: The types of files to generate. Default: `cs`, `hpp`,  `json`, `rs`.
- `-i, --indent-size <indent-size>`: The number of spaces to use per indentation level. Default: `4`.
- `-o, --output <output>`: The output directory to write the generated files to. Default: `output`.
- `-p, --process-name <process-name>`: The name of the game process. Default: `cs2.exe`.
- `-v...`: Increase logging verbosity. Can be specified multiple times.
- `-h, --help`: Print help.
- `-V, --version`: Print version.

## License

Licensed under the MIT license ([LICENSE](./LICENSE)).
