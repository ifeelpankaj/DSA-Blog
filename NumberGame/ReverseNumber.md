# Reverse Number Algorithm

## Overview

This algorithm is designed to reverse a given integer. The process involves extracting each digit from the original number in reverse order and reconstructing the reversed number. The implementation is provided in C++.

## Algorithm Description

The algorithm follows a simple and iterative approach:

1. **Initialize a variable `reverseNum` to 0.** This variable will store the reversed number.

2. **Iterate until the original number `n` becomes 0:**
    - **Extract the last digit (`lastDigit`) of `n` using modulo (`%`).**
    - **Update `reverseNum` by multiplying it by 10 and adding the `lastDigit`.**
    - **Divide `n` by 10 to discard the last digit.**

3. **Return the final reversed number stored in `reverseNum`.**

## Code Implementation

The algorithm is implemented in C++ as follows:

```cpp
int reverseNumber(int n){
    int reverseNum = 0;
    while(n != 0){
        int lastDigit = n % 10;
        reverseNum = (reverseNum * 10) + lastDigit;
        n = n / 10; 
    }
    return reverseNum;
}
```

## Example

For instance, if `n` is 1234, the algorithm will perform the following iterations:

- Iteration 1: `reverseNum = 0 * 10 + 4 = 4, n = 123`
- Iteration 2: `reverseNum = 4 * 10 + 3 = 43, n = 12`
- Iteration 3: `reverseNum = 43 * 10 + 2 = 432, n = 1`
- Iteration 4: `reverseNum = 432 * 10 + 1 = 4321, n = 0`

Thus, the reversed number is 4321.

## Usage

To use the provided function, call `reverseNumber` with an integer argument:

```cpp
int result = reverseNumber(1234);
// result now contains the reversed number
```
