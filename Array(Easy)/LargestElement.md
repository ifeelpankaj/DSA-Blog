# Finding the Largest Element in an Array 

## Overview

The goal is to find the largest element in an array. The approach involves iterating through the array and updating a variable (`largest`) whenever a larger element is encountered.

## Algorithm Description

1. **Initialize a variable (`largest`) with the value of the first element in the array.**
   - This sets the initial reference value for the largest element.

```cpp
int largest = arr[0];
```

2. **Iterate through the array and update the `largest` variable when a larger element is found.**
   - Compare each element in the array with the current value of `largest`.
   - If an element is greater than the current `largest`, update the `largest` variable.

```cpp
for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
        largest = arr[i];
    }
}
```

## Time Complexity

The time complexity of finding the largest element in an array using this approach is O(n), where n is the number of elements in the array. The algorithm iterates through the array once.

## Usage

To find the largest element in an array, use the provided approach by initializing a variable (`largest`) with the first element and iterating through the array to update the variable as needed.

## Example

Consider the array: [10, 5, 25, 8, 15]

```cpp
int largest = arr[0];

for (int i = 0; i < 5; i++) {
    if (arr[i] > largest) {
        largest = arr[i];
    }
}

// At this point, 'largest' contains the value 25
```

## Note

This simple approach efficiently finds the largest element in an array by iterating through the array once and updating a variable. Adjustments can be made based on specific project needs.

---
