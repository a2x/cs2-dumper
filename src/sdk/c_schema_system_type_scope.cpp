#include "sdk/sdk.hpp"
#include "utility/murmur_hash.hpp"

namespace sdk {
    CSchemaClassInfo* CSchemaSystemTypeScope::find_declared_class(const std::string_view class_name) const noexcept {
        const std::uint32_t hash = utility::murmur_hash2(class_name.data(), static_cast<std::uint32_t>(class_name.length()), 0xBAADFEED);

        const std::int32_t hash_transform1 = static_cast<std::uint8_t>(hash >> 0x10) - 0x2D6 + 0x21 * (0x21 * static_cast<std::uint8_t>(hash) + static_cast<std::uint8_t>(hash >> 0x8));
        const std::int32_t hash_transform2 = 0x21 * hash_transform1 + static_cast<std::uint8_t>(hash >> 0x18);

        const auto hash_part = static_cast<std::uint32_t>(static_cast<std::uint8_t>(hash >> 0x18));

        const std::int32_t hash_transform4 = (hash_transform2 ^ (hash_transform2 >> 0x10)) ^ (static_cast<std::uint16_t>(hash_transform2 ^ (hash_part >> 0x10)) >> 0x8);

        const auto get_class_info = [&](const std::uint64_t address) -> CSchemaClassInfo* {
            const std::uint64_t class_info_address = address + 0x588 + static_cast<std::uint64_t>(0x28) * static_cast<std::uint8_t>(hash_transform4);

            const auto initial_address = process::read_memory<std::uint64_t>(class_info_address + 0x58);

            std::uint64_t class_address = initial_address;

            if (initial_address != 0) {
                while (process::read_memory<std::uint32_t>(class_address) != hash) {
                    class_address = process::read_memory<std::uint64_t>(class_address + 0x8);

                    if (class_address == 0)
                        break;
                }
            }

            if (class_address == 0) {
                const auto secondary_address = process::read_memory<std::uint64_t>(class_info_address + 0x60);

                std::uint64_t final_address = 0;

                if (secondary_address != 0 && secondary_address != initial_address) {
                    auto current_address = process::read_memory<std::uint64_t>(class_info_address + 0x60);

                    const auto starting_address = process::read_memory<std::uint64_t>(class_info_address + 0x58);

                    if (current_address != starting_address) {
                        while (process::read_memory<std::uint32_t>(current_address) != hash) {
                            current_address = process::read_memory<std::uint64_t>(current_address + 0x8);

                            if (current_address == starting_address)
                                break;
                        }

                        final_address = current_address;
                    }
                }

                class_address = final_address;
            }

            return reinterpret_cast<CSchemaClassInfo*>(class_address);
        };

        const CSchemaClassInfo* class_info = get_class_info(reinterpret_cast<std::uint64_t>(this));

        if (class_info != nullptr)
            return reinterpret_cast<CSchemaClassInfo*>(process::read_memory<std::uint64_t>(reinterpret_cast<std::uint64_t>(class_info) + 0x10));

        const auto secondary_class_info = process::read_memory<std::uint64_t>(reinterpret_cast<std::uint64_t>(this) + 0x108);

        return secondary_class_info != 0 ? reinterpret_cast<CSchemaClassInfo*>(process::read_memory<std::uint64_t>(reinterpret_cast<std::uint64_t>(get_class_info(secondary_class_info)) + 0x10)) : nullptr;
    }

    std::vector<CSchemaType_DeclaredClass*> CSchemaSystemTypeScope::get_declared_classes() const noexcept {
        std::vector<CSchemaType_DeclaredClass*> classes;

        const std::uint64_t base = reinterpret_cast<std::uint64_t>(this) + 0x588;

        const auto block_size = process::read_memory<std::uint32_t>(base + 0x4);
        const auto count = process::read_memory<std::uint32_t>(base + 0x10);
        const auto unallocated_data = process::read_memory<std::uint64_t>(base + 0x18 + 0x18);

        std::uint32_t index = 0;

        for (std::uint64_t element = unallocated_data; element != 0; element = process::read_memory<std::uint64_t>(element)) {
            for (std::size_t i = 0; i < block_size && i != count; ++i) {
                classes.push_back(reinterpret_cast<CSchemaType_DeclaredClass*>(process::read_memory<std::uint64_t>(element + 0x20 + (i * 0x18))));

                ++index;

                if (index >= count)
                    break;
            }
        }

        return classes;
    }

    std::string CSchemaSystemTypeScope::get_module_name() const noexcept {
        return process::read_string(reinterpret_cast<std::uint64_t>(this) + 0x8, 256);
    }
}
