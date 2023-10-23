
# cs2-dumper
External offsets/interfaces dumper for Counter-Strike: 2, written in Rust.

📂 [Pre-generated Files](./generated)

# Running The Application
 Within CMD run:
 `cs2_dumper --path generated`

## Available Arguments
| Argument | Type | Description | Default Value | Required
|--|--|--|--|--|
| interfaces | bool | Dump Interfaces | True | :heavy_multiplication_x: |
| offsets | bool | Dump Offsets | True | :heavy_multiplication_x: |
| schemas | bool | Dump Schemas | True | :heavy_multiplication_x: |
| dbuilders | String | Comma Separated String **without spaces** specifying the output file formats. Available Builders: [JSON, CPP, CSharp, Python, Rust] | Blank (All) | :heavy_multiplication_x: |
| path | String | Folder name for Generated Files| True | :heavy_check_mark: |
| verbose | bool | Print Debug Logging | False | :heavy_multiplication_x: |
  

# License

  

Please refer to the [LICENSE](./LICENSE) file for more details.