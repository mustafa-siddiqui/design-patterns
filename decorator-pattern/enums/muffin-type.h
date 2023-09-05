/**
 * @file    muffin-type.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of MuffinType enum to represent
 * different types of muffins on the menu.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _MUFFIN_TYPE_H_
#define _MUFFIN_TYPE_H_

#include <cstdint>

enum class MuffinType : uint8_t {
    CHOCOLATE = 0x00,
    VANILLA = 0x01,
    CHOCOLATE_CHIP = 0x02,
    BLUEBERRY = 0x03
};

#endif /* _MUFFIN_TYPE_H_ */
