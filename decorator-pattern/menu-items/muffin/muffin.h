/**
 * @file    muffin.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of a class that represents
 * a muffin on the menu.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _MUFFIN_H_
#define _MUFFIN_H_

#include "interfaces/muffin-intf.h"

class Muffin : public MuffinInterface {
  private:
    MuffinType myType;
    double myCost;

  public:
    explicit Muffin(MuffinType const typeOfMuffin);
    Muffin() = delete;
    ~Muffin() = default;

    MuffinType getType() const override;
    double getCost() const override;
    std::string toString() const override;
};

#endif /* _MUFFIN_H_ */
