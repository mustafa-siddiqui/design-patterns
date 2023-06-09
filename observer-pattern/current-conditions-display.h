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
#include <memory>

/// Forward declares
class WeatherData;

class CurrentConditionsDisplay : public Observer, public DisplayElement {
  protected:
    std::shared_ptr<WeatherData> weatherData;
    int my_current_temperature = 0;
    int my_current_humidity = 0;
    int my_current_pressure = 0;

  public:
    /// Constructor
    CurrentConditionsDisplay() = delete;
    CurrentConditionsDisplay(CurrentConditionsDisplay const &) = default;
    CurrentConditionsDisplay &
    operator=(CurrentConditionsDisplay const &) = default;
    CurrentConditionsDisplay(CurrentConditionsDisplay &&) noexcept = default;
    CurrentConditionsDisplay &
    operator=(CurrentConditionsDisplay &&) noexcept = default;
    ~CurrentConditionsDisplay() override = default;

    explicit CurrentConditionsDisplay(
        std::shared_ptr<WeatherData> weatherDataObjPtr)
        : Observer(), DisplayElement(), weatherData(weatherDataObjPtr) {
        assert(weatherData != nullptr);
    }

    /// Interface methods

    void update() override;

    /**
     * @brief Display the current measurement values.
     */
    void display() const override;
};

#endif /* _CURRENT_CONDITIONS_DISPLAY_ */
