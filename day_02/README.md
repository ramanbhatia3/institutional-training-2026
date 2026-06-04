# Day 2 - C Programming Fundamentals

## Topics Covered

### Compilation Process

A C program goes through four major stages before execution:

1. **Preprocessing** – Removes comments and processes header files and macros.
2. **Compilation** – Checks syntax and converts source code into assembly code.
3. **Assembly** – Converts assembly code into machine code.
4. **Linking** – Combines object files and libraries into an executable file.

---

### Memory Organization

When a program runs, memory is divided into different segments:

* **Code Segment** – Stores program instructions.
* **Data Segment** – Stores global and static variables.
* **Heap** – Used for dynamic memory allocation.
* **Stack** – Stores local variables and function calls.

---

### Data Types in C

#### Primitive Data Types

* int
* float
* char
* double
* long
* short

#### Non-Primitive Data Types

* Arrays
* Strings
* Structures
* Queues
* Stacks

---

### Arrays

An array stores multiple values of the same data type in contiguous memory locations.

Example:

```c
int arr[5];
```

---

### Pointers

A pointer is a variable that stores the memory address of another variable.

Example:

```c
int *ptr;
```

Pointers are used for memory management, arrays, and function operations.

---

### Variables and Identifiers

Rules for naming variables:

* Must begin with an alphabet or underscore (_)
* Cannot contain special characters
* Cannot be a keyword
* Are case-sensitive
* Should have meaningful names

Naming conventions:

* Snake Case: `student_name`
* Camel Case: `studentName`

---

### Storage Classes

Storage classes define the scope and lifetime of variables.

* **auto** – Default local variable.
* **register** – Stored in CPU registers when possible.
* **static** – Retains value between function calls.
* **extern** – Refers to global variables defined elsewhere.

---

### Macros

Macros are predefined constants or code fragments created using `#define`.

Example:

```c
#define PI 3.14
```

---

### Functions

Functions are reusable blocks of code designed to perform specific tasks.

Benefits:

* Code reusability
* Better modularity
* Easier maintenance

---
