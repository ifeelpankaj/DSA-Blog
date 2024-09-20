
# Prime Number Checking Algorithm

## Overview

This algorithm checks whether a given integer `n` is a prime number. A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers. The implementation is provided in C++.

## Algorithm Description

The algorithm follows these steps:

1. **Iterate through numbers from 2 to the square root of `n` (i = 2 to sqrt(n)):**
    - **If any number `i` evenly divides `n` (i.e., `n % i == 0`), return `false` as `n` is not a prime number.**
    - **If no such `i` is found, return `true`, indicating that `n` is a prime number.**

## Code Implementation

The algorithm is implemented in C++ as follows:

```cpp
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
```

## Example

For instance, if `n` is 11, the algorithm will perform the following iterations:

- Iteration 1: Check if 2 evenly divides 11 (no).
- Iteration 2: Check if 3 evenly divides 11 (no).
- Iteration 3: Check if 4 evenly divides 11 (no).

***In Iteration 4 the condition is not meet so it break and we get the no is not a prime***

Since no divisor is found, the function returns `true`, indicating that 11 is a prime number.

## Usage

To use the provided function, call `isPrime` with an integer argument:

```cpp
bool result = isPrime(11);
// result now contains true, indicating that 11 is a prime number
```

Now to print all the prime no

```cpp
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
```

By this we can check whether the no is prime or not

Then we can create a function which return an array 

```cpp
vector<int> prime_arr(int length){
    // here we can create a array which store all the prime no
    vector<int> primes;
    //then we can take a varible which help us to keep a count 
    int count = 0;
    for(int i =2;count<length;i++){
        if(isPrime(i)){
            primes.push_back(i);
            count++;
        }
    }
    return primes;
}
```

Or we can also use while loop
```cpp
vector<int> prime_no(int length){
    vector<int> prime;
    int count = 0;
    int num = 1;
    while(count<length){
        if(isPrime(num)){
            prime.push_back(num);
            count++;
        }
        num++;
    }
    return prime;
}
```

This function `prime_no` takes an integer `length` as input and returns a vector of prime numbers up to the specified length.

```cpp
// Example usage:
vector<int> primes = prime_no(10); // Get the first 10 prime numbers
for (int prime : primes) {
    cout << prime << " "; // Output: 2 3 5 7 11 13 17 19 23 29
}
```
This function will return the first 10 prime numbers in a vector.


