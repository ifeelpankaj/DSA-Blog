# Count Digits in a Number

## Introduction

This document explains a simple C++ function `countDigit` that counts the number of digits in a given integer.

## `countDigit` Function

The `countDigit` function takes an integer as input and returns the count of its digits.

```cpp
int countDigit(int n);
```

## How it Works

The function uses a while loop to repeatedly divide the given number by 10 until it becomes 0. The process is as follows:

1. Initialize a counter variable to 0.
2. Enter a while loop that continues as long as the number is not equal to 0.
3. Inside the loop, divide the number by 10.
4. Increase the counter by 1 for each division.
5. Repeat the process until the number becomes 0.
6. Return the final count.

## Example

Suppose we have the number 1234:

1. 1234 / 10 = 123.4 (stored as 123) → Counter: 1
2. 123 / 10 = 12.3 (stored as 12) → Counter: 2
3. 12 / 10 = 1.2 (stored as 1) → Counter: 3
4. 1 / 10 = 0.1 (stored as 0) → Counter: 4

The function would return 4 as the count of digits.

## Usage

```cpp
#include <bits/stdc++.h>

int count_digits( int n )
{
   int x = n; int count =0;
   while( x !=0 ) 
   {
       x = x / 10;
       count++;
   }
   return count;
}

int main() {
    int number = 1234;
    int result = count_digits(number);

    std::cout << "Number of digits in " << number << " is: " << result << std::endl;

    return 0;
}
```

