/**
 * @file    costs.h
 * @author  Mustafa Siddiqui
 * @brief   Costs of different menu items.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _COSTS_H_
#define _COSTS_H_

#include "enums/sandwich-type.h"
#include <map>

std::map<SandwichType, double> sandwichCosts = {
    {SandwichType::CHICKEN, 10.00},
    {SandwichType::BEEF, 12.50},
    {SandwichType::EGG, 7.50},
    {SandwichType::GRILLED_CHEESE, 8.75}};

#endif /* _COSTS_H_ */
