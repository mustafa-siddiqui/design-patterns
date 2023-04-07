/**
 * @file    weather-data.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of a class encapsulating weather data.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _WEATHER_DATA_
#define _WEATHER_DATA_

#include "interfaces/observable-intf.h"
#include <set>

/// Forward declares
class Observer;

/**
 * @brief Holds most recent weather data obtained from any external source like
 * sensors, third-party websites etc.
 *
 */
class WeatherData : public Observable {
  protected:
    int my_temperature;
    int my_humidity;
    int my_pressure;
    std::set<std::shared_ptr<Observer>> my_observers;

  public:
    /// constructor
    explicit WeatherData(int temperature, int humidity, int pressure)
        : Observable(), my_temperature(temperature), my_humidity(humidity),
          my_pressure(pressure){};

    WeatherData(WeatherData const &) = default;
    WeatherData &operator=(WeatherData const &) = default;
    ~WeatherData() override = default;

    /**
     * @brief This method is called whenever this object receives updated
     * measurements. Where it is called is not a concern to this object.
     *
     * @param null
     * @return null
     */
    void measurementsChanged();

    /**
     * @brief Set weather variable measurements.
     *
     * @param temperature
     * @param humidity
     * @param pressure
     */
    void setMeasurements(int temperature, int humidity, int pressure);

    /// Setters

    void setTemperature(int val);
    void setHumidity(int val);
    void setPressure(int val);

    /// Getters

    int getTemperature() const;
    int getHumidity() const;
    int getPressure() const;
    int getNumberOfObservers() const;

    /// Interface methods

    void registerObserver(std::shared_ptr<Observer> observerObjPtr) override;
    void removeObserver(std::shared_ptr<Observer> observerObjPtr) override;
    void notifyObservers() const override;
};

#endif /* _WEATHER_DATA */
