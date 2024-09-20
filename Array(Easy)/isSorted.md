# Checking if an Array is Sorted 

## Overview

The goal is to determine whether an array is sorted in ascending order. The approach involves iterating through the array and checking if each element is less than or equal to the next element. If this condition holds true for all elements, the array is considered sorted.

## Algorithm Description

1. **Iterate through the array and check if each element is less than or equal to the next element.**
   - Start from the first element and compare it with the next element.
   - If the current element is greater than the next element, the array is not sorted.

```cpp
bool isSorted = true;

for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
        isSorted = false;
        break;
    }
}
```

## Time Complexity

The time complexity of checking if an array is sorted using this approach is O(n), where n is the number of elements in the array. The algorithm iterates through the array once.

## Usage

To check if an array is sorted, use the provided approach by iterating through the array and verifying the sorting condition.

## Example

Consider the array: [3, 5, 8, 12, 18]

```cpp
bool isSorted = true;

for (int i = 0; i < 4; i++) {
    if (arr[i] > arr[i + 1]) {
        isSorted = false;
        break;
    }
}

// At this point, 'isSorted' is true
```

## Note

This approach efficiently checks if an array is sorted by iterating through the array once and comparing adjacent elements. Adjustments can be made based on specific project needs.

---
