/**
 * @file    sandwich.cc
 * @author  Mustafa Siddiqui
 * @brief   Implementation of a class that represents
 * a sandwich on the menu.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "sandwich.h"
#include "costs.h"
#include "enums/sandwich-type.h"
#include <sstream>

Sandwich::Sandwich(SandwichType const typeOfSandwich)
    : SandwichInterface(), myType(typeOfSandwich) {
    this->myCost = SandwichCosts.at(this->myType);
}

SandwichType Sandwich::getSandwichType() const { return this->myType; }

double Sandwich::getCost() const { return this->myCost; }

std::string Sandwich::toString() const {
    std::stringstream ss;
    ss << "Sandwich: {";
    ss << "type: " << this->getSandwichType();
    ss << ", ";
    ss << "cost: $" << this->getCost();
    ss << "}";

    return ss.str();
}
