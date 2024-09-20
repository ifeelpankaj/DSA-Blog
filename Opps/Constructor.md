# Constructors and Operators in C++

## Constructor

In C++, a constructor is a special member function with the same name as the class. It is automatically invoked when an object is created. The constructor initializes the object's properties, and there are two types:

### Default Constructor

```cpp
class Product {
    int id;

public:
    string name;
    int price;

    Product() {
        cout << "Default constructor is being called" << endl;
    }

    // ...
};
```

### Parameterized Constructor

```cpp
class Product {
    int id;

public:
    string name;
    int price;

    Product(int i, string a, int p) {
        cout << "Parameterized constructor is being called" << endl;
        id = i;
        name = a;
        price = p;
    }

    // ...
};
```

## `this` Keyword

The `this` keyword is a pointer that refers to the current object. It is often used in constructors to distinguish between class members and parameters with the same name.

```cpp
Product(int id, string name, int p) {
    this->id = id;
    this->name = name;
    price = p;
}
```

## Copy Constructor

A copy constructor creates a new object as a copy of an existing object.

```cpp
Product p1(1001, "Laptop", 43500);
Product p2(p1); // Copy constructor
```

## Copy Assignment Operator

The copy assignment operator assigns the value of one object to another.

```cpp
Product p1(1001, "Laptop", 43500);
Product p11(1002, "MacBook", 110000);
Product *p12 = new Product(1003, "LCD", 32000);
p1 = *p12; // Copy assignment operator
```

## Reference Operator

The reference operator (`&`) is used to create a reference variable, allowing multiple names to refer to the same memory location. It is commonly used to avoid unnecessary copying of large data structures.

Example:

```cpp
int main() {
    int x = 10;
    int &y = x; // y is a reference to x

    cout << "x: " << x << endl; // Output: 10
    cout << "y: " << y << endl; // Output: 10

    y = 20;

    cout << "x: " << x << endl; // Output: 20
    cout << "y: " << y << endl; // Output: 20

    return 0;
}
```

This example demonstrates that changing the value of `y` also changes the value of `x` because they share the same memory location.