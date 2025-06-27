// #include <stdio.h>

// #define MAX_SIZE 100 // Define a maximum size for the heap

// // Function to swap two elements
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // Function to maintain the heap property (max heap)
// void heapify(int arr[], int n, int i) {
//     int largest = i;        // Initialize largest as root
//     int left = 2 * i + 1;    // Left child
//     int right = 2 * i + 2;   // Right child

//     if (left < n && arr[left] > arr[largest])
//         largest = left;

//     if (right < n && arr[right] > arr[largest])
//         largest = right;

//     if (largest != i) {
//         swap(&arr[i], &arr[largest]);
//         heapify(arr, n, largest);
//     }
// }

// // Function to get the current size of the heap
// int heapsize(int n) {
//     return n;
// }

// // Function to insert a new element in the max heap
// void insert_in_heap(int arr[], int *n, int key) {
//     // Increase the size of the heap
//     (*n)++;
//     int i = *n - 1;
//     arr[i] = key;

//     // Fix the heap property if it's violated
//     while (i != 0 && arr[(i - 1) / 2] < arr[i]) {
//         swap(&arr[i], &arr[(i - 1) / 2]);
//         i = (i - 1) / 2;
//     }
// }

// // Function to extract the maximum element (root) from the max heap
// int extract_max_from_heap(int arr[], int *n) {
//     if (*n <= 0)
//         return -1; // Heap is empty

//     if (*n == 1) {
//         (*n)--;
//         return arr[0];
//     }

//     // Store the maximum value and remove it from the heap
//     int root = arr[0];
//     arr[0] = arr[*n - 1];
//     (*n)--;
//     heapify(arr, *n, 0);

//     return root;
// }

// // Function to perform heap sort
// void heapSort(int arr[], int n) {
//     // Build a max heap
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i);

//     // Extract elements from heap one by one
//     for (int i = n - 1; i >= 0; i--) {
//         swap(&arr[0], &arr[i]);

//         // Call max heapify on the reduced heap
//         heapify(arr, i, 0);
//     }
// }

// // Function to print an array
// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; ++i)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// int main() {
//     int arr[MAX_SIZE];
//     int n = 6;

//     // Initial array (elements of the heap)
//     int initial_arr[] = {12, 11, 13, 5, 6, 7};
//     for (int i = 0; i < n; i++) {
//         arr[i] = initial_arr[i];
//     }

//     // Build the max heap
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         heapify(arr, n, i);
//     }

//     printf("Max Heap:\n");
//     printArray(arr, n);

//     // Perform heap sort
//     heapSort(arr, n);
//     printf("Sorted array is \n");
//     printArray(arr, n);

//     // Rebuild the heap from sorted array
//     for (int i = 0; i < n; i++) {
//         arr[i] = initial_arr[i];
//     }
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         heapify(arr, n, i);
//     }

//     // Extract the maximum element
//     int max_elem = extract_max_from_heap(arr, &n);
//     printf("Extracted max element: %d\n", max_elem);
//     printf("Array after extraction: \n");
//     printArray(arr, n);

//     return 0;
// }
/// WRONG

