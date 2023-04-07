/**
 * @file    weather-data.cc
 * @author  Mustafa Siddiqui
 * @brief   Implementation of the CurrentConditionsDisplay class.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "current-conditions-display.h"
#include "interfaces/observable-intf.h"
#include "weather-data.h"
#include <iostream>

/// Interface methods

void CurrentConditionsDisplay::update() {
    my_current_temperature = weatherData->getTemperature();
    my_current_humidity = weatherData->getHumidity();
    my_current_pressure = weatherData->getPressure();
}

void CurrentConditionsDisplay::display() const {
    std::cout << "--- Current Conditions ---" << std::endl
              << "Temperature: " << my_current_temperature << " ºF" << std::endl
              << "Humidity: " << my_current_humidity << "%" << std::endl
              << "Pressure: " << my_current_pressure << " Pa" << std::endl
              << "--------------------------" << std::endl;
}
