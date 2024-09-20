# Merge Sort 

## Overview

Merge Sort is a divide-and-conquer sorting algorithm that divides the input array into two halves, recursively sorts each half, and then merges the sorted halves to produce a sorted array. It is a stable and efficient sorting algorithm with a time complexity of O(n log n) in all cases.

## Algorithm Description

### Merge Sort

1. **Divide the array into two halves.**
   - Calculate the middle index (mid) of the array.
   - Recursively apply merge sort on the left and right halves.

```cpp
void merge_sort(arr, low, high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
```

### Merge

2. **Merge the sorted halves back together.**
   - Compare elements from both halves and merge them into a temporary array.
   - Traverse through the original array (from low to high) and replace elements with the sorted elements from the temporary array.

```cpp
void merge(arr, low, mid, high) {
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}
```

## Time Complexity

The time complexity of Merge Sort is O(n log n) in all cases. This efficiency makes it a suitable choice for large datasets.

## Usage

To use the Merge Sort algorithm, call the `merge_sort` function with the array and the indices of the array (`low` and `high`).

## Note

Merge Sort is a reliable and efficient sorting algorithm. While it may require additional space for the temporary array during the merging phase, it excels in terms of time complexity.

---

