/**
 * @file    weather-data.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of a class representing the forecast display.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _FORECAST_DISPLAY_
#define _FORECAST_DISPLAY_

#include "interfaces/display-element-intf.h"
#include "interfaces/observer-intf.h"

class ForecastDisplay : public Observer, public DisplayElement {
  protected:
  public:
    /// Constructor
    ForecastDisplay() = default;
    ForecastDisplay(ForecastDisplay const &) = default;
    ForecastDisplay &operator=(ForecastDisplay const &) = default;
    ForecastDisplay(ForecastDisplay &&) noexcept = default;
    ForecastDisplay &operator=(ForecastDisplay &&) noexcept = default;
    ~ForecastDisplay() override = default;

    /// Interface methods

    void update() override;

    /**
     * @brief Display shows the weather forecast based on the barometer.
     */
    void display() const override;
};

#endif /* _FORECAST_DISPLAY_ */
