# Adding Two Linked Lists

To add two linked lists, each representing a non-negative integer in reverse order, we can follow a simple algorithm. Let's break down the steps and create a step-by-step explanation:

1. **Initialization:**
   - Create two pointers, `l1` and `l2`, initialized to the heads of the two linked lists.
   - Create a `dummy` node initialized with a value of 0. This dummy node will help simplify the code and handle edge cases.
   - Create a `temp` pointer pointing to the `dummy` node to keep track of the current position in the result linked list.
   - Initialize a variable `carry` to 0 to store the carry during addition.

```cpp
Node* sumlist(Node* head1, Node* head2) {
    Node* l1 = head1;
    Node* l2 = head2;
    Node* dummy = new Node(0);
    Node* temp = dummy;
    int carry = 0;
```

2. **Addition:**
   - Use a `while` loop to iterate through the linked lists or until the carry is zero.
   - Inside the loop, initialize a variable `sum` with the current carry.

```cpp
    while (l1 != nullptr || l2 != nullptr || carry) {
        int sum = carry;
```

3. **Sum Calculation:**
   - Add the values of the current nodes of `l1` and `l2` to the `sum` if they exist.
   - Move `l1` and `l2` to their next nodes.

```cpp
        if (l1 != nullptr) {
            sum += l1->data;
            l1 = l1->next;
        }

        if (l2 != nullptr) {
            sum += l2->data;
            l2 = l2->next;
        }
```

4. **Create New Node:**
   - Create a new `Node` with a value equal to `sum % 10` (to get the last digit of the sum).
   - Update the `temp->next` to point to this new node.
   - Move `temp` to its next node.

```cpp
        Node* node = new Node(sum % 10);
        temp->next = node;
        temp = temp->next;
```

5. **Update Carry:**
   - Update the `carry` to `sum / 10` (to get the carry for the next addition).

```cpp
        carry = sum / 10;
    }
```

6. **Return Result:**
   - Return the `dummy->next`, which is the head of the resulting linked list.

```cpp
    return dummy->next;
}
```

This algorithm efficiently adds two linked lists representing non-negative integers in reverse order. It handles cases where one linked list is shorter than the other or when there is a final carry after all additions.