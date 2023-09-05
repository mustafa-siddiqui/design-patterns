/**
 * @file    main.cc
 * @author  Mustafa Siddiqui
 * @brief   Main driver code for a decorator pattern example.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "enums/sandwich-type.h"
#include "sandwich.h"
#include <iostream>

int main(void) {

    SANDWICH chickenSandwich(SandwichType::CHICKEN);
    SANDWICH grilledCheeseSandwich(SandwichType::GRILLED_CHEESE);

    std::cout << chickenSandwich.toString() << std::endl;
    std::cout << grilledCheeseSandwich.toString() << std::endl;

    return 0;
}
