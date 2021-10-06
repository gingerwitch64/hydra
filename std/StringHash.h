#pragma once

namespace std {

    constexpr u32 string_hash(char const* characters, size_t length)
    {
        u32 hash = 0;
        for (size_t i = 0; i < length; ++i) {
            hash += (u32)characters[i];
            hash += (hash << 10);
            hash ^= (hash >> 6);
        }
        hash += hash << 3;
        hash ^= hash >> 11;
        hash += hash << 15;
        return hash;
    }

}

using std::string_hash;
