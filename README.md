# C++ Module 01

This module covers memory allocation, pointers to members, references, and switch statements.

## Exercises

### Exercise 00: BraiiiiiiinnnzzzZ
**Directory:** `ex00/`

Implementation of a Zombie class demonstrating the difference between stack and heap allocation.

**Files:**
- `Zombie.hpp` / `Zombie.cpp`: Zombie class with announce() method
- `newZombie.cpp`: Creates a zombie on the heap
- `randomChump.cpp`: Creates a zombie on the stack
- `main.cpp`: Test program
- `Makefile`

**Compile and run:**
```bash
cd ex00
make
./zombie
```

**Key concepts:**
- Stack allocation: Objects are automatically destroyed when they go out of scope
- Heap allocation: Objects must be manually deleted with `delete`
- Use heap when objects need to outlive their creation scope
- Use stack for temporary objects within a function

---

### Exercise 01: Moar brainz!
**Directory:** `ex01/`

Implementation of a zombie horde using array allocation.

**Files:**
- `Zombie.hpp` / `Zombie.cpp`: Zombie class with default constructor
- `zombieHorde.cpp`: Creates N zombies in a single allocation
- `main.cpp`: Test program
- `Makefile`

**Compile and run:**
```bash
cd ex01
make
./zombie_horde
```

**Key concepts:**
- Array allocation with `new[]`
- Array deallocation with `delete[]`
- Initializing array elements

---

### Exercise 02: HI THIS IS BRAIN
**Directory:** `ex02/`

Simple demonstration of pointers and references.

**Files:**
- `main.cpp`: Program demonstrating pointers and references
- `Makefile`

**Compile and run:**
```bash
cd ex02
make
./brain
```

**Key concepts:**
- Pointers hold memory addresses
- References are aliases to existing variables
- Both manipulate the same memory location

---

### Exercise 03: Unnecessary violence
**Directory:** `ex03/`

Implementation of Weapon, HumanA, and HumanB classes to demonstrate when to use references vs pointers.

**Files:**
- `Weapon.hpp` / `Weapon.cpp`: Weapon class
- `HumanA.hpp` / `HumanA.cpp`: Human with weapon reference (always armed)
- `HumanB.hpp` / `HumanB.cpp`: Human with weapon pointer (may be unarmed)
- `main.cpp`: Test program
- `Makefile`

**Compile and run:**
```bash
cd ex03
make
./violence
```

**Key concepts:**
- Use references when the object must always exist and cannot be NULL
- Use pointers when the object might be NULL or needs to change
- HumanA uses a reference because they're always armed
- HumanB uses a pointer because they might not have a weapon

---

### Exercise 04: Sed is for losers
**Directory:** `ex04/`

A file string replacement program (like sed but in C++).

**Files:**
- `main.cpp`: String replacement program
- `Makefile`
- `test.txt`: Sample test file

**Compile and run:**
```bash
cd ex04
make
./replace test.txt "Hello" "Goodbye"
cat test.txt.replace
```

**Key concepts:**
- File I/O with ifstream and ofstream
- String manipulation without using std::string::replace
- Error handling for file operations

---

### Exercise 05: Harl 2.0
**Directory:** `ex05/`

Implementation of Harl class using pointers to member functions.

**Files:**
- `Harl.hpp` / `Harl.cpp`: Harl class with complain() method
- `main.cpp`: Test program
- `Makefile`

**Compile and run:**
```bash
cd ex05
make
./harl
```

**Key concepts:**
- Pointers to member functions
- Avoiding long if/else chains
- Syntax: `void (ClassName::*functionPtr)(void)`
- Calling: `(object.*functionPtr)()`

---

### Exercise 06: Harl filter
**Directory:** `ex06/`

Extended Harl implementation using switch statement with fallthrough.

**Files:**
- `Harl.hpp` / `Harl.cpp`: Harl class
- `main.cpp`: Filter program using switch statement
- `Makefile`

**Compile and run:**
```bash
cd ex06
make
./harlFilter "WARNING"
./harlFilter "DEBUG"
./harlFilter "invalid"
```

**Key concepts:**
- Switch statement with fallthrough behavior
- Filtering log levels (shows selected level and all above)
- Command-line argument handling

---

## Compilation

All exercises use the following compilation flags:
- `-Wall -Wextra -Werror`: Enable all warnings and treat them as errors
- `-std=c++98`: Use C++98 standard

Each exercise has its own Makefile with standard targets:
- `make`: Compile the program
- `make clean`: Remove object files
- `make fclean`: Remove object files and executable
- `make re`: Recompile everything

---

## Author

42 School Project - C++ Module 01
