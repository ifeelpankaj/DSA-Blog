# Bubble Sort

## Overview

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. The algorithm has a time complexity of O(n^2) in the worst case, where n is the number of elements in the array.

## Algorithm Description

1. **Start iterating through the array from the end to the start.**
2. **In each iteration, compare adjacent elements and swap them if they are in the wrong order.**
3. **Repeat this process until the entire array is sorted.**
4. **Optimization: If no swaps are made in an iteration, the array is already sorted, and the algorithm can break out of the loop.**

## Pseudocode

```cpp
for i = n-1 to 0:
    didSwap = 0
    for j = 0 to i-1:
        if arr[j] > arr[j+1]:
            swap(arr[j], arr[j+1])
            didSwap = 1
    if didSwap == 0:
        break
```

## Time Complexity

The time complexity of Bubble Sort is O(n^2) in the worst case, where n is the number of elements in the array. This is because, in the worst case, the algorithm performs n iterations for the outer loop, and for each iteration, it performs n - i comparisons for the inner loop, where i is the current iteration of the outer loop.

## Example

Consider the array: {12, 3, 16, 2, 10}

### Step 1
- Array: 12 3 16 2 10
- Compare and swap: 3 12 2 10 16

### Step 2
- Array: 3 12 2 10 16
- Compare and swap: 3 2 10 12 16

### Step 3
- Array: 3 2 10 12 16
- Compare and swap: 2 3 10 12 16

### Step 4
- Array: 2 3 10 12 16
- No swaps needed, array is already sorted

### Sorted Array
- Array: 2 3 10 12 16

## Usage

To use the Bubble Sort algorithm, implement the provided pseudocode in your preferred programming language.

## Note

Bubble Sort is not the most efficient sorting algorithm, especially for large datasets, but it is simple to understand and implement.

---
