//insertion sort ascending(steps should be zero as data
// is already in ascending)

#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int arr[],int n){

    int step = 0;

    for(int i=0;i<n;i++){
        int key = arr[i];
        int j = i-1;

        

        while(key<arr[j]&&j>=0){
            arr[j+1] = arr[j];
            --j;
            // step++;
        }
        arr[j+1] = key;
        step++;
    }
    printf("the number of steps taken are : %d .",step);
}
int main()
{

    int arr[5000];

    for(int i = 0;i < 5000; i++){
        arr[i] = i+1;
    }

    insertion_sort(arr,5000);

    // printf("sorted array is : \n");
    // for(int i = 0;i < n; i++){
    //     printf("%d\n",arr[i]);
    // }
    return 0;
}   