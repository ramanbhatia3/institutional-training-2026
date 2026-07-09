# Day 27 - Doubly Linked List Implementation in C & C++

This repository contains the programs and concepts practiced on **Day 27** of my Institutional Training 2026. Today's session focused on implementing a **Doubly Linked List** in both **C** and **C++**, covering all major insertion, deletion, traversal, editing, and counting operations using a menu-driven approach.

> **Note:** Sorting and Reverse operations are yet to be implemented.

---

# Topics Covered

## 1. Doubly Linked List

Learned the implementation of a **Doubly Linked List**, where every node contains:

- Data
- Pointer to the previous node
- Pointer to the next node

Structure:

```
NULL <- [10] <-> [20] <-> [30] -> NULL
```

Compared with Singly Linked List:

- Can traverse in both directions.
- Easier insertion/deletion at arbitrary positions.
- Requires extra memory for the previous pointer.

---

## 2. Doubly Linked List using C

Implemented using:

- Structures
- Self-referential structures
- Dynamic Memory Allocation (`malloc`)
- Functions for each operation

---

## 3. Doubly Linked List using C++

Implemented the same project using Object-Oriented Programming concepts.

Created:

- `Node` class
- `LinkedList` class

Used:

- Constructors
- Member Functions
- Dynamic Memory Allocation (`new`)
- Encapsulation

---

# Menu-Driven Linked List Project

Implemented a complete menu-driven application.

Main Menu:

- Insert
- Display
- Delete
- Edit
- Count Nodes
- Sorting *(Pending)*
- Reverse *(Pending)*
- Exit

---

# Insertion Operations

## Insert at Beginning

Inserted a new node at the start of the list.

Steps:

- Create a new node.
- Set new node's next to current head.
- Update previous pointer of old head.
- Make new node the head.

Time Complexity:

```
O(1)
```

---

## Insert at End

Inserted a node at the end of the linked list.

Steps:

- Traverse to the last node.
- Update both previous and next pointers.

Time Complexity:

```
O(n)
```

---

## Insert Before a Node

Inserted a node before a specified value.

Concepts Used:

- Previous pointer
- Current pointer
- Updating four links correctly

---

## Insert After a Node

Inserted a node after a specified value.

Steps:

- Search the required node.
- Create a new node.
- Update previous and next pointers.

---

## Insert at Position

Inserted a node at any valid position.

Features:

- Beginning insertion
- Middle insertion
- Invalid position handling

---

# Deletion Operations

## Delete from Beginning

Removed the first node.

Steps:

- Move head to second node.
- Update previous pointer.
- Delete first node.

Time Complexity:

```
O(1)
```

---

## Delete from End

Removed the last node.

Concepts Used:

- Traversal
- Previous pointer
- Memory deallocation

Time Complexity:

```
O(n)
```

---

## Delete Before a Node

Deleted the node immediately before a specified value.

Concepts Used:

- Previous pointer
- Current pointer
- Pointer adjustments

---

## Delete After a Node

Deleted the node immediately after a specified value.

Features:

- Searches target node
- Updates previous and next pointers
- Handles edge cases safely

---

## Delete at Position

Deleted a node from any given position.

Checks Included:

- Invalid position
- First node deletion
- Position out of range

---

# Display Linked List

Traversed the linked list from beginning to end.

Example Output:

```
10 <-> 20 <-> 30 <-> NULL
```

---

# Count Nodes

Traversed the linked list and counted the total number of nodes.

Concepts Used:

- Traversal
- Counter variable

---

# Edit Node

Updated the value of an existing node.

Algorithm:

- Search for the required value.
- Replace it with the new value.
- Display success or value-not-found message.

---

# Pending Operations

The following operations are yet to be implemented:

- Linked List Sorting
- Linked List Reversal

These will complete the Doubly Linked List implementation in upcoming sessions.

---

# Concepts Practiced

- Doubly Linked Lists
- Structures
- Classes and Objects
- Constructors
- Dynamic Memory Allocation
- Pointer Manipulation
- Previous and Next Pointers
- Menu-driven Programming
- Traversal
- Searching
- Insertion Algorithms
- Deletion Algorithms

---

# Learning Outcomes

By completing today's practice, I learned:

- Implementation of Doubly Linked Lists in both C and C++
- Managing both previous and next pointers during insertion and deletion
- Differences between Singly and Doubly Linked Lists
- Object-Oriented implementation of linked lists
- Efficient memory management using `malloc`, `free`, `new`, and `delete`
- Writing modular, menu-driven Data Structure programs

---
