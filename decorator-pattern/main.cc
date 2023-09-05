/**
 * @file    main.cc
 * @author  Mustafa Siddiqui
 * @brief   Main driver code for a decorator pattern example.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "enums/muffin-type.h"
#include "enums/sandwich-type.h"
#include "menu-items/muffin/muffin.h"
#include "menu-items/sandwich/sandwich.h"
#include <iostream>

int main(void) {

    Sandwich chickenSandwich(SandwichType::CHICKEN);
    Sandwich grilledCheeseSandwich(SandwichType::GRILLED_CHEESE);

    std::cout << chickenSandwich.toString() << std::endl;
    std::cout << grilledCheeseSandwich.toString() << std::endl;

    Muffin chocolateChipMuffin(MuffinType::CHOCOLATE_CHIP);
    Muffin blueberryMuffin(MuffinType::BLUEBERRY);

    std::cout << chocolateChipMuffin.toString() << std::endl;
    std::cout << blueberryMuffin.toString() << std::endl;

    return 0;
}
