#include "sdk/sdk.hpp"

#include <filesystem>
#include <fstream>

void generate_header_for_type_scope(const sdk::CSchemaSystemTypeScope* type_scope) {
    if (type_scope == nullptr)
        return;

    const std::string output_file_name = std::format("classes/{}.hpp", type_scope->get_module_name());

    std::fstream output(output_file_name, std::ios::out);

    output << "#pragma once\n\n#include <cstddef>\n\n";

    for (const sdk::CSchemaType_DeclaredClass* declared_class : type_scope->get_declared_classes()) {
        if (declared_class == nullptr)
            continue;

        const sdk::CSchemaClassInfo* class_info = type_scope->find_declared_class(declared_class->get_class_name());

        if (class_info == nullptr)
            continue;

        output << "namespace " << declared_class->get_class_name() << " {\n";

        for (const sdk::SchemaClassFieldData_t* field : class_info->get_fields()) {
            if (field == nullptr)
                continue;

            output << "    constexpr std::ptrdiff_t " << field->get_name() << " = 0x" << std::hex << field->get_offset() << ";\n";
        }

        output << "}\n\n";

        printf_s("    -> generated header for %s!\n", declared_class->get_class_name().c_str());
    }
}

int main() {
    if (!std::filesystem::exists("classes"))
        std::filesystem::create_directory("classes");

    if (!process::attach("cs2.exe")) {
        printf_s("[-] failed to attach to process.\n");

        return 1;
    }

    printf_s("[+] attached to process!\n");

    const auto schema_system = sdk::CSchemaSystem::get();

    if (schema_system == nullptr) {
        printf_s("[-] failed to get schema system.\n");

        return 1;
    }

    printf_s("[+] schema system: 0x%llX\n", reinterpret_cast<std::uint64_t>(schema_system));

    for (const sdk::CSchemaSystemTypeScope* type_scope : schema_system->get_type_scopes()) {
        printf_s("[+] generating headers for %s...\n", type_scope->get_module_name().c_str());

        generate_header_for_type_scope(type_scope);
    }

    printf_s("[+] done!\n");

    return 0;
}
