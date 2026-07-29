
# 1337 Common Core Project Portfolio

A comprehensive collection of projects from the 42 Network curriculum covering C, algorithms, systems programming, game development, threading, and C++ OOP fundamentals and advanced concepts.

**Author**: shrimech  
**Status**: Levels 01-05 Complete (2024-2026)

## Table of Contents

- [Overview](#overview)
- [Level 00: Shared Resources](#shared-resources)
- [Build & Compilation](#build--compilation)
- [Level 01: Foundations](#level-01-foundations)
- [Level 02: Intermediate](#level-02-intermediate)
- [Level 03: Advanced Systems](#level-03-advanced-systems)
- [Level 04: Expert](#level-04-expert)
- [Level 05: Advanced Network Systems](#level-05-advanced-network-systems)

---
## Shared Resources

### libft - C Standard Library Implementation

Comprehensive C utility library with 40+ standard functions:

**String Functions**: strlen, strchr, strdup, strjoin, strsplit, strtrim, substr, strncmp, strnstr, strrchr

**Memory Functions**: memset, memcpy, memmove, memchr, memcmp, calloc, bzero

**Character Functions**: isalpha, isdigit, isalnum, isascii, isprint, tolower, toupper

**Numerical Functions**: atoi, itoa

**I/O Functions**: putchar_fd, putstr_fd, putendl_fd, putnbr_fd

**Bonus List Operations**: lstnew, lstadd_front, lstadd_back, lstsize, lstlast, lstdelone, lstclear, lstiter, lstmap

**Key Concepts**: Standard library internals, memory manipulation, string processing, data structures

---

## Build & Compilation

### Prerequisites
- **C Compiler**: gcc or clang
- **GNU Make**: Standard build tool
- **Graphics Libraries**: minilibx (for so_long, cube3D)
- **Threading**: POSIX threads library (for Philosophers)
- **C++**: C++98 or later standard

### General Build Instructions

```bash
# Navigate to project directory
cd Level-XX/project_name

# Build the project
make

# Clean object files
make clean

# Full clean (remove executables)
make fclean

# Rebuild from scratch
make re
```

---

## Overview

This repository documents the 42 Common Core curriculum journey with progressive complexity:

- **Level 01**: Core C fundamentals and utility libraries
- **Level 02**: Algorithms, IPC, and 2D graphics
- **Level 03**: Shell implementation and threading
- **Level 04**: C++ OOP and 3D graphics
- **Level 05**: Advanced network systems with IRC server development

---

## Level 01: Foundations

### Born2beRoot - Systems Administration
A comprehensive Debian VM setup guide with security hardening including SSH configuration, password policies (PAM), sudo management, and monitoring scripts with cron.
- Manual partition setup with LVM
- SSH access and privilege management
- Security hardening and firewall setup
- Automated system monitoring

**Key Concepts**: Linux administration, security, virtualization, shell scripting

### ft_printf - Custom Printf Implementation
Custom implementation of printf() supporting all standard format specifiers with variadic argument handling.
- Format specifiers: c, s, p, d, i, u, x, X, %
- Variadic function handling with stdarg.h
- Stream output operations
- Proper memory and type handling

**Key Concepts**: Variadic functions, format parsing, va_list, string operations

### get_next_line - Line Reading Function
Efficient line-by-line file reading utility with configurable buffer size and multiple file descriptor support.
- Configurable buffer size (BUFFER_SIZE macro)
- Multiple file descriptor handling
- Memory-optimized buffering
- EOF and error handling

**Key Concepts**: File I/O, static variables, buffer management, dynamic allocation

---

## Level 02: Intermediate

### minitalk - Inter-Process Communication
Signal-based message transmission system between processes using SIGUSR1/SIGUSR2 with binary encoding.
- Server process listens for client signals
- Bit-by-bit message transmission
- Binary signal encoding
- Bidirectional acknowledgment mechanism

**Key Concepts**: UNIX signals, process management, binary encoding, kill/pause syscalls

### push_swap - Sorting Algorithm
Stack-based sorting implementation with limited instruction set (push, swap, rotate, reverse rotate).
- Radix sort for large datasets (efficient O(n) complexity)
- Simple sort optimization for small sets
- Index-based sorting and stack positioning
- Instruction minimization and optimization

**Key Concepts**: Sorting algorithms, stack/list data structures, complexity analysis, optimization

### so_long - 2D Game Development
Minilibx-based 2D game engine featuring player movement, collision detection, and sprite rendering.
- Player movement and collision detection
- Sprite-based graphics with texture mapping
- Map parsing and level design
- Game state management and events

**Key Concepts**: Graphics programming, game loops, event handling, texture rendering

---

## Level 03: Advanced Systems

### minishell - Shell Implementation
Full bash-like shell interpreter with extensive command support and I/O operations.
- **Command Parsing**: Token generation, quote handling, environment variable expansion using ${}
- **Built-in Commands**: echo (with -n flag), cd, pwd, export, unset, env, exit
- **I/O Redirection**: Input (<), output (>), append (>>), heredoc (<<)
- **Pipe Operations**: Multi-command piping with proper file descriptor management
- **Signal Handling**: CTRL-C (SIGINT), CTRL-D (EOF), CTRL-\ (SIGQUIT)
- **Environment Management**: Variable expansion, modification, tracking

**Files**: src/main.c, src/parsing/, src/exec/, src/builtin/

**Key Concepts**: Shell parsing, process management, file descriptors, signals, readline library

### Philosophers - Threading and Concurrency
Solution to the classic Dining Philosophers Problem demonstrating advanced threading concepts.
- Multi-threaded philosopher management
- Mutex-based resource synchronization
- Deadlock prevention strategies
- State tracking (eating, thinking, sleeping, dead)
- Precise timing and event tracking with gettimeofday()

**Files**: philo.c, philo.h, parcing/, utils/

**Usage**: `./philo <number_of_philosophers> <time_to_die> <time_to_eat> <time_to_sleep> [num_times_each_eats]`

**Key Concepts**: POSIX threads (pthread), mutexes, synchronization primitives, deadlock prevention

---

## Level 04: Expert

### C++ Modules 00-05 - Object-Oriented Programming

**Module 00: Introduction to C++**
- String manipulation and CLI argument processing
- Basic class design with members and methods
- Encapsulation with getters/setters

**Module 01: Memory Management & References**
- Stack vs. heap memory allocation
- Pointers and references (differences and usage)
- Dynamic memory allocation (new/delete operators)
- Member function pointers and their manipulation

**Module 02: Operator Overloading & Fixed-Point Numbers**
- Arithmetic operators: +, -, *, /
- Comparison operators: >, <, >=, <=, ==, !=
- Stream insertion operator (<<) for output
- Fixed-point number representation with 8 fractional bits
- Pre/post increment and decrement operators

**Module 03: Inheritance & Class Hierarchies**
- Single inheritance design
- ClapTrap base class (10 HP, 10 EP, 0 AD)
- ScavTrap derived class (100 HP, 50 EP, 20 AD)
- FragTrap derived class (100 HP, 100 EP, 30 AD)
- Method overriding and polymorphic behavior

**Module 04: Polymorphism & Abstract Classes**
- Virtual functions and polymorphic behavior
- Abstract base classes with pure virtual functions
- Virtual destructors for proper cleanup
- Interface-based design patterns

**Module 05: Exceptions & Advanced Concepts**
- Exception handling with try/catch blocks
- Standard exception types (std::exception)
- Custom exception class design
- RAII principles and resource management

**Key Concepts**: OOP design patterns, inheritance hierarchies, polymorphism, operator overloading, memory management

### Net-practice - Networking Fundamentals
Practical TCP/IP and subnetting exercises covering network configuration.
- **CIDR Notation**: Understanding classless inter-domain routing
- **Subnet Masks**: IPv4 address classification and network sizing
- **IP Addressing**: Public vs. private ranges, host addressing
- **Network Configuration**: Router setup, switch configuration
- **Routing Tables**: Static routing with CIDR routes (0.0.0.0/0)
- **Private IP Ranges**: 10.0.0.0/8, 172.16.0.0/12, 192.168.0.0/16
- **Reserved Ranges**: Loopback 127.0.0.0/8, local 169.254.0.0/16

**10 Progressive Levels**: From basic IP assignment to complex multi-router networking topologies

**Key Concepts**: Subnetting, CIDR calculation, network topology, routing, IP management

### cube3D - 3D Graphics Engine
Raycasting-based 3D graphics engine (Wolfenstein 3D style) with texture mapping and collision detection.
- **Raycasting Engine**: Ray-surface intersection for wall rendering
- **Map Parsing**: .cub configuration file parsing (textures, colors, map)
- **Texture Mapping**: Sprite-based wall and floor rendering
- **3D Rendering**: First-person perspective view with proper scaling
- **Physics**: Player movement, collision detection with walls
- **Graphics Pipeline**: Screen buffering, double-buffering, color management, minimap

**Key Concepts**: Graphics fundamentals, raycasting algorithms, 3D math, game engine architecture, performance optimization

---

## Level 05: Advanced Network Systems

### ft_irc - IRC Server Implementation
A C++98-based Internet Relay Chat server implementing core protocol features over non-blocking sockets and an event-driven networking loop.
- Non-blocking network I/O with a multiplexed server architecture
- User registration flow and command handling for IRC protocol messages
- Channel management features including join, topic, invite, kick, and mode operations
- Private messaging and broadcast communication between clients

**Key Concepts**: Network programming, sockets, event-driven architecture, protocol implementation, concurrent client handling

---

## Level-00

### libft - C Standard Library Implementation

Comprehensive C utility library with 40+ standard functions:

**String Functions**: strlen, strchr, strdup, strjoin, strsplit, strtrim, substr, strncmp, strnstr, strrchr

**Memory Functions**: memset, memcpy, memmove, memchr, memcmp, calloc, bzero

**Character Functions**: isalpha, isdigit, isalnum, isascii, isprint, tolower, toupper

**Numerical Functions**: atoi, itoa

**I/O Functions**: putchar_fd, putstr_fd, putendl_fd, putnbr_fd

**Bonus List Operations**: lstnew, lstadd_front, lstadd_back, lstsize, lstlast, lstdelone, lstclear, lstiter, lstmap

**Key Concepts**: Standard library internals, memory manipulation, string processing, data structures

---

## Build & Compilation

### Prerequisites
- **C Compiler**: gcc or clang
- **GNU Make**: Standard build tool
- **Graphics Libraries**: minilibx (for so_long, cube3D)
- **Threading**: POSIX threads library (for Philosophers)
- **C++**: C++98 or later standard

### General Build Instructions

```bash
# Navigate to project directory
cd Level-XX/project_name

# Build the project
make

# Clean object files
make clean

# Full clean (remove executables)
make fclean

# Rebuild from scratch
make re
