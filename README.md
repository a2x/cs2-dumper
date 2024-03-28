# cs2-dumper

An external offset/interface dumper for Counter-Strike 2, with support for both Windows & Linux.

Powered by [memflow](https://github.com/memflow/memflow).

## Where did client.dll and other stuff go?

This repository was reformatted with the new support for linux, you can find old offsets in the [schemas.hpp](https://github.com/a2x/cs2-dumper/blob/main/output/win/schemas.hpp) file (and its other forms in different languages), please go through them and adjust your cheats accordingly if you used this repo, please do not open new issues where did things go, its still in here, just under different names i recommend searching for them the way you did the first time you used this.

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
- `-o, --output <output>`: The output directory to write the generated files to. Default: `output`.
- `-i, --indent-size <indent-size>`: The number of spaces to use per indentation level. Default: `4`.
- `-h, --help`: Print help.
- `-V, --version`: Print version.

## License

Licensed under the MIT license ([LICENSE](./LICENSE)).
