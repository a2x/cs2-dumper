#include "sdk/sdk.hpp"

namespace sdk {
    SchemaSystem* SchemaSystem::get() noexcept {
        const auto address = process::find_pattern("schemasystem.dll", "48 8D 0D ? ? ? ? E9 ? ? ? ? CC CC CC CC 48 8D 0D ? ? ? ? E9 ? ? ? ? CC CC CC CC 48 83 EC 28");

        if (!address.has_value())
            return nullptr;

        return address->rip().as<SchemaSystem*>();
    }

    std::vector<SchemaSystemTypeScope*> SchemaSystem::type_scopes() const noexcept {
        const auto count = process::read_memory<std::uint32_t>(reinterpret_cast<std::uint64_t>(this) + 0x190);
        const auto data = process::read_memory<std::uint64_t>(reinterpret_cast<std::uint64_t>(this) + 0x198);

        if (count == 0 || data == 0)
            return {};

        std::vector<sdk::SchemaSystemTypeScope*> type_scopes;

        type_scopes.resize(count);

        process::read_memory(data, type_scopes.data(), count * sizeof(std::uint64_t));

        return type_scopes;
    }
}
