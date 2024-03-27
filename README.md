# cs2-dumper

An external offset/interfaces dumper for Counter-Strike 2, written in Rust.

*Note:* New commits are being pushed regularly to the [dev](https://github.com/a2x/cs2-dumper/tree/dev) branch.

# Usage

You can either download the latest release from [Releases](https://github.com/a2x/cs2-dumper/releases) or build it yourself. Note that building it yourself requires Rust's nightly toolchain.

If you want to see more detailed runtime messages, you can pass the `--verbose` flag.

For a complete list of all available flags, use `--help`.

# Generated Files

By default, generated files are stored in the `generated` directory. However, this can be modified by specifying your desired directory using the `--output` flag.

📂 [Pre-generated Files](./generated)

# Running Tests
To run tests, use the following command: `cargo test -- --nocapture`.

# License

Please refer to the [LICENSE](./LICENSE) file for more details.
