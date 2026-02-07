Documentation - Reverse Traversal in Linked List

(a) Data Structures Defined

Node structure:
struct node {
    int data;
    struct node *next;
};

data - Stores integer value
next - Pointer to next node in the list

Global pointer:
struct node *head = NULL;

head - Points to first node of linked list, NULL means empty list


(b) Functions Implemented

insert(int value)
Purpose: Adds new node at beginning of linked list
Creates new node using malloc
Stores value in new node
Makes new node point to current head
Updates head to point to new node

display()
Purpose: Shows all elements of linked list in normal order
Uses temporary pointer to traverse from head to end
Prints each node's data
Stops when NULL is reached

reversetraversal(struct node *temp)
Purpose: Prints linked list in reverse order using recursion
Base case: if node is NULL, return
Recursive case: first call function for next node, then print current node data
Uses recursion stack to print elements in reverse


(c) Main Method Organization

1. Declare variables for number of elements and values
2. Ask user how many elements to insert
3. Use loop to take input values
4. Call insert() for each value to add to list
5. Call display() to show list in normal order
6. Call reversetraversal() with head to show list in reverse
7. Print newline for formatting


(d) Sample Output
1)
<img width="509" height="251" alt="Screenshot 2026-02-07 223421" src="https://github.com/user-attachments/assets/6483e7e8-2887-4f77-8069-b92525e1e8d6" />

