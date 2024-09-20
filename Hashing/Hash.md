# Hash Array

Hash Array is a technique used to efficiently count the frequency of elements in an array using hashing. This method involves initializing an array and hashing the elements of the original array based on their values to keep track of their occurrences.

## Implementation

Suppose we have an array with 5 elements: `[1, 1, 2, 2, 5]`, and we want to count the frequency of each element using the Hash Array technique.

1. Initialize a hash array with a size equal to the maximum value in the original array plus one. This is because we are hashing elements according to their values, and we need an index for each possible value.

   ```cpp
   vector<int> hashArr(7, 0);
   ```

   Here, we initialize `hashArr` with a size of 7 and initialize all elements to 0.

2. Iterate through the original array, incrementing the corresponding index in the hash array for each element encountered.

   ```cpp
   for (int i = 0; i < arr.size(); ++i) {
       hashArr[arr[i]]++;
   }
   ```

   This loop iterates through each element of the original array `arr`, and for each element `arr[i]`, it increments the value at index `arr[i]` in the `hashArr`.

3. At the end of this process, the hash array `hashArr` will contain the frequency of each element present in the original array.

## Example

Using the original array `[1, 1, 2, 2, 5]`, let's see how the hash array is populated:

- Iteration 1: `hashArr[1]++`, `hashArr = [0, 1, 0, 0, 0, 0, 0]`
- Iteration 2: `hashArr[1]++`, `hashArr = [0, 2, 0, 0, 0, 0, 0]`
- Iteration 3: `hashArr[2]++`, `hashArr = [0, 2, 1, 0, 0, 0, 0]`
- Iteration 4: `hashArr[2]++`, `hashArr = [0, 2, 2, 0, 0, 0, 0]`
- Iteration 5: `hashArr[5]++`, `hashArr = [0, 2, 2, 0, 0, 1, 0]`

At the end, `hashArr` represents the frequency of each element: `[0, 2, 2, 0, 0, 1, 0]`. This indicates that the value `1` appears twice, `2` appears twice, and `5` appears once in the original array.

Certainly! Below is the content for your updated `README.md` file explaining the concepts of ordered map and unordered map, along with their implementations using C++:

---

# Hashing Arrays and Maps in C++

## Introduction

In scenarios where traditional array-based hashing isn't feasible due to space constraints or the range of values, maps provide a flexible alternative. In C++, maps are implemented using the `std::map` and `std::unordered_map` containers. Before delving into their usage, let's understand their definitions and characteristics.

### Ordered Map (`std::map`)

An ordered map (`std::map`) is an associative container that stores key-value pairs in a sorted order based on the keys. It internally implements a balanced binary search tree (usually red-black tree) to maintain the ordering.

**Time Complexity:**
- Insertion: O(log n)
- Lookup: O(log n)
- Deletion: O(log n)

**Space Complexity:** O(n)

### Unordered Map (`std::unordered_map`)

An unordered map (`std::unordered_map`) is an associative container that stores key-value pairs in an unordered manner based on the hash of the keys. It uses a hash table to provide fast average constant time access to elements.

**Time Complexity:**
- Insertion: O(1) on average
- Lookup: O(1) on average
- Deletion: O(1) on average

**Space Complexity:** O(n)

## Usage

### Declaration

To declare a map in C++, you can use the following syntax:

```cpp
#include <map>
#include <unordered_map>

std::map<DataType, DataType> orderedMap;
std::unordered_map<DataType, DataType> unorderedMap;
```

### Adding Data to Map

You can add key-value pairs to the map using the following syntax:

```cpp
orderedMap["one"] = 1;
orderedMap["two"] = 2;
orderedMap["three"] = 3;
orderedMap["four"] = 4;
```

### Iterating Through Map

To iterate through the elements of the map, you can use a range-based for loop:

```cpp
for (auto it : orderedMap) {
    std::cout << it.first << ": " << it.second << std::endl;
}
```

This will output the key-value pairs in the map.

## Example: Using Maps for Hashing

Suppose we have an array `[1, 2, 3, 4, 500]`, and we want to count the frequency of each element using a map.

```cpp
#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, int> freqMap;

    int arr[] = {1, 2, 3, 4, 500};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; ++i) {
        freqMap[arr[i]]++;
    }

    for (auto it : freqMap) {
        std::cout << "Element: " << it.first << ", Frequency: " << it.second << std::endl;
    }

    return 0;
}
```

This code will output the frequency of each element in the array using an unordered map.

