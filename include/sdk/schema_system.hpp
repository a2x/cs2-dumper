#pragma once

namespace sdk {
    class SchemaSystem {
    public:
        static SchemaSystem* get() noexcept;

        [[nodiscard]] std::vector<SchemaSystemTypeScope*> type_scopes() const noexcept;
    };
}
