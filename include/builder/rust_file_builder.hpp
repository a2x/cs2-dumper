#pragma once

namespace builder {
    class RustFileBuilder : public IFileBuilder {
    public:
        std::string extension() noexcept override {
            return "rs";
        }

        void write_top_level(std::ofstream& output) noexcept override {
            output << "#![allow(non_snake_case, non_upper_case_globals)]\n\n";
        }

        void write_namespace(std::ofstream& output, const std::string& name) noexcept override {
            output << "pub mod " << name << " {\n";
        }

        void write_variable(std::ofstream& output, const std::string& name, const std::uintptr_t value) noexcept override {
            output << "    pub const " << name << ": usize = 0x" << std::hex << value << ";\n";
        }

        void write_closure(std::ofstream& output, const bool eof) noexcept override {
            output << (!eof ? "}\n\n": "}");
        }
    };
}
