
# Removing Duplicates from a Sorted Array - README.md

## Overview

The goal is to remove duplicates from a sorted array using a 2-pointer approach. The approach involves initializing two pointers (`i` and `j`) and iterating through the array. If adjacent elements are equal, the `j` pointer moves forward; otherwise, the `i` pointer is incremented, and the unique element is stored.

## Algorithm Description

1. **Initialize two pointers (`i` and `j`).**
   - Start with `i = 0` and `j = 1`.

```cpp
int i = 0;
```

2. **Iterate through the array using the `j` pointer.**
   - If `arr[i]` is not equal to `arr[j]`, increment `i` and store `arr[j]` at the new position.

```cpp
for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
        i++;
        arr[i] = arr[j];
    }
}
```

## Time Complexity

The time complexity of removing duplicates using this 2-pointer approach is O(n), where n is the number of elements in the array. The algorithm iterates through the array once.

## Usage

To remove duplicates from a sorted array, use the provided 2-pointer approach by initializing pointers and iterating through the array.

## Example

Consider the sorted array: [1, 1, 2, 2, 3, 4, 4, 4, 5]

```cpp
int i = 0;

for (int j = 1; j < 9; j++) {
    if (arr[i] != arr[j]) {
        i++;
        arr[i] = arr[j];
    }
}

// At this point, the unique elements are stored at the beginning of the array
```
Certainly! Let's go through a detailed dry run of the 2-pointer approach to remove duplicates from a sorted array using the example array: [1, 1, 2, 2, 3, 4, 4, 4, 5].

### Initial State:

- Array: [1, 1, 2, 2, 3, 4, 4, 4, 5]
- `i` (first pointer) is initialized to 0.
- `j` (second pointer) starts from 1.

### Dry Run:

1. **First Iteration (j = 1):**
   - Compare `arr[i]` (1) with `arr[j]` (1). They are equal.
   - Move `j` forward.

   Array: [1, 1, 2, 2, 3, 4, 4, 4, 5]
   `i`: 0, `j`: 1

2. **Second Iteration (j = 2):**
   - Compare `arr[i]` (1) with `arr[j]` (2). They are not equal.
   - Increment `i` to 1.
   - Set `arr[i]` to `arr[j]` (2).

   Array: [1, 2, 2, 2, 3, 4, 4, 4, 5]
   `i`: 1, `j`: 2

3. **Third Iteration (j = 3):**
   - Compare `arr[i]` (2) with `arr[j]` (2). They are equal.
   - Move `j` forward.

   Array: [1, 2, 2, 2, 3, 4, 4, 4, 5]
   `i`: 1, `j`: 3

4. **Fourth Iteration (j = 4):**
   - Compare `arr[i]` (2) with `arr[j]` (3). They are not equal.
   - Increment `i` to 2.
   - Set `arr[i]` to `arr[j]` (3).

   Array: [1, 2, 3, 2, 3, 4, 4, 4, 5]
   `i`: 2, `j`: 4

5. **Fifth Iteration (j = 5):**
   - Compare `arr[i]` (3) with `arr[j]` (4). They are not equal.
   - Increment `i` to 3.
   - Set `arr[i]` to `arr[j]` (4).

   Array: [1, 2, 3, 4, 3, 4, 4, 4, 5]
   `i`: 3, `j`: 5

6. **Sixth Iteration (j = 6):**
   - Compare `arr[i]` (4) with `arr[j]` (4). They are equal.
   - Move `j` forward.

   Array: [1, 2, 3, 4, 3, 4, 4, 4, 5]
   `i`: 3, `j`: 6

7. **Seventh Iteration (j = 7):**
   - Compare `arr[i]` (4) with `arr[j]` (4). They are equal.
   - Move `j` forward.

   Array: [1, 2, 3, 4, 3, 4, 4, 4, 5]
   `i`: 3, `j`: 7

8. **Eighth Iteration (j = 8):**
   - Compare `arr[i]` (4) with `arr[j]` (5). They are not equal.
   - Increment `i` to 4.
   - Set `arr[i]` to `arr[j]` (5).

   Array: [1, 2, 3, 4, 5, 4, 4, 4, 5]
   `i`: 4, `j`: 8

### Final State:

- Array: [1, 2, 3, 4, 5, 4, 4, 4, 5]
- The unique elements are now at the beginning of the array, and `i` points to the last unique element.

This completes the 2-pointer approach to removing duplicates with the given dry run.
## Note

This 2-pointer approach efficiently removes duplicates from a sorted array by iterating through the array once. Adjustments can be made based on specific project needs.

---
