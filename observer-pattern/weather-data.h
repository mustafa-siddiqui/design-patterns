/**
 * @file    weather-data.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of a class encapsulating weather data.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "interfaces/observable-intf.h"

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

  public:
    /// constructor
    WeatherData(int temperature, int humidity, int pressure);

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

    int getTemperature();
    int getHumidity();
    int getPressure();

    /// Interface methods

    void registerObserver();
    void removeObserver();
    void notifyObservers();
};