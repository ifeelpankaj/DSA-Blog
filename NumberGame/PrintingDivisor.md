# Divisors Finding Algorithm (Optimal)

## Overview

This algorithm efficiently finds all the divisors of a given integer `n`. The divisors are the positive integers that divide `n` without leaving a remainder. The implementation is provided in C++ using a vector to store the divisors.

## Algorithm Description

The algorithm follows these steps:

1. **Initialize an empty vector `divisors` to store the divisors.**
- *Note* *we can also iterate till end but it will increse time complexity*
2. **Iterate from `1` to the square root of `n`:**
    - **Check if `i` is a divisor of `n` by using the modulo (`%`) operator.**
    - **If `i` is a divisor, add it to the vector `divisors`.**
    - **Additionally, if `i` is not equal to `n / i`, add `n / i` to the vector to cover both divisors.**

3. **Sort the vector `divisors` in ascending order to present the divisors in a structured manner.**

4. **Print or use the divisors as needed.**

5. **Return the vector `divisors`.**

## Code Implementation

The algorithm is implemented in C++ as follows:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> printDivisorsOptimal(int n) {
    vector<int> divisors;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) divisors.push_back(n / i);
        }
    }

    sort(divisors.begin(), divisors.end());

    for (int divisor : divisors) {
        cout << divisor << " ";
    }

    return divisors;
}
```

## Example

1. **Iterate from `1` to the square root of `n` (i = 1 to 3):**
    - **Iteration 1:**
        - Check if 1 is a divisor of 12 (yes). Add 1 to `divisors`.
        - Check if 1 is not equal to `12 / 1` (no).
    - **Iteration 2:**
        - Check if 2 is a divisor of 12 (yes). Add 2 to `divisors`.
        - Check if 2 is not equal to `12 / 2` (yes). Add `12 / 2 = 6` to `divisors`.
    - **Iteration 3:**
        - Check if 3 is a divisor of 12 (yes). Add 3 to `divisors`.
        - Check if 3 is not equal to `12 / 3` (yes). Add `12 / 3 = 4` to `divisors`.

2. **Sort the vector `divisors` in ascending order:**
    - `divisors` now contains [1, 2, 3, 4, 6, 12].

3. **Print the divisors:**
    - Output: `1 2 3 4 6 12`

## Output

The divisors of 12 are [1, 2, 3, 4, 6, 12].

## Usage

To use the provided function, call `printDivisorsOptimal` with an integer argument:

```cpp
vector<int> result = printDivisorsOptimal(12);
// result now contains the vector [1, 2, 3, 4, 6, 12], and it is printed as output
```

