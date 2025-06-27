#include <stdio.h>

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

int heapsize(int arr[], int n) {
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

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    printf("Sorted array is \n");
    printArray(arr, n);

    int max = extract_max_from_heap(arr,&n);
    printf("\n%d\n",max);

    return 0;
}

create a max heap, perform heapsort, create a function heapsize, create a function to insert an element
in the max heap, create a function to extract max element from the heap, use 
all the fuunctions, and give the code in c