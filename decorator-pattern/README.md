
# Decorator Pattern

An example implementation of the decorator pattern in `C++`.

### Notes

- A decorator/wrapper implements the same interface that the object it is wrapping implements.
- Used to add additional behavior to classes at *runtime*.

### Output

In the code, `Condiment` is a decorator for an object which inherits from the `SandwichInterface` 
class. The decorator class inherits from `SandwichInterface` and stores a pointer to the decorated 
object as well.

Here's the code output of `main()`:
```bash
Sandwich: {type: chicken, cost: $10}
Sandwich: {type: grilled cheese, cost: $8.75}
Muffin: {type: chocolate chip, cost: $3.5}
Muffin: {type: blueberry, cost: $3.5}
Sandwich: {type: chicken, condiment: bbq sauce, cost: $10.75}
Sandwich: {type: grilled cheese, condiment: ketchup, cost: $9.25}
=== Summary ===
Sandwich: {type: chicken, cost: $10}
Sandwich: {type: grilled cheese, cost: $8.75}
Sandwich: {type: chicken, condiment: bbq sauce, cost: $10.75}
Sandwich: {type: grilled cheese, condiment: ketchup, cost: $9.25}
=== Total ===
Number of Sandwiches: 4
Cost: $38.75
=== All Items ===
Sandwich: {type: chicken, cost: $10}
Sandwich: {type: grilled cheese, cost: $8.75}
Sandwich: {type: chicken, condiment: bbq sauce, cost: $10.75}
Sandwich: {type: grilled cheese, condiment: ketchup, cost: $9.25}
Muffin: {type: blueberry, cost: $3.5}
Muffin: {type: chocolate chip, cost: $3.5}
```
