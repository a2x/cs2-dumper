#pragma once

#include <vector>

namespace sdk {
    class CSchemaSystemTypeScope;

    class CSchemaSystem {
    public:
        static CSchemaSystem* get() noexcept;

        [[nodiscard]] std::vector<CSchemaSystemTypeScope*> get_type_scopes() const noexcept;
    };
}
