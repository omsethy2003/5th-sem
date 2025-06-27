// binary search

int binsearch(int arr[], int low , int high, int key){
    if(low == high){
        if(arr[low] == key) return low;
        else return -1;
    }

    int mid = (low+high)/2;

    if(arr[mid] == key) return mid;

    else if(key<arr[mid]) binsearch(arr,low, mid-1, key);

    else return binsearch(arr,mid+1,high,key);
}


#include<stdio.h>

int main() {
  int arr[] = {5, 6, 17, 23, 29, 50};
  int size = sizeof(arr) / sizeof(arr[0]);

  int found = binsearch(arr,0,size-1,17);

  if(found == -1) printf("element not found\n");
  else printf("element found at position %d",found+1);

}