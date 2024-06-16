# cs2-dumper

An external Counter-Strike 2 offset/interface dumper for Linux.

**Note:** This branch will likely not be kept up-to-date by myself. Pull requests are welcome!

## Getting Started

You can download the latest release from [Releases](https://github.com/a2x/cs2-dumper/releases) or compile it yourself.
Note that compiling it yourself requires your Rust compiler version to be at least 1.74.0 or newer, and the nightly
toolchain must be installed.

## Usage

1. Ensure the game process is running (Being in the main menu should suffice).
2. Run the `cs2-dumper` executable.

### Available Arguments

- `-f, --file-types <file-types>`: The types of files to generate. Default: `cs`, `hpp`,  `json`, `rs`.
- `-i, --indent-size <indent-size>`: The number of spaces to use per indentation level. Default: `4`.
- `-o, --output <output>`: The output directory to write the generated files to. Default: `output`.
- `-v...`: Increase logging verbosity. Can be specified multiple times.
- `-h, --help`: Print help.
- `-V, --version`: Print version.

## Running Tests

To run tests, use the following command: `cargo test -- --nocapture`.

## License

Licensed under the MIT license ([LICENSE](./LICENSE)).
