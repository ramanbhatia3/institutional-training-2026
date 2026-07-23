# Day 36 - Types of Binary Trees & Binary Search Tree (BST)

## 📅 Overview

Day 36 focused on understanding the different **types of Binary Trees** and implementing a **Binary Search Tree (BST)** in C++. The session covered BST properties, insertion, searching, traversals, level-order traversal, finding minimum and maximum elements, calculating tree height, and counting different types of nodes.

---

## 📚 Topics Covered

### 1. Types of Binary Trees

Studied the different classifications of binary trees.

#### Strict (Full) Binary Tree

- Every internal node has exactly two children.
- Nodes have either **0 or 2 children**.

---

#### Complete Binary Tree

- Every level is completely filled except possibly the last level.
- The last level is filled from **left to right**.

---

#### Perfect Binary Tree

- All internal nodes have exactly two children.
- All leaf nodes are at the same level.

Properties:

- Total Nodes = **2^(h+1) − 1**
- Leaf Nodes = **2^h**
- Internal Nodes = **2^h − 1**

---

#### Degenerate (Skewed) Binary Tree

- Every parent node has only one child.
- Behaves similarly to a linked list.
- Minimum number of nodes for height **h** = **h + 1**

---

### 2. Binary Search Tree (BST)

Learned the properties of a Binary Search Tree.

BST Property:

- Left Subtree < Root
- Right Subtree > Root

This property allows efficient searching, insertion, and traversal operations.

---

### 3. BST Operations Implemented

#### Insertion

- Insert a new node while maintaining BST properties.

#### Searching

- Search for a key recursively.
- Displays whether the element exists in the BST.

#### Tree Traversals

- Inorder Traversal (Left → Root → Right)
- Preorder Traversal (Root → Left → Right)
- Postorder Traversal (Left → Right → Root)
- Level Order Traversal (Breadth First Search)

#### Tree Statistics

- Count Total Nodes
- Count Leaf Nodes
- Count Internal Nodes
- Calculate Height of the Tree

#### Minimum & Maximum

- Find the smallest element.
- Find the largest element.

---

## Concepts Learned

- Binary Tree Types
- Strict Binary Tree
- Complete Binary Tree
- Perfect Binary Tree
- Degenerate Binary Tree
- Binary Search Tree (BST)
- Recursive Insertion
- Recursive Searching
- Tree Traversals
- Level Order Traversal (BFS)
- Height of BST
- Node Counting
- Leaf Nodes
- Internal Nodes
- Minimum & Maximum in BST

---
