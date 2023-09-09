#pragma once

namespace builder {
    class RustFileBuilder : public IFileBuilder {
    public:
        std::string get_extension() noexcept override {
            return "rs";
        }

        void write_top_level(std::ofstream& output) noexcept override {
            output << "#![allow(non_snake_case, non_upper_case_globals)]\n\n";
        }

        void write_namespace(std::ofstream& output, const std::string& namespace_name) noexcept override {
            output << "pub mod " << namespace_name << " {\n";
        }

        void write_variable(std::ofstream& output, const std::string& variable_name, const std::uint64_t variable_value) noexcept override {
            output << "    pub const " << variable_name << ": usize = 0x" << std::hex << variable_value << ";\n";
        }

        void write_closure(std::ofstream& output, const bool eof) noexcept override {
            output << (!eof ? "}\n\n": "}");
        }
    };
}
