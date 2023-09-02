#include "sdk/sdk.hpp"

namespace sdk {
    std::string CSchemaType_DeclaredClass::get_class_name() const noexcept {
        return process::read_string(process::read_memory<std::uint64_t>(reinterpret_cast<std::uint64_t>(this) + 0x8), 64);
    }
}
