#pragma once

namespace sdk {
    class CSchemaClassInfo;
    class CSchemaType_DeclaredClass;

    class CSchemaSystemTypeScope {
    public:
        [[nodiscard]] CSchemaClassInfo* find_declared_class(std::string_view class_name) const noexcept;

        [[nodiscard]] std::vector<CSchemaType_DeclaredClass*> get_declared_classes() const noexcept;

        [[nodiscard]] std::string get_module_name() const noexcept;
    };
}
