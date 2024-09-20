# Segregating Even and Odd Numbers in a Linked List

This document explains two methods for segregating even and odd numbers from a given linked list:

**Brute Force Approach:**

1. **Traverse the list:** Iterate through the linked list, storing each node's data in a temporary array.
2. **Sort the array:** Use an appropriate sorting algorithm (e.g., quicksort, merge sort) to arrange the numbers in either ascending or descending order.
3. **Modify the linked list:** Iterate through the linked list again, replacing each node's data with the corresponding value from the sorted array, placing even numbers at even positions and odd numbers at odd positions.

**Visual Representation:**

```
Original Linked List: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10
Temporary Array: [1, 3, 5, 7, 9, 2, 4, 6, 8, 10] (after sorting)
Modified Linked List: 1 -> 3 -> 5 -> 7 -> 9 -> 2 -> 4 -> 6 -> 8 -> 10
```

**Optimized Approach:**

1. **Initialize head nodes:** Create two new pointers, `oddHead` and `evenHead`, to track the start of the even and odd sub-lists, respectively.
2. **Separate even and odd nodes:**
   - Set `oddHead` to the second node (`head->next`) as the first node is always odd.
   - Iterate through the linked list in pairs of nodes (`current` and `next`).
   - Link the `next` node (even) to `evenHead` and update `evenHead`.
   - Link `current` (odd) to the next odd node (if it exists) and update `current`.
3. **Connect the sub-lists:** Attach the tail of the even sub-list to the tail of the odd sub-list.

**Visual Representation:**

```
Original Linked List: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10
Odd Sub-list: 1 -> 3 -> 5 -> 7 -> 9 -> null
Even Sub-list: 2 -> 4 -> 6 -> 8 -> 10 -> null
Final Linked List: 1 -> 3 -> 5 -> 7 -> 9 -> 2 -> 4 -> 6 -> 8 -> 10
```


**Key Differences and Considerations:**

- **Time Complexity:**
   - Brute force: O(n log n) due to sorting.
   - Optimized: O(n) as it traverses the list once.
- **Space Complexity:**
   - Brute force: O(n) for the temporary array.
   - Optimized: O(1) as it uses constant extra space (three pointers).
- **Choice of method:** Use the optimized approach for better performance, especially for larger lists. The brute force approach can be simpler to understand for beginners.

