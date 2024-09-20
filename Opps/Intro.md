
# Introduction to Object-Oriented Programming (OOP) in C++

## Classes and Objects

In C++, a class is like a template, and objects are instances of that template representing real-world entities. Functions within a class are operations that can be performed on objects.

```cpp
class Product {
    int id;
    int price;
    char name[40];
};
```

### Creating Objects

Objects can be created both statically and dynamically.

```cpp
int main() {
    // Creating objects statically
    Product p1, p2, p3, p4, p5;

    // Creating an object dynamically
    Product *p6 = new Product;
    
    return 0;
}
```

### Assigning Object Properties

Object properties like `id`, `price`, and `name` can be assigned values.

```cpp
int main() {
    Product p1;
    p1.id = "001";
    p1.price = 199;
    p1.name = "Perfume";
    // ...
}
```

## Access Modifiers

Access modifiers determine who can access the properties of a class. There are three types: `public`, `private`, and `protected`.

By default, members of a class are private. To make them accessible outside the class, use the `public` keyword.

```cpp
class Product {
private:
    string id;

public:
    int price;
    string name;
};
```

### Displaying Object Properties

You can create a function within the class to display object properties.

```cpp
class Product {
    // ...

public:
    void display() {
        cout << "-------------------------" << endl;
        cout << id << endl;
        cout << price << endl;
        cout << name << endl;
        cout << "-------------------------" << endl;
    }
};
```

### Getter and Setter Methods

Getter and setter methods can be used to access and modify private members of a class.

```cpp
class Product {
private:
    string id;

public:
    // ...

    string getId() {
        return id;
    }

    void setId(string a, int password) {
        if (password != 12345) {
            cout << "Invalid Password" << endl;
        } else {
            id = a;
        }
    }
};
```

## Practice Example

```cpp
class Login {
    string password;

public:
    string email;

    string getPass() {
        return password;
    }

    void setPassword(string pass) {
        if (pass.length() < 6) {
            cout << "Password must be at least " << 6 - pass.length() << " characters long." << endl;
        } else {
            password = pass;
        }
    }

    void display() {
        cout << "Email: " << email << endl;
        cout << "Password: " << password << endl;
    }
};

int main() {
    Login u1;
    u1.email = "ifeelpankaj@gmail.com";
    u1.setPassword("12345678");

    Login *u2 = new Login;
    u2->email = "hi@gmail.com";
    u2->setPassword("123467");

    u2->display();
    u1.display();

    return 0;
}
```
