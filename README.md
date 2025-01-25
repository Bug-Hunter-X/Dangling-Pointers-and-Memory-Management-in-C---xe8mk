# Dangling Pointers and Memory Management in C++

This repository demonstrates a common C++ error: the use of dangling pointers and potential memory leaks.  The code illustrates how modifying pointers that no longer point to valid memory locations can lead to unpredictable behavior and crashes.  A solution is also provided showing how to manage memory correctly using smart pointers.

## Running the Code

To compile and run the code, you will need a C++ compiler (like g++).  Compile the `bug.cpp` file and observe the output (which might vary or crash). Then compile and run the `bugSolution.cpp` file to see the safer, more memory-managed approach.

```bash
g++ bug.cpp -o bug
./bug
g++ bugSolution.cpp -o bugSolution
./bugSolution
```

## Understanding the Problem

Dangling pointers occur when a pointer continues to point to a memory location after the object that originally occupied that memory has been deallocated or destroyed.  Accessing the memory location via the dangling pointer results in undefined behavior, which can manifest in unexpected results, crashes, or security vulnerabilities.  The code example showcases this problem explicitly through a simple demonstration.

## Solution

The solution demonstrates how to avoid these issues using smart pointers (`std::unique_ptr` and `std::shared_ptr`). Smart pointers automatically manage the memory, preventing dangling pointers and memory leaks. This significantly enhances code safety and reliability.