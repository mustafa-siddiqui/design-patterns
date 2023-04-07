/**
 * @file    weather-data.cc
 * @author  Mustafa Siddiqui
 * @brief   Implementation of the WeatherData class.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "weather-data.h"
#include "interfaces/observer-intf.h"
#include <assert.h>

void WeatherData::measurementsChanged() { notifyObservers(); }

// Method to test functionality of getting new measurements from an imaginary
// source...
void WeatherData::setMeasurements(int temperature, int humidity, int pressure) {
    setTemperature(temperature);
    setHumidity(humidity);
    setPressure(pressure);

    measurementsChanged();
}

/// Setters

void WeatherData::setTemperature(int val) { my_temperature = val; }

void WeatherData::setHumidity(int val) { my_humidity = val; }

void WeatherData::setPressure(int val) { my_pressure = val; }

/// Getters

int WeatherData::getTemperature() const { return my_temperature; }

int WeatherData::getHumidity() const { return my_humidity; }

int WeatherData::getPressure() const { return my_pressure; }

int WeatherData::getNumberOfObservers() const { return my_observers.size(); }

/// Interface methods

void WeatherData::registerObserver(std::shared_ptr<Observer> observerObjPtr) {
    my_observers.insert(observerObjPtr);
}

void WeatherData::removeObserver(std::shared_ptr<Observer> observerObjPtr) {
    if (my_observers.find(observerObjPtr) != my_observers.end()) {
        my_observers.erase(observerObjPtr);
    }
}

void WeatherData::notifyObservers() const {
    for (auto observer : my_observers) {
        observer->update();
    }
}
