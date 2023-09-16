#pragma once

#include <array>

namespace sdk {
    template <class T, typename K>
    class HashBucketDataInternal {
    public:
        HashBucketDataInternal<T, K>* next() const noexcept {
            return process::read_memory<HashBucketDataInternal<T, K>*>(reinterpret_cast<std::uint64_t>(this) + 0x8);
        }

    public:
        T data;               // 0x0
        std::byte pad_0[0x8]; // 0x8
        K ui_key;             // 0x10
    };

    template <class T, typename K>
    class HashFixedDataInternal {
    public:
        HashFixedDataInternal<T, K>* next() const noexcept {
            return process::read_memory<HashFixedDataInternal<T, K>*>(reinterpret_cast<std::uint64_t>(this) + 0x8);
        }

    public:
        K ui_key;             // 0x0
        std::byte pad_0[0x8]; // 0x8
        T data;               // 0x10
    };

    template <class T, typename K>
    struct HashAllocatedData {
        std::array<HashFixedDataInternal<T, K>, 128> list() const noexcept {
            return process::read_memory<std::array<HashFixedDataInternal<T, K>, 128>>(reinterpret_cast<std::uint64_t>(this) + 0x18);
        }
    };

    template <class T, typename K>
    class HashUnallocatedData {
    public:
        HashUnallocatedData<T, K>* next() const noexcept {
            return process::read_memory<HashUnallocatedData<T, K>*>(reinterpret_cast<std::uint64_t>(this));
        }

        K ui_key() const noexcept {
            return process::read_memory<K>(reinterpret_cast<std::uint64_t>(this) + 0x10);
        }

        std::array<HashBucketDataInternal<T, K>, 256> block_list() const noexcept {
            return process::read_memory<std::array<HashBucketDataInternal<T, K>, 256>>(reinterpret_cast<std::uint64_t>(this) + 0x20);
        }
    };

    template <class T, typename K>
    struct HashBucket {
        std::byte pad_0[0x10];                       // 0x0
        HashAllocatedData<T, K>* allocated_data;     // 0x10
        HashUnallocatedData<T, K>* unallocated_data; // 0x18
    };

    class UtlMemoryPool {
    public:
        [[nodiscard]] std::int32_t block_size() const noexcept {
            return blocks_per_blob_;
        }

        [[nodiscard]] std::int32_t count() const noexcept {
            return block_allocated_size_;
        }

    private:
        std::int32_t block_size_;           // 0x0
        std::int32_t blocks_per_blob_;      // 0x4
        std::int32_t grow_mode_;            // 0x8
        std::int32_t blocks_allocated_;     // 0xC
        std::int32_t block_allocated_size_; // 0x10
        std::int32_t peak_alloc_;           // 0x14
    };

    template <class T, typename K = std::uint64_t>
    class UtlTsHash {
    public:
        [[nodiscard]] std::int32_t block_size() const noexcept {
            return entry_memory.block_size();
        }

        [[nodiscard]] std::int32_t count() const noexcept {
            return entry_memory.count();
        }

        std::vector<T> elements() const noexcept {
            std::vector<T> list;

            const auto& unallocated_data = buckets.unallocated_data;

            std::int32_t index = 0;

            for (auto element = unallocated_data; element != nullptr; element = element->next()) {
                const auto block_list = element->block_list();

                for (std::int32_t i = 0; i < block_size() && i != count(); ++i) {
                    list.emplace_back(block_list[i].data);

                    ++index;

                    if (index >= count())
                        break;
                }
            }

            return list;
        }

    private:
        UtlMemoryPool entry_memory; // 0x0
        HashBucket<T, K> buckets;   // 0x18
    };
}
