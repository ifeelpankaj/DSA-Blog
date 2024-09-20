
# Splitting Strings in C++

In C++, there are different ways to split a string or a character array into individual tokens or words based on a delimiter (such as a space or a comma). This README file covers two approaches: using `strtok` for character arrays and `std::istringstream` for strings.

## 1. Splitting a Character Array Using `strtok`

The `strtok` function from the `<cstring>` header is used to tokenize a character array based on a specified delimiter. Here's an example:

```cpp
#include <iostream>
#include <cstring>

int main() {
    char str[] = "Apple is good for health";
    char* ptr = strtok(str, " ");  // Get the first token

    while (ptr != nullptr) {
        cout << ptr << endl;  // Print the token
        ptr = strtok(nullptr, " ");  // Get the next token
    }

    return 0;
}
```

Output:
```
Apple
is
good
for
health
```

Here's how the code works:

1. We define a character array `str` and initialize it with the string `"Apple is good for health"`.
2. We call `strtok(str, " ")` with the character array `str` and the delimiter `" "` (space) as arguments. This function returns the first token (substring) from the string, which is `"Apple"`.
3. We enter a `while` loop that continues as long as the returned token is not `nullptr` (null pointer).
4. Inside the loop, we print the current token using `std::cout << ptr << std::endl;`.
5. We then call `strtok(nullptr, " ")` to get the next token from the remaining part of the string. The `strtok` function keeps track of the last position it stopped, so we pass `nullptr` as the first argument to continue tokenizing the same string.
6. The loop continues until all tokens have been extracted and printed.

Note that `strtok` modifies the original character array by inserting null characters (`\0`) at the delimiter positions to separate the tokens. Therefore, if you need to preserve the original string, you should make a copy of the character array before calling `strtok`.

## 2. Splitting a String Using `std::istringstream`

For splitting strings, we can use the `std::istringstream` class from the `<sstream>` header. Here's an example:

```cpp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::string str = "Apple is good for health";
    std::istringstream iss(str);
    std::vector<std::string> tokens;
    std::string token;

    while (std::getline(iss, token, ' ')) {
        tokens.push_back(token);
    }

    // Print the tokens
    for (const std::string& tok : tokens) {
        std::cout << tok << std::endl;
    }

    return 0;
}
```

Output:
```
Apple
is
good
for
health
```

Here's how the code works:

1. We define a string `str` and initialize it with the string `"Apple is good for health"`.
2. We create an `std::istringstream` object `iss` and initialize it with the string `str`.
3. We define a vector `tokens` to store the individual tokens.
4. We enter a `while` loop that uses `std::getline` to extract tokens from the `istringstream` object `iss`. The delimiter is specified as `' '` (space).
5. Inside the loop, each extracted token is pushed into the `tokens` vector.
6. After the loop, we iterate over the `tokens` vector and print each token using `std::cout << tok << std::endl;`.

Both approaches effectively split the input string or character array into individual tokens or words based on the specified delimiter (space in the examples above). You can modify the delimiter according to your needs.

If you need to handle additional cases or have any specific requirements, feel free to add them to this README file.
