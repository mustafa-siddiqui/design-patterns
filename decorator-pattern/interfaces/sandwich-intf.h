/**
 * @file    sandwich-intf.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of Sandwich interface to represent
 * a sandwich on the menu.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _SANDWICH_INTF_H_
#define _SANDWICH_INTF_H_

#include "interfaces/menu-item-intf.h"
#include <cstdint>

/// Forward declares
enum class SandwichType : uint8_t;

/**
 * @brief Interface representing a sandwich item on the menu.
 */
class SandwichInterface : public MenuItem {
  protected:
    SandwichInterface() = default;

  public:
    virtual ~SandwichInterface() override = default;

    /**
     * @brief Get the type of a sandwich.
     * @return Enum representing type of sandwich.
     */
    virtual SandwichType getSandwichType() const = 0;
};

#endif /* _SANDWICH_INTF_H_ */
