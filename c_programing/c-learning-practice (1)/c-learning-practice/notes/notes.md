# C Notes

Quick-reference notes for each chapter. Read before/after each exercise.


---

## Hello, World!

### Hello, World!
- Every C program starts execution in `main()`.
- `#include <stdio.h>` brings in the standard I/O library (needed for `printf`).
- `printf("...")` prints text to the console. `\n` = newline.
- `return 0;` tells the OS the program finished successfully.


---

## Variables and Types

### Variables and Types
- Common types: `int`, `float`, `double`, `char`.
- `sizeof(type)` tells you how many bytes a type uses.
- Format specifiers for `printf`: `%d` (int), `%f` (float/double), `%c` (char), `%s` (string).
- Variables must be declared with a type before use: `int age = 20;`


---

## Arrays

### Arrays
- Fixed-size, same-type collection: `int nums[5];`
- Indexing starts at 0. `nums[0]` is the first element.
- Can initialize directly: `int nums[5] = {1,2,3,4,5};`
- `sizeof(arr) / sizeof(arr[0])` gives the number of elements.


---

## Multidimensional Arrays

### Multidimensional Arrays
- A 2D array is an array of arrays: `int grid[3][4];` = 3 rows, 4 columns.
- Access with two indices: `grid[row][col]`.
- Initialize row by row:
  `int grid[2][3] = { {1,2,3}, {4,5,6} };`
- Loop over 2D arrays with nested `for` loops (outer = row, inner = column).


---

## Conditions

### Conditions
- `if / else if / else` for branching.
- Comparison: `==`, `!=`, `<`, `>`, `<=`, `>=`.
- Logical: `&&` (and), `||` (or), `!` (not).
- `switch` statement is an alternative for many discrete cases (remember `break;`).


---

## Strings

### Strings
- C strings are `char` arrays ending in a null terminator `'\0'`.
- `char name[20] = "Alice";` — array size must fit text + `\0`.
- Useful `<string.h>` functions: `strlen`, `strcpy`, `strcat`, `strcmp`.
- `%s` format specifier for printf/scanf.


---

## For loops

### For loops
- Syntax: `for (init; condition; update) { ... }`
- Great when you know how many times to loop (e.g. iterate over an array).
- Can nest for loops (e.g. for grids, multiplication tables).


---

## While loops

### While loops
- `while (condition) { ... }` — checks condition before each iteration.
- `do { ... } while (condition);` — runs body at least once, checks after.
- Useful when you don't know the number of iterations in advance
  (e.g. reading input until a sentinel value, or number-crunching loops).


---

## Functions

### Functions
- Declare with return type, name, parameters: `int add(int a, int b) { return a+b; }`
- Must be declared (prototype) or defined before use in `main`.
- `void` return type means the function returns nothing.
- Functions help split a program into small, reusable, testable pieces.


---

## Static

### Static
- A `static` local variable keeps its value between function calls
  (initialized only once, persists across calls, but still only
  visible inside that function).
- A `static` global variable is only visible within its own source file
  (limits scope, avoids naming clashes across files).


---

## Pointers

### Pointers
- A pointer stores a memory address: `int *p;`
- `&x` gives the address of `x`. `*p` dereferences p (gets the value at that address).
- `int *p = &x;` then `*p = 5;` also changes `x`.
- Pointers are the foundation for arrays, dynamic memory, and pass-by-reference.


---

## Structures

### Structures
- A `struct` groups related variables of possibly different types together.
  ```
  struct Point { int x; int y; };
  struct Point p1 = {3, 4};
  ```
- Access fields with `.` : `p1.x`
- Structs can be passed to functions, returned from functions, and
  put in arrays.


---

## Function arguments by reference

### Function arguments by reference
- C passes arguments BY VALUE by default (a copy is made).
- To let a function modify the caller's variable, pass a POINTER
  to it: `void inc(int *p) { (*p)++; }` then call `inc(&x);`
- This is how `scanf("%d", &x)` works too.


---

## Dynamic allocation

### Dynamic allocation
- `malloc(size)` allocates raw memory on the heap, returns `void*`.
- `calloc(count, size)` allocates and zero-initializes.
- `free(ptr)` releases memory — ALWAYS free what you malloc/calloc to avoid leaks.
- Always check the returned pointer isn't NULL before using it.
- `#include <stdlib.h>` is required.


---

## Arrays and Pointers

### Arrays and Pointers
- An array name decays to a pointer to its first element in most expressions.
- `arr[i]` is equivalent to `*(arr + i)`.
- Pointer arithmetic: `p + 1` moves forward by `sizeof(*p)` bytes, not 1 byte.
- A function parameter declared as `int arr[]` is actually `int *arr`.


---

## Recursion

### Recursion
- A function that calls itself. Needs a BASE CASE (stopping condition)
  and a RECURSIVE CASE that moves toward the base case.
- Example: `factorial(n) = n * factorial(n-1)`, base case `factorial(0) = 1`.
- Every recursive call uses stack space — deep recursion can overflow the stack.


---

## Linked lists

### Linked lists
- A chain of nodes, each holding data + a pointer to the next node.
  ```
  struct Node { int data; struct Node *next; };
  ```
- The list is usually tracked by a `head` pointer; the last node's
  `next` is `NULL`.
- Insertion/deletion doesn't require shifting elements like an array does,
  but you lose O(1) random access.


---

## Binary trees

### Binary trees
- Each node has data plus pointers to up to two children: `left` and `right`.
- A Binary SEARCH Tree (BST) keeps left < node < right for fast lookup.
- Common operations: insert, search, and traversals (in-order, pre-order,
  post-order) — usually implemented recursively.


---

## Unions

### Unions
- Like a struct, but all members SHARE the same memory (size = size of
  the largest member). Only one member is valid at a time.
  ```
  union Value { int i; float f; char c; };
  ```
- Useful for memory-efficient variant types, low-level type punning,
  and mimicking simple "tagged unions" (union + a separate type tag).


---

## Pointer Arithmetics

### Pointer Arithmetics
- `p + n` advances the pointer by `n * sizeof(*p)` bytes, not n bytes.
- `p2 - p1` (both pointing into the same array) gives the number of
  elements between them.
- Incrementing (`p++`) / decrementing (`p--`) moves one element at a time.
- Useful for walking arrays/strings without index variables.


---

## Function Pointers

### Function Pointers
- A variable that stores the ADDRESS of a function, letting you call
  it indirectly or pass it as an argument.
  ```
  int add(int a, int b) { return a+b; }
  int (*op)(int, int) = add;
  op(2, 3); // calls add(2,3)
  ```
- Useful for callbacks, strategy-style dispatch (e.g. picking an
  operation at runtime), and simple plugin-like designs.


---

## Bitmasks

### Bitmasks
- Bitwise operators: `&` (AND), `|` (OR), `^` (XOR), `~` (NOT),
  `<<` (left shift), `>>` (right shift).
- A "flag" is usually a single bit: `#define FLAG_A (1 << 0)`,
  `#define FLAG_B (1 << 1)`, etc.
- Set a flag: `x |= FLAG_A`. Clear: `x &= ~FLAG_A`. Check: `if (x & FLAG_A)`.
- Toggle: `x ^= FLAG_A`.
