#pragma once

#include <nlohmann/json.hpp>

namespace builder {
    class JsonFileBuilder : public IFileBuilder {
    public:
        std::string get_extension() noexcept override {
            return "json";
        }

        void write_top_level(std::ofstream& output) noexcept override {
            // Nothing needed here.
        }

        void write_namespace(std::ofstream& output, const std::string& namespace_name) noexcept override {
            current_namespace_name_ = namespace_name;
        }

        void write_variable(std::ofstream& output, const std::string& variable_name, const std::uint64_t variable_value) noexcept override {
            json[current_namespace_name_][variable_name] = variable_value;
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
        std::string current_namespace_name_;
    };
}
