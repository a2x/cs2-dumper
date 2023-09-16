#pragma once

#include <cstddef>
#include <cstdint>

namespace utility {
    class Address {
    public:
        Address() noexcept = default;

        explicit Address(const std::uintptr_t address) noexcept : address_(address) {}

        [[nodiscard]] Address add(std::ptrdiff_t offset) const noexcept;

        [[nodiscard]] std::uintptr_t address() const noexcept;

        [[nodiscard]] Address get(std::size_t times = 1) const noexcept;

        [[nodiscard]] bool is_valid() const noexcept;

        [[nodiscard]] Address jmp(std::ptrdiff_t offset = 0x1) const noexcept;

        [[nodiscard]] Address rip(std::ptrdiff_t offset = 0x3, std::size_t length = 7) const noexcept;

        template <typename T>
        [[nodiscard]] T as() const noexcept {
            return reinterpret_cast<T>(address_);
        }

    private:
        std::uintptr_t address_;
    };
}
