/**
 * @file    condiment.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of a class to represent different types
 * of condiments on the menu for sandwiches. This class is a
 * decorator for the sandwich class.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _CONDIMENTS_H_
#define _CONDIMENTS_H_

#include "interfaces/sandwich-intf.h"
#include <cstdint>
#include <memory>

/// Forward declares
enum class CondimentType : uint8_t;

class Condiment : public SandwichInterface {
  private:
    std::shared_ptr<SandwichInterface> mySandwich;
    CondimentType myType;
    double myCost;

  public:
    explicit Condiment(CondimentType typeOfCondiment,
                       std::shared_ptr<SandwichInterface> sandwichToDecorate);
    Condiment() = delete;
    ~Condiment() = default;

    double getCost() const override;
    SandwichType getSandwichType() const override;
    std::string toString() const override;

    CondimentType getCondimentType() const;
};

#endif /* _CONDIMENTS_H_ */
