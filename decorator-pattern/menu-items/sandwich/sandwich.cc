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

SandwichType Sandwich::getType() const { return this->myType; }

double Sandwich::getCost() const { return this->myCost; }

/// << operator overload to convert sandwich type to a string representation
std::ostream &operator<<(std::ostream &os, SandwichType const &obj) {
    std::string stringRepr;

    switch (obj) {
    case SandwichType::CHICKEN:
        stringRepr = "chicken";
        break;
    case SandwichType::BEEF:
        stringRepr = "beef";
        break;
    case SandwichType::GRILLED_CHEESE:
        stringRepr = "grilled cheese";
        break;
    case SandwichType::EGG:
        stringRepr = "egg";
        break;
    default:
        stringRepr = "unknown";
        break;
    }

    os << stringRepr;

    return os;
}

std::string Sandwich::toString() const {
    std::stringstream ss;
    ss << "Sandwich: {";
    ss << "type: " << this->getType();
    ss << ", ";
    ss << "cost: $" << this->getCost();
    ss << "}";

    return ss.str();
}
