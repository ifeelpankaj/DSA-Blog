# Understanding Fundamental Data Types and Control Structures in C++

## 1. Data Types

### 1.1 `int`
An integer data type that stores whole numbers.

### 1.2 `float`
A floating-point data type used for decimal numbers.

### 1.3 `long`
A modifier for int, representing a larger range of integer values.

### 1.4 `long long`
An extended modifier for int, providing an even larger range.

### 1.5 `double`
A floating-point data type with higher precision than float.

### 1.6 `string`
A sequence of characters representing textual data.

### 1.7 `char`
A data type that stores a single character.

### 1.8 `getline`
A function used to read a line of text from an input stream.

## 2. Control Structures

### 2.1 if-else Statement
Conditional statement used for decision-making.

```cpp
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}
```

### 2.2 Nested if-else Statement

Multiple levels of if-else statements.

```cpp
if (condition1) {
    // Code to execute if condition1 is true
    if (condition2) {
        // Code to execute if both condition1 and condition2 are true
    } else {
        // Code to execute if condition1 is true and condition2 is false
    }
} else {
    // Code to execute if condition1 is false
}
```


### 2.3 While Loop
A loop that executes a block of code while a condition is true.

```cpp
while (condition) {
    // Code to repeat as long as the condition is true
}
```

### 2.4 Do-While Loop
Similar to a while loop but guarantees at least one execution of the block.

```cpp
do {
    // Code to repeat at least once
} while (condition);
```
### 3. Switch Statement

A control structure for multi-way branching based on the value of an expression.

```cpp
switch (expression) {
    case value1:
        // Code to execute if expression equals value1
        break;
    case value2:
        // Code to execute if expression equals value2
        break;
    // ... more cases
    default:
        // Code to execute if none of the cases match
}
```

## 4. Arrays and Strings

### 4.1 Arrays
A collection of elements of the same data type.

```cpp
int numbers[5] = {1, 2, 3, 4, 5};
```

### 4.2 Strings
Arrays of characters representing text.

```cpp
char greeting[] = "Hello, World!";
```

## 5. Functions

### 5.1 Function Types

`Void` Function: A function that does not return a value.

```cpp
void printMessage() {
    // Code to execute
}
```
`Return` Function: A function that returns a value.
```cpp
int add(int a, int b) {
    return a + b;
}
```
### 5.2 Parameterized and Non-Parameterized Functions

`Parameterized` Function: A function that takes parameters.

```cpp
void greetUser(string name) {
    cout << "Hello, " << name << "!";
}
```
`Non-Parameterized` Function: A function that does not take parameters.
```cpp
void welcomeMessage() {
    cout << "Welcome to the program!";
}
```

### 5.3 Pass by Reference and Value

**`Pass by Value`**: Passing the value of a variable to a function.

```cpp
void square(int x) {
    x = x * x;
}
```

**`Pass by Reference`**: Passing the reference/address of a variable to a function.

```cpp
void square(int &x) {
    x = x * x;
}
```

