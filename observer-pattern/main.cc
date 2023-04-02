/**
 * @file    main.cc
 * @author  Mustafa Siddiqui
 * @brief   Main driver code for weather application.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "current-conditions-display.h"
#include "forecast-display.h"
#include "interfaces/display-element-intf.h"
#include "statistics-display.h"
#include "weather-data.h"
#include <memory>
#include <unordered_map>

enum class DISPLAYS { forecast, statistics, current_conditions };

int main(void) {

    auto weatherData = WeatherData(0, 0, 0);
    std::unordered_map<DISPLAYS, std::unique_ptr<DisplayElement>> displays(
        {{DISPLAYS::forecast,
          std::make_unique<ForecastDisplay>(ForecastDisplay())},
         {DISPLAYS::statistics,
          std::make_unique<StatisticsDisplay>(StatisticsDisplay())},
         {DISPLAYS::current_conditions,
          std::make_unique<CurrentConditionsDisplay>(
              CurrentConditionsDisplay())}});

    return 0;
}
