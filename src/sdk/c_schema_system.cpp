#include "sdk/c_schema_system.hpp"
#include "process.hpp"

namespace sdk {
    CSchemaSystem* CSchemaSystem::get() noexcept {
        std::optional<std::uintptr_t> address = process::find_pattern("schemasystem.dll", "48 8D 0D ? ? ? ? E9 ? ? ? ? CC CC CC CC 48 8D 0D ? ? ? ? E9 ? ? ? ? CC CC CC CC 48 83 EC 28");

        if (!address.has_value())
            return nullptr;

        address = process::resolve_rip_relative_address(address.value());

        if (!address.has_value())
            return nullptr;

        return reinterpret_cast<CSchemaSystem*>(address.value());
    }

    std::vector<CSchemaSystemTypeScope*> CSchemaSystem::get_type_scopes() const noexcept {
        std::vector<CSchemaSystemTypeScope*> type_scopes;

        type_scopes.resize(process::read_memory<std::uint32_t>(reinterpret_cast<std::uint64_t>(this) + 0x190));

        process::read_memory(process::read_memory<std::uint64_t>(reinterpret_cast<std::uint64_t>(this) + 0x198), type_scopes.data(), type_scopes.size() * sizeof(std::uint64_t));

        return type_scopes;
    }
}
