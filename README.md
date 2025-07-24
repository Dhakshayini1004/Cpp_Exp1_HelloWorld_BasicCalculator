# C++ Experiment 1: Hello World and Calculator Program

---

## Aim

To:
1. Display a simple "Hello, World!" message using a basic C++ program.
2. Create a calculator that performs basic arithmetic operations using user input.

---

## Tool Used

- Visual Studio Code (VS Code)

---

## Objectives

- Understand the structure of a C++ program.
- Learn the use of `#include` to add libraries.
- Use `cin` and `cout` for input and output operations.
- Implement arithmetic operations in C++.
- Understand syntax like `using namespace std;`, function structure, and data types.
- Learn to comment code using `//` for clarity and readability.

---

## Theory

C++ is a general-purpose, high-level programming language that is an extension of the C programming language. It includes object-oriented features, strong type checking, and rich libraries. C++ is widely used for system-level programming, embedded systems, and software development that requires performance and efficiency.

### Why C++ is Better than C

C++ offers multiple advantages over C which makes it more suitable for modern software development:

- C++ supports **Object-Oriented Programming (OOP)**, including classes, objects, inheritance, and polymorphism. This helps in organizing complex programs, reusing code, and simplifying maintenance.
- It has **function overloading** and **operator overloading**, allowing multiple definitions for the same function/operator depending on parameters.
- It provides the **Standard Template Library (STL)**, which includes reusable code like vectors, lists, stacks, queues, maps, and algorithms.
- C++ introduces **stronger type safety**, helping catch more errors during compilation.
- It supports **encapsulation and abstraction**, which hide implementation details and make programs easier to manage.
- Memory management is improved through the use of **constructors, destructors, and RAII (Resource Acquisition Is Initialization)**.
- **Namespaces** help avoid name conflicts in larger programs by grouping functions, classes, and objects logically.

These features make C++ more powerful, scalable, and user-friendly compared to C, especially for large and complex applications.

### Program Structure in C++

- `#include <iostream>` is a preprocessor directive used to include the standard input-output stream library, which provides `cin`, `cout`, and `endl`.
- `using namespace std;` tells the compiler to use the standard C++ library namespace, so we don’t have to prefix `std::` each time.
- `int main()` is the starting point of a C++ program. Every executable C++ program must have a main function.
- `cout` is used to output data to the console, and `cin` is used to take user input.
- Conditional statements like `if` and `else` allow decision making based on specific conditions.
- Arithmetic operators (`+`, `-`, `*`, `/`) are used for basic mathematical calculations.
- Data types like `int`, `float`, and `double` help define what kind of data a variable can hold.
- `return 0;` signals successful termination of the program.
- Comments are written using `//` and are ignored by the compiler. They help explain the logic of the code.

---

## Program Description

### Part 1: Hello World

- This is a simple program that prints “Hello, World!” to the output console. 
- It introduces the basic syntax of a C++ program including headers, main function, and output statement.

### Part 2: Calculator Program

This program allows the user to input two numbers and performs the following operations:
- Addition
- Subtraction
- Multiplication
- Division

The results of each operation are then displayed using the `cout` statement. The program uses basic arithmetic operators and variables to store the results.

---

## Concepts Used

- Header files: `#include <iostream>`
- Namespaces: `using namespace std;`
- Input/Output: `cin`, `cout`
- Functions: `main()`, `return 0;`
- Variables and Data Types: `int`, `float`, `double`
- Operators: `+`, `-`, `*`, `/`
- Conditional Statements: `if`, `else`
- Comments: `//`

---

## Sample Output

```
Hello World
Enter num1 : 22
Enter num_2 : 333
Sum : 355
Difference : -311
Product : 7326
Division : 0.0660661
```

---

## Notes

- Variable names should begin with a letter or underscore. They may contain numbers after the first character.
- `float` provides decimal support, while `double` offers more precision.
- It’s good practice to check for division by zero when performing division.
- Always indent and comment your code for better readability and maintainability.
- To compile and run the program:
  - Use `g++ filename.cpp -o output` in terminal to compile.
  - Run using `./output` (Linux/Mac) or `output.exe` (Windows).
- Use comments to explain key steps in your code, especially in academic or collaborative environments.














