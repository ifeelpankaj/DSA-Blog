# Reverse a Doubly Linked List

## Brute Force Approach with Stack: Reversing a Doubly Linked List

```cpp
Node* reverseDll(Node* head) {
    Node* temp = head; 
    stack<int> st;

    // Step 1: Push the data of each node onto the stack
    while (temp != NULL) {
        st.push(temp->data);
        temp = temp->next;
    }

    // Step 2: Reset temp to the head for second iteration
    temp = head;

    // Step 3: Pop the stack to replace node data
    while (temp != NULL) {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
}
```

#### Explanation:

1. **Initialization:**
   - Initialize a pointer `temp` to the head of the linked list.
   - Create a stack (`st`) to store the data of each node.

2. **First Iteration: Push Data onto Stack:**
   - Use a `while` loop to traverse the linked list (`temp`).
   - In each iteration, push the data of the current node onto the stack (`st.push(temp->data)`).

3. **Reset Temp Pointer:**
   - Reset `temp` to the head for the second iteration.

4. **Second Iteration: Pop Stack to Replace Data:**
   - Use another `while` loop to traverse the linked list (`temp`).
   - In each iteration, pop the top element from the stack and replace the data of the current node (`temp->data = st.top()`).
   - Pop the stack to move to the next element.

5. **Result:**
   - The doubly linked list now has reversed data.

#### Example:

Consider the initial doubly linked list: `1 <-> 4 <-> 7 <-> 9 <-> 3`

- After the first iteration, the stack contains: `3, 9, 7, 4, 1`
- After the second iteration, the data is replaced, resulting in the reversed list: `3 <-> 9 <-> 7 <-> 4 <-> 1`

This approach uses a stack to store the data of each node during the first iteration and then replaces the data during the second iteration, effectively reversing the doubly linked list.


## Optimal Approach: Reversing a Doubly Linked List

```cpp
Node* reverseDLL(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head; // No change needed for empty or single-node list
    }

    Node* last = NULL;  // Pointer to the previous node
    Node* current = head;  // Pointer to the current node

    // Traverse the linked list and reverse the links
    while (current != NULL) {
        last = current->prev;  // Store a reference to the previous node
        current->prev = current->next;  // Swap the previous and next pointers
        current->next = last;  // Reverse the links
        current = current->prev;  // Move to the next node in the original list
    }

    // The final node in the original list becomes the new head after reversal
    return last->prev;
}
```

#### Explanation:

1. **Base Case Check:**
   - If the list is empty (`head == NULL`) or has only one node (`head->next == NULL`), no change is needed, and we can directly return the head.

2. **Initialization:**
   - Initialize two pointers:
     - `prev`: Initially set to `NULL`, representing the previous node.
     - `current`: Initially set to the head, representing the current node we are processing.

3. **Traverse the List:**
   - Use a `while` loop to traverse the linked list.
   - Inside the loop:
     - Store a reference to the previous node in `prev`.
     - Swap the `prev` and `next` pointers of the current node to reverse the links.
     - Move to the next node in the original list (`current = current->prev`).

4. **Final Result:**
   - After the loop, the `prev` pointer will be pointing to the last node in the original list (now the new head after reversal).
   - Return `prev->prev` as the new head of the reversed doubly linked list.

#### Example:

Consider the initial doubly linked list: `1 <-> 4 <-> 7 <-> 9 <-> 3`

- Initially: `prev = NULL`, `current = 1`
- After the loop: `prev` points to the last node (3), and the list is reversed: `3 <-> 9 <-> 7 <-> 4 <-> 1`

This approach reverses the doubly linked list in-place without using extra space.