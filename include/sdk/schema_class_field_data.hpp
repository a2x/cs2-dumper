#pragma once

namespace sdk {
    class SchemaClassFieldData {
    public:
        [[nodiscard]] std::string name() const noexcept;

        [[nodiscard]] std::uint16_t offset() const noexcept;
    };
}
