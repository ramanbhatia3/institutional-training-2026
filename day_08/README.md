# Day 8 - Armstrong Numbers, String Functions and 2D Arrays

## Topics Covered

### 1. Armstrong Number

Implemented programs to check whether a number is an Armstrong number or not.

Approaches used:

* Manual power calculation using loops
* Using the `pow()` function from `<math.h>`

Concepts used:

* Digits extraction
* Loops
* Mathematical calculations
* Conditional statements

Example:

```text
Input : 153
Output: Armstrong Number
```

---

### 2. String Basics

Learned how strings are stored and manipulated in C.

Concepts covered:

* Character arrays
* Null terminator (`\0`)
* String initialization
* Mutable strings

Example:

```c
char str[] = "Hello";
```

---

### 3. String Library Functions

Worked with commonly used functions from `<string.h>`.

#### strlen()

Returns the length of a string.

```c
strlen(str);
```

---

#### strcpy()

Copies one string into another.

```c
strcpy(destination, source);
```

---

#### strcat()

Concatenates two strings.

```c
strcat(str1, str2);
```

---

#### strcmp()

Compares two strings.

```c
strcmp(str1, str2);
```

Returns:

* 0 if equal
* Positive value if first string is greater
* Negative value if second string is greater

---

#### strlwr() and strupr()

Used for:

* Converting strings to lowercase
* Converting strings to uppercase

```c
strlwr(str);
strupr(str);
```

---

### 4. Scan Sets

Learned advanced input techniques using scan sets.

#### Reading Specific Characters

```c
scanf("%[ab_c]", str);
```

Reads only specified characters.

---

#### Reading Until Certain Characters

```c
scanf("%[^ab]", str);
```

Reads input until 'a' or 'b' is encountered.

---

### 5. String Memory Concepts

Studied:

* Character arrays
* String literals
* Mutable vs immutable strings
* Buffer overflow concepts

Example:

```c
char str[] = "Hello";
str[1] = 'y';
```

Output:

```text
Hyllo
```

---

### 6. Two-Dimensional Arrays

Introduction to matrices and multidimensional arrays.

Example:

```c
int arr[2][3];
```

Concepts covered:

* Row and column indexing
* Memory representation
* Array initialization techniques
* Pointer behavior with 2D arrays

---

### 7. Pointer Arithmetic in 2D Arrays

Explored:

```c
arr
&arr
arr + 1
arr[0] + 1
```

Learned how addresses change based on row and column sizes.

---

### 8. Matrix Addition

Implemented matrix addition using two-dimensional arrays.

Concepts used:

* Nested loops
* User input
* Matrix traversal
* Element-wise addition

Example:

```text
Matrix A + Matrix B = Matrix C
```

---

### 9. Assessment Test

A revision-based assessment test was conducted to evaluate understanding of previously learned concepts.

Topics revised:

* Data Types
* Operators
* Conditional Statements
* Loops
* Switch Case
* Functions
* Number System Conversions
* Strings
* Arrays
* Pattern Printing

---

## Learning Outcomes

By completing these programs, I learned:

* How Armstrong numbers are calculated and verified.
* Usage of the `pow()` function from `<math.h>`.
* Working with string functions from `<string.h>`.
* String comparison, concatenation, and copying.
* Advanced string input using scan sets.
* Memory concepts related to strings.
* Working with two-dimensional arrays and matrices.
* Matrix addition using nested loops.
* Understanding pointer behavior in multidimensional arrays.
* Strengthening C programming fundamentals through assessment and revision.
