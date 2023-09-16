#pragma once

#define _AMD64_

#include <memory>

#include <handleapi.h>

namespace utility {
    namespace detail {
        struct HandleDisposer {
            using pointer = HANDLE;

            void operator()(const HANDLE handle) const noexcept {
                if (handle != nullptr && handle != INVALID_HANDLE_VALUE)
                    CloseHandle(handle);
            }
        };
    }

    using SafeHandle = std::unique_ptr<HANDLE, detail::HandleDisposer>;
}
