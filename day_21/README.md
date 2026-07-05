# Day 21 - Inheritance, Operator Overloading and Polymorphism in C++


## Topics Covered

### 1. Access Specifiers

Learned the three access specifiers available in C++.

#### Public

- Accessible from anywhere.
- Can be accessed using objects of the class.

#### Protected

- Accessible within the class and its derived classes.
- Cannot be accessed directly through objects.

#### Private

- Accessible only inside the class.
- Default access specifier for class members.

---

### 2. Inheritance

Learned how one class can inherit the properties and functions of another class.

Concepts covered:

- Base Class
- Derived Class
- Public Inheritance
- Reusing existing code

Example:

```cpp
class B : public A
{
};
```

---

### 3. Types of Inheritance

Studied different inheritance structures.

#### Single Inheritance

One derived class inherits from one base class.

```
A
|
B
|
C
```

---

#### Multiple Inheritance

A class inherits from more than one base class.

```
A      B
 \    /
   C
```

---

#### Multilevel Inheritance

Inheritance takes place across multiple levels.

```
A
|
B
|
C
```

---

#### Hybrid Inheritance (Diamond Problem)

Learned the Diamond Problem and its solution using Virtual Inheritance.

```
      A
     / \
    B   C
     \ /
      D
```

Topics covered:

- Virtual Base Class
- Eliminating duplicate copies of the base class
- Constructor execution order

---

### 4. Constructors and Destructors in Inheritance

Observed the order in which constructors and destructors execute.

Execution Order:

```
Base Class Constructor
↓

Derived Class Constructor
```

Destruction Order:

```
Derived Class Destructor
↓

Base Class Destructor
```

---

### 5. Virtual Inheritance

Implemented virtual inheritance to solve the Diamond Problem.

Example:

```cpp
class B : virtual public A
{
};

class C : virtual public A
{
};
```

---

### 6. Operator Overloading

Learned how operators can be overloaded for user-defined classes.

Operators implemented:

- `+`
- `-`
- `[]`
- `==`

Topics covered:

- Member operator functions
- Accessing current object using `this`
- Returning custom results

---

### 7. Arithmetic Operator Overloading

Implemented custom behavior for arithmetic operators.

Examples:

```cpp
obj1 + obj2;
```

```cpp
obj1 - obj2;
```

---

### 8. Subscript Operator Overloading

Overloaded the `[]` operator to access days of the week.

Example:

```cpp
Days d;

cout << d[2];
```

Concepts covered:

- Bounds checking
- Returning values from arrays

---

### 9. Equality Operator Overloading

Overloaded the `==` operator for password comparison.

Applications:

- Login authentication
- Object comparison
- Custom comparison logic

---

### 10. Password Masking

Implemented password input using `getch()`.

Topics covered:

- Character-by-character input
- Password masking using `*`
- Basic authentication

---

### 11. Polymorphism

Introduction to Polymorphism in C++.

#### Compile-Time Polymorphism

Also known as:

- Static Binding
- Function Overloading

Example:

```cpp
void fun(int a, int b);
void fun(int a, int b, int c);
void fun(int a, int b, int c, int d);
```

Topics covered:

- Function Overloading
- Same function name
- Different parameter lists

---

### 12. Function Overloading

Implemented overloaded functions to perform addition of:

- Two numbers
- Three numbers
- Four numbers

---

## Learning Outcomes

By completing today's programs, I learned:

- Difference between public, protected, and private access specifiers.
- Single, multiple, multilevel, and hybrid inheritance.
- Solving the Diamond Problem using virtual inheritance.
- Constructor and destructor execution order.
- Operator overloading for custom classes.
- Overloading arithmetic, comparison, and subscript operators.
- Password validation using operator overloading.
- Fundamentals of compile-time polymorphism.
- Function overloading in C++.

---