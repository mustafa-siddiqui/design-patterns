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

#include "enums/condiment-type.h"
#include "enums/muffin-type.h"
#include "enums/sandwich-type.h"
#include <map>

// clang-format off

/// Costs for Sandwich Types
const std::map<SandwichType, double> SandwichCosts = {
    {SandwichType::CHICKEN, 10.00},
    {SandwichType::BEEF, 12.50},
    {SandwichType::EGG, 7.50},
    {SandwichType::GRILLED_CHEESE, 8.75}};

/// Costs for Muffin Types
const std::map<MuffinType, double> MuffinCosts = {
    {MuffinType::CHOCOLATE, 3.00},
    {MuffinType::CHOCOLATE_CHIP, 3.50},
    {MuffinType::VANILLA, 3.00},
    {MuffinType::BLUEBERRY, 3.50}};

/// Costs for Condiment Types
const std::map<CondimentType, double> CondimentCosts = {
    {CondimentType::KETCHUP, 0.50},
    {CondimentType::MAYO, 0.50},
    {CondimentType::BBQ_SAUCE, 0.75}};

// clang-format on

#endif /* _COSTS_H_ */
