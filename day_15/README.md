# Day 15 - Dynamic Memory Allocation using `malloc()` and `calloc()`

## Topics Covered

### 1. Dynamic Memory Allocation (DMA)

Revisited the concept of allocating memory during program execution using the C Standard Library.

---

### 2. `malloc()`

Learned how to dynamically allocate memory for arrays using `malloc()`.

Topics covered:

- Runtime memory allocation
- Pointer-based array access
- Storing values in dynamically allocated arrays
- Memory deallocation using `free()`

Example:

```c
int *arr = (int *)malloc(5 * sizeof(int));
```

---

### 3. `calloc()`

Learned how `calloc()` differs from `malloc()`.

Topics covered:

- Allocating multiple contiguous memory blocks
- Automatic initialization of allocated memory to zero
- Accessing array elements using pointers
- Releasing allocated memory using `free()`

Example:

```c
int *arr = (int *)calloc(5, sizeof(int));
```

---

### Difference Between `malloc()` and `calloc()`

| malloc() | calloc() |
|----------|----------|
| Allocates a single block of memory | Allocates multiple contiguous blocks |
| Memory is uninitialized | Memory is initialized to zero |
| Takes one argument (total bytes) | Takes two arguments (number of elements, size of each element) |

---

## Note

These practice programs were shared by my batchmates while I was attending placement drive.

---