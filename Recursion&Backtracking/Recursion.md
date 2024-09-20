# Recursion and Stack Overflow

## Recursion

Recursion is a programming phenomenon where a function calls itself until a specified condition is fulfilled. In simpler terms, it's a process in which a function solves a problem by breaking it down into smaller instances of the same problem.

## Stack Overflow in Recursion

In recursion, each function call is stored in a recursion stack, waiting for the completion of the recursive function. A recursive function can only complete if a base condition is met, and control returns to the parent function. However, when there is no base condition, the function is called indefinitely, leading to a Stack Overflow. This occurs when the recursion stack exceeds its memory limit, resulting in a program termination with a Segmentation Fault error.

## Base Condition

The base condition is a crucial aspect of recursion. It is a condition written in a recursive function to ensure it terminates and does not run infinitely. Once the base condition is met, the function stops calling itself and returns to its parent function.

## Example

Consider the following C++ example:

```cpp
#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

void print(){
   
   // Base Condition.
   if(cnt == 3)  return;
   cout << cnt << endl;

   // Count Incremented
   cnt++;
   print();
}

int main(){
    print();
    return 0;
}
```

This example prints numbers until the base condition (`cnt == 3`) is met, preventing infinite recursion.

## Recursive Tree

A recursive tree visually represents the process of recursion, illustrating how functions are called and returned in a series of events. Below is a simplified recursive tree for the above example:

```
print() -> print() -> print() -> print()
           |          |
           2          1
```

This tree shows the sequential calling of the `print()` function until the base condition is reached.
