#pragma once

namespace sdk {
    class SchemaSystemTypeScope {
    public:
        void for_each_class(const std::function<void(std::pair<std::string, SchemaClassInfo*>)>& callback) const noexcept;

        [[nodiscard]] std::string module_name() const noexcept;
    };
}
