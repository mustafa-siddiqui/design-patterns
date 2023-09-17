/**
 * @file    condiment.cc
 * @author  Mustafa Siddiqui
 * @brief   Implementation of a class to represent different types
 * of condiments on the menu for sandwiches. This class is a
 * decorator for the sandwich class.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "condiment.h"
#include "costs.h"
#include "enums/condiment-type.h"
#include "enums/sandwich-type.h"
#include <sstream>

Condiment::Condiment(CondimentType typeOfCondiment,
                     std::shared_ptr<SandwichInterface> sandwichToDecorate)
    : SandwichInterface(), mySandwich(sandwichToDecorate),
      myType(typeOfCondiment) {
    assert(this->mySandwich != nullptr);
    this->myCost = CondimentCosts.at(this->myType);
}

double Condiment::getCost() const {
    return this->myCost + this->mySandwich->getCost();
}

SandwichType Condiment::getSandwichType() const {
    return this->mySandwich->getSandwichType();
}

CondimentType Condiment::getCondimentType() const { return this->myType; }

std::string Condiment::toString() const {
    std::stringstream ss;
    ss << "Sandwich: {";
    ss << "type: " << this->getSandwichType();
    ss << ", ";
    ss << "condiment: " << this->getCondimentType();
    ss << ", ";
    ss << "cost: $" << this->getCost();
    ss << "}";

    return ss.str();
}
