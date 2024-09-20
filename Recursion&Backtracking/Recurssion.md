
# Recursion, Stack Overflow, Recursion Tree, and Base Case

## Recursion

Recursion is a programming concept where a function calls itself in order to solve a problem. It's a powerful and elegant technique used in many algorithms.

### How Recursion Works

1. **Base Case:** A condition that stops the recursive calls.
2. **Recursive Case:** A condition that allows the function to call itself with modified parameters.

## Stack Overflow

In recursion, it's crucial to have a base case to prevent infinite recursion. If the base case is not defined or not met, the function calls continue indefinitely, leading to a stack overflow.

## Recursion Tree

A recursion tree is a way to visualize the calls made by recursive functions. Each node represents a function call, and branches represent subsequent calls.

### Example Recursion Tree

```
           A
         /   \
        B     B
       / \   / \
      C   C C   C
```

In this tree, function A calls B, which calls C. This pattern continues until the base case is reached.

## Base Case

The base case is the condition that, when met, stops the recursive calls. It ensures that the recursion eventually reaches a conclusion.

### Importance of the Base Case

Without a base case, the recursive function may run indefinitely, leading to a stack overflow and program crash.

```
#include <bits/stdc++.h>
using namespace std;

int ctr = 0 ;
void recursion(){
    if(ctr ==5){
        return;
    }
    cout<<"ctr value :"<<ctr<<endl;
    ctr++;
    recurssion();
}

int main(){

recursion();
  
return 0 ;
}
```

In this example, the base case is `ctr == 5`, which stops the recursion.
