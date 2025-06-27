// insertion sort random data

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
            step++;
        }
        arr[j+1] = key;
    }
    printf("\n\nthe number of steps taken are : %d .\n",step);
}
int main()
{

    int arr[100];

    for(int i = 0;i < 100; i++){
        arr[i] = (rand()%100);
    }

    printf("unsorted array is : \n");
    for(int i = 0;i < 100; i++){
        printf("%d, ",arr[i]);
    }

    insertion_sort(arr,100);

    printf("\n,\n");
    printf("sorted array is : \n");
    for(int i = 0;i < 100; i++){
        printf("%d, ",arr[i]);
    }
    return 0;
}   