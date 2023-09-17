/**
 * @file    sandwich-type.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of SandwichType enum to represent
 * different types of sandwiches on the menu.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _SANDWICH_TYPE_H_
#define _SANDWICH_TYPE_H_

#include <cstdint>
#include <sstream>

/**
 * @brief Definition of enum representing type of sandwich.
 */
enum class SandwichType : uint8_t {
    CHICKEN = 0x00,
    BEEF = 0x01,
    GRILLED_CHEESE = 0x02,
    EGG = 0x03
};

/// << operator overload to convert sandwich type to a string representation
static inline std::ostream &operator<<(std::ostream &os,
                                       SandwichType const &obj) {
    std::string stringRepr;

    switch (obj) {
    case SandwichType::CHICKEN:
        stringRepr = "chicken";
        break;
    case SandwichType::BEEF:
        stringRepr = "beef";
        break;
    case SandwichType::GRILLED_CHEESE:
        stringRepr = "grilled cheese";
        break;
    case SandwichType::EGG:
        stringRepr = "egg";
        break;
    default:
        stringRepr = "unknown";
        break;
    }

    os << stringRepr;

    return os;
}

#endif /* _SANDWICH_TYPE_H_ */