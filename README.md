
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
| interfaces | bool | Dump Interfaces | True | [] |
| offsets | bool | Dump Offsets | True | [] |
| schemas | bool | Dump Schemas | True | [] |
| dbuilders | String | Comma Separated String **without spaces** specifying the output file formats. Available Builders: [JSON, CPP, CSharp, Python, Rust] | Blank (All) | [] |
| path | String | Folder name for dumped assets | True | [x] |
| interfaces | bool | Dump Interfaces | True | [] |
  

# License

  

Please refer to the [LICENSE](./LICENSE) file for more details.