#include "sdk/sdk.hpp"

namespace sdk {
    std::uint16_t SchemaClassInfo::fields_count() const noexcept {
        return process::read_memory<std::uint16_t>(reinterpret_cast<std::uint64_t>(this) + 0x1C);
    }

    void SchemaClassInfo::for_each_field(const std::function<void(SchemaClassFieldData*)>& callback) const noexcept {
        for (std::size_t i = 0; i < fields_count(); ++i) {
            const auto field = reinterpret_cast<SchemaClassFieldData*>(process::read_memory<std::uint64_t>(reinterpret_cast<std::uint64_t>(this) + 0x28) + (i * 0x20));

            if (field == nullptr)
                continue;

            callback(field);
        }
    }
}
