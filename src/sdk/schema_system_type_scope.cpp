#include "sdk/sdk.hpp"

namespace sdk {
    void SchemaSystemTypeScope::for_each_class(const std::function<void(std::pair<std::string, SchemaClassInfo*>)>& callback) const noexcept {
        const auto classes = process::read_memory<UtlTsHash<SchemaTypeDeclaredClass*>>(reinterpret_cast<std::uint64_t>(this) + 0x588);

        for (const auto& element : classes.elements())
            callback({ element->binary_name(), reinterpret_cast<SchemaClassInfo*>(element) });
    }

    std::string SchemaSystemTypeScope::module_name() const noexcept {
        return process::read_string(reinterpret_cast<std::uint64_t>(this) + 0x8, 256);
    }
}
