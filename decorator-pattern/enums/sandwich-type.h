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

/**
 * @brief Definition of enum representing type of sandwich.
 */
enum class SandwichType : uint8_t {
    CHICKEN = 0x00,
    BEEF = 0x01,
    GRILLED_CHEESE = 0x02,
    EGG = 0x03
};

#endif /* _SANDWICH_TYPE_H_ */