/**
 * @file    weather-data.cc
 * @author  Mustafa Siddiqui
 * @brief   Implementation of the WeatherData class.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "weather-data.h"
#include <assert.h>

/// Constructor
WeatherData::WeatherData(int temperature, int humidity, int pressure)
    : my_temperature(temperature), my_humidity(humidity),
      my_pressure(pressure) {}

void WeatherData::measurementsChanged() {}

void WeatherData::setMeasurements(int temperature, int humidity, int pressure) {
}

/// Setters

void WeatherData::setTemperature(int val) {}
void WeatherData::setHumidity(int val) {}
void WeatherData::setPressure(int val) {}

/// Getters

int WeatherData::getTemperature() {}
int WeatherData::getHumidity() {}
int WeatherData::getPressure() {}

/// Interface methods

void WeatherData::registerObserver() {}
void WeatherData::removeObserver() {}
void WeatherData::notifyObservers() {}