/**
 * @file    condiment-type.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of CondimentType enum to represent
 * different types of condiments on the menu for sandwiches.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _CONDIMENT_TYPE_H_
#define _CONDIMENT_TYPE_H_

#include <cstdint>
#include <sstream>

enum class CondimentType : uint8_t {
    // clang-format off
    KETCHUP = 0x00,
    MAYO = 0x01,
    BBQ_SAUCE = 0x02
    // clang-format on
};

/// << operator overload to convert condiment type to a string representation
static inline std::ostream &operator<<(std::ostream &os,
                                       CondimentType const &obj) {
    std::string stringRepr;

    switch (obj) {
    case CondimentType::KETCHUP:
        stringRepr = "ketchup";
        break;
    case CondimentType::MAYO:
        stringRepr = "mayo";
        break;
    case CondimentType::BBQ_SAUCE:
        stringRepr = "bbq sauce";
        break;
    default:
        stringRepr = "unknown";
        break;
    }

    os << stringRepr;

    return os;
}

#endif /* _CONDIMENT_TYPE_H_ */
