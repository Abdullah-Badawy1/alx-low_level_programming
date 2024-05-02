# Comprehensive Guide on C String Handling and Memory Management

This README provides an in-depth look at handling strings in C, managing memory, and using diagnostic tools to analyze and debug C programs. It covers everything from basic string usage to advanced memory management techniques.

## Table of Contents

1. [Introduction to Memory Management in C](#1-introduction-to-memory-management-in-c)
2. [Understanding String Literals and Memory Sections](#2-understanding-string-literals-and-memory-sections)
3. [Using Diagnostic Tools](#3-using-diagnostic-tools)
4. [Advanced Memory Management Techniques](#4-advanced-memory-management-techniques)
5. [Compiler Optimizations and Behaviors](#5-compiler-optimizations-and-behaviors)
6. [Conclusion](#6-conclusion)
7. [Additional Resources](#7-additional-resources)

## 1. Introduction to Memory Management in C

### Automatic Memory Allocation
- Variables and arrays are automatically allocated in stack memory when a function is called. 
- The stack memory is automatically managed, growing and shrinking as functions enter and exit.

### Dynamic Memory Allocation
- `malloc` is used for dynamic memory allocation from the heap, which must be manually managed (allocated and freed).

## 2. Understanding String Literals and Memory Sections

- **Compiler**: Places string literals in a read-only section of the executable, usually `.rodata`.
- **Linker**: Consolidates all read-only data into a single segment in the executable, marked as read-only.
- **OS Loader**: Sets access permissions for each segment during program execution, making `.rodata` read-only.

### Example of Modifying String Literal

```c
#include <stdio.h>

void segf(void) {
    char *str;
    str = "Holberton";
    str[0] = 's';  // Attempt to modify read-only memory
}

int main(void) {
    segf();
    return 0;
} 
