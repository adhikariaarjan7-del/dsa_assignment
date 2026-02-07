Documentation - Min and Max Heap Implementation

(a) Data Structures Defined

Arrays:
int arr1[n], arr2[n];

arr1[n] - Stores elements for building max heap
arr2[n] - Stores elements for building min heap
Both arrays store same initial unsorted data
n - Number of elements provided by user at runtime


(b) Functions Implemented

swap(int *a, int *b)
Purpose: Swaps two integer values
Uses pointers to swap values
Uses temporary variable for swapping

maxheapify(int arr[], int n, int i)
Purpose: Maintains max heap property for subtree rooted at index i
Finds largest among node and its children
Left child at index 2*i+1, right child at 2*i+2
If largest is not current node, swap and recursively heapify

minheapify(int arr[], int n, int i)
Purpose: Maintains min heap property for subtree rooted at index i
Finds smallest among node and its children
Left child at index 2*i+1, right child at 2*i+2
If smallest is not current node, swap and recursively heapify

buildmaxheap(int arr[], int n)
Purpose: Converts unsorted array into max heap
Starts from last non-leaf node (n/2 - 1)
Calls maxheapify for each node from bottom to top
Max heap property: parent >= children

buildminheap(int arr[], int n)
Purpose: Converts unsorted array into min heap
Starts from last non-leaf node (n/2 - 1)
Calls minheapify for each node from bottom to top
Min heap property: parent <= children

display(int arr[], int n)
Purpose: Prints all elements of array
Uses loop to print each element
Adds newline at end


(c) Main Method Organization

1. Declare variable for number of elements
2. Take number of elements as input from user
3. Declare two arrays of size n
4. Take array elements from user in loop
5. Copy same elements to both arrays
6. Display original unsorted array
7. Build max heap from first array
8. Display max heap
9. Build min heap from second array
10. Display min heap


(d) Sample Output

1) <img width="290" height="184" alt="image" src="https://github.com/user-attachments/assets/597ae391-7191-411b-b33c-177ca5f00e99" />
2) <img width="184" height="96" alt="image" src="https://github.com/user-attachments/assets/89a211a7-64e7-4850-904f-6e898b890d0e" />

 
