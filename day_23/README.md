# Day 23 - C++ Templates, Friend Functions and Revision

## Topics Covered

### 1. Function Templates

Learned how function templates allow writing generic functions that work with different data types.

Example:

```cpp
template <class T>
void add(T a, T b){
    cout << a + b << endl;
}
```

Concepts covered:

- Generic programming
- Template functions
- Type deduction
- Code reusability

---

### 2. Template Search Function

Implemented a generic linear search function using templates.

Example:

```cpp
template <class T>
int search(T arr[], T key, int size);
```

Applications:

- Integer arrays
- Floating-point arrays
- Generic searching

---

### 3. Class Templates

Learned how templates can also be used with classes.

Example:

```cpp
template <class T>
class A{
    T num;
};
```

Concepts covered:

- Generic classes
- Object creation using templates
- Template instantiation

---

### 4. Multiple Template Parameters

Implemented class templates with multiple data types.

Example:

```cpp
template <class T1, class T2>
class A{
};
```

Topics covered:

- Multiple template arguments
- Mixed data types
- Generic arithmetic operations

---

### 5. Custom Vector Class

Implemented a simple vector class using templates.

Features:

- Dynamic memory allocation
- Constructor overloading
- Operator overloading (`[]`)
- Displaying vector elements

Concepts covered:

- Generic containers
- Dynamic arrays
- Template classes
- Subscript operator overloading

---

### 6. Friend Functions

Learned how friend functions can access private members of a class.

Example:

```cpp
friend void showMarks(A &obj);
```

Topics covered:

- Friend function declaration
- Accessing private data
- Controlled external access

---

### 7. Friend Classes

Implemented friend classes.

Example:

```cpp
friend class B;
```

Concepts covered:

- Friend class declaration
- Accessing private members of another class
- Class collaboration

---

### 8. Inline Functions

Learned about inline functions for reducing function call overhead.

Example:

```cpp
inline int square(int a){
    return a * a;
}
```

Topics covered:

- Inline keyword
- Compile-time expansion
- Small utility functions

---

### 9. Scope Resolution Operator (`::`)

Studied the scope resolution operator.

Applications:

- Accessing global variables
- Defining member functions outside a class
- Static member definitions

Example:

```cpp
cout << ::a;
```

---

### 10. Operator Overloading (`[]`)

Implemented the subscript operator in a custom vector class.

Example:

```cpp
T& operator[](int index);
```

Topics covered:

- Returning references
- Array-like object access
- Custom indexing

---

### 11. Revision Session

The session also included revision of previously covered Object-Oriented Programming concepts before beginning the Data Structures and Algorithms (DSA) module.

Topics revised:

- Classes and Objects
- Constructors
- Copy Constructors
- Friend Functions
- Inheritance
- Polymorphism
- Operator Overloading
- Templates
- Virtual Functions

---

## Learning Outcomes

By completing today's programs, I learned:

- Writing generic functions using templates.
- Creating reusable class templates.
- Working with multiple template parameters.
- Implementing a custom vector class.
- Using friend functions and friend classes.
- Understanding inline functions.
- Applying the scope resolution operator.
- Strengthened Object-Oriented Programming concepts through revision.
- Prepared for the upcoming Data Structures and Algorithms (DSA) module.

---
