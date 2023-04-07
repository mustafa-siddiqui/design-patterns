/**
 * @file    weather-data.cc
 * @author  Mustafa Siddiqui
 * @brief   Implementation of the ForecastDisplay class.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "forecast-display.h"
#include "weather-data.h"
#include <iostream>
#include <random>

/// Constants

const int TEMPERATURE_LOW = 2;
const int TEMPERATURE_HIGH = 7;
const int HUMIDITY_LOW = 20;
const int HUMIDITY_HIGH = 40;
const int HUMIDITY_MAX = 100;
const int HUMIDITY_MIN = 0;

/// Helper functions

/**
 * @brief Generate a random integer in a range inclusive of the boundary numbers
 * provided.
 *
 * @param low Low-end range limit number
 * @param high High-end range limit number
 * @return int A random integer >= low and <= high
 */
int _generateRandomIntInRange(int low, int high) {
    std::random_device RD;
    std::mt19937_64 Gen(RD());
    std::uniform_int_distribution<> distr(low, high);

    return distr(Gen);
}

/**
 * @brief Generate random fluctuation value to add on to current weather data
 * readings. Fluctuates between positive and negative values to give somewhat
 * of an original feel.
 *
 * @param low Low-end range limit for fluctuation value
 * @param high High-end range limit for fluctuation value
 * @return int A random fluctuation value
 */
int _generateRandomFluctuation(int low, int high) {
    static const int multipliers[] = {-1, 1};

    int fluctuation = _generateRandomIntInRange(low, high);
    int multiplier_index = _generateRandomIntInRange(0, 1);

    return fluctuation * multipliers[multiplier_index];
}

/**
 * @brief Get randomly generated temperature forecast based on current
 * temperature.
 *
 * @param current_temperature Current temperature value
 * @return int Temperature forecast
 */
int _getRandomTemperatureForecast(int current_temperature) {
    return current_temperature +
           _generateRandomFluctuation(TEMPERATURE_LOW, TEMPERATURE_HIGH);
}

/**
 * @brief Get randomly generated humidity forecast based on current humidity
 * level. Capped at max and low specified levels.
 *
 * @param current_humidity Current humidity level
 * @return int Humidity forecast
 */
int _getRandomHumidityForecast(int current_humidity) {
    int humidity_forecast = current_humidity + _generateRandomFluctuation(
                                                   HUMIDITY_LOW, HUMIDITY_HIGH);

    // cap/raise humidity level
    if (humidity_forecast > HUMIDITY_MAX) {
        return HUMIDITY_MAX;
    } else if (humidity_forecast <= HUMIDITY_MIN) {
        // don't want humidity to be 0
        return HUMIDITY_MIN + 1;
    }

    return humidity_forecast;
}

/// Interface methods

void ForecastDisplay::update() {
    my_current_temperature = weatherData->getTemperature();
    my_current_humidity = weatherData->getHumidity();
}

void ForecastDisplay::display() const {
    std::cout << "--- Weather Forecast ---" << std::endl
              << "Current Temperature: " << my_current_temperature << " ºF, "
              << "Next Day Forecast: "
              << _getRandomTemperatureForecast(my_current_temperature) << " ºF"
              << std::endl
              << "Current humidity: " << my_current_humidity << "%, "
              << "Next Day Forecast: "
              << _getRandomHumidityForecast(my_current_humidity) << "%"
              << std::endl
              << "------------------------" << std::endl;
}
