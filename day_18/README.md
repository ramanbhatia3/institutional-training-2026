# Day 18 - Introduction to Classes and Objects in C++


## Topics Covered

### 1. Classes and Objects

Learned how to create a class in C++ and instantiate objects.

Concepts covered:

- Class declaration
- Object creation
- Data members
- Member functions
- Access specifiers (`private` and `public`)

---

### 2. Student Class

Implemented a `Student` class to store student information.

Data Members:

- Student ID
- Name
- Branch
- Marks of 5 Subjects

Member Functions:

- `setData()`
- `setMarks()`
- `print_marks()`
- `cal_per()`

Topics covered:

- Encapsulation
- Arrays as class members
- Passing arrays to functions
- Object manipulation

---

### 3. Percentage Calculation

Implemented a member function to calculate the percentage of a student based on marks obtained in five subjects.

Concepts covered:

- Arrays
- Loops
- Member functions
- Basic arithmetic operations

---

### 4. Static Data Members

Learned about static data members that are shared among all objects of a class.

Example:

```cpp
static string college;
```

Topics covered:

- Static data members
- Class-level variables
- Defining static members outside the class

---

### 5. Static Member Functions

Implemented a static member function to access class-level data.

Example:

```cpp
static void show_college();
```

Concepts covered:

- Static member functions
- Accessing static data members
- Calling functions using the scope resolution operator (`::`)

---

### 6. Scope Resolution Operator

Learned how to define static members outside the class using the scope resolution operator.

Example:

```cpp
string Student::college = "RBPU";
```

---

## Learning Outcomes

By completing today's programs, I learned:

- Fundamentals of Object-Oriented Programming.
- Creating classes and objects in C++.
- Working with data members and member functions.
- Using arrays inside classes.
- Calculating values using class methods.
- Understanding static data members and static member functions.
- Using the scope resolution operator (`::`) for static member initialization.

---
