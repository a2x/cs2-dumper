#pragma once

namespace sdk {
    class SchemaClassInfo {
    public:
        [[nodiscard]] std::uint16_t fields_count() const noexcept;

        void for_each_field(const std::function<void(SchemaClassFieldData*)>& callback) const noexcept;
    };
}
