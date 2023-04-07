/**
 * @file    weather-data.cc
 * @author  Mustafa Siddiqui
 * @brief   Implementation of the StatisticsDisplay class.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "statistics-display.h"
#include "weather-data.h"
#include <iostream>

/// Helper function
int _getAverageTemperature(std::vector<int> readings) {
    int sum = 0;
    for (auto val : readings) {
        sum += val;
    }

    return static_cast<int>(sum / readings.size());
}

// model a queue to store most recent MAX_MEASUREMENTS number of measurements
void StatisticsDisplay::addMeasurement(int temperatureMeasurement) {
    if (my_temperature_measurements.size() == MAX_MEASUREMENTS) {
        my_temperature_measurements.erase(my_temperature_measurements.begin());
    }

    my_temperature_measurements.emplace_back(temperatureMeasurement);
}

/// Interface methods

void StatisticsDisplay::update() {
    int new_temp_reading = weatherData->getTemperature();
    addMeasurement(new_temp_reading);
}

void StatisticsDisplay::display() const {
    std::cout << "--- Temperature Statistics ---" << std::endl
              << "Average Temperature: "
              << _getAverageTemperature(my_temperature_measurements) << " ºC"
              << std::endl
              << "Over " << my_temperature_measurements.size() << " readings."
              << std::endl
              << "------------------------------" << std::endl;
}
