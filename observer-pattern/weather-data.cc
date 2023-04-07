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

void WeatherData::measurementsChanged() {}

void WeatherData::setMeasurements(int temperature, int humidity, int pressure) {
}

/// Setters

void WeatherData::setTemperature(int val) {}
void WeatherData::setHumidity(int val) {}
void WeatherData::setPressure(int val) {}

/// Getters

int WeatherData::getTemperature() const {}
int WeatherData::getHumidity() const {}
int WeatherData::getPressure() const {}

/// Interface methods

void WeatherData::registerObserver(std::shared_ptr<Observer> observerObjPtr) {}
void WeatherData::removeObserver(std::shared_ptr<Observer> observerObjPtr) {}
void WeatherData::notifyObservers() const {}