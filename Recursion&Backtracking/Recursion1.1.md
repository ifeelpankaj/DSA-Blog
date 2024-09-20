# Recursion for Printing Name 

## Overview

This algorithm utilizes recursion to print a given name multiple times. The function `recurssion` takes two parameters, `i` and `n`, and prints the name "Pankaj" until the value of `i` exceeds `n`. The goal is to demonstrate the concept of recursion and provide an understanding of how a recursive tree works.

## Code Implementation

The algorithm is implemented in C++ as follows:

```cpp
#include <iostream>
using namespace std;

void recurssion(int i, int n) {
    // Base Condition: If i exceeds n, return to stop recursion.
    if (i > n) 
        return;

    // Print the name "Pankaj"
    cout << "Pankaj" << endl;

    // Recursive call with incremented i
    recurssion(i + 1, n);
}

int main() {
    // Example: Print the name "Pankaj" until i exceeds 5
    recurssion(1, 5);

    return 0;
}
```

## Recursive Tree

A recursive tree visually represents how the function calls itself in a series of events. Below is a simplified recursive tree for printing the name "Pankaj" until `i` exceeds 5:

```
recurssion(1, 5) -> recurssion(2, 5) -> recurssion(3, 5) -> recurssion(4, 5) -> recurssion(5, 5) -> recurssion(6, 5)
                   |                   |                   |                   |                   |
               Pankaj                Pankaj              Pankaj              Pankaj              Pankaj
```

This tree demonstrates the sequential calling of the `recurssion` function until the base condition (`i > n`) is reached.

## Usage

To use the provided function, call `recurssion` with the starting index `i` and the desired number of repetitions `n`:

```cpp
int main() {
    // Print the name "Pankaj" until i exceeds 5
    recurssion(1, 5);

    return 0;
}
```

