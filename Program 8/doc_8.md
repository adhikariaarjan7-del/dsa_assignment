Documentation: Sorting Algorithms Comparison
Program Overview
This program implements four different sorting algorithms (Bubble Sort, Selection Sort, Insertion Sort, and Merge Sort) and allows users to sort randomly generated numbers while tracking the number of comparisons and swaps performed.

Data Structures
1. Array (arr[n])

Stores the elements to be sorted
Size is determined by user input at runtime

2. Original Array (original[n])

Stores a copy of the original unsorted array
Used for reference purposes

3. Global Counters

comparisons - tracks total number of element comparisons
swaps - tracks total number of swap operations


Functions
**1. swap(int a, int b)
Swaps two integer values and increments swap counter.
Parameters:

a - pointer to first integer
b - pointer to second integer

Uses a temporary variable to exchange values and increments the global swaps counter.
2. bubblesort(int arr[], int n)
Implements Bubble Sort algorithm.
Parameters:

arr[] - array to be sorted
n - number of elements

Repeatedly compares adjacent elements and swaps them if they are in wrong order. Continues until array is sorted.
3. selectionsort(int arr[], int n)
Implements Selection Sort algorithm.
Parameters:

arr[] - array to be sorted
n - number of elements

Finds the minimum element from unsorted portion and places it at the beginning. Repeats for remaining unsorted portion.
4. insertionsort(int arr[], int n)
Implements Insertion Sort algorithm.
Parameters:

arr[] - array to be sorted
n - number of elements

Builds sorted array one element at a time by inserting each element into its correct position.
5. merge(int arr[], int left, int mid, int right)
Merges two sorted subarrays into one sorted array.
Parameters:

arr[] - array containing subarrays
left - starting index of left subarray
mid - ending index of left subarray
right - ending index of right subarray

Creates temporary arrays and merges them back in sorted order.
6. mergesorthelper(int arr[], int left, int right)
Recursive helper function for merge sort.
Parameters:

arr[] - array to be sorted
left - starting index
right - ending index

Divides array into halves recursively and merges them back.
7. mergesort(int arr[], int n)
Wrapper function for merge sort.
Parameters:

arr[] - array to be sorted
n - number of elements

Calls mergesorthelper with initial parameters.
8. printarray(int arr[], int n)
Prints all elements of an array.
Parameters:

arr[] - array to print
n - number of elements


Main Method Organization
1. Variable Declaration

Declare variables for array size, arrays, and user choice

2. Input Phase

Read number of elements from user
Generate random numbers between 1 and 1000
Store copy in original array

3. Display Phase

Display unsorted array
Show menu of sorting algorithms
Read user's choice

4. Processing Phase

Reset comparison and swap counters
Execute selected sorting algorithm
Track comparisons and swaps

5. Output Phase

Display sorted array
Show total comparisons and swaps (except swaps for merge sort)

Output sample

1)  <img width="311" height="273" alt="image" src="https://github.com/user-attachments/assets/bdd35d11-f7ee-4083-aa15-6db1c3554e79" />
2)  <img width="881" height="545" alt="Screenshot 2026-02-08 235306" src="https://github.com/user-attachments/assets/bd849e89-eacf-42f9-8654-feb1f6699229" />

