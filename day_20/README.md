# Day 20 - Copy Constructor, Friend Functions, Composition and Inheritance in C++


## Topics Covered

### 1. Copying Objects

Learned different ways to copy one object into another.

#### Manual Copy Function

Implemented a member function to copy data from one object to another.

Example:

```cpp
void copy(A &obj);
```

Concepts covered:

- Copying object data
- Passing objects by reference
- Using the `this` pointer

---

### 2. Copy Constructor

Learned about copy constructors used to initialize one object from another.

Example:

```cpp
A(A &obj);
```

Concepts covered:

- Object copying
- Automatic invocation of copy constructors
- Deep understanding of object initialization

---

### 3. Passing Objects to Functions

Practiced passing objects in different ways.

Topics covered:

- Passing by reference
- Passing by pointer
- Object manipulation inside functions

Example:

```cpp
void Add(A &obj1, A *ptr);
```

---

### 4. Static Member Functions

Implemented static member functions to perform operations without requiring an object instance.

Example:

```cpp
static void Add(A *ptr, A &obj);
```

Topics covered:

- Static member functions
- Calling functions using scope resolution operator (`::`)
- Accessing object data through pointers

---

### 5. Friend Functions

Learned how friend functions can access private members of a class.

Example:

```cpp
friend void Add(A &obj1, A &obj2);
```

Topics covered:

- Friend function declaration
- Accessing private members
- External functions with class access

---

### 6. Object Relationships

Studied relationships between classes.

#### Has-A Relationship (Composition)

One class contains an object of another class.

Example:

```cpp
class B{
    A obj;
};
```

Applications:

- Composition
- Code reusability

---

#### Is-A Relationship (Inheritance)

One class inherits properties and behaviors of another class.

Example:

```cpp
class B : public A
{
};
```

Topics covered:

- Single inheritance
- Reusing base class members
- Accessing inherited functions

---

### 7. Inheritance

Implemented programs demonstrating inheritance.

Concepts covered:

- Base class
- Derived class
- Public inheritance
- Accessing inherited member functions
- Adding new members to derived classes

---

### 8. Constructors in Inheritance

Observed constructor execution order during object creation.

Topics covered:

- Base class constructor execution
- Derived class constructor execution
- Constructor chaining

Execution Order:

```text
Base Class Constructor
↓
Derived Class Constructor
```

---

### 9. Constructor Chaining

Learned how constructors of base classes are invoked before derived class constructors.

Example:

```cpp
B(int a, int b) : A(b)
{
}
```

Concepts covered:

- Constructor chaining
- Initializer lists
- Calling parameterized base class constructors

---

## Learning Outcomes

By completing today's programs, I learned:

- How objects are copied using copy functions and copy constructors.
- Difference between manual copying and copy constructors.
- Passing objects by reference and pointer.
- Static member functions and their usage.
- Friend functions and controlled access to private members.
- Difference between Has-A and Is-A relationships.
- Fundamentals of inheritance in C++.
- Constructor chaining using initializer lists.
- Order of constructor execution in inheritance.

---
