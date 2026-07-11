# Day 28 - Linked List Practice on LeetCode

This repository contains the problems I solved on **Day 28** of my Institutional Training 2026. Today's session was focused on solving **Linked List** problems on **LeetCode** to strengthen problem-solving skills and understand common interview patterns involving pointers and linked list manipulation.

---

# Problems Solved

## 1. Add Two Numbers

**LeetCode #2**

Given two non-empty linked lists representing two non-negative integers, add the numbers and return the sum as a linked list.

### Concepts Used

- Dummy Node
- Carry Handling
- Linked List Traversal
- Dynamic Node Creation

### Approach

- Traverse both linked lists simultaneously.
- Add corresponding digits along with carry.
- Create a new node for every resulting digit.
- Continue until both lists and carry are exhausted.

**Time Complexity**

```
O(max(n, m))
```

**Space Complexity**

```
O(max(n, m))
```

---

## 2. Remove Nth Node From End of List

**LeetCode #19**

Delete the Nth node from the end of the linked list.

### Concepts Used

- Linked List Traversal
- Node Deletion
- Counting Nodes

### Approach

- Count the total number of nodes.
- Find the node just before the target node.
- Update pointers to remove the required node.
- Handle the special case when the head node needs to be deleted.

**Time Complexity**

```
O(n)
```

**Space Complexity**

```
O(1)
```

---

## 3. Merge Two Sorted Lists

**LeetCode #21**

Merge two sorted linked lists into one sorted linked list.

### Concepts Used

- Dummy Node
- Pointer Manipulation
- Sorted List Traversal

### Approach

- Compare nodes from both lists.
- Attach the smaller node to the new list.
- Continue until one list becomes empty.
- Append the remaining nodes.

**Time Complexity**

```
O(n + m)
```

**Space Complexity**

```
O(1)
```

---

## 4. Remove Linked List Elements

**LeetCode #203**

Remove all nodes having a specific value from the linked list.

### Concepts Used

- Dummy Node
- Safe Node Deletion
- Pointer Updates

### Approach

- Create a dummy node before the head.
- Traverse the linked list.
- Delete nodes whose value matches the target.
- Return the updated head.

**Time Complexity**

```
O(n)
```

**Space Complexity**

```
O(1)
```

---

# Concepts Practiced

- Singly Linked Lists
- Dummy Nodes
- Pointer Manipulation
- Dynamic Memory Allocation
- Node Deletion
- Linked List Traversal
- Merging Linked Lists
- Carry Propagation
- Edge Case Handling

---

# Learning Outcomes

By completing today's practice, I learned:

- Using dummy nodes to simplify linked list operations.
- Efficient pointer manipulation without losing node references.
- Handling edge cases such as deleting the head node.
- Performing arithmetic operations on linked lists.
- Merging sorted linked lists efficiently.
- Improving problem-solving skills through LeetCode interview questions.

---
