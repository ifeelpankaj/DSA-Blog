# Quick Sort 

## Overview

Quick Sort is a widely used, efficient, and in-place sorting algorithm that follows the divide-and-conquer paradigm. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

## Algorithm Description

### Quick Sort

1. **Select a pivot element from the array.**
   - The choice of the pivot can impact the efficiency of the algorithm.
   - Common choices include the first, last, or middle element.

2. **Partition the array into two sub-arrays: elements less than the pivot and elements greater than the pivot.**
   - This is done by rearranging the elements such that elements less than the pivot are on the left, and elements greater than the pivot are on the right.

```cpp
void quick_sort(arr, low, high) {
    if (low < high) {
        int pivot_index = partition(arr, low, high);
        quick_sort(arr, low, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, high);
    }
}
```

### Partition

3. **Partition the array and return the index of the pivot after partitioning.**
   - Use a pivot element to partition the array into two parts.
   - All elements less than the pivot are moved to the left, and all elements greater than the pivot are moved to the right.

```cpp
int partition(arr, low, high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}
```

## Time Complexity

The average and best-case time complexity of Quick Sort is O(n log n). In the worst case, it is O(n^2), but this is rare and can be mitigated by choosing a good pivot strategy.

## Usage

To use the Quick Sort algorithm, call the `quick_sort` function with the array and the indices of the array (`low` and `high`).

## Note

Quick Sort is an efficient and widely used sorting algorithm. It performs well on average and best cases, and its in-place nature makes it suitable for large datasets.

---
