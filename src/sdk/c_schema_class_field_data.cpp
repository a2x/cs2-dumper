#include "sdk/sdk.hpp"

namespace sdk {
    std::string SchemaClassFieldData_t::get_name() const noexcept {
        return process::read_string(process::read_memory<std::uint64_t>(reinterpret_cast<std::uint64_t>(this)), 64);
    }

    std::uint16_t SchemaClassFieldData_t::get_offset() const noexcept {
        return process::read_memory<std::uint16_t>(reinterpret_cast<std::uint64_t>(this) + 0x10);
    }
}
