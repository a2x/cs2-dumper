#pragma once

#include <fstream>
#include <string>

namespace builder {
    class IFileBuilder {
    public:
        virtual ~IFileBuilder() noexcept = default;
        virtual std::string extension() noexcept = 0;
        virtual void write_top_level(std::ofstream& output) noexcept = 0;
        virtual void write_namespace(std::ofstream& output, const std::string& name) noexcept = 0;
        virtual void write_variable(std::ofstream& output, const std::string& name, std::uintptr_t value) noexcept = 0;
        virtual void write_closure(std::ofstream& output, bool eof) noexcept = 0;
    };
}
