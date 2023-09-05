/**
 * @file    sandwich.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of a class that represents
 * a sandwich on the menu.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _SANDWICH_H_
#define _SANDWICH_H_

#include "interfaces/sandwich-intf.h"

class SANDWICH final : public SandwichInterface {
  private:
    SandwichType myType;
    double myCost;

  public:
    explicit SANDWICH(SandwichType const typeOfSandwich);
    SANDWICH() = delete;
    ~SANDWICH() = default;

    SandwichType getType() const override;
    double getCost() const override;
    std::string toString() const override;
};

#endif /* _SANDWICH_H_ */
