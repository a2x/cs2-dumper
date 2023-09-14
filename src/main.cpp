#include "builder/builder.hpp"
#include "sdk/sdk.hpp"

#include <nlohmann/json.hpp>

#include <spdlog/spdlog.h>

#include <filesystem>
#include <fstream>
#include <regex>

using Entries = std::map<std::string, std::vector<std::pair<std::string, std::uint64_t>>>;

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
    const std::string output_file_path = std::format("generated/{}.{}", file_name, builder.get_extension());

    std::ofstream output(output_file_path);

    if (!output.good()) {
        spdlog::error("failed to open {}.", file_name);

        return;
    }

    const auto sanitize_namespace_name = [](const std::string& namespace_name) -> std::string {
        static std::regex double_colon_pattern("\\::");

        return std::regex_replace(namespace_name, double_colon_pattern, "_");
    };

    builder.write_top_level(output);

    for (auto it = entries.begin(); it != entries.end(); ++it) {
        const auto& [namespace_name, variables] = *it;

        const std::string sanitized_namespace = sanitize_namespace_name(namespace_name);

        builder.write_namespace(output, sanitized_namespace);

        for (const auto& [variable_name, variable_value] : variables)
            builder.write_variable(output, variable_name, variable_value);

        builder.write_closure(output, it == std::prev(entries.end()));
    }
}

std::optional<std::uint64_t> get_entity_list() noexcept {
	const std::optional<std::uint64_t> address = process::find_pattern("client.dll", "48 8B 0D ? ? ? ? 48 89 7C 24 ? 8B FA C1 EB");

    if (!address.has_value())
        return std::nullopt;

    return process::resolve_rip_relative_address(address.value()).value_or(0);
}

std::optional<std::uint64_t> get_global_vars() noexcept {
    std::optional<std::uint64_t> address = process::find_pattern("client.dll", "48 89 0D ? ? ? ? 48 89 41");

    if (!address.has_value())
        return std::nullopt;

    address = process::resolve_rip_relative_address(address.value());

    if (!address.has_value())
        return std::nullopt;

    return address.value();
}

std::optional<std::uint64_t> get_local_player() noexcept {
    std::optional<std::uint64_t> address = process::find_pattern("client.dll", "48 8B 0D ? ? ? ? F2 0F 11 44 24 ? F2 41 0F 10 00");

    if (!address.has_value())
        return std::nullopt;

    address = process::resolve_rip_relative_address(address.value());

    if (!address.has_value())
        return std::nullopt;

    return process::read_memory<std::uint64_t>(address.value()) + 0x50;
}

std::optional<std::uint64_t> get_view_angles() noexcept {
    std::optional<std::uint64_t> address = process::find_pattern("client.dll", "48 8B 0D ? ? ? ? 48 8B 01 48 FF 60 30");

    if (!address.has_value())
        return std::nullopt;

    address = process::resolve_rip_relative_address(address.value());

    if (!address.has_value())
        return std::nullopt;

    return process::read_memory<std::uint64_t>(address.value()) + 0x4510;
}

std::optional<std::uint64_t> get_view_matrix() noexcept {
	const std::optional<std::uint64_t> address = process::find_pattern("client.dll", "48 8D 0D ? ? ? ? 48 C1 E0 06");

    if (!address.has_value())
        return std::nullopt;

    return process::resolve_rip_relative_address(address.value()).value_or(0);
}

void dump_schema_classes() {
    const auto schema_system = sdk::CSchemaSystem::get();

    if (schema_system == nullptr) {
        spdlog::error("failed to get schema system.");

        return;
    }

    spdlog::info("schema system: {:#x}", reinterpret_cast<std::uint64_t>(schema_system));

    for (const sdk::CSchemaSystemTypeScope* type_scope : schema_system->get_type_scopes()) {
        if (type_scope == nullptr)
            continue;

        const std::string module_name = type_scope->get_module_name();

        spdlog::info("generating files for {}...", module_name);

        Entries entries;

        for (const sdk::CSchemaType_DeclaredClass* declared_class : type_scope->get_declared_classes()) {
            if (declared_class == nullptr)
                continue;

            const sdk::CSchemaClassInfo* class_info = type_scope->find_declared_class(declared_class->get_class_name());

            if (class_info == nullptr)
                continue;

            for (const sdk::SchemaClassFieldData_t* field : class_info->get_fields()) {
                if (field == nullptr)
                    continue;

                entries[declared_class->get_class_name()].emplace_back(field->get_name(), field->get_offset());
            }
        }

        for (const auto& [extension, builder] : builders) {
            generate_file(module_name, entries, *builder);

            spdlog::info("  > generated {}.{}!", module_name, extension);
        }
    }
}

void dump_interfaces() noexcept {
    const std::optional<std::vector<std::string>> loaded_modules = process::get_loaded_modules();

    if (!loaded_modules.has_value()) {
        spdlog::error("failed to get loaded modules.");

        return;
    }

    spdlog::info("generating interface files...");

    Entries entries;

    for (const auto& module_name : loaded_modules.value()) {
        const std::optional<std::uint64_t> module_base = process::get_module_base(module_name);

        if (!module_base.has_value())
            continue;

        const std::optional<std::uint64_t> create_interface_address = process::get_export(module_base.value(), "CreateInterface");

        if (!create_interface_address.has_value())
            continue;

        std::optional<std::uint64_t> interface_registry = process::resolve_rip_relative_address(create_interface_address.value());

        if (!interface_registry.has_value())
            continue;

        interface_registry = process::read_memory<std::uint64_t>(interface_registry.value());

        if (!interface_registry.has_value())
            continue;

        while (interface_registry.value() != 0) {
            const auto interface_ptr = process::read_memory<std::uint64_t>(interface_registry.value());

            const std::string interface_version_name = process::read_string(process::read_memory<std::uint64_t>(interface_registry.value() + 0x8), 64);

            entries[sanitize_module_name(module_name)].emplace_back(interface_version_name, interface_ptr - module_base.value());

            interface_registry = process::read_memory<std::uint64_t>(interface_registry.value() + 0x10);
        }
    }

    for (const auto& [extension, builder] : builders) {
        generate_file("interfaces", entries, *builder);

        spdlog::info("  > generated {}.{}!", "interfaces", extension);
    }
}

void dump_offsets() noexcept {
    const std::optional<std::uint64_t> client_base = process::get_module_base("client.dll");

    if (!client_base.has_value()) {
        spdlog::error("failed to get client.dll base.");

        return;
    }

    const auto get_client_rva = [&client_base](const std::uint64_t address) -> std::uint64_t {
        return address - client_base.value();
    };

    const std::uint64_t entity_list_rva = get_client_rva(get_entity_list().value_or(0));
    const std::uint64_t global_vars_rva = get_client_rva(get_global_vars().value_or(0));
    const std::uint64_t local_player_controller_rva = get_client_rva(get_local_player().value_or(0));
    const std::uint64_t view_angles_rva = get_client_rva(get_view_angles().value_or(0));
    const std::uint64_t view_matrix_rva = get_client_rva(get_view_matrix().value_or(0));

    spdlog::info("found offsets!");
    spdlog::info("  > entity list: {:#x}", entity_list_rva);
    spdlog::info("  > global vars: {:#x}", global_vars_rva);
    spdlog::info("  > local player controller: {:#x}", local_player_controller_rva);
    spdlog::info("  > view angles: {:#x}", view_angles_rva);
    spdlog::info("  > view matrix: {:#x}", view_matrix_rva);

    const Entries entries = {
        { "client_dll", {
            { "entity_list", entity_list_rva },
            { "global_vars", global_vars_rva },
            { "local_player_controller", local_player_controller_rva },
            { "view_angles", view_angles_rva },
            { "view_matrix", view_matrix_rva }
        } }
    };

    spdlog::info("generating offset files...");

    for (const auto& [extension, builder] : builders) {
        generate_file("offsets", entries, *builder);

        spdlog::info("  > generated {}.{}!", "offsets", extension);
    }
}

int main() {
    if (!std::filesystem::exists("generated"))
        std::filesystem::create_directory("generated");

    if (!process::attach("cs2.exe")) {
        spdlog::error("failed to attach to process.");

        return 1;
    }

    spdlog::info("attached to process!");

    dump_schema_classes();

    dump_interfaces();

    dump_offsets();

    spdlog::info("finished!");

    return 0;
}
