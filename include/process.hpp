#pragma once

#include <cstdint>
#include <optional>
#include <string_view>
#include <vector>

namespace process {
    bool attach(std::string_view process_name);

    [[nodiscard]] std::optional<std::uintptr_t> find_pattern(std::string_view module_name, std::string_view pattern) noexcept;

    [[nodiscard]] std::optional<std::uintptr_t> get_export(std::uintptr_t module_base, std::string_view function_name) noexcept;

    [[nodiscard]] std::optional<std::uintptr_t> get_export(std::string_view module_name, std::string_view function_name) noexcept;

    [[nodiscard]] std::optional<std::vector<std::string>> get_loaded_modules() noexcept;

    [[nodiscard]] std::optional<std::uintptr_t> get_module_base(std::string_view module_name) noexcept;

    [[nodiscard]] std::optional<std::uintptr_t> resolve_jmp(std::uintptr_t address) noexcept;

    [[nodiscard]] std::optional<std::uintptr_t> resolve_rip_relative_address(std::uintptr_t address) noexcept;

    bool read_memory(std::uintptr_t address, void* buffer, std::size_t size) noexcept;

    bool write_memory(std::uintptr_t address, const void* buffer, std::size_t size) noexcept;

    std::string read_string(std::uintptr_t address, std::size_t length) noexcept;

    template <typename T>
    T read_memory(const std::uintptr_t address) noexcept {
        T buffer = {};

        read_memory(address, &buffer, sizeof(T));

        return buffer;
    }

    template <typename T>
    bool write_memory(const std::uintptr_t address, const T& buffer) noexcept {
        return write_memory(address, &buffer, sizeof(T));
    }
}
