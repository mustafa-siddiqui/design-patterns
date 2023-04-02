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
#include <unordered_map>

enum class DISPLAYS { forecast, statistics, current_conditions };

int main(void) {

    auto weatherData = WeatherData(0, 0, 0);
    std::unordered_map<DISPLAYS, DisplayElement> displays = {
        std::pair(DISPLAYS::forecast, ForecastDisplay()),
        std::pair(DISPLAYS::statistics, StatisticsDisplay()),
        std::pair(DISPLAYS::current_conditions, CurrentConditionsDisplay())};

    return 0;
}
