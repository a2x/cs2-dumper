#pragma once

namespace sdk {
    class SchemaTypeDeclaredClass {
    public:
        [[nodiscard]] std::string binary_name() const noexcept;

        [[nodiscard]] std::string module_name() const noexcept;
    };
}
