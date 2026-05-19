# C++ Modules — 42 Network Curriculum

A comprehensive collection of C++ exercises and projects from the 42 Network curriculum, progressing from fundamental programming concepts to advanced object-oriented design patterns. This repository demonstrates mastery of C++ fundamentals, memory management, inheritance hierarchies, polymorphism, and exception handling.

**Status**: ✅ Modules 00-05 Complete

---

## 📚 Module Overview

### Module 00: Introduction to C++ & Basic I/O
Introduction to C++ fundamentals, basic input/output operations, and the standard library.

| Exercise | Topic | Key Concepts |
|----------|-------|--------------|
| **ex00** | Megaphone | String manipulation, CLI arguments, character conversion |
| **ex01** | PhoneBook | Classes, encapsulation, arrays, getters/setters, basic data structures |

**Key Files**: `megaphone.cpp`, `PhoneBook.cpp`, `phonebook.hpp`, `SetGet.cpp`

---

### Module 01: Memory Management & References
Understanding dynamic memory allocation, pointers, references, and the differences between stack and heap.

| Exercise | Topic | Key Concepts |
|----------|-------|--------------|
| **ex00** | Zombie Stack | Stack allocation, basic class design |
| **ex01** | Zombie Horde | Dynamic allocation (`new`/`delete`), arrays on heap |
| **ex03** | Weapon Classes | References vs. pointers, composition patterns |
| **ex05** | Harl Filter | Function pointers, member function pointers, polymorphism without inheritance |

**Key Concepts**:
- `new` and `delete` operators
- Stack vs. heap lifetime management
- References are non-null and non-reassignable
- Pointers can be null and reassigned
- Member function pointer syntax: `void (Class::*ptr)(void)`

**Key Files**: `Zombie.hpp`, `Zombie.cpp`, `HumanA.hpp`, `HumanB.hpp`, `Weapon.hpp`, `Harl.hpp`

---

### Module 02: Operator Overloading & Fixed-Point Numbers
Implementing custom operators for user-defined types and working with fixed-point number representation (8 fractional bits).

| Exercise | Topic | Key Concepts |
|----------|-------|--------------|
| **ex00** | Canonical Form | Default/copy constructors, assignment operator, destructor |
| **ex01** | Type Conversion | Type casting, stream insertion operator (`<<`) |
| **ex02** | Full Operators | Arithmetic, comparison, increment/decrement operators, static methods |

**Operators Implemented**:
- **Arithmetic**: `+`, `-`, `*`, `/`
- **Comparison**: `>`, `<`, `>=`, `<=`, `==`, `!=`
- **Increment/Decrement**: pre/post `++`, pre/post `--`
- **Stream**: `<<` for output

**Key Concepts**:
- Canonical form (default constructor, copy constructor, assignment operator, destructor)
- Fixed-point to float/int conversion
- Const correctness in operators
- Pre vs. post increment semantics
- Static min/max methods

**Key Files**: `Fixed.hpp`, `Fixed.cpp`

---

### Module 03: Inheritance & Class Hierarchies
Understanding public inheritance, method overriding, and building inheritance hierarchies.

| Exercise | Topic | Key Concepts |
|----------|-------|--------------|
| **ex00** | Base Class | `ClapTrap` with basic attributes (HP, EP, AD) |
| **ex01** | First Derived | `ScavTrap` inherits from `ClapTrap`, gate keeper mode |
| **ex02** | Multiple Derived | `FragTrap` with high-fives, multiple inheritance hierarchy |

**Class Hierarchy**:
```
ClapTrap (base)
├── ScavTrap
└── FragTrap
```

**Key Attributes**:
- `ClapTrap`: 10 HP, 10 EP, 0 AD
- `ScavTrap`: 100 HP, 50 EP, 20 AD
- `FragTrap`: 100 HP, 100 EP, 30 AD

**Key Methods**: `attack()`, `takeDamage()`, `beRepaired()`

**Key Files**: `ClapTrap.hpp/.cpp`, `ScavTrap.hpp/.cpp`, `FragTrap.hpp/.cpp`

---

### Module 04: Polymorphism & Abstract Classes
Virtual functions, polymorphic behavior, abstract classes, and the importance of virtual destructors.

| Exercise | Topic | Key Concepts |
|----------|-------|--------------|
| **ex00** | Virtual Functions | `Animal` base class, `Dog`/`Cat` derived, `WrongAnimal` (anti-pattern) |
| **ex01** | Composition & Deep Copy | `Brain` class, deep copying, proper resource management |
| **ex02** | Same Patterns | Reinforces ex01 concepts with abstract base classes |

**Class Hierarchy**:
```
Animal (virtual functions)
├── Dog
├── Cat
└── WrongAnimal (no virtual - anti-pattern)
    └── WrongCat
```

**Key Concepts**:
- **Virtual Functions**: Enable runtime polymorphism through base class pointers/references
- **Virtual Destructors**: Prevent memory leaks in inheritance hierarchies
- **Composition**: `Dog` and `Cat` contain `Brain` objects (has-a relationship)
- **Deep Copy**: Proper copying of composed objects
- **Polymorphic Behavior**: Same method call, different runtime behavior

**Key Methods**: `makeSound()`, `getIdea()`, `addIdea()`

**Key Files**: `Animal.hpp/.cpp`, `Dog.hpp/.cpp`, `Cat.hpp/.cpp`, `Brain.hpp/.cpp`, `WrongAnimal.hpp/.cpp`

---

### Module 05: Exception Handling & Advanced Design Patterns
Custom exceptions, form validation, abstract classes, and the factory pattern.

| Exercise | Topic | Key Concepts |
|----------|-------|--------------|
| **ex00** | Custom Exceptions | `Bureaucrat` class with grade validation and custom exceptions |
| **ex01** | Form Signing | `Form` class with authorization levels and exception-based validation |
| **ex02** | Abstract Forms | Three form types with different execution behavior |
| **ex03** | Factory Pattern | `Intern` creates forms based on string identifiers |

**Exception Hierarchy**:
```
std::exception
├── Bureaucrat::GradeTooHighException
├── Bureaucrat::GradeTooLowException
├── Form::GradeTooHighException
├── Form::GradeTooLowException
└── AForm (abstract base)
    ├── PresidentialPardonForm
    ├── RobotomyRequestForm
    └── ShrubberyCreationForm
```

**Key Concepts**:
- **Custom Exceptions**: Inherit from `std::exception`, implement `what()`
- **Exception Handling**: Try-catch blocks for error handling
- **Abstract Base Classes**: Pure virtual functions (`= 0`)
- **Form Validation**: Business logic enforced through exceptions
- **Factory Pattern**: `Intern::makeForm()` creates appropriate form types
- **File I/O**: Writing ASCII art to files
- **Random Generation**: 50/50 robotomy success rate

**Key Methods**:
- `Bureaucrat`: `incrementGrade()`, `decrementGrade()`
- `Form`: `beSigned()`, `execute()`
- `Intern`: `makeForm()`

**Key Files**: `Bureaucrat.hpp/.cpp`, `AForm.hpp/.cpp`, `PresidentialPardonForm.*`, `RobotomyRequestForm.*`, `ShrubberyCreationForm.*`, `Intern.hpp/.cpp`

---

## 🎯 Key C++ Concepts Covered

| Concept | Module | Exercise | Details |
|---------|--------|----------|---------|
| Classes & Objects | 00 | ex01 | Basic OOP design |
| Memory Management | 01 | ex00-01 | `new`/`delete`, stack vs. heap |
| Pointers & References | 01 | ex03 | Differences, usage patterns |
| Function Pointers | 01 | ex05 | Member function pointers |
| Operator Overloading | 02 | ex00-02 | Custom operators for user types |
| Fixed-Point Arithmetic | 02 | ex00-02 | Bit manipulation, type conversion |
| Inheritance | 03 | ex00-02 | Public inheritance, hierarchies |
| Virtual Functions | 04 | ex00-02 | Runtime polymorphism |
| Composition | 04 | ex01-02 | Has-a relationships |
| Exception Handling | 05 | ex00-03 | Custom exceptions, try-catch |
| Abstract Classes | 05 | ex02-03 | Pure virtual functions |
| Factory Pattern | 05 | ex03 | Object creation patterns |

---

## 🛠️ Build & Run

### Prerequisites
- Linux or macOS
- `g++` (GNU C++ compiler)
- `make`

**Install on Debian/Ubuntu**:
```bash
sudo apt update
sudo apt install build-essential
```

### Compilation
Each exercise contains a `Makefile` for compilation:

```bash
cd cpp-moduleXX/exYY
make                    # Build
./program_name          # Run executable
make clean              # Remove object files
make fclean             # Remove binaries and objects
```

**Example**:
```bash
cd cpp-module00/ex00
make
./megaphone "hello world"
make fclean
```

### Find Executable Name
After building, list files to find the executable:
```bash
ls -1 | grep -v '\.'
```

---

## 📁 Repository Structure

```
cpp-github/
├── cpp-module00/           # Basic C++ & I/O
│   ├── ex00/              # Megaphone
│   └── ex01/              # PhoneBook
├── cpp-module01/          # Memory & References
│   ├── ex00/              # Zombie Stack
│   ├── ex01/              # Zombie Horde
│   ├── ex03/              # Weapons (References vs Pointers)
│   └── ex05/              # Harl (Function Pointers)
├── cpp-module02/          # Operators & Fixed-Point
│   ├── ex00/              # Canonical Form
│   ├── ex01/              # Type Conversion
│   └── ex02/              # Full Operators
├── cpp-module03/          # Inheritance
│   ├── ex00/              # ClapTrap Base
│   ├── ex01/              # ScavTrap
│   └── ex02/              # FragTrap
├── cpp-module04/          # Polymorphism
│   ├── ex00/              # Virtual Functions
│   ├── ex01/              # Brain & Deep Copy
│   └── ex02/              # Abstract Classes
├── cpp-module05/          # Exceptions & Patterns
│   ├── ex00/              # Custom Exceptions
│   ├── ex01/              # Form Signing
│   ├── ex02/              # Abstract Forms
│   └── ex03/              # Factory Pattern
└── README.md              # This file
```

---

## 💡 Learning Objectives

By working through these modules, you'll master:

✅ **C++ Fundamentals**
- Syntax and semantics
- Basic I/O operations
- Standard library usage

✅ **Object-Oriented Programming**
- Class design and encapsulation
- Inheritance hierarchies
- Polymorphism and virtual functions
- Composition patterns

✅ **Memory Management**
- Stack vs. heap allocation
- Smart memory handling
- Avoiding memory leaks
- RAII principles

✅ **Advanced C++ Features**
- Operator overloading
- Function pointers
- Exception handling
- Abstract base classes
- Design patterns (Factory)

✅ **Professional Development**
- Code organization
- Resource management
- Error handling
- Design patterns
- Const correctness

---

## 📝 Coding Standards

This repository follows 42 Network standards:

- Clear, readable code
- Proper resource ownership and management
- Canonical form for all classes
- Const correctness
- RAII principles
- No memory leaks
- Proper exception handling

---

## 🤝 Contributing

This repository represents solutions to curriculum exercises. Issues and pull requests are welcome but should be motivated by:
- Bug fixes with clear explanation
- Performance improvements
- Code clarity enhancements
- Documentation improvements

---

## 📄 License

This project is part of the 42 Network curriculum. Personal solutions for educational purposes.

---

## 👤 Author

Created as part of the 42 Network C++ curriculum.

**Last Updated**: February 2026

---

## 🚀 Quick Start

Get started with the first module:

```bash
cd cpp-module00/ex01
make
./phonebook
```

Then explore the other modules in sequence to build your C++ expertise progressively!

