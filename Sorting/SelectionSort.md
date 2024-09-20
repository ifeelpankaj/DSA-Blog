# Selection Sort

## Overview

Selection Sort is a simple sorting algorithm that repeatedly selects the minimum element from an unsorted part of the array and swaps it with the first unsorted element. This process is repeated until the entire array is sorted. The algorithm has a time complexity of O(n^2), where n is the number of elements in the array.

## Algorithm Description

1. **Start iterating through the array.**
2. **In each iteration, find the minimum element in the unsorted part of the array.**
3. **Swap the minimum element with the first unsorted element.**
4. **Repeat the process for the remaining unsorted part of the array.**

## Pseudocode

```cpp
for i = 0 to n-1:
    min_index = i
    for j = i+1 to n:
        if array[j] < array[min_index]:
            min_index = j
    swap(array[min_index], array[i])
```

## Example

Consider the array: {12, 22, 9, 2, 40}

### Step 1
- Array: **2** 22 9 12 40

### Step 2
- Array: **2 9** 22 12 40

### Step 3
- Array: **2 9 12** 22 40

### Step 4
- Array: **2 9 12 22** 40

### Sorted Array
- Array: **2 9 12 22 40**

## Usage

To use the Selection Sort algorithm, implement the provided pseudocode in your preferred programming language. The example provided is in C++:

```cpp
#include <iostream>
using namespace std;

void selectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        swap(array[min_index], array[i]);
    }
}
```
## Time Complexity

The time complexity of Selection Sort is O(n^2), where n is the number of elements in the array. This is because, in the worst case, the algorithm performs n iterations for the outer loop, and for each iteration, it performs n - i comparisons for the inner loop, where i is the current iteration of the outer loop.
 
## Note

Selection Sort is not the most efficient sorting algorithm for large datasets but is simple to understand and implement.


## Rough Work to understand

Selection Sort as a name suggest we have to select minimum

In an array 

13 46 24 52 20 9

First we will select the minimum and then replace it with the fist position

means select minimum and swap

like
```cpp
void selection(<vector<int> & arr){
    

    for(int i = 0;i<arr.size();i++){
        
        int min_index = i;
        for(int j = i;j<n-1;j++){
            if(arr[j]<arr[min]){
                min_index = j;
            }
        }
        swap(arr[min_index],arr[j]);

    }
}
```