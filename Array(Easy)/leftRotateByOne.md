
# Left Rotate Array by One Algorithm

```cpp
#include <iostream>

void leftRotateByOne(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

int main() {
    const int size = 5;  // Change the array size as needed
    int arr[size] = {1, 2, 3, 4, 5};  // Initialize the array

    std::cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    leftRotateByOne(arr, size);

    std::cout << "\nArray after Left Rotation by One: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
```

### Algorithm Logic:

1. Store the first element of the array in a temporary variable (`temp`).
2. Shift all elements of the array to the left by one position.
3. Assign the value of `temp` to the last element of the array.

### Dry Run:

Suppose the initial array is [1, 2, 3, 4, 5].

1. `temp = 1`
2. Shift elements: [2, 3, 4, 5, 5]
3. Assign `temp` to the last element: [2, 3, 4, 5, 1]



```markdown
# Left Rotate Array by One

This C++ program demonstrates left rotation of an array by one place.

## How it Works

1. The program initializes an array.
2. It rotates the array to the left by one position.
3. The rotated array is then printed.

## Example
```
Original Array: 1 2 3 4 5
Array after Left Rotation by One: 2 3 4 5 1
```
