# Day 35 - Trees: Introduction & Binary Tree Traversals

## 📅 Overview

Day 35 introduced the **Tree** data structure, one of the most important non-linear data structures in Computer Science. The session covered the basic terminology of trees, binary tree representation, node counting, tree height, and different tree traversal techniques implemented recursively in C++.

---

## 📚 Topics Covered

### 1. Introduction to Trees

Studied the basic components of a tree.

#### Tree Terminology

- Root Node
- Parent Node
- Child Node
- Sibling Node
- Leaf Node
- Internal Node
- Level of a Node
- Height of a Tree
- Degree of a Node

Also learned:

- Maximum number of nodes at level **n = 2ⁿ**
- Binary Tree structure
- Representation of nodes using pointers

---

### 2. Binary Tree Representation

Implemented a Binary Tree using classes.

Each node contains:

- Data
- Left Child Pointer
- Right Child Pointer

```cpp
class Node{
public:
    int data;
    Node *left, *right;
};
```

---

### 3. Tree Operations

Implemented the following recursive operations:

#### Count Total Nodes

- Counts the total number of nodes present in the tree.

#### Height of Tree

- Calculates the height of the binary tree recursively.

---

### 4. Tree Traversals

Implemented the three standard Depth First Search (DFS) traversals.

#### Preorder Traversal (Root → Left → Right)

```
Root
├── Left
└── Right
```

#### Inorder Traversal (Left → Root → Right)

```
Left
Root
Right
```

#### Postorder Traversal (Left → Right → Root)

```
Left
Right
Root
```

Also discussed:

- Reverse Preorder
- Reverse Inorder
- Reverse Postorder

---

## Concepts Learned

- Tree Data Structure
- Binary Tree
- Root Node
- Leaf Node
- Internal Node
- Height of Tree
- Levels in Tree
- Binary Tree Representation
- Recursive Tree Traversal
- Preorder Traversal
- Inorder Traversal
- Postorder Traversal
- Node Counting

---
