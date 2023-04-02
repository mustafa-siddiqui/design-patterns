/**
 * @file    display-element-intf.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of the DisplayElement interface.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _DISPLAY_ELEMENT_
#define _DISPLAY_ELEMENT_

/**
 * @brief Interface for a display element class.
 */
class DisplayElement {
  protected:
    DisplayElement() = default;

  public:
    virtual ~DisplayElement() = default;

    /**
     * @brief Display element by rendering correct info.
     * @param null
     * @return null
     */
    virtual void display() const = 0;
};

#endif /* _DISPLAY_ELEMENT_ */
