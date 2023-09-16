#include "utility/address.hpp"
#include "process.hpp"

namespace utility {
    Address Address::add(const std::ptrdiff_t offset) const noexcept {
        return Address(address_ + offset);
    }

    std::uintptr_t Address::address() const noexcept {
        return address_;
    }

    Address Address::get(const std::size_t times) const noexcept {
        std::uintptr_t base = address_;

        for (std::size_t i = 0; i < times; ++i)
            base = process::read_memory<std::uintptr_t>(base);

        return Address(base);
    }

    bool Address::is_valid() const noexcept {
        return address_ > static_cast<std::uintptr_t>(0x1000)
            && address_ < static_cast<std::uintptr_t>(sizeof(void*) == 4 ? 0x7FFEFFFF : 0x7FFFFFFEFFFF);
    }

    Address Address::jmp(const std::ptrdiff_t offset) const noexcept {
        std::uintptr_t base = address_ + offset;

        const auto displacement = process::read_memory<std::int32_t>(address_);

        base += displacement;
        base += sizeof(std::uint32_t);

        return Address(base);
    }

    Address Address::rip(const std::ptrdiff_t offset, const std::size_t length) const noexcept {
        std::uintptr_t base = address_;

        const auto displacement = process::read_memory<std::int32_t>(base + offset);

        base += displacement;
        base += length;

        return Address(base);
    }
}
