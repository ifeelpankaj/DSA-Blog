# Bit Manipulation Basics

Bit manipulation involves manipulating individual bits within binary numbers using bitwise operators. Understanding these concepts is crucial for low-level programming tasks such as optimizing algorithms, hardware interactions, and cryptography. Let's explore the essential concepts and operations involved:

## Basic Operators:

1. **AND Operator (&):**
   - Performs a bitwise AND operation between two numbers.
   - Result is 1 if both corresponding bits are 1, else 0.
   
   **Example:**  
   ```
   5 & 3 = 1
   ```
   **Explanation:**  
   ```
     0101   (decimal 5)
   & 0011   (decimal 3)
   ------
     0001   (decimal 1)
   ```

2. **OR Operator (|):**
   - Performs a bitwise OR operation between two numbers.
   - Result is 1 if at least one corresponding bit is 1, else 0.
   
   **Example:**  
   ```
   5 | 3 = 7
   ```
   **Explanation:**  
   ```
     0101   (decimal 5)
   | 0011   (decimal 3)
   ------
     0111   (decimal 7)
   ```

3. **XOR Operator (^):**
   - Performs a bitwise XOR (exclusive OR) operation between two numbers.
   - Result is 1 if corresponding bits are different, else 0.
   
   **Example:**  
   ```
   5 ^ 3 = 6
   ```
   **Explanation:**  
   ```
     0101   (decimal 5)
   ^ 0011   (decimal 3)
   ------
     0110   (decimal 6)
   ```

4. **NOT Operator (~):**
   - Performs a bitwise NOT operation, flipping each bit.
   - Converts 0s to 1s and 1s to 0s.
   
   **Example:**  
   ```
   ~5 = -6
   ```
   **Explanation:**  
   ```
   ~00000000 00000000 00000000 00000101 = 11111111 11111111 11111111 11111010
   ```

5. **Left Shift Operator (<<):**
   - Shifts all bits to the left by a specified number of positions.
   - Zeroes are shifted in from the right.
   
   **Example:**  
   ```
   5 << 1 = 10
   ```
   **Explanation:**  
   ```
   0101 << 1 = 1010
   ```

6. **Right Shift Operator (>>):**
   - Shifts all bits to the right by a specified number of positions.
   - For unsigned numbers, zeroes are shifted in from the left.
   - For signed numbers, the leftmost bit (sign bit) is replicated.
   
   **Example:**  
   ```
   5 >> 1 = 2
   ```
   **Explanation:**  
   ```
   0101 >> 1 = 0010
   ```

## Binary Number Conversion:

Understanding binary number conversion is essential for working with bits.

### Decimal to Binary Conversion:

To convert a decimal number to binary:
1. Divide the number by 2 and note down the remainder.
2. Repeat the division until the quotient becomes 0.
3. Arrange the remainders in reverse order to obtain the binary representation.

**Example:**  
```
Convert 13 to binary:
13 / 2 = 6 remainder 1
6 / 2 = 3 remainder 0
3 / 2 = 1 remainder 1
1 / 2 = 0 remainder 1

Binary representation: 1101
```

### Binary to Decimal Conversion:

To convert a binary number to decimal:
1. Multiply each bit of the binary number by powers of 2 (2^0, 2^1, 2^2, ...).
2. Add up the products to get the decimal equivalent.

**Example:**  
```
Convert 1101 to decimal:
(1 * 2^3) + (1 * 2^2) + (0 * 2^1) + (1 * 2^0) = 13
```

## Complement Representation:

1. **One's Complement:**
   - Inverts all bits of a binary number.
   - Obtained by flipping each bit (0 to 1 and 1 to 0).
   
   **Example:**  
   ```
   One's complement of 13 = -14
   ```
   **Explanation:**  
   ```
   1101 -> 0010 (one's complement)
   ```

2. **Two's Complement:**
   - Represents negative numbers in binary form.
   - Obtain by finding the 1's complement and adding 1 to the result.
   
   **Example:**  
   ```
   Two's complement of 13 = -13
   ```
   **Explanation:**  
   ```
   1101 -> 0010 (one's complement) -> 0011 (add 1)

## Provided Programs:

### Program 1: Convert Decimal to Binary

```cpp
#include <iostream>
#include <string>
#include <algorithm>

std::string ConvertToBinary(int num) {
    std::string result = "";
    while (num > 0) {
        result += (num % 2 == 1) ? '1' : '0';
        num = num / 2;
    }
    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    int decimal = 13;
    std::cout << "Binary representation of " << decimal << ": " << ConvertToBinary(decimal) << std::endl;
    return 0;
}
```

### Program 2: Convert Binary to Decimal

```cpp
#include <iostream>
#include <string>

int BinaryToDecimal(std::string binary) {
    int num = 0;
    int power = 1;
    for (int i = binary.size() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            num += power;
        }
        power *= 2;
    }
    return num;
}

int main() {
    std::string binary = "1101";
    std::cout << "Decimal representation of " << binary << ": " << BinaryToDecimal(binary) << std::endl;
    return 0;
}
```
