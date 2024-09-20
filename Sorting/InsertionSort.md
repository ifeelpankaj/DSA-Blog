
## Insertion Sort Algorithm Description

### Overview

Insertion Sort is a straightforward sorting algorithm that builds the final sorted array one element at a time. It is efficient for small datasets or partially sorted datasets but may not be the best choice for large datasets. The algorithm iterates through the array, selecting an element in each iteration, and places it in its correct position in the sorted part of the array.

### Detailed Steps

1. **Start with the first element (index 0) as the sorted part of the array.**
   - Initially, the sorted part consists of only one element.

2. **Iterate through the unsorted part of the array (starting from index 1).**
   - In each iteration, select the current element as the key to be inserted into the sorted part.

3. **Compare the key with the elements in the sorted part.**
   - While the key is smaller than the elements in the sorted part and there are still elements to the left, shift the elements to the right.

4. **Insert the key into its correct position in the sorted part.**
   - Once a smaller element is found or the beginning of the array is reached, insert the key in the correct position.

5. **Repeat the process until the entire array is sorted.**
   - Continue the iterations until the entire array is sorted.

### Pseudocode

```cpp
for i = 0 to n-1:
    key = arr[i]
    j = i

    while j > 0 and arr[j-1] > key:
        arr[j] = arr[j-1]
        j--

    arr[j] = key
```

### Time Complexity

The time complexity of Insertion Sort is O(n^2) in the worst case, where n is the number of elements in the array. The worst-case scenario occurs when the array is in reverse order, and each element needs to be compared and shifted.

### Space Complexity

Insertion Sort has a space complexity of O(1), as it only requires a constant amount of extra memory for a few variables.

### Usage

Insertion Sort is suitable for small datasets, partially sorted datasets, or when the array is almost sorted. It is easy to implement and stable, preserving the relative order of equal elements.

### Example

Consider the array: [13, 46, 24, 52, 20, 9]

- Iteration 1: [**13**], 46, 24, 52, 20, 9
- Iteration 2: [**13**, **46**], 24, 52, 20, 9
- Iteration 3: [**13**, **24**, **46**], 52, 20, 9
- Iteration 4: [**13**, **24**, **46**, **52**], 20, 9
- Iteration 5: [**13**, **20**, **24**, **46**, **52**], 9
- Iteration 6: [**9**, **13**, **20**, **24**, **46**, **52**]

---

This algorithm description provides a step-by-step explanation of the Insertion Sort algorithm, including its overview, detailed steps, pseudocode, time complexity, space complexity, and usage guidance. Adjustments can be made based on specific project needs.