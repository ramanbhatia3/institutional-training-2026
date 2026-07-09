# Day 26 - Complete Linked List Implementation in C & C++

This repository contains the programs and concepts practiced on **Day 26** of my Institutional Training 2026. Today's session focused on building a **complete menu-driven Linked List project** in both **C and C++**, covering all major insertion, deletion, traversal, sorting, and reversing operations.

---

## Topics Covered

### 1. Complete Linked List Project

Implemented a complete menu-driven Linked List application in both **C** and **C++**.

Main Menu:

- Insert
- Display
- Delete
- Edit
- Count Nodes
- Sort
- Reverse
- Exit

---

### 2. Linked List using C

Implemented the Linked List using:

- Structures
- Dynamic Memory Allocation (`malloc`)
- Self-referential structures
- Functions for every operation

---

### 3. Linked List using C++

Implemented the same project using Object-Oriented Programming concepts.

Created:

- `Node` class
- `LinkedList` class

Used:

- Constructors
- Dynamic Memory Allocation (`new`)
- Member Functions
- Encapsulation

---

## Insertion Operations

### Insert at Beginning

Inserted a node at the start of the linked list.

Algorithm:

- Create a new node.
- Point it to the current head.
- Update the head pointer.

Time Complexity:

```
O(1)
```

---

### Insert at End

Inserted a node at the end of the linked list.

Algorithm:

- Traverse to the last node.
- Link the new node.

Time Complexity:

```
O(n)
```

---

### Insert Before a Node

Inserted a new node before a specified value.

Concepts Used:

- Previous Pointer
- Current Pointer
- Traversal
- Pointer Manipulation

---

### Insert After a Node

Inserted a node after a specified value.

Algorithm:

- Search the required node.
- Create a new node.
- Update links.

---

### Insert at Position

Inserted a node at any valid position.

Features:

- Beginning insertion
- Middle insertion
- Invalid position handling

---

## Deletion Operations

### Delete from Beginning

Removed the first node of the linked list.

Concepts Used:

- Updating head pointer
- Memory deallocation (`free` / `delete`)

Time Complexity:

```
O(1)
```

---

### Delete from End

Removed the last node of the linked list.

Concepts Used:

- Traversal
- Previous pointer
- Memory deallocation

Time Complexity:

```
O(n)
```

---

### Delete Before a Node

Deleted the node immediately before a specified value.

Concepts Used:

- Previous pointer
- Current pointer
- Special case handling

---

### Delete After a Node

Deleted the node immediately after a specified value.

Features:

- Searches target node
- Updates links safely
- Handles edge cases

---

### Delete at Position

Deleted a node from any given position.

Checks Included:

- Invalid position
- First node deletion
- Position out of range

---

## Display Linked List

Traversed the linked list and displayed all elements.

Example Output:

```
10 -> 20 -> 30 -> 40 -> NULL
```

---

## Count Nodes

Traversed the entire linked list and counted the number of nodes.

Concepts Used:

- Traversal
- Counter variable

---

## Edit Node

Updated the value of an existing node.

Algorithm:

- Search for the required value.
- Replace it with the new value.
- Display success or value-not-found message.

---

## Sorting a Linked List

Implemented sorting in ascending order.

Concepts Used:

- Nested Traversal
- Data Swapping
- Bubble Sort logic on linked lists

Time Complexity:

```
O(n²)
```

---

## Reverse a Linked List

Reversed the complete linked list using three pointers.

Pointers Used:

- Previous
- Current
- Next

Algorithm:

- Reverse each link one by one.
- Update the head pointer.

Time Complexity:

```
O(n)
```

---

## Concepts Practiced

- Linked Lists
- Structures
- Classes and Objects
- Constructors
- Dynamic Memory Allocation
- Pointer Manipulation
- Menu-driven Programming
- Traversal
- Searching
- Insertion Algorithms
- Deletion Algorithms
- Sorting
- Reversing Linked Lists

---

## Learning Outcomes

By completing today's practice, I learned:

- Implementing a complete Linked List project in both C and C++
- Understanding the differences between procedural and object-oriented implementations
- Performing all insertion and deletion operations
- Sorting linked lists using traversal techniques
- Reversing linked lists using pointer manipulation
- Managing dynamic memory efficiently with `malloc`, `free`, `new`, and `delete`
- Improving problem-solving skills through implementation of multiple linked list operations

---
