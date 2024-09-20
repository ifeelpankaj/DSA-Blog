# C++ STL Reference Guide


## Vector Array Operations

### Defining Vector Array

```cpp
vector<int> myArray;
```

### Inserting Elements in Vector Array

```cpp
for (int i = 0; i < myArray.size(); i++) {
    int element;
    cin >> element;
    myArray.push_back(element);
}
```

### Iterating the Vector Array

```cpp
for (auto it : myArray) {
    cout << it << " ";
}
```

### Passing Vector Array to a Function

#### Without Modifying Original Array

```cpp
void f(vector<int> Arr) {
    sort(Arr.begin(), Arr.end(), greater<int>());
    for (auto it : Arr) {
        cout << it << " ";
    }
}
```

#### Modifying Original Array

```cpp
void f(vector<int> &Arr) {
    sort(Arr.begin(), Arr.end(), greater<int>());
    for (auto it : Arr) {
        cout << it << " ";
    }
}
```

### Accessing Vector Array Elements by Index

```cpp
int firstElement = myArray[0];
int secondElement = myArray.at(1);
```

### Inserting Specific Element at Specific Index

```cpp
myArray.insert(myArray.begin() + 2, 15);
myArray.insert(myArray.end() + 2, 11);
```

### Sorting Vector Array

#### Ascending Order

```cpp
sort(myArray.begin(), myArray.end());
```

#### Descending Order

```cpp
sort(myArray.begin(), myArray.end(), greater<int>());
```

### Finding Permutation for String

```cpp
do {
    cout << p << endl;
} while (next_permutation(p.begin(), p.end()));
```

Feel free to customize this template to fit your project's needs.

## `unordered_map`

`unordered_map` is an associative container that stores key-value pairs. It provides fast retrieval of values based on keys. The elements are not stored in a specific order.

```cpp
unordered_map<string, int> myUnorderedMap;
```

### Example:

```cpp
myUnorderedMap["one"] = 1;
myUnorderedMap["two"] = 2;
myUnorderedMap["three"] = 3;
```

## `map`

`map` is an associative container similar to `unordered_map`, but it stores elements in sorted order based on keys.

```cpp
map<string, int> myMap;
```

### Example:

```cpp
myMap["one"] = 1;
myMap["two"] = 2;
myMap["three"] = 3;
```

## `set`

`set` is a container that stores unique elements in sorted order. Duplicate elements are not allowed.

```cpp
set<int> mySet;
```

### Example:

```cpp
mySet.insert(3);
mySet.insert(1);
mySet.insert(2);
```

