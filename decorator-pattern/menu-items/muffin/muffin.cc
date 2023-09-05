/**
 * @file    muffin.cc
 * @author  Mustafa Siddiqui
 * @brief   Implementation of a class that represents
 * a muffin on the menu.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "muffin.h"
#include "costs.h"
#include "enums/muffin-type.h"
#include <sstream>

Muffin::Muffin(MuffinType const typeOfMuffin)
    : MuffinInterface(), myType(typeOfMuffin) {
    this->myCost = MuffinCosts.at(this->myType);
}

MuffinType Muffin::getType() const { return this->myType; }

double Muffin::getCost() const { return this->myCost; }

/// << operator overload to convert muffin type to a string representation
std::ostream &operator<<(std::ostream &os, MuffinType const &obj) {
    std::string stringRepr;

    switch (obj) {
    case MuffinType::CHOCOLATE:
        stringRepr = "chocolate";
        break;
    case MuffinType::CHOCOLATE_CHIP:
        stringRepr = "chocolate chip";
        break;
    case MuffinType::VANILLA:
        stringRepr = "vanilla";
        break;
    case MuffinType::BLUEBERRY:
        stringRepr = "blueberry";
        break;
    default:
        stringRepr = "unknown";
        break;
    }

    os << stringRepr;

    return os;
}

std::string Muffin::toString() const {
    std::stringstream ss;
    ss << "Muffin: {";
    ss << "type: " << this->getType();
    ss << ", ";
    ss << "cost: $" << this->getCost();
    ss << "}";

    return ss.str();
}
