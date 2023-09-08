#pragma once

#include <fstream>
#include <string>

namespace builder {
    class IFileBuilder {
    public:
        virtual ~IFileBuilder() noexcept = default;
        virtual std::string get_extension() noexcept = 0;
        virtual void write_top_level(std::ofstream& output) noexcept = 0;
        virtual void write_namespace(std::ofstream& output, const std::string& namespace_name) noexcept = 0;
        virtual void write_variable(std::ofstream& output, const std::string& variable_name, std::uint64_t variable_value) noexcept = 0;
        virtual void write_closure(std::ofstream& output, bool eof) noexcept = 0;
    };
}
