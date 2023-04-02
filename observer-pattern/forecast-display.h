/**
 * @file    weather-data.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of a class representing the forecast display.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "interfaces/display-element-intf.h"
#include "interfaces/observer-intf.h"

class ForecastDisplay : public Observer, public DisplayElement {
  protected:
  public:
    /// Constructor
    ForecastDisplay() = default;

    /// Interface methods

    void update();

    /**
     * @brief Display shows the weather forecast based on the barometer.
     */
    void display();
};
