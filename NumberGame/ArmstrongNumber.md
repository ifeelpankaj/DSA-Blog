# Armstrong Number Checking Algorithm

## Overview

This algorithm determines whether a given integer is an Armstrong number. An Armstrong number (also known as a narcissistic number, pluperfect digital invariant, or pluperfect number) is a number that is the sum of its own digits each raised to the power of the number of digits. The implementation is provided in C++.

## Algorithm Description

The algorithm follows these steps:

1. **Count the number of digits in the given integer `n`.**

2. **Calculate the sum of each digit raised to the power of the number of digits.**

3. **Check if the calculated sum is equal to the original number `n`.**
    - If equal, return `true`, indicating that `n` is an Armstrong number.
    - If not equal, return `false`.

## Code Implementation

The algorithm is implemented in C++ as follows:

```cpp
#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int n) {
    int originalNum = n;
    int count = 0;
    int sum = 0;

    // Count the number of digits
    while (n != 0) {
        n /= 10;
        count++;
    }

    // Reset n to the original number
    n = originalNum;

    // Calculate the sum of each digit raised to the power of the number of digits
    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, count);
        n /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == originalNum);
}
```

## Example

For instance, if `n` is 153, the algorithm will perform the following calculations:

- Count digits: 3 digits
- Calculate sum: \(1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153\)

Since the sum is equal to the original number, the function returns `true`, indicating that 153 is an Armstrong number.

## Usage

To use the provided function, call `isArmstrong` with an integer argument:
```cpp
int main()
{
    int n1 = 153;
    if (isArmstrong(n1))
    {
        cout << "Yes, it is an Armstrong Number\n";
    }
    else
    {
        cout << "No, it is not an Armstrong Number\n";
    }
    return 0;
}
```
