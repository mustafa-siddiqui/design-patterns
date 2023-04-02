/**
 * @file    weather-data.cc
 * @author  Mustafa Siddiqui
 * @brief   Implementation of the StatisticsDisplay class.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "statistics-display.h"

// model a queue to store most recent MAX_MEASUREMENTS number of measurements
void StatisticsDisplay::addMeasurement(int temperatureMeasurement) {
    if (my_temperature_measurements.size() == MAX_MEASUREMENTS) {
        my_temperature_measurements.erase(my_temperature_measurements.begin());
    }

    my_temperature_measurements.emplace_back(temperatureMeasurement);
}

/// Interface methods

void StatisticsDisplay::update() {}
void StatisticsDisplay::display() const {}