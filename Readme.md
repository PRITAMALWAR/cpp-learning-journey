# C++ 

## What is C++?

C++ is a **general-purpose programming language** used to create fast and powerful software applications.

C++ was developed by **Bjarne Stroustrup** in the early 1980s. It was created as an extension of the **C programming language**, with additional features such as **Object-Oriented Programming (OOP)**.

---

## Why is C++ Popular?

C++ is popular because it provides several powerful features:

### ⚡ 1. High Performance

C++ programs can run very fast because C++ is a **compiled language** and provides efficient control over system resources.

### 🧠 2. Object-Oriented Programming

C++ supports **Object-Oriented Programming (OOP)** concepts such as:

* Classes
* Objects
* Inheritance
* Polymorphism
* Encapsulation
* Abstraction

### 💾 3. Memory Management

C++ provides programmers with control over memory.

It supports concepts such as:

* Pointers
* References
* Dynamic memory allocation
* Memory deallocation

### 📦 4. STL (Standard Template Library)

C++ provides the **Standard Template Library (STL)**, which contains useful data structures and algorithms.

Examples:

* `vector`
* `string`
* `stack`
* `queue`
* `set`
* `map`
* `sort`
* `binary_search`

STL is especially useful when solving **DSA problems**.

### 🔧 5. Low-Level Control

C++ provides low-level control over system resources, making it useful for:

* System programming
* Embedded systems
* Operating systems
* Performance-critical applications

### 🎯 6. DSA Support

C++ is widely used for:

* Data Structures & Algorithms
* Competitive Programming
* Coding Interviews
* Technical Interviews

Its STL makes implementing and solving DSA problems easier and faster.

---

## Where is C++ Used?

C++ is commonly used in:

1. **Data Structures & Algorithms (DSA)**
2. **Competitive Programming**
3. **Game Development**
4. **Operating Systems**
5. **Embedded Systems**
6. **Robotics**
7. **Desktop Applications**
8. **High-Performance Software**
9. **Browsers**
10. **Database Systems**

---

## Simple C++ Program

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    return 0;
}
```

### Output

```text
Hello World
```

---

## Key Points

* C++ is a **general-purpose programming language**.
* C++ was developed by **Bjarne Stroustrup**.
* C++ evolved from the **C programming language**.
* C++ supports **Object-Oriented Programming (OOP)**.
* C++ is known for **high performance**.
* C++ provides powerful **memory management**.
* C++ has the **STL (Standard Template Library)**.
* C++ is widely used for **DSA and competitive programming**.
* C++ is used in **games, operating systems, robotics, embedded systems, browsers, and high-performance applications**.



## Day 1 

* C++ programs start execution from main()
* std::cout is used for output.
* std::cin is used for input.
* Variables store data.
* Data types define what kind of data is stored.
* Arithmetic operators perform calculations.
* Comparison operators compare values.
* if, else if, and else are used for decisions.
* switch is useful for multiple exact choices.
* &&, ||, and ! are logical operators.
* Loops repeat code.
* for is commonly used when the number of iterations is known.
* while checks the condition before execution.
* do while executes at least once.
* break stops a loop.
* continue skips the current iteration.
* ++ increases a value by one.
* -- decreases a value by one.
* % gives the remainder and is very important for DSA.
* Writing the logic before writing code is an important programming habit.



## Day 2

* Functions are used to organize code into reusable blocks.

* Parameters are variables that receive values inside a function.

* Arguments are the actual values passed to a function.

* A function can return a value using `return`.

* `void` means the function does not return a value.

* Local variables can be used only within their scope.

* Global variables are declared outside functions and can be accessed from multiple functions.

* Arrays store multiple values of the same data type.

* Array indexing starts from `0`.

* For an array of size `n`, the last index is `n - 1`.

* Array traversal means visiting array elements one by one.

* `for` loops are commonly used to traverse arrays.

* Array elements can be accessed using `array[index]`.

* The sum of an array can be calculated using an accumulator such as `sum += array[i]`.

* Average is calculated as `sum / number of elements`.

* Maximum and minimum can be found by comparing each element with the current maximum or minimum.

* Initializing maximum or minimum with the first array element works correctly even when values are negative.

* Linear Search checks array elements one by one to find a target value.

* Linear Search has `O(n)` time complexity.

* A search function can return an index when an element is found.

* Returning `-1` is a common way to indicate that an element was not found.

* Frequency counting means counting how many times a value occurs.

* A counter usually starts at `0` and is increased using `count++`.

* Arrays can be reversed by swapping elements from the two ends.

* `std::swap()` can be used to exchange two values.

* Strings are sequences of characters.

* `std::string` is used to store strings in C++.

* A `char` stores a single character, while `std::string` stores multiple characters.

* `std::cin >> string` normally reads one word.

* `std::getline()` reads a complete line, including spaces.

* `string.length()` returns the number of characters in a string.

* `string.size()` also returns the number of characters in a `std::string`.

* String indexing starts from `0`, just like arrays.

* `string[0]` accesses the first character.

* `string[string.length() - 1]` accesses the last character.

* Strings can be traversed using a loop.

* Individual characters in a `std::string` can be changed using indexing.

* Strings can be compared using `==` and `!=`.

* String comparison is case-sensitive.

* String problems can be solved using loops, conditions, counters, and functions.

* Vowels, digits, uppercase letters, and lowercase letters can be counted using character conditions.

* A string can be reversed by traversing from the last index to the first index.

* A palindrome reads the same from left to right and right to left.

* The two-pointer technique uses a `left` pointer and a `right` pointer to process data from both ends.

* Functions, arrays, strings, loops, and conditions together form an important foundation for DSA.

* **The most important Day 2 habit is to understand the pattern behind a problem instead of memorizing the code.**
