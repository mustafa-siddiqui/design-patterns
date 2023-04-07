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
#include <iostream>
#include <memory>
#include <unordered_map>

#define _LOG_INFO " (" << __FUNCTION__ << ":" << __LINE__ << ")"

enum class DISPLAYS { forecast, statistics, current_conditions };

const int NUM_DISPLAYS = 3;

/// Helper fn

/**
 * @brief Determines if an insertion into an unordered map was successful or
 * not. Parameter is basically the return value of map.emplace()
 *
 * @tparam T1
 * @tparam T2
 * @param obj An ordered map container.
 * @return true or false
 */
template <typename T1, typename T2>
inline bool _validateMapInsertion(
    std::pair<typename std::unordered_map<T1, T2>::iterator, bool> obj) {
    if (!obj.second)
        return false;

    return true;
}

/// Util fn

/**
 * @brief Insert into an unordered map of key and value (unique pointer to an
 * object) and determine if insertion happened or not.
 *
 * @tparam T1 map key
 * @tparam T2 base class
 * @tparam T2_1 derived class
 * @param map An unordered map container.
 * @param key Key to be inserted in map.
 * @param valuePtr Value to be inserted in map.
 * @return true or false
 */
template <typename T1, typename T2, typename T2_1>
bool insertIntoMap(std::unordered_map<T1, std::shared_ptr<T2>> &map, T1 key,
                   std::shared_ptr<T2_1> valuePtr) {

    auto returnPair = map.emplace(key, std::move(valuePtr));

    return _validateMapInsertion<T1, std::shared_ptr<T2>>(returnPair);
}

int main(void) {
    auto weatherData = std::make_shared<WeatherData>(0, 0, 0);

    auto forecastDisplayPtr = std::make_shared<ForecastDisplay>();
    auto statisticsDisplayPtr = std::make_shared<StatisticsDisplay>();
    auto currentConditionsDisplayPtr =
        std::make_shared<CurrentConditionsDisplay>(weatherData);

    std::unordered_map<DISPLAYS, std::shared_ptr<Observer>> displays;

    /// There are better ways to construct/populate this map. Leaving it like
    /// this since that is out of scope of this project. Stopping myself from
    /// falling into this hole of trying to improve this -- kind of generic
    /// enough.

    if (!insertIntoMap<DISPLAYS, Observer, ForecastDisplay>(
            displays, DISPLAYS::forecast, std::move(forecastDisplayPtr))) {
        std::cerr << "Error: cannot construct map of displays." << _LOG_INFO
                  << std::endl;
    }

    if (!insertIntoMap<DISPLAYS, Observer, StatisticsDisplay>(
            displays, DISPLAYS::statistics, std::move(statisticsDisplayPtr))) {
        std::cerr << "Error: cannot construct map of displays." << _LOG_INFO
                  << std::endl;
    }

    if (insertIntoMap<DISPLAYS, Observer, CurrentConditionsDisplay>(
            displays, DISPLAYS::current_conditions,
            std::move(currentConditionsDisplayPtr))) {
        std::cerr << "Error: cannot construct map of displays." << _LOG_INFO
                  << std::endl;
    }
    assert(displays.size() == NUM_DISPLAYS);

    // add displays as observers
    weatherData->registerObserver(displays.at(DISPLAYS::forecast));
    weatherData->registerObserver(displays.at(DISPLAYS::statistics));
    weatherData->registerObserver(displays.at(DISPLAYS::current_conditions));

    return 0;
}
