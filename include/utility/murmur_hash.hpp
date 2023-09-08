#pragma once

#include <cstdint>

namespace utility {
    std::uint32_t murmur_hash2(const void* key, std::uint32_t length, std::uint32_t seed);
}
