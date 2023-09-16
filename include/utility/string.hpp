#pragma once

#include <cctype>
#include <string_view>

namespace utility::string {
    inline bool equals_ignore_case(const std::string_view str_1, const std::string_view str_2) noexcept {
        return (str_1.size() == str_2.size()) && std::equal(str_1.begin(), str_1.end(), str_2.begin(), [](const char a, const char b) {
            return std::tolower(a) == std::tolower(b);
        });
    }
}
