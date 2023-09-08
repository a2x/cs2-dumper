#pragma once

namespace sdk {
    class SchemaClassFieldData_t;

    class CSchemaClassInfo {
    public:
        [[nodiscard]] std::uint16_t get_fields_count() const noexcept;

        [[nodiscard]] std::vector<SchemaClassFieldData_t*> get_fields() const noexcept;
    };
}
