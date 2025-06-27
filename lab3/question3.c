// ternary search

#include<stdio.h>

int tersearch(int arr[],int low,int high,int key){
    if(low == high){
        if(arr[low] == key) return low;
        else return -1;
    }
        int third = (low+high)/3;
        int twothird = (low +(2*low+high))/3;

        if(third == twothird) return third;

        if (arr[third]==key) return third;
        else if(arr[twothird] == key) return twothird;

        else if(key<arr[third]) tersearch(arr,low,third-1,key);

        else if(key<arr[twothird] && key > arr[third]) tersearch(arr,third+1,twothird-1,key);

        else return tersearch(arr,twothird+1,high,key);

}

int main() {
  int arr[] = {5, 6, 17, 23, 29, 50, 78, 89, 98};
  int size = sizeof(arr) / sizeof(arr[0]);

  int found = tersearch(arr,0,size-1,98);

  if(found == -1) printf("element not found\n");
  else printf("element found at position %d",found);

}