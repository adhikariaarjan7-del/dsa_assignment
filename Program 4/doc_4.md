Documentation - Doubly Linked List Implementation

(a) Data Structures Defined

Node structure:
struct node {
    int data;
    struct node *prev;
    struct node *next;
};

data - Stores integer value
prev - Pointer to previous node in the list
next - Pointer to next node in the list

Global pointer:
struct node *head = NULL;

head - Points to first node of doubly linked list, NULL means empty list


(b) Functions Implemented

insert(int value)
Purpose: Adds new node at end of doubly linked list
Creates new node and sets its data
If list is empty, makes it first node
Otherwise, traverses to end and adds node there
Sets both prev and next pointers correctly

insertafter(int key, int value)
Purpose: Inserts new node after a given node value
Searches for node with given key value
Creates new node with given value
Updates prev and next pointers of surrounding nodes
If key not found, prints error message

deletenode(int value)
Purpose: Deletes node with given value from list
Searches for node with given value
Updates prev and next pointers of surrounding nodes
If deleting first node, updates head pointer
Frees memory of deleted node
If value not found, prints error message

display()
Purpose: Shows all elements of doubly linked list
Traverses from head to end using next pointers
Prints each node's data
Stops when NULL is reached


(c) Main Method Organization

1. Create initial list by inserting values 10, 20, 30, 40
2. Display the original list
3. Insert value 25 after node with value 20
4. Display list after insertion
5. Delete node with value 30
6. Display list after deletion


(d) Sample Output

1.<img width="272" height="110" alt="image" src="https://github.com/user-attachments/assets/a7f51f1a-ddf7-4e2f-94e5-d3eefb15b0bd" />
