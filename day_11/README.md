# Day 11 - Pointers, Function Pointers, Structures and HackerRank Practice

## Topics Covered

### 1. Pointers in C

Revised the fundamentals of pointers and memory addresses.

#### Wild Pointer

A pointer declared but not initialized.

```c
int *p;
```

#### NULL Pointer

A pointer that points to nothing.

```c
int *p = NULL;
```

#### Dangling Pointer

A pointer pointing to memory that has already been freed.

```c
int *p = malloc(sizeof(int));
free(p);
```

#### Constant Pointer

Pointer address cannot be changed.

```c
int *const ptr = &x;
```

#### Pointer to Constant

Pointer can point elsewhere, but value cannot be modified through it.

```c
const int *ptr;
```

---

### 2. Function Pointers

Learned how functions can be assigned to pointers and called indirectly.

#### Example

```c
int sum(int a, int b){
    return a + b;
}

int (*fp)(int, int);
fp = sum;

printf("%d", fp(3,5));
```

#### Applications

* Callback Functions
* Dynamic Function Execution
* Event Handling

---

### 3. String Tokenization using `strtok()`

Learned how to split strings into tokens.

#### Example

```c
char str[] = "Hello,World,C";
char *token = strtok(str, ",");

while(token != NULL){
    printf("%s\n", token);
    token = strtok(NULL, ",");
}
```

---

### 4. Structures in C

Introduction to user-defined data types using structures.

#### Structure Declaration

```c
struct student{
    char name[100];
    int rollno;
    char address[100];
};
```

#### Creating a Structure Variable

```c
struct student s1;
```

#### Initializing a Structure

```c
struct student s1 = {
    "Ramandeep Bhatia",
    2305581,
    "Hoshiarpur"
};
```

#### Concepts Covered

* Structure Declaration
* Structure Initialization
* Accessing Members using Dot Operator (`.`)
* Structure Size and Memory Allocation

---

### 5. Array Frequency Problems

Solved frequency-counting problems using arrays.

#### Example

```c
freq[arr[i]]++;
```

#### Concepts Used

* Arrays
* Frequency Counting
* Traversal Techniques
* Index-Based Optimization

---

### 6. HackerRank Practice

Solved multiple HackerRank problems including:

#### Digit Frequency

Topics:

* Arrays
* Character Processing
* Frequency Counting

#### Printing Tokens

Topics:

* Strings
* Delimiters
* String Tokenization

#### Array-Based Problems

Topics:

* Array Traversal
* Frequency Counting
* Input Handling

---

## Learning Outcomes

By completing today's tasks, I learned:

* Different types of pointers and their real-world applications.
* Memory-related pointer issues such as wild and dangling pointers.
* Function pointer syntax and usage.
* String tokenization using `strtok()`.
* Creating and working with structures.
* Frequency counting using arrays.
* Better problem-solving skills through HackerRank practice.
* Improved understanding of memory management and data organization.

---

