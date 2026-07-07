# Day 25 - Linked List Implementation in C++

This repository contains the programs and concepts practiced on **Day 25** of my Institutional Training 2026. Today's session focused on implementing a **menu-driven Linked List project in C++** using classes and objects. The implementation covered node creation, insertion operations, traversal, counting, editing, and position-based insertion.

---

## Topics Covered

### 1. Linked List using Classes

Implemented a Linked List using Object-Oriented Programming concepts.

Created two classes:

- **Node**
- **LinkedList**

The `Node` class stores:
- Data
- Address of the next node

The `LinkedList` class manages:
- Head (start) pointer
- Linked list operations

---

### 2. Node Constructors

Created constructors for easy node initialization.

Implemented:

- Default Constructor
- Parameterized Constructor

Example:

```cpp
Node(){
    num = 0;
    next = nullptr;
}

Node(int num){
    this->num = num;
    next = nullptr;
}
```

---

### 3. Menu Driven Linked List Project

Created a complete menu-driven Linked List application.

Main Menu:

- Insert
- Display
- Delete
- Edit
- Count Nodes
- Sorting
- Reverse
- Exit

Insertion Submenu:

- Insert at Beginning
- Insert at End
- Insert Before a Node
- Insert After a Node
- Insert at Position

---

### 4. Insertion Operations

Implemented multiple insertion algorithms.

#### Insert at Beginning

Algorithm:

- Create a new node
- Point new node to current head
- Update head pointer

Time Complexity:

```
O(1)
```

---

#### Insert at End

Algorithm:

- Traverse to last node
- Attach new node

Time Complexity:

```
O(n)
```

---

#### Insert Before a Given Node

Implemented insertion before a specific value.

Concepts used:

- Previous pointer
- Current pointer
- Node searching

---

#### Insert After a Given Node

Inserted a new node after a specified value.

Algorithm:

- Search the node
- Create new node
- Update links

---

#### Insert at Position

Implemented insertion using a given position.

Features:

- Handles insertion at first position
- Checks for invalid positions
- Inserts between nodes

---

### 5. Display Linked List

Traversed the linked list using a temporary pointer.

Example Output:

```
10 -> 20 -> 30 -> NULL
```

---

### 6. Count Nodes

Traversed the complete linked list and counted the total number of nodes.

Concepts used:

- Traversal
- Counter variable

---

### 7. Edit Node

Updated the value of an existing node.

Algorithm:

- Search for the required value
- Replace it with the new value
- Display success or value-not-found message

---

## Concepts Practiced

- Classes and Objects
- Constructors
- Dynamic Memory Allocation using `new`
- Self-referential Classes
- Linked List Traversal
- Pointer Manipulation
- Menu-driven Programs
- Position-based Insertion
- Searching within Linked Lists

---

## Learning Outcomes

By completing today's practice, I learned:

- Implementing Linked Lists using C++ classes
- Creating nodes using constructors
- Dynamic memory allocation with `new`
- Implementing multiple insertion operations
- Traversing linked lists efficiently
- Counting and editing nodes
- Position-based insertion logic
- Better understanding of pointers and object-oriented design

---
