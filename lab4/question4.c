#include <stdio.h>

int stepCount = 0;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        stepCount++;
        while (arr[j] > pivot) {
            j--;
            stepCount++;
        }
        while (i < j && arr[i] <= pivot) {
            i++;
            stepCount++;
        }
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[low] = arr[j];
    arr[j] = pivot;

    return j;
}
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quick_sort(arr, low, p - 1);
        quick_sort(arr, p + 1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Total steps: %d\n", stepCount);

    return 0;
}
