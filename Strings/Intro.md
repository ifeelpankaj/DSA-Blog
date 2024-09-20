# Understanding Strings in C++

## What is a String?

In C++, a string is a sequence or list of characters stored in an array or an object of the `std::string` class. Strings are used to store and manipulate text data, such as words, sentences, or paragraphs.

### Example 1: Using Character Array
```cpp
char st[] = "pankaj kholiya";
cout << st; // Output: pankaj kholiya
```

In this example, we define a character array `st` and initialize it with the string "pankaj kholiya". When printed, it outputs the entire string.

### Example 2: Using `std::string` Class
```cpp
string st = "pankaj";
cout << st; // Output: pankaj
```

In this example, we use the `std::string` class to define a string `st` and initialize it with the value "pankaj". When printed, it outputs the string.

### Example 3: Repeating Characters in a String
```cpp
string st(5, 'p');
cout << st; // Output: ppppp
```

In this example, we create a string `st` with 5 occurrences of the character 'p'. The output is "ppppp".

### Example 4: Different Ways to Define Strings
```cpp
string s1 = "GeeksforGeeks";
string s2("GeeksforGeeks");
```

Both `s1` and `s2` are valid ways to define a string with the value "GeeksforGeeks".

## Taking String Input in C++

### 1. Using `cin`
```cpp
string str;
cin >> str;
// Input: Hi Bro Hey Bro
// Output: Hi
```

When using `cin` to take string input, it will only read until the first whitespace character (space, tab, newline, etc.). In the example above, only "Hi" is stored in `str`.

### 2. Using `getline`
```cpp
string st;
getline(cin, st);
// Input: Hi Bro Hey Bro
// Output: Hi Bro
```

The `getline` function reads the entire line of input, including whitespace characters, until it encounters a newline character. In the example above, "Hi Bro" is stored in `st`.

## Passing Strings to Functions

```cpp
void passString(string st) {
    cout << st;
}

int main() {
    string myStr = "Hello, World!";
    passString(myStr); // Output: Hello, World!
    return 0;
}
```

In this example, we define a function `passString` that takes a string parameter `st` and prints its value. In the `main` function, we create a string `myStr` and pass it to the `passString` function, resulting in the output "Hello, World!".

## Pointers and Strings

```cpp
string st;
getline(cin, st); // Input: Hello, World!
char* p = &st[3]; // p points to the 4th character ('l')
while (*p != 'y') {
    cout << *p;
    p++;
}
// Output: lo, World
```

