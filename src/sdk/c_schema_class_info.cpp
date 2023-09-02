#include "sdk/sdk.hpp"

namespace sdk {
    std::uint16_t CSchemaClassInfo::get_fields_count() const noexcept {
        return process::read_memory<std::uint16_t>(reinterpret_cast<std::uint64_t>(this) + 0x1C);
    }

    std::vector<SchemaClassFieldData_t*> CSchemaClassInfo::get_fields() const noexcept {
        std::vector<SchemaClassFieldData_t*> fields;

        for (std::size_t i = 0; i < get_fields_count(); ++i) {
            const auto field = reinterpret_cast<SchemaClassFieldData_t*>(process::read_memory<std::uint64_t>(reinterpret_cast<std::uint64_t>(this) + 0x28) + (i * 0x20));

            if (field == nullptr)
                continue;

            fields.push_back(field);
        }

        return fields;
    }
}
