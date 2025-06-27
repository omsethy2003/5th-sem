#include <stdio.h>

#define MAX_SIZE 100 

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int n, int i) {
    int largest = i;        
    int left = 2 * i + 1;    
    int right = 2 * i + 2;   

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

int heapsize(int n) {
    return n;
}

void insert_in_heap(int arr[], int *n, int key) {
    (*n)++;
    int i = *n - 1;
    arr[i] = key;

    while (i != 0 && arr[(i - 1) / 2] < arr[i]) {
        swap(&arr[i], &arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

int extract_max_from_heap(int arr[], int *n) {
    if (*n <= 0)
        return -1;

    if (*n == 1) {
        (*n)--;
        return arr[0];
    }
    int root = arr[0];
    arr[0] = arr[*n - 1];
    (*n)--;
    heapify(arr, *n, 0);

    return root;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int n = 6;
    int initial_arr[] = {12, 11, 13, 5, 6, 7};
    for (int i = 0; i < n; i++) {
        arr[i] = initial_arr[i];
    }
    // Build the max heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    printf("Max Heap:\n");
    printArray(arr, n);

    for (int i = 0; i < n; i++) {
        arr[i] = initial_arr[i];
    }
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    int new_elem = 15;
    insert_in_heap(arr, &n, new_elem);
    printf("Max heap after insertion of %d: \n", new_elem);
    printArray(arr, n);

    return 0;
}
