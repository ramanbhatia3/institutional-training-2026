# Day 22 - Runtime Polymorphism, Virtual Functions and Abstract Classes in C++

## Topics Covered

### 1. Function Overriding

Learned how a derived class can redefine a function already present in the base class.

Example:

```cpp
class A{
public:
    void fun(){
        cout << "Fun - A";
    }
};

class B : public A{
public:
    void fun(){
        cout << "Fun - B";
    }
};
```

Concepts covered:

- Base class functions
- Derived class functions
- Function overriding

---

### 2. Compile-Time vs Runtime Binding

Studied the difference between static and dynamic binding.

#### Compile-Time Binding (Static Binding)

- Function call resolved during compilation.
- Default behavior in C++.

#### Runtime Binding (Dynamic Binding)

- Function call resolved during program execution.
- Achieved using virtual functions.

---

### 3. Virtual Functions

Learned how the `virtual` keyword enables runtime polymorphism.

Example:

```cpp
virtual void pay();
```

Concepts covered:

- Virtual functions
- Dynamic dispatch
- Base class pointers
- Runtime binding

---

### 4. Runtime Polymorphism

Implemented runtime polymorphism using a payment system.

Derived classes:

- UPI
- Credit Card
- Net Banking

Example:

```cpp
Payment *ptr = new UPI();
ptr->pay();
```

Topics covered:

- Base class pointers
- Object creation using `new`
- Function overriding
- Runtime method selection

---

### 5. Menu-Driven Polymorphism

Created a menu-based payment application where the user selects the payment method at runtime.

Payment Methods:

- UPI
- Credit Card
- Net Banking

Concepts covered:

- Dynamic object creation
- Switch statements
- Runtime polymorphism
- Pointer-based object handling

---

### 6. Abstract Classes

Learned about abstract classes that cannot be instantiated.

Characteristics:

- Contain at least one pure virtual function.
- Used as base classes.
- Define a common interface for derived classes.

Example:

```cpp
class Loan{
public:
    virtual void verifyDoc() = 0;
};
```

---

### 7. Pure Virtual Functions

Studied pure virtual functions.

Syntax:

```cpp
virtual void verifyDoc() = 0;
```

Concepts covered:

- Abstract classes
- Mandatory function implementation
- Interface-like behavior

---

### 8. Virtual Table (vTable) Concept

Observed that adding a virtual function changes the size of an object.

Example:

```cpp
class A{
public:
    int a;
    virtual void pay(){}
};
```

Concepts covered:

- Virtual Pointer (vPtr)
- Virtual Table (vTable)
- Memory overhead of virtual functions

---

## Learning Outcomes

By completing today's programs, I learned:

- Difference between compile-time and runtime polymorphism.
- Function overriding in inheritance.
- Working of virtual functions.
- Dynamic binding using base class pointers.
- Creating menu-driven applications using polymorphism.
- Purpose of abstract classes.
- Pure virtual functions and interfaces.
- Basic understanding of vTable and vPtr.
- Importance of runtime polymorphism in Object-Oriented Programming.

---