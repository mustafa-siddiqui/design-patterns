/**
 * @file    weather-data.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of a class representing the statistics display.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _STATISTICS_DISPLAY_
#define _STATISTICS_DISPLAY_

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
    StatisticsDisplay() : Observer(), DisplayElement() {
        my_temperature_measurements.reserve(MAX_MEASUREMENTS);
    };

    StatisticsDisplay(StatisticsDisplay const &) = default;
    StatisticsDisplay &operator=(StatisticsDisplay const &) = default;
    ~StatisticsDisplay() override = default;

    /**
     * @brief Add temperature measurement value to list of stored measurements.
     *
     * @param temperatureMeasurement temperature value
     * @return null
     */
    void addMeasurement(int temperatureMeasurement);

    /// Interface methods

    void update() override;

    /**
     * @brief Display the average, min, & max temperature measurements.
     *
     * @param null
     * @return null
     */
    void display() const override;
};

#endif /* _STATISTICS_DISPLAY_ */
