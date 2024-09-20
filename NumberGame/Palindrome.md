# Palindrome Check Algorithm

## Overview

This algorithm determines whether a given integer is a palindrome or not. A palindrome is a number that reads the same backward as forward. The implementation is provided in C++.
For eg. 
- 3,11,1221,39593 are palindrome numbers.

## Algorithm Description

The algorithm follows these steps:

1. **Initialize two variables: `originalNum` and `revNum` to the input number `n`.**
2. **Iteratively reverse the number `n` and store it in `revNum` using the same logic as the reverse number algorithm.**
3. **Compare the reversed number `revNum` with the original number `originalNum`.**
4. **If `revNum` is equal to `originalNum`, the number is a palindrome, and the function returns `true`. Otherwise, it returns `false`.**

## Code Implementation

The algorithm is implemented in C++ as follows:

```cpp
bool isPalindrome(int n){
    int originalNum = n;
    int revNum = 0;
    while(n != 0){
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }
    if(revNum == originalNum) 
        return true;
    else 
        return false; 
}
```

## Example

For instance, if `n` is 121, the algorithm will perform the following iterations:

- Iteration 1: `revNum = 0 * 10 + 1 = 1, n = 12`
- Iteration 2: `revNum = 1 * 10 + 2 = 12, n = 1`
- Iteration 3: `revNum = 12 * 10 + 1 = 121, n = 0`

Thus, the number 121 is a palindrome.

## Usage

To use the provided function, call `isPalindrome` with an integer argument:

```cpp
bool result = isPalindrome(121);
// result now contains true, indicating that 121 is a palindrome
```

Feel free to incorporate this algorithm into your C++ projects to check whether a number is a palindrome or not.

---

This README.md file provides a clear understanding of the algorithm, its implementation, an example of usage, and guidance for incorporating it into C++ projects. Adjustments can be made based on specific project needs.