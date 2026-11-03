# Enchanted Pet Sanctuary Management System

**Object Oriented Programming Mini Project (C++)**

**Student:** Himanshu  
**UID:** 25bcd10297  
**Academic Year:** 2025-26

---

## About the Project

This is a menu-driven console application that demonstrates the four pillars of Object-Oriented Programming using C++:

- **Encapsulation**
- **Inheritance**
- **Polymorphism** (runtime)
- **Abstraction**

The system manages three magical pets in a fantasy sanctuary:

| Pet       | Name                | Unique Magic              |
|-----------|---------------------|---------------------------|
| Dragon    | Ignis the Dragon    | Breathes a massive Fireball |
| Phoenix   | Aurelia the Phoenix | Bursts into flames & is Reborn |
| Unicorn   | Luna the Unicorn    | Creates a Rainbow Shield  |

---

## Features

- Select any of the three pets
- Feed the pet (increases energy)
- Play with the pet (decreases energy, improves mood)
- Use Magical Power (polymorphic behavior)
- View current Status (Energy + Mood)
- Proper error handling when no pet is selected

---

## How to Compile & Run

### Requirements
- Any C++11 compatible compiler (`g++`, Clang, MSVC)

### Linux / macOS / Windows (MinGW)
```bash
g++ enchanted_pets.cpp -o sanctuary
./sanctuary          # Linux / macOS
sanctuary.exe        # Windows
```

---

## OOP Concepts Demonstrated

| Concept            | How it is used                                      |
|--------------------|-----------------------------------------------------|
| Class & Object     | `Pet`, `Dragon`, `Phoenix`, `Unicorn`               |
| Encapsulation      | Protected data members + public methods             |
| Inheritance        | `Dragon`, `Phoenix`, `Unicorn` inherit from `Pet`   |
| Polymorphism       | `useMagic()` called via base class pointer          |
| Abstraction        | Abstract base class with pure virtual function      |
| Virtual Destructor | `virtual ~Pet()` for safe cleanup                   |

---

## Project Structure

```
enchanted_pet_sanctuary/
├── enchanted_pets.cpp   # Complete source code
└── README.md            # This file
```

---

## Author

**Himanshu**  
UID: 25bcd10297
