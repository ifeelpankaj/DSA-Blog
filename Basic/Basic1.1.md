
## Arrays and Strings

### Arrays
An array is a collection of elements, each identified by an index or a key. In C++, arrays can hold elements of the same data type. They provide a convenient way to store and access multiple values under a single name.

### Strings
A string in C++ is essentially an array of characters, terminated by a null character ('\0'). Strings are commonly used to represent sequences of characters, such as words or sentences.

### Static Array
A static array is an array whose size is fixed at compile-time and cannot be changed during the program's execution. Elements of a static array are stored in contiguous memory locations. Example:

```cpp
int Array[n] = {0, 3, 2, 2, 2, 1, 2};
```

Here, `n` is the size of the array, and elements are initialized during declaration.

### Dynamic Array
A dynamic array is an array whose size can be determined and modified at runtime. In C++, dynamic arrays are implemented using pointers and the `new` keyword. Example:

```cpp
int* Array = new int[size];
```

Here, `size` is not predefined and can be set as needed during program execution. Don't forget to release the allocated memory using `delete[] Array;` when done.

### Pass an Array to a Function
To pass an array to a function, you can do it in two ways:

#### 1. Pass by Size
```cpp
int f(int Array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << Array[i] << " ";
    }
}
```

Here, `n` is the size of the array, and you need to pass it explicitly.

#### 2. Pass by Pointer
```cpp
int f(int* Array, int n) {
    for (int i = 0; i < n; i++) {
        cout << Array[i] << " ";
    }
}
```

By passing a pointer to the array, you avoid explicitly passing the size.

These functions can be called as follows:
```cpp
int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    f(myArray, size);  // Call with size
    f(myArray, size);  // Call with pointer

    return 0;
}
```

Remember that in the pointer approach, you lose the information about the array's size, so it's crucial to pass it separately or use sentinel values to mark the end of the array.
