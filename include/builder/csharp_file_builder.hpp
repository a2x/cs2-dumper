#pragma once

namespace builder {
    class CSharpFileBuilder : public IFileBuilder {
    public:
        std::string extension() noexcept override {
            return "cs";
        }

        void write_top_level(std::ofstream& output) noexcept override {}

        void write_namespace(std::ofstream& output, const std::string& name) noexcept override {
            output << "public static class " << name << " {\n";
        }

        void write_variable(std::ofstream& output, const std::string& name, const std::uintptr_t value) noexcept override {
            output << "    public const ulong " << name << " = 0x" << std::hex << value << ";\n";
        }

        void write_closure(std::ofstream& output, const bool eof) noexcept override {
            output << (!eof ? "}\n\n": "}");
        }
    };
}
