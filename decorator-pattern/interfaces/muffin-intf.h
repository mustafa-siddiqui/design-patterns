/**
 * @file    muffin-intf.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of Muffin interface to represent
 * a muffin on the menu.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _MUFFIN_INTF_H_
#define _MUFFIN_INTF_H_

#include "menu-item-intf.h"

/// Forward declares
enum class MuffinType : uint8_t;

class MuffinInterface : MenuItem {
  protected:
    MuffinInterface() = default;

  public:
    virtual ~MuffinInterface() override = default;

    virtual MuffinType getMuffinType() const = 0;
};

#endif /* MUFFIN_INTF_H_ */
