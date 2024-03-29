# cs2-dumper

An external offset/interface dumper for Counter-Strike 2, with support for both Windows & Linux.

Powered by [memflow](https://github.com/memflow/memflow).

## Getting Started

You can download the latest release from [Releases](https://github.com/a2x/cs2-dumper/releases) or compile it yourself.
Note that compiling it yourself requires your Rust compiler version to be at least 1.74.0 or newer, and the nightly
toolchain must be installed.

## Usage

1. Ensure the game process is running (Being in the main menu should suffice).
2. Run the `cs2-dumper` executable (Note that some memflow connectors require elevated privileges).

When running the executable without providing an optional memflow connector name, it will default to using the
memflow-native cross-platform OS layer to read the game's memory. However, any existing memflow connectors should work
out of the box.
Just pass the `connector` and optional `connector-args` arguments to the program.

E.g. `cs2-dumper.exe -c pcileech -a device=fpga -vvv`

### Available Arguments

- `-v...`: Increase logging verbosity. Can be specified multiple times.
- `-c, --connector <connector>`: The name of the memflow connector to use.
- `-a, --connector-args <connector-args>`: Additional arguments to supply to the connector.
- `-o, --os <os>`: The name of the target operating system.
- `-d, --directory <directory>`: The output directory to write the generated files to. Default: `output`.
- `-i, --indent-size <indent-size>`: The number of spaces to use per indentation level. Default: `4`.
- `-h, --help`: Print help.
- `-V, --version`: Print version.

## License

Licensed under the MIT license ([LICENSE](./LICENSE)).
