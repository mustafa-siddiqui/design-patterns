# Design Patterns

Learning design patterns as I read [Head First Design Patterns](https://www.oreilly.com/library/view/head-first-design/9781492077992/).

### Notes

---

Suggested Reading:

- Design Patterns (Chapter 2)

<!--
Instructor email: jim@jimwatsonconsulting.com
-->

---

4 Mother of all Patterns

- Factory
- Command
- State (Proxy)
- Visitor

---

Main Things About Design

- Done by vs done on vs done to
- If conditions are the go-to of OOP
- Every problem is solved by yet another level of indirection
- Search for `new` or where the objects are being instantiated
- Nouns are ‘cute’ but verbs are where it’s at
- Separate policy and mechanism (mechanism: this class is usually more capable than what the requirements allow)
- For every domain object, write a visitor interface and one liner `accept()` LOL
- Break code violently, not silently
- Inheritance is not the mechanism for reuse

---

## Design Patterns

- Command
    - Separating the ‘when’ from the ‘what/how’ to allow for ‘say what’, ‘oops’, and ‘do-over’
    - Done-to
- Composite
    - Bring a part to the whole
    - Compound: relationship happens underneath, composite: relationship happens up top
    - Goal: whole and part treated as the same
- Compound
    - Kind of the same as Composite but a 1-1 relationship
- Visitor
    - Methods go in the domain object hierarchy
    - Operations are handled differently
        - A distinct class is designed for each operation
        - Each operation class has a function for each domain concrete-class
        - Above gives us each combination of operation ***x*** domain-concrete class
    - Visitors can have state
        - Some are transient
        - Some need to maintain/build state and be interrogated for their result
- Factory
    - Part of the creational patterns
    - Can be said to be a category of patterns
        - Specific Patterns
            - Singleton
            - Registry Factory
            - Prototype (dictionary of zombie objects with a `clone()` method — if-over-instantiation e.g. if type==”color”: return new Circle(); etc.)
            - Abstract Factory
            - Factory method
            - Builder
- Proxy
    - Sort of like a buffer before accessing an object
    - Makes a decision as to which object or method to call depending on some policy/input  data
    - The proxy object needs to conform to the same interface as the real object(s)
- Chain of Responsibility
    - Do things in a specified order basically
- Observer
    - Notify some observers of some change and let them handle it

---

### 7 Design Principles

- Abstractions as Organization
- Inversion of Control / Dependency Inversion (dependency injection)
- Interface Segregation
- Single Responsibility
- Open-Closed (open to extension but closed for modification)
- Separation of Concerns / Cross-Cutting Concerns
- Substitutability

---

Evil “ifs” – The “go-tos” of OO:

- if-over-type → Polymorphism
- if-over-type-code → Class instead of code
- if-over-mode → State Pattern
- if-over-error-code → Exceptions
- if-over-pre-condition → Contracts
- if-over-algorithm-segment → Many Patterns
- if-over-collection → Collection Object

---

### Best Practices

- No Big Design Upfront (BDUF)
    - BDUF leads to over-design in some places and under-design in the places that didn’t appear to be important, but turn out to be later
    - View design as an iterative process rather than an event
- Avoid ‘Architect Hubris’ (if only we built a big framework, the rest would be easy)
    - Frameworks can empower to lock in
    - Think of making a bad framework choice
    - Frameworks are hard — they completely invert the coding model and focus on the general case, not special cases (which are typically in applications)
- Explicitly Identify and Design ‘Hinge Points’
    - No BDUF + No Architect Hubris != No Design
    - Design around key hinge points and abstractions
    - Be willing to challenge decisions
        - too many hinge points, too few hinge points
- Accept Constraints
- Use Abstractions to Decompose Problem and Organize Solution
- Do One Thing (no schizoid) i.e. Separate Concerns i.e. Single Responsibility
- Separate Policy and Mechanism
- Segregate Interfaces (Consider Specific Client)
    - Relates to one of the oldest, best design adages:
        - Write the calling code (the client) before the implementation
        - Validates interfaces
- Focus on Substitutability (both syntactically and semantically)
- Use Composition vs Interface for Re-use
- YAGNI (you ain’t gonna need it), KISS (keep it simple stupid), and DRY (don’t repeat yourself)
- Validate, Re-validate, and Re-Validate Abstractions
- It’s a Process, not an Event or Phase

---

### Notes

- Visitor pattern → done on vs done by (an object)
- Command pattern → done to (an object)
- Proxy pattern is the structural equivalent of the decorator pattern (behavioral)
- Breaking Contracts
    - Break violently, not silently
- Substitutability
    - Variance
        - Covariance: substituting narrower for wider
        - Contravariance: substituting wider for narrower
    - Breaking Substitutability: break violently, not silently
- Aspect Oriented Programming (AOP)
    - Code generation of proxies
    - Have some config file which mentions code to be added on (like logging (passive), `takeLock()` etc. (active)) to the main code
    - Addresses cross-cutting concerns
- Visitor and Strategy are usually opposites / inverses in terms of tradeoffs
    - Effort required when adding more domain objects vs the utilities (e.g. display writer, or file writer)


