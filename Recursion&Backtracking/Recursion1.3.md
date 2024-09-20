# Factorial of a Number using Recursion 

## Overview

This algorithm calculates the factorial of a given number using recursion. The factorial of a non-negative integer n, denoted as \(n!\), is the product of all positive integers less than or equal to n. The base case for recursion is \(0! = 1\).

## Algorithm Description

1. **Define the base case: If the given number is 0, return 1 (base case for recursion).**
2. **If the number is greater than 0, recursively calculate the factorial of the number by multiplying it with the factorial of the number reduced by 1.**
3. **Return the calculated factorial.**

## Code Implementation

The algorithm is implemented in C++ as follows:

```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    // Base Case
    if (n == 0 || n == 1) {
        return 1;
    }

    // Recursive case
    return n * factorial(n - 1);
}
```

## Example

For instance, if \(n = 5\), the algorithm will calculate the factorial using the recursive formula: \(5! = 5 \times 4 \times 3 \times 2 \times 1 = 120\).

## Recursive Tree

A simplified recursive tree for calculating the factorial of 5:

```
factorial(5) -> factorial(4) -> factorial(3) -> factorial(2) -> factorial(1) -> (return 1)
                |                 |                 |                 |
                5 * factorial(4)  4 * factorial(3)  3 * factorial(2)  2 * factorial(1)
```

This tree illustrates the sequence of recursive calls and the multiplication of each number in the process.

## Usage

To use the provided function, call `factorial` with the desired value of `n`:

```cpp
int result = factorial(5);
// result now contains the factorial of 5 (120)
```