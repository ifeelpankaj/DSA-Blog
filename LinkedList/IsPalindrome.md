

# Check if Linked List is Palindrome

This C++ program checks whether a given linked list is a palindrome or not.
I apologize for the oversight. Let me provide another approach that involves using a stack to check if a linked list is a palindrome.

## Approach 1: Using a Stack

```cpp
bool isPalindromeUsingStack(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        // It's a palindrome by definition
        return true;
    }

    std::stack<int> stack;
    Node* slow = head;
    Node* fast = head;

    // Traverse the linked list to find the middle using slow and fast pointers
    while (fast != nullptr && fast->next != nullptr) {
        stack.push(slow->data);
        slow = slow->next;
        fast = fast->next->next;
    }

    // If the length of the linked list is odd, skip the middle element
    if (fast != nullptr) {
        slow = slow->next;
    }

    // Compare the remaining elements with the elements popped from the stack
    while (slow != nullptr) {
        int top = stack.top();
        stack.pop();

        if (slow->data != top) {
            return false;
        }

        slow = slow->next;
    }

    return true;
}
```

### Explanation:

1. **Stack-based Palindrome Checking Function:**
   - The `isPalindromeUsingStack` function uses a stack to store the first half of the linked list.
   - It then compares the second half of the linked list with the elements popped from the stack.
   - If all elements match, the linked list is a palindrome.

### Dry Run:

Consider the linked list: 1 -> 2 -> 3 -> 2 -> 1

1. Find the middle: slow at 3, fast at the end.
2. Push elements 1, 2 onto the stack.
3. Move slow to the second half: 3 -> 2 -> 1
4. Pop elements from the stack and compare with the second half.


## Approach 2:Efficient less time complexity

The approach involves reversing the second half of the linked list and then comparing it with the first half. If the reversed second half matches the first half, the linked list is a palindrome.

```cpp
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

bool isPalindrome(Node* head) {
    // Check if the linked list is empty or has only one node
    if (head == nullptr || head->next == nullptr) {
        // It's a palindrome by definition
        return true; 
    }

    // Initialize two pointers, slow and fast, to find the middle of the linked list
    Node* slow = head;
    Node* fast = head;

    // Traverse the linked list to find the middle using slow and fast pointers
    while (fast->next != nullptr && fast->next->next != nullptr) {
        // Move slow pointer one step at a time
        slow = slow->next;  
        // Move fast pointer two steps at a time
        fast = fast->next->next;  
    }

    // Reverse the second half of the linked list starting from the middle
    Node* newHead = reverseLinkedList(slow->next);

    // Pointers to the first and reversed second halves
    Node* first = head;  
    Node* second = newHead; 

    while (second != nullptr) {
        // Compare data values of nodes from both halves
        if (first->data != second->data) {
            // Reverse the second half back to its original state
            reverseLinkedList(newHead);  
            // Not a palindrome
            return false;
        }

        // Move the first pointer
        first = first->next; 
        // Move the second pointer
        second = second->next;  
    }

    // Reverse the second half back to its original state
    reverseLinkedList(newHead);  
    // The linked list is a palindrome
    return true;  
}
```

## Explanation:

1. **Reverse Linked List Function:**
   - The `reverseLinkedList` function reverses a given linked list.
   - It uses three pointers: `prev`, `current`, and `next` to reverse the direction of pointers.

2. **Palindrome Checking Function:**
   - The `isPalindrome` function first checks if the linked list is empty or has only one node (which is considered a palindrome).
   - It then finds the middle of the linked list using the slow and fast pointers.
   - The second half of the linked list, starting from the middle, is reversed using the `reverseLinkedList` function.
   - The data values of nodes from the first and reversed second halves are compared. If a mismatch is found, the linked list is not a palindrome.
   - Finally, the reversed second half is reversed again to restore the original linked list state.

## Dry Run:

Consider the linked list: 1 -> 2 -> 3 -> 2 -> 1

1. Find the middle: slow at 3, fast at the end.
2. Reverse the second half: 1 -> 2 -> 3 <- 2 <- 1
3. Compare the first and reversed second halves: They match, so it's a palindrome.

## Example:

### Input:
1 -> 2 -> 3 -> 2 -> 1

### Output:
The linked list is a palindrome.
