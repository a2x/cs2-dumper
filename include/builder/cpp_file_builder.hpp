#pragma once

namespace builder {
    class CppFileBuilder : public IFileBuilder {
    public:
        std::string extension() noexcept override {
            return "hpp";
        }

        void write_top_level(std::ofstream& output) noexcept override {
            output << "#pragma once\n\n";
            output << "#include <cstddef>\n\n";
        }

        void write_namespace(std::ofstream& output, const std::string& name) noexcept override {
            output << "namespace " << name << " {\n";
        }

        void write_variable(std::ofstream& output, const std::string& name, const std::uintptr_t value) noexcept override {
            output << "    constexpr std::ptrdiff_t " << name << " = 0x" << std::hex << value << ";\n";
        }

        void write_closure(std::ofstream& output, const bool eof) noexcept override {
            output << (!eof ? "}\n\n": "}");
        }
    };
}
