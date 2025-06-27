// daa lab sessional
// perform mergesort such that the second part of the array has thrice the first part
//that means first part has one fourth and the second part has three

// mergesort

#include <stdio.h>

void merge(int arr[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;

  int leftArr[n1], rightArr[n2];

  for (int i = 0; i < n1; i++)
    leftArr[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    rightArr[j] = arr[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (leftArr[i] <= rightArr[j]) {
      arr[k] = leftArr[i];
      i++;
    } else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, n - 1);
  printf("Sorted array: \n");
  printArray(arr, n);
}