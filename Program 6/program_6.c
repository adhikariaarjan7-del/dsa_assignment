#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxheapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        maxheapify(arr, n, largest);
    }
}

void minheapify(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < n && arr[left] < arr[smallest]) {
        smallest = left;
    }
    
    if (right < n && arr[right] < arr[smallest]) {
        smallest = right;
    }
    
    if (smallest != i) {
        swap(&arr[i], &arr[smallest]);
        minheapify(arr, n, smallest);
    }
}

void buildmaxheap(int arr[], int n) {
    int i;
    for (i = n / 2 - 1; i >= 0; i--) {
        maxheapify(arr, n, i);
    }
}

void buildminheap(int arr[], int n) {
    int i;
    for (i = n / 2 - 1; i >= 0; i--) {
        minheapify(arr, n, i);
    }
}

void display(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n];
    
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }
    
    printf("\nOriginal array: ");
    display(arr1, n);
    
    buildmaxheap(arr1, n);
    printf("\nMax Heap: ");
    display(arr1, n);
    
    buildminheap(arr2, n);
    printf("Min Heap: ");
    display(arr2, n);
    
    return 0;
}
