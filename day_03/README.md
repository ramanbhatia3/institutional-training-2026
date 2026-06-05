# Day 4 - Compilation Process, Storage Classes, Operators and Type Casting

## Topics Covered

### C Program Compilation Process

A C program goes through several stages before execution:

1. **Preprocessing**

   * Handles header files (`#include`)
   * Processes macros (`#define`)
   * Removes comments

2. **Compilation**

   * Converts preprocessed code into assembly code.
   * Checks syntax and semantics.

3. **Assembly**

   * Converts assembly code into machine/object code.

4. **Linking**

   * Combines object files and libraries.
   * Produces the executable file (`.exe`).

### Generated Files

```text
program.c
   ↓
program.i   (Preprocessed Code)
   ↓
program.s   (Assembly Code)
   ↓
program.o   (Object Code)
   ↓
program.exe (Executable File)
```

---

## Memory Layout of a Program

When a program executes, memory is divided into:

### Code Segment

Stores executable instructions.

### Data Segment

Stores global and static variables.

### Heap

Used for dynamic memory allocation.

### Stack

Stores local variables and function calls.

---

## Storage Classes in C

Storage classes determine:

* Scope
* Lifetime
* Visibility
* Storage Location

### Auto

* Default storage class for local variables.
* Stored in stack memory.

### Register

* Requests the compiler to store variable in CPU registers.
* Faster access than normal variables.

### Static

* Retains value between function calls.
* Stored in data segment.
* Lifetime is throughout program execution.

### Extern

* Used to access global variables defined in another file.

---

## Operators in C

### Arithmetic Operators

```c
+
-
*
/
%
```

Used for mathematical calculations.

---

### Increment and Decrement Operators

#### Post Increment

```c
a++
```

Uses current value first and then increments.

#### Pre Increment

```c
++a
```

Increments first and then uses the value.

#### Post Decrement

```c
a--
```

Uses current value first and then decrements.

#### Pre Decrement

```c
--a
```

Decrements first and then uses the value.

---

### Relational Operators

```c
<
>
<=
>=
==
!=
```

Used for comparison operations.

---

### Logical Operators

```c
&&
||
!
```

Used to combine conditions.

---

## Bitwise Operators

Bitwise operators work directly on binary representations.

### AND

```c
&
```

### OR

```c
|
```

### XOR

```c
^
```

### NOT

```c
~
```

### Left Shift

```c
<<
```

Shifts bits to the left.

Equivalent to multiplying by powers of 2.

Example:

```c
5 << 1
```

Result:

```text
10
```

### Right Shift

```c
>>
```

Shifts bits to the right.

Equivalent to dividing by powers of 2.

Example:

```c
20 >> 2
```

Result:

```text
5
```

---

## Binary Number Representation

### MSB (Most Significant Bit)

Leftmost bit in a binary number.

### LSB (Least Significant Bit)

Rightmost bit in a binary number.

---

## Number Prefixes

### Binary

```c
0b1010
```

### Hexadecimal

```c
0x1A
```

Hexadecimal digits:

```text
A = 10
B = 11
C = 12
D = 13
E = 14
F = 15
```

---

## Operator Precedence

Operator precedence determines the order in which operations are performed.

Example:

```c
16 / 8 * 4
```

Evaluation occurs according to precedence and associativity rules.

---

## Associativity

Determines evaluation order when operators have the same precedence.

### Left to Right

Examples:

```c
+
-
*
/
%
```

### Right to Left

Examples:

```c
=
+=
-=
*=
```

---

## Type Casting

### Implicit Type Casting

Automatic conversion performed by the compiler.

Example:

```c
int a = 10;
double b = a;
```

No data loss occurs when converting from smaller to larger data types.

---

### Explicit Type Casting

Manual conversion performed by the programmer.

Example:

```c
float x = 10.5;
int y = (int)x;
```

May cause loss of data.

---

## Input Functions

### getchar()

Reads a single character.

### fgets()

Reads a complete string including spaces safely.

Example:

```c
fgets(str, sizeof(str), stdin);
```

---

## Learning Outcomes

* Understood the complete C compilation pipeline.
* Learned memory organization of a running program.
* Studied storage classes and their usage.
* Practiced arithmetic, logical and relational operators.
* Learned bitwise operators and binary manipulation.
* Understood operator precedence and associativity.
* Learned implicit and explicit type casting.
* Studied character and string input functions.
