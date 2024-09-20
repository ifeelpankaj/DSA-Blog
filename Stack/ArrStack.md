
# Stack Implementation using Array

## Overview
This is a simple implementation of a stack data structure using an array in C++. A stack follows the Last In First Out (LIFO) rule, where the last element added is the first one to be removed.

## Class: Stack

### Member Variables
- **arr**: Dynamic array to store elements.
- **top**: Index of the top element in the stack.

### Constructor
```cpp
Stack(int size) {
    arr = new int[size];
    top = -1;
}
```

### Member Functions

#### 1. isEmpty
Check if the stack is empty.
```cpp
bool isEmpty() {
    return top == -1;
}
```

#### 2. push
Add an element to the stack.
```cpp
void push(int data) {
    if (top < size - 1) {  // Check for stack overflow
        top++;
        arr[top] = data;
    } else {
        // Handle stack overflow (optional)
        cout << "Stack Overflow" << endl;
    }
}
```

#### 3. pop
Remove and return the top element from the stack.
```cpp
int pop() {
    if (!isEmpty()) {  // Check for stack underflow
        int data = arr[top];
        top--;
        return data;
    } else {
        // Handle stack underflow (optional)
        cout << "Stack Underflow" << endl;
        return -1;  // Return a default value or throw an exception
    }
}
```

#### 4. peek
Return the top element without removing it.
```cpp
int peek() {
    if (!isEmpty()) {
        return arr[top];
    } else {
        // Handle empty stack (optional)
        cout << "Stack is empty" << endl;
        return -1;  // Return a default value or throw an exception
    }
}
```

#### 5. size
Return the size of the stack.
```cpp
int size() {
    return top + 1;
}
```

### Destructor
Release the dynamically allocated memory when the object is destroyed.
```cpp
~Stack() {
    delete[] arr;
}
```

## Usage
1. Create a stack object by providing the desired size.
```cpp
Stack myStack(10);
```

2. Use the provided functions to manipulate the stack.
```cpp
myStack.push(5);
myStack.push(10);
int topElement = myStack.pop();
int peekElement = myStack.peek();
int stackSize = myStack.size();
```

