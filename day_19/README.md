# Day 19 - Constructors, Reference Variables and Parameter Passing in C++


## Topics Covered

### 1. Parameter Passing Techniques

Learned the three ways of passing arguments to functions.

#### Call by Value

- A copy of the variable is passed.
- Changes made inside the function do not affect the original variable.

Example:

```cpp
void swap(int a, int b);
```

---

#### Call by Reference

- Variables are passed by reference.
- Changes made inside the function affect the original variables.

Example:

```cpp
void change(int &a, int &b);
```

---

#### Call by Address (Pointers)

- Addresses of variables are passed to the function.
- Values are modified using pointers.

Example:

```cpp
void modify(int *a, int *b);
```

---

### 2. Reference Variables

Learned how reference variables act as aliases for existing variables.

Example:

```cpp
int a = 100;
int &temp = a;
```

Topics covered:

- Reference variables
- Alias concept
- Memory sharing

---

### 3. Constructors

Studied constructors in C++.

Key Points:

- Constructor name is the same as the class name.
- Constructors have no return type.
- They are called automatically when an object is created.

---

### 4. Types of Constructors

#### Non-Parameterized Constructor

Initializes an object without arguments.

Example:

```cpp
A();
```

---

#### Parameterized Constructor

Initializes an object using values passed during object creation.

Example:

```cpp
A(int a);
```

---

#### Constructor Overloading

Learned how multiple constructors can exist within the same class using different parameter lists.

Example:

```cpp
A();
A(int);
A(int, int);
```

---

### 5. Objects and Arrays of Objects

Created multiple objects of a class.

Example:

```cpp
Student s1;
```

Array of Objects:

```cpp
Student students[5];
```

---

### 6. Employee Class

Implemented an Employee class using a parameterized constructor.

Data Members:

- Employee ID
- Name
- Salary
- Department

Concepts covered:

- Object initialization
- Constructor usage
- Displaying object data

---

### 7. Student Class

Implemented a Student class using constructors.

Topics covered:

- Data encapsulation
- Constructor initialization
- Member functions
- Object creation

---

### 8. The `this` Pointer

Learned about the `this` pointer, which stores the address of the current object.

Example:

```cpp
this->rollNo = rollNo;
this->name = name;
```

Uses:

- Resolving naming conflicts
- Accessing current object's members
- Method chaining (advanced use)

---

## Learning Outcomes

By completing today's programs, I learned:

- Difference between call by value, call by reference, and call by address.
- Working with reference variables in C++.
- Purpose and working of constructors.
- Constructor overloading.
- Creating and initializing objects.
- Arrays of objects.
- Using parameterized constructors.
- Understanding and using the `this` pointer.
- Strengthened Object-Oriented Programming (OOP) fundamentals.

---
