/**
 * @file    weather-data.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of a class representing the current conditions display.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "interfaces/display-element-intf.h"
#include "interfaces/observer-intf.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement {
  protected:
  public:
    /// Constructor
    CurrentConditionsDisplay() = default;

    /// Interface methods

    void update();

    /**
     * @brief Display the current measurement values.
     */
    void display();
};
