#pragma once

#include <nlohmann/json.hpp>

namespace builder {
    class JsonFileBuilder : public IFileBuilder {
    public:
        std::string extension() noexcept override {
            return "json";
        }

        void write_top_level(std::ofstream& output) noexcept override {}

        void write_namespace(std::ofstream& output, const std::string& name) noexcept override {
            namespace_name_ = name;
        }

        void write_variable(std::ofstream& output, const std::string& name, const std::uintptr_t value) noexcept override {
            json[namespace_name_][name] = value;
        }

        void write_closure(std::ofstream& output, const bool eof) noexcept override {
            if (eof) {
                output << json.dump(4);

                json.clear();
            }
        }

    public:
        nlohmann::json json;

    private:
        std::string namespace_name_;
    };
}
