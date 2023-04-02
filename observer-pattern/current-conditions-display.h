/**
 * @file    weather-data.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of a class representing the current conditions display.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _CURRENT_CONDITIONS_DISPLAY_
#define _CURRENT_CONDITIONS_DISPLAY_

#include "interfaces/display-element-intf.h"
#include "interfaces/observer-intf.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement {
  protected:
  public:
    /// Constructor
    CurrentConditionsDisplay() = default;
    CurrentConditionsDisplay(CurrentConditionsDisplay const &) = default;
    CurrentConditionsDisplay &
    operator=(CurrentConditionsDisplay const &) = default;
    ~CurrentConditionsDisplay() override = default;

    /// Interface methods

    void update() override;

    /**
     * @brief Display the current measurement values.
     */
    void display() const override;
};

#endif /* _CURRENT_CONDITIONS_DISPLAY_ */
