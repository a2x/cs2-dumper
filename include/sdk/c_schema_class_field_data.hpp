#pragma once

namespace sdk {
    class SchemaClassFieldData_t {
    public:
        [[nodiscard]] std::string get_name() const noexcept;

        [[nodiscard]] std::uint16_t get_offset() const noexcept;
    };
}
