#include "builder/builder.hpp"
#include "process.hpp"
#include "sdk/sdk.hpp"
#include "utility/string.hpp"

#include <spdlog/spdlog.h>

#include <regex>

using Entries = std::map<std::string, std::vector<std::pair<std::string, std::uint64_t>>, std::less<>>;

struct Signature {
    std::string name;
    std::string module;
    std::string pattern;
    bool relative;
    std::uint32_t levels;
    std::ptrdiff_t offset;
};

static const std::array<std::pair<std::string_view, std::unique_ptr<builder::IFileBuilder>>, 4> builders = {
    {
        { "cs", std::make_unique<builder::CSharpFileBuilder>() },
        { "hpp", std::make_unique<builder::CppFileBuilder>() },
        { "json", std::make_unique<builder::JsonFileBuilder>() },
        { "rs", std::make_unique<builder::RustFileBuilder>() }
    }
};

std::string sanitize_module_name(const std::string& name) {
    static std::regex double_colon_pattern("\\.");

    return std::regex_replace(name, double_colon_pattern, "_");
}

template <class IFileBuilder>
void generate_file(const std::string_view file_name, const Entries& entries, IFileBuilder& builder) {
    const std::string output_file_path = std::format("generated/{}.{}", file_name, builder.extension());

    std::ofstream file(output_file_path);

    if (!file.good()) {
        spdlog::error("Failed to open {}.", file_name);

        return;
    }

    const auto sanitize_namespace_name = [](const std::string& namespace_name) {
        static std::regex double_colon_pattern("\\::");

        return std::regex_replace(namespace_name, double_colon_pattern, "_");
    };

    builder.write_top_level(file);

    for (auto it = entries.begin(); it != entries.end(); ++it) {
        const auto& [namespace_name, variables] = *it;

        const std::string sanitized_namespace = sanitize_namespace_name(namespace_name);

        builder.write_namespace(file, sanitized_namespace);

        for (const auto& [variable_name, variable_value] : variables)
            builder.write_variable(file, variable_name, variable_value);

        builder.write_closure(file, it == std::prev(entries.end()));
    }
}

void dump_interfaces() {
    const auto loaded_modules = process::loaded_modules();

    if (!loaded_modules.has_value()) {
        spdlog::critical("Failed to get loaded modules.");

        return;
    }

    spdlog::info("Generating interface files...");

    Entries entries;

    for (const auto& module_name : loaded_modules.value()) {
        const auto module_base = process::get_module_base_by_name(module_name);

        if (!module_base.has_value())
            continue;

        const auto create_interface_address = process::get_module_export_by_name(module_base.value(), "CreateInterface");

        if (!create_interface_address.has_value())
            continue;

        auto interface_registry = utility::Address(create_interface_address.value()).rip().get();

        if (!interface_registry.is_valid())
            continue;

        while (interface_registry.is_valid()) {
            const std::uint64_t interface_ptr = interface_registry.get().address();

            const std::string interface_version_name = process::read_string(interface_registry.add(0x8).get().address(), 64);

            entries[sanitize_module_name(module_name)].emplace_back(interface_version_name, interface_ptr - module_base.value());

            interface_registry = interface_registry.add(0x10).get();
        }
    }

    for (const auto& [extension, builder] : builders) {
        generate_file("interfaces", entries, *builder);

        spdlog::info("  > Generated {}.{}", "interfaces", extension);
    }
}

void dump_offsets() {
    std::ifstream file("config.json");

    if (!file.good()) {
        spdlog::critical("Failed to open config.json.");

        return;
    }

    try {
        const auto json = nlohmann::json::parse(file);

        Entries entries;

        for (const auto& element : json["signatures"]) {
            const Signature signature = {
                .name = element["name"],
                .module = element["module"],
                .pattern = element["pattern"],
                .relative = element["relative"],
                .levels = element["levels"],
                .offset = element["offset"]
            };

            const auto module_base = process::get_module_base_by_name(signature.module);

            if (!module_base.has_value())
                continue;

            auto address = process::find_pattern(signature.module, signature.pattern);

            if (!address.has_value())
                continue;

            if (signature.relative)
                address = address->rip();

            if (signature.levels > 0)
                address = address->get(signature.levels);

            address = address->add(signature.offset);

            spdlog::info("Found '{}' @ {:#x} (RVA: {:#x})", signature.name, address->address(), address->address() - module_base.value());

            entries[sanitize_module_name(signature.module)].emplace_back(signature.name, address->address() - module_base.value());
        }

        spdlog::info("Generating offset files...");

        for (const auto& [extension, builder] : builders) {
            generate_file("offsets", entries, *builder);

            spdlog::info("  > Generated file: {}.{}", "offsets", extension);
        }
    } catch (const nlohmann::json::parse_error& ex) {
        spdlog::critical("Failed to parse config.json: {}", ex.what());
    }
}

void dump_schemas() {
    const auto schema_system = sdk::SchemaSystem::get();

    if (schema_system == nullptr) {
        spdlog::critical("Failed to get schema system.");

        return;
    }

    spdlog::info("Schema system: {:#x}", reinterpret_cast<std::uint64_t>(schema_system));

    for (const auto& type_scope : schema_system->type_scopes()) {
        const std::string module_name = type_scope->module_name();

        spdlog::info("Generating files for {}...", module_name);

        Entries entries;

        type_scope->for_each_class([&entries](const std::pair<std::string, sdk::SchemaClassInfo*>& pair) {
            spdlog::info("  [{}] @ {:#x}", pair.first, reinterpret_cast<std::uint64_t>(pair.second));

            pair.second->for_each_field([&entries, &pair](const sdk::SchemaClassFieldData* field) {
                spdlog::info("    [{}] = {:#x}", field->name(), field->offset());

                entries[pair.first].emplace_back(field->name(), field->offset());
            });
        });

        for (const auto& [extension, builder] : builders) {
            generate_file(module_name, entries, *builder);

            spdlog::info("  > Generated file: {}.{}", module_name, extension);
        }
    }
}

int main() {
    const auto start = std::chrono::high_resolution_clock::now();

    if (!std::filesystem::exists("generated"))
        std::filesystem::create_directory("generated");

    if (!process::attach("cs2.exe")) {
        spdlog::critical("Failed to attach to cs2.exe.");

        return 1;
    }

    dump_interfaces();

    dump_offsets();

    dump_schemas();

    spdlog::info("Done! Took {}ms.", std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start).count());

    return 0;
}
