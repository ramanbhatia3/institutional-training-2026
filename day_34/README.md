# Day 34 - Analysis of Algorithms: Asymptotic Analysis & Recurrence Relations

## 📅 Overview

Day 34 focused entirely on **Analysis of Algorithms (AOA)**. The session covered the mathematical foundations used to analyze algorithm efficiency, including **Asymptotic Notations**, **Time Complexity**, **Growth of Functions**, and solving **Recurrence Relations** using the **Substitution Method** and **Master Theorem**.

---

## 📚 Topics Covered

### 1. Asymptotic Notations

Studied the three primary asymptotic notations used to describe algorithm performance.

#### Big O Notation (O)

- Upper Bound of an algorithm
- Worst Case Analysis
- Represents the maximum growth rate

#### Big Omega Notation (Ω)

- Lower Bound of an algorithm
- Best Case Analysis
- Represents the minimum growth rate

#### Big Theta Notation (Θ)

- Tight Bound
- Average/Exact Growth Rate
- Represents both upper and lower bounds

---

### 2. Growth of Functions

Compared the growth rates of different mathematical functions.

Examples discussed:

- Linear vs Quadratic
- Exponential vs Polynomial
- Logarithmic Functions

Key observations:

- Constant multiplication does not affect asymptotic growth.
- Growth rate depends on the highest-order term.
- Constants only affect the value, not the complexity class.

---

### 3. Time Complexity

Learned how to calculate the running time of algorithms.

#### Types of Algorithms

- Sequential Algorithms
- Iterative Algorithms
- Recursive Algorithms

Analyzed:

- Constant Time — **O(1)**
- Linear Time — **O(n)**
- Logarithmic Time — **O(log n)**
- Quadratic Time — **O(n²)**

---

### 4. Analysis of Iterative Algorithms

Solved time complexity for:

- Single Loops
- Nested Loops
- Loops with Increment
- Loops with Multiplication (`i = i × 2`)
- Geometric Series

---

### 5. Analysis of Recursive Algorithms

Learned how to form recurrence relations.

General recurrence:

```
T(n) = Recursive Calls + Remaining Work
```

Solved examples like:

- `T(n) = T(n-1) + 1`
- `T(n) = T(n-2) + 1`
- `T(n) = 2T(n-2) + n`

---

### 6. Master Theorem

Studied Master Theorem for divide-and-conquer recurrence relations.

General Form:

```
T(n) = aT(n/b) + f(n)
```

Cases Covered:

1. **f(n) < n^(log_b a)**

   ```
   Θ(n^(log_b a))
   ```

2. **f(n) > n^(log_b a)**

   ```
   Θ(f(n))
   ```

3. **f(n) = n^(log_b a)**

   ```
   Θ(f(n) log n)
   ```

Applied the theorem to solve sample recurrence relations.

---

## Concepts Learned

- Algorithm Analysis
- Time Complexity
- Growth Rate of Functions
- Big O Notation
- Big Ω Notation
- Big Θ Notation
- Best, Worst & Tight Bounds
- Iterative Complexity Analysis
- Recursive Complexity Analysis
- Recurrence Relations
- Geometric Progression
- Master Theorem

---