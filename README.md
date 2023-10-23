
# cs2-dumper
External offsets/interfaces dumper for Counter-Strike: 2, written in Rust.

  
# Generated Files

Generated files are stored in the `generated` directory.

📂 [Pre-generated Files](./generated)

# Running The Application
 Within CMD run:
 `cs2_dumper --argument value --argument...`

## Available Arguments
| Argument | Type | Description | Default Value | Required
|--|--|--|--|--|
| interfaces | bool | Dump Interfaces | True | :heavy_multiplication_x: |
| offsets | bool | Dump Offsets | True | :heavy_multiplication_x: |
| schemas | bool | Dump Schemas | True | :heavy_multiplication_x: |
| dbuilders | String | Comma Separated String **without spaces** specifying the output file formats. Available Builders: [JSON, CPP, CSharp, Python, Rust] | Blank (All) | :heavy_multiplication_x: |
| path | String | Folder name for dumped assets | True | :heavy_check_mark: |
| interfaces | bool | Dump Interfaces | True | :heavy_multiplication_x: |
  

# License

  

Please refer to the [LICENSE](./LICENSE) file for more details.