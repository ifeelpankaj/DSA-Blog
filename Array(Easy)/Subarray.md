
# Generating All Possible Subarrays from an Array

In this document, we'll discuss the concept of generating all possible subarrays from a given array. A subarray is a contiguous part of an array. For example, given the array `[1, 2, 3, 4, 5]`, its subarrays are `[1], [1, 2], [1, 2, 3], [1, 2, 3, 4], [1, 2, 3, 4, 5], [2], [2, 3], [2, 3, 4], [2, 3, 4, 5], [3], [3, 4], [3, 4, 5], [4], [4, 5], [5]`.

## Approach

To generate all subarrays, we can use three pointers: `i`, `j`, and `k`.

1. We start with the `i` pointer at index `0`.
2. `j` pointer starts with `i` and goes till the end of the array, one by one.
3. For each `j`, we have a subarray from `i` to `j`.
4. When `j` reaches the end, we move `i` to the next index and repeat steps 2-4.
5. We introduce a `k` pointer that iterates from `i` to `j` for each subarray, printing the elements to get the desired subarrays.

## Code Implementation (C++)

```cpp
#include <iostream>
#include <vector>
using namespace std;

void printSubarrays(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "All possible subarrays:\n";
    printSubarrays(arr);
    return 0;
}
```

Output:
```
All possible subarrays:
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
2 
2 3 
2 3 4 
2 3 4 5 
3 
3 4 
3 4 5 
4 
4 5 
5 
```
