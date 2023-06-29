/**
 * @file    menu-item-intf.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of MenuItem interface.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _MENU_ITEM_H_
#define _MENU_ITEM_H_

class MenuItem {
  protected:
    MenuItem() = default;

  public:
    virtual ~MenuItem() = default;

    /**
     * @brief Get the cost of a menu item.
     * @return double Cost of the item.
     */
    virtual double getCost() const = 0;
};

#endif /* _MENU_ITEM_H_ */
