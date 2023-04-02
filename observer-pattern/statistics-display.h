/**
 * @file    weather-data.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of a class representing the statistics display.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "interfaces/display-element-intf.h"
#include "interfaces/observer-intf.h"
#include <vector>

/// Constants
const int MAX_MEASUREMENTS = 10;

/**
 * @brief Class representing the statistics display.
 */
class StatisticsDisplay : public Observer, public DisplayElement {
  protected:
    std::vector<int> my_temperature_measurements;

  public:
    /// Constructor
    StatisticsDisplay();

    /**
     * @brief Add temperature measurement value to list of stored measurements.
     *
     * @param temperatureMeasurement temperature value
     * @return null
     */
    void addMeasurement(int temperatureMeasurement);

    /// Interface methods

    void update();

    /**
     * @brief Display the average, min, & max temperature measurements.
     *
     * @param null
     * @return null
     */
    void display();
};
