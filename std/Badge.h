#pragma once

namespace std {

    template<typename T>
    class Badge {
    public:
        using Type = T;

    private:
        friend T;
        constexpr Badge() = default;

        Badge(const Badge&) = delete;
        Badge& operator=(const Badge&) = delete;

        Badge(Badge&&) = delete;
        Badge& operator=(Badge&&) = delete;
    };

}

using std::Badge;
