# Day 7 - Number System Conversions and String Handling in C

This repository contains the C programs I practiced on Day 7 of my Institutional Training 2026. The focus of this session was on understanding number system conversions, Roman numeral conversions, and different methods of taking string input in C.

## Topics Covered

### 1. Decimal to Binary Conversion

Implemented a program to convert a decimal number into its binary representation.

Concepts used:

* Division by 2
* Remainder storage
* Loops
* Arrays

Example:

```text
Decimal: 10
Binary : 1010
```

---

### 2. Binary to Decimal Conversion

Implemented a program to convert a binary number into its decimal equivalent.

Concepts used:

* Powers of 2
* Mathematical calculations
* Loops

Example:

```text
Binary : 1010
Decimal: 10
```

---

### 3. Roman to Decimal Conversion

Implemented a program to convert Roman numerals into decimal numbers.

Concepts used:

* Character handling
* Switch statements
* Roman numeral rules

Example:

```text
Roman  : XIV
Decimal: 14
```

---

### 4. Decimal to Roman Conversion

Implemented a program to convert decimal numbers into Roman numerals.

Concepts used:

* Conditional statements
* Number decomposition
* Roman numeral mapping

Example:

```text
Decimal: 14
Roman  : XIV
```

---

### 5. String Input Methods in C

Learned different ways to take string input from the user.

#### scanf()

Used to read a single word as input.

Example:

```c
char name[50];
scanf("%s", name);
```

Limitation:

* Stops reading when a space is encountered.

Input:

```text
Ramandeep Bhatia
```

Output:

```text
Ramandeep
```

---

#### gets() (Deprecated)

Previously used to read complete lines including spaces.

Example:

```c
gets(name);
```

Note:

* Removed from the C11 standard.
* Unsafe because it can cause buffer overflow.

---

#### fgets()

Recommended method for reading strings safely.

Syntax:

```c
fgets(variable_name, sizeof(variable_name), stdin);
```

Example:

```c
char name[50];
fgets(name, sizeof(name), stdin);
```

Advantages:

* Reads spaces.
* Prevents buffer overflow.
* Safer than gets().

---

#### Scan Set (`%[^\n]`)

Used to read an entire line until a newline character is encountered.

Example:

```c
char name[100];
scanf("%[^\n]", name);
```

Input:

```text
Ramandeep Bhatia
```

Output:

```text
Ramandeep Bhatia
```

Useful for:

* Reading full names
* Sentences
* Multi-word strings

---

## Learning Outcomes

By completing these programs, I learned:

* Fundamentals of number systems.
* Decimal and binary conversion techniques.
* Roman numeral representation and conversion logic.
* Different methods of taking string input in C.
* Differences between scanf(), gets(), fgets(), and scan sets.
* Safe string handling practices.
* Problem-solving using loops and conditional statements.
* Handling numerical and textual data in different formats.