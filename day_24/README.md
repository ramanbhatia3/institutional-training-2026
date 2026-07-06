# Day 24 - Introduction to Linked Lists

This repository contains the programs and notes practiced on **Day 24** of my Institutional Training 2026. This marked the beginning of the **Data Structures & Algorithms (DSA)** module, where I learned the fundamentals of **Linked Lists**, node creation, and basic linked list operations.

---

## Topics Covered

### 1. Introduction to Linked Lists

Learned what a linked list is and how it differs from arrays.

Topics covered:
- Dynamic memory allocation for nodes
- Self-referential structures
- Node representation
- Head (Start) pointer
- Traversing a linked list

---

### 2. Creating a Node

Implemented node creation in both **C** and **C++**.

**C Version**
- Created a node using `malloc()`
- Allocated memory dynamically
- Used self-referential structures

**C++ Version**
- Created a node using the `new` operator
- Learned dynamic object creation

---

### 3. Linked List Menu-Driven Program

Created the basic framework for a menu-driven Linked List project.

Menu Options:
- Insert Node
- Display Linked List
- Delete Node
- Edit Node
- Count Nodes
- Sort Linked List
- Reverse Linked List
- Exit

Also created submenus for insertion and deletion operations.

---

### 4. Linked List Insertion

Learned algorithms for:

#### Insertion at Beginning
- Create a new node
- Assign data
- Point new node to current head
- Update head pointer

#### Insertion at End
- Create a new node
- Traverse to the last node
- Attach new node at the end

---

### 5. Displaying a Linked List

Implemented traversal using a temporary pointer.

Concepts used:
- Traversing nodes
- Checking for empty list
- Printing elements sequentially

Example Output:

```
10 -> 20 -> 30 -> NULL
```

---

### 6. Counting Nodes

Implemented node counting by traversing the entire linked list.

Concepts:
- Traversal
- Counter variable
- End-of-list detection

---

### 7. Editing a Node

Implemented updating an existing node.

Algorithm:
- Search for the required value
- Replace it with the new value
- Display success or value-not-found message

---

## Learning Outcomes

By completing today's practice, I learned:

- Fundamentals of Linked Lists
- Creating nodes dynamically in C and C++
- Dynamic memory allocation using `malloc()` and `new`
- Traversing linked lists
- Insertion at beginning and end
- Displaying linked lists
- Counting nodes
- Editing node values
- Designing a menu-driven Linked List application

---
