#include "utility/murmur_hash.hpp"

namespace utility {
    std::uint32_t murmur_hash2(const void* key, std::uint32_t length, const std::uint32_t seed) {
        constexpr auto get_block = [](const std::uint32_t* ptr) -> std::uint32_t {
            const auto bytes = reinterpret_cast<const std::uint8_t*>(ptr);

            return static_cast<std::uint32_t>(bytes[0]) | static_cast<std::uint32_t>(bytes[1]) << 0x8 | static_cast<std::uint32_t>(bytes[2]) << 0x10 | static_cast<std::uint32_t>(bytes[3]) << 0x18;
        };

        constexpr std::uint32_t HASH_CONSTANT = 0x5BD1E995;

        std::uint32_t hash = seed ^ length;

        auto data = static_cast<const std::uint8_t*>(key);

        while (length >= 4) {
            std::uint32_t block = get_block(reinterpret_cast<const std::uint32_t*>(data));

            block *= HASH_CONSTANT;
            block ^= block >> 0x18;
            block *= HASH_CONSTANT;

            hash *= HASH_CONSTANT;
            hash ^= block;

            data += 0x4;
            length -= 0x4;
        }

        switch (length) {
            case 3:
                hash ^= data[2] << 0x10;

            case 2:
                hash ^= data[1] << 0x8;

            case 1: {
                hash ^= data[0];
                hash *= HASH_CONSTANT;
            }

            default:
                break;
        }

        hash ^= hash >> 0xD;
        hash *= HASH_CONSTANT;
        hash ^= hash >> 0xF;

        return hash;
    }
}
