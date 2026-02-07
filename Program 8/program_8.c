#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparisons = 0;
int swaps = 0;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    swaps++;
}

void bubblesort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void selectionsort(int arr[], int n) {
    int i, j, min;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(&arr[i], &arr[min]);
        }
    }
}

void insertionsort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0) {
            comparisons++;
            if (arr[j] > key) {
                arr[j + 1] = arr[j];
                swaps++;
                j--;
            } else {
                break;
            }
        }
        arr[j + 1] = key;
    }
}

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    i = 0;
    j = 0;
    k = left;
    
    while (i < n1 && j < n2) {
        comparisons++;
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesorthelper(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergesorthelper(arr, left, mid);
        mergesorthelper(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void mergesort(int arr[], int n) {
    mergesorthelper(arr, 0, n - 1);
}

void printarray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i, choice;
    
    printf("Enter number of elements (N): ");
    scanf("%d", &n);
    
    int arr[n], original[n];
    
    srand(time(0));
    
    printf("\nGenerating %d random numbers...\n", n);
    for (i = 0; i < n; i++) {
        arr[i] = (rand() % 1000) + 1;
        original[i] = arr[i];
    }
    
    printf("\nNumbers before sorting:\n");
    printarray(arr, n);
    
    printf("\nChoose sorting algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    comparisons = 0;
    swaps = 0;
    
    if (choice == 1) {
        printf("\nUsing Bubble Sort...\n");
        bubblesort(arr, n);
    }
    else if (choice == 2) {
        printf("\nUsing Selection Sort...\n");
        selectionsort(arr, n);
    }
    else if (choice == 3) {
        printf("\nUsing Insertion Sort...\n");
        insertionsort(arr, n);
    }
    else if (choice == 4) {
        printf("\nUsing Merge Sort...\n");
        mergesort(arr, n);
        printf("Note: Merge Sort doesn't use swaps\n");
    }
    else {
        printf("Invalid choice\n");
        return 0;
    }
    
    printf("\nNumbers after sorting:\n");
    printarray(arr, n);
    
    printf("\nTotal comparisons: %d\n", comparisons);
    if (choice != 4) {
        printf("Total swaps: %d\n", swaps);
    }
    
    return 0;
}
