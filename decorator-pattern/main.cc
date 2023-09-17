/**
 * @file    main.cc
 * @author  Mustafa Siddiqui
 * @brief   Main driver code for a decorator pattern example.
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "enums/condiment-type.h"
#include "enums/muffin-type.h"
#include "enums/sandwich-type.h"
#include "menu-items/condiments/condiment.h"
#include "menu-items/muffin/muffin.h"
#include "menu-items/sandwich/sandwich.h"
#include <iostream>
#include <memory>
#include <vector>

int main(void) {

    Sandwich chickenSandwich(SandwichType::CHICKEN);
    Sandwich grilledCheeseSandwich(SandwichType::GRILLED_CHEESE);

    std::cout << chickenSandwich.toString() << std::endl;
    std::cout << grilledCheeseSandwich.toString() << std::endl;

    Muffin chocolateChipMuffin(MuffinType::CHOCOLATE_CHIP);
    Muffin blueberryMuffin(MuffinType::BLUEBERRY);

    std::cout << chocolateChipMuffin.toString() << std::endl;
    std::cout << blueberryMuffin.toString() << std::endl;

    // Decorate sandwich with condiment
    auto chickenSandwichWithBbqSauce = std::make_shared<Condiment>(
        CondimentType::BBQ_SAUCE, std::make_shared<Sandwich>(chickenSandwich));

    std::cout << chickenSandwichWithBbqSauce->toString() << std::endl;

    auto grilledCheeseSandwichWithKetchup = std::make_shared<Condiment>(
        CondimentType::KETCHUP,
        std::make_shared<Sandwich>(grilledCheeseSandwich));

    std::cout << grilledCheeseSandwichWithKetchup->toString() << std::endl;

    // Store all sandwiches
    std::vector<std::shared_ptr<SandwichInterface>> sandwiches = {
        std::make_shared<Sandwich>(chickenSandwich),
        std::make_shared<Sandwich>(grilledCheeseSandwich),
        chickenSandwichWithBbqSauce, grilledCheeseSandwichWithKetchup};

    // Print all sandwiches
    std::cout << "=== Summary ===" << std::endl;
    for (auto sandwich : sandwiches) {
        std::cout << sandwich->toString() << std::endl;
    }

    // Print total cost
    std::cout << "=== Total ===" << std::endl;
    double cost = 0.0;
    for (auto sandwich : sandwiches) {
        cost += sandwich->getCost();
    }
    std::cout << "Number of Sandwiches: " << sandwiches.size() << std::endl;
    std::cout << "Cost: $" << cost << std::endl;

    return 0;
}
