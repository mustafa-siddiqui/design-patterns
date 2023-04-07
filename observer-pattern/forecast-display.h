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
#include <memory>

/// Forward declares
class WeatherData;

class ForecastDisplay : public Observer, public DisplayElement {
  protected:
    std::shared_ptr<WeatherData> weatherData;
    int my_current_temperature = 0;
    int my_current_humidity = 0;

  public:
    /// Constructor
    ForecastDisplay() = delete;
    ForecastDisplay(ForecastDisplay const &) = default;
    ForecastDisplay &operator=(ForecastDisplay const &) = default;
    ForecastDisplay(ForecastDisplay &&) noexcept = default;
    ForecastDisplay &operator=(ForecastDisplay &&) noexcept = default;
    ~ForecastDisplay() override = default;

    explicit ForecastDisplay(std::shared_ptr<WeatherData> weatherDataObjPtr)
        : Observer(), DisplayElement(), weatherData(weatherDataObjPtr) {
        assert(weatherData != nullptr);
    }

    /// Interface methods

    void update() override;

    /**
     * @brief Display shows the weather forecast based on the barometer.
     */
    void display() const override;
};

#endif /* _FORECAST_DISPLAY_ */
