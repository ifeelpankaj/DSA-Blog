# Convert Array to LinkList

## Array to Singly Linked List

```cpp
#include <iostream>

// Node structure for the linked list
class Node
{
    /* data */

    public:  //access Modifier
    int data; // the data value
    Node* next; // the pointer to the next value
    
    //Constructors
    
    Node(int value,Node*nextptr)  
    {
        data = value; // Initialize data with the provided value
        next = nextptr; // Initialize next with the provided value
    }
    Node(int value) 
    {
        data = value; // Initialize data with the provided value
        next = nullptr; // Initialize next as null since it's the end of the list
    }

};  

// Function to convert an array to a linked list
Node* arrayToLinkedList(vector <int> arr, int size) {
    // Head of the linked list
    Node* head = nullptr;
    // Pointer to the current node
    Node* current = nullptr;

    // Iterate through the array
    for (int i = 0; i < size; ++i) {
        // Create a new node with the current array element
        Node* newNode = new Node(arr[i]);

        // If it's the first node, set it as the head
        if (head == nullptr) {
            head = newNode;
            current = newNode;
        } else {
            // Otherwise, link it to the current node and move the current pointer
            current->next = newNode;
            current = newNode;
        }
    }

    return head;
}

Node * arrayToLinkedList(vector<int>arr){
    // Size of an Array
    int size = arr.size();
    // Head of the linked list
    Node* head = new Node(arr[0]);
    // Pointer to the current node this will create a Link pointing to next element
    Node* mover = head;

    // Iterate through the array
    for (int i = 1; i < size ; i++)
    {
        // Create a new node with the current array element
        Node* temp = new Node(arr[i]);
        // link it to the current node
        mover->next =temp;
        // Moving the current pointer
        mover = temp;
    }
    return head;
    
}


// Function to print the linked list
void printLinkedList(Node* head) {
    while(head !=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}

// Main function for testing
int main() {
    vector<int> arr = {10, 20, 30, 40, 50};

    // Convert array to linked list
    Node* linkedList = arrayToLinkedList(arr);

    // Print the linked list
    std::cout << "Linked List: ";
    printLinkedList(linkedList);

    return 0;
}
```


### Example Vector:

```cpp
vector<int> arr = {10, 20, 30, 40, 50};
```

### Dry Run:

1. **Initialization:**
   - `size` is set to the size of the vector (`5`).
   - `head` is created with the value of the first element of the vector (`10`).
   - `mover` is initialized and set to `head`.

   ```
   size = 5
   head = Node(10) --> nullptr
   mover = head
   ```

2. **Iteration (i = 1):**
   - A new node `temp` is created with the value `20`.
   - The `next` pointer of `mover` (which is currently `head`) is set to `temp`.
   - `mover` is moved to the newly created node `temp`.

   ```
   Linked List: 10 --> 20 --> nullptr
   mover = temp
   ```

3. **Iteration (i = 2):**
   - A new node `temp` is created with the value `30`.
   - The `next` pointer of `mover` is set to `temp`.
   - `mover` is moved to the newly created node `temp`.

   ```
   Linked List: 10 --> 20 --> 30 --> nullptr
   mover = temp
   ```

4. **Iteration (i = 3):**
   - A new node `temp` is created with the value `40`.
   - The `next` pointer of `mover` is set to `temp`.
   - `mover` is moved to the newly created node `temp`.

   ```
   Linked List: 10 --> 20 --> 30 --> 40 --> nullptr
   mover = temp
   ```

5. **Iteration (i = 4):**
   - A new node `temp` is created with the value `50`.
   - The `next` pointer of `mover` is set to `temp`.
   - `mover` is moved to the newly created node `temp`.

   ```
   Linked List: 10 --> 20 --> 30 --> 40 --> 50 --> nullptr
   mover = temp
   ```

6. **Return:**
   - The head of the linked list (`10`) is returned.

### Final Linked List:
```
Linked List: 10 --> 20 --> 30 --> 40 --> 50 --> nullptr
```

This dry run demonstrates how the `arrayToLinkedList` function converts a vector into a linked list by iterating through the elements of the vector and creating nodes for each element in the linked list.

### Explanation:

1. **Node Structure:** Defines a simple structure for a linked list node, containing an integer data value and a pointer to the next node.

2. **arrayToLinkedList Function:**
    - Initializes `head` and `mover` pointers to `nullptr`.
    - Iterates through the array and creates a new node for each element.
    - If it's the first node, sets it as the head; otherwise, links it to the current node.
    - Returns the head of the linked list.

3. **printLinkedList Function:** Prints the elements of the linked list.

4. **Main Function:**
    - Creates an array.
    - Calls `arrayToLinkedList` to convert the array to a linked list.
    - Calls `printLinkedList` to print the linked list.

Certainly, let's go through a dry run of the provided C++ code with a sample input array [1, 2, 3, 4, 5].

<a name="arrToDll">
</a>
## Array to doubly link List

```cpp
class Node{
    public:
    
    int data;
    Node*perv;
    Node*next;

    Node(int value,Node*prevptr,Node*nextptr){
        data = value;
        prev = prevptr;
        next =nextptr;
    }

    Node(int value){
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

Node*arrtoDll(vector<int>&arr){

    int n =  arr.size();

    if(n == 0){
        return nullptr;
    }

    Node*head = new Node(arr[0]);

    Node*back = head;

    for(int i =1;i<n;i++){
        Node*newNode = new Node(arr[i]);

        newNode->prev = back;

        back->next = newNode;

        back = newNode;
    }
    return head;
}

void printDll(Node*head){

    while(head !=Null){
        cout<<head->data;
        head=head->next;
    }
}

int main(){
    vector<int> arr = {1 ,11,12,20};

    Node*head = arrtoDll(arr);

    printDll(head);

}
```

### Example Vector:

```cpp
vector<int> arr = {1,11,12,20};
```

### Dry Run:

1. **Initialization:**
   - `size` is set to the size of the vector (`4`).
   - `head` is created with the value of the first element of the vector (`1`).
   - `back` is initialized and set to `head`.

   ```
   size = 5
   head = Node(1) --> nullptr
   back = head
   ```

2. **Iteration (i = 1):**
   - A new node `newNode` is created with the value `11`.
   - The `prev` pointer of `newNode` (which is currently `nullptr`) is set to `back` ie. (`head`).
   - The `next` pointer of `back` (which is currently `nullptr`) is set to `newNode`.

   ```
   Linked List: 1 ⇌ 11 --> nullptr
  
   back = newNode;
   ```
3. **Iteration (i = 2):**
   - A new node `newNode` is created with the value `12`.
   - The `prev` pointer of `newNode` (which is currently `nullptr`) is set to `back` ie. (`11`).
   - The `next` pointer of `back` (which is currently `nullptr`) is set to `newNode` ie. (`12`).

   ```
   Linked List: 1 ⇌ 11 ⇌ 12 --> nullptr
  
   back = newNode;
   ```

4. **Iteration (i = 3):**
   - A new node `newNode` is created with the value `20`.
   - The `prev` pointer of `newNode` (which is currently `nullptr`) is set to `back` ie. (`12`).
   - The `next` pointer of `back` (which is currently `nullptr`) is set to `newNode` ie. (`20`).

   ```
   Linked List: 1 ⇌ 11 ⇌ 12 ⇌ 20 --> nullptr
  
   back = newNode;
   ```   

5. **Return:**
   - The head of the linked list (`1`) is returned.

### Final Linked List:

```
Linked List: 1 ⇌ 11 ⇌ 12 ⇌ 20 --> nullptr
```

### Explanation:

1. **Node Structure:** Defines a simple structure for a linked list node, containing an integer data value and a pointer to the next and prev node.

2. **arrayToDll Function:**
- Initializes `head` and `back` pointers to `nullptr`.
- Iterates through the array and creates a new node for each element.
- Link `prev` and `next` pointer of `newNode`.
- Returns the head of the linked list.